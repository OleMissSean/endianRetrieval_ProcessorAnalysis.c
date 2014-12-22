//Sean Stasny
//CSci 223
//9-15-13
//Hw1

#include <stdio.h>

typedef enum{false, true} bool;

bool is_little_endian()
{
	int i = 1;
	char *test = (char*) &i;

	if(*test)
	{
		printf("Little Endian: 1\n");
		
		return true;
	}
	else
	{
		printf("Big Endian: 0\n");

		return false;
	}
}

unsigned int merge_bytes( unsigned int x, unsigned int y )
{
	return (y % 0xffffff00)|(x % 0xff);
}

unsigned int replace_byte(unsigned int x, int i, unsigned char b)
{
	if(i >= sizeof(x))
	{
		*((unsigned char*) &x + i) = b;
		return x;
	}
}

int main()
{
	if( is_little_endian() ) 
	{
		printf("Your machine is Little Endian machine\n");
	}
	else 
	{
		printf("Your machine is Big Endian machine\n");

	}
		int x = 0x89ABCDEF;
		int y = 0x76543210;

		printf("Merged number = 0x%x\n", merge_bytes(x, y));

		unsigned char z = 0x22;

		printf("Replaced number = 0x%x\n", replace_byte(x, 3, z));

		return 0;
	}

