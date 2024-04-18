//this is a program to show endianness of the computer
#include <stdio.h>
union myUnion
{
	int x;
	float f;
	char a[4];

};

int main(void)
{
	union myUnion m;
	m.x = 0x0A0B0C0D;
	
	if (m.a[0] == 0x0A)
		printf("big endian\n");
	if (m.a[0] == 0x0D)
		printf("little endian \n");

	m.f = 0.15625;
	for (int i = 0; i < 4; i++)
		printf("%02x", m.a[i]);
	printf("\n");
	return 0;
}