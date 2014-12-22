/*
Sean Stasny
CSC 223
Program Name: endian.c
Program Description: Determines if the machine is little endian or big endian.
*/

#include <stdio.h>

typedef enum{false, true} bool;

bool is_little_endian()
{
	// put your code here

	int bigendian() 
	{
	    int i = 1;
	    char *low = (char*) &i;
	
	    return *low ? 0 : 1;
	}

	unsigned int merge_bytes( unsigned int x, unsigned int y )
	{
		// put your code here
	}
	
	unsigned int replace_byte(unsigned int x, int i, unsigned char b);
	{
		// put your code here
	}
	
	int main()
	{
		if( is_little_endian() ) 
		{
			printf(“Your machine is Little Endian machine\n”);
		}
		else 
		{
			printf(“Your machine is Big Endian machine\n”);
		}
		
		int x = 0x89ABCDEF;
		int y = 0x76543210;
		printf(“Merged number = 0x%x\n”, merge_bytes(x, y));
		unsigned char z = 0x22;
		printf(“Replaced number = 0x%x\n”, replace_byte(x, 3, z));
		
		return 0;
	}
