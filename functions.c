#include <stdio.h>
#include <string.h>

int length(char *s)
{
    //initialize the length variable
    int length = 0;

    //loop until you reach the NULL-terminating byte
    while(*s++)         //increment the pointer
        length += 1;    //increment the length

    //return the length
    return length;
}


int main()
{	
	//strcopy(char *dest, const char *src)
	//The C library function char *strcpy(char *dest, const char *src) copies the string pointed to, by src to dest.

	//given enough room for the dest string and the terminating zero
	char *s0 = "hello";
	char s1[6];
	
	printf("s0: %s\n", s0);
	strcpy(s1, s0);
	printf("s1: %s\n", s1);

	printf("length of s0: %d\n", length(s0));
	printf("length of s1: %d\n", length(s1));

	//given enough room for the characters but not the zero
	char *s2 = "howdy";
	char s3[5];

	printf("s2: %s\n", s2);
	strcpy(s3, s2);
	printf("s3: %s\n", s3);

	printf("length of s2: %d\n", length(s2));
	printf("length of s3: %d\n", length(s3));

	//given not enough room at all!
	char *s4 = "hiya";
	char s5[0];

	printf("s4: %s\n", s4);
	strcpy(s5, s4);
	printf("s5: %s\n", s5);

	printf("length of s4: %d\n", length(s4));
	printf("length of s5: %d\n", length(s5));

	//given too much room
	char *s6 = "ligma";
	char s7[10];

	printf("s6: %s\n", s6);
	strcpy(s7, s6);
	printf("s7: %s\n", s7);

	printf("length of s6: %d\n", length(s6));
	printf("length of s7: %d\n", length(s7));

	//The C library function char *strncpy(char *dest, const char *src, size_t n) copies up to n characters from the string pointed to, by src to dest.
	//In a case where the length of src is less than that of n, the remainder of dest will be padded with null bytes.	

	char *s8 = "ciao";
	char s9[5];

	printf("s8: %s\n", s8);
	strncpy(s9, s8, 4);
	printf("s9: %s\n", s9);

	printf("length of s8: %d\n", length(s8));
	printf("length of s9: %d\n", length(s9));
	
	return 0;
}
