#include "trap.h"

char buf[128];

int main() {
	printf("123456789 == %d\n", 123456789);
	printf("-123456789 == %d\n", -123456789);
	printf("00000123 == %08d\n", 123);
	printf("0 == %d\n", 0);
	printf("%d\n", 0x7fffffff);
	printf("%d\n", 0xffffffff);
	printf("%d\n", (int)(0x80000000));
	printf("123456789012345678 == %ld\n", 123456789012345678);
	printf("-123456789012345678 == %ld\n", -123456789012345678);
	printf("%ld\n", 0x7fffffffffffffffL);
	printf("%ld\n", 0xffffffffffffffffL);
	printf("%ld\n", 0x8000000000000000L);
	printf("0x7fffffff == %x\n", 0x7fffffff);
	printf("0xffffffff == %x\n", 0xffffffff);
	printf("0x80000000 == %x\n", 0x80000000);
	printf("0x0 == %x\n", 0x0);
	printf("0x123456 == %x\n", 0x123456);
	printf("0012 == %04x\n", 0x12);
	return 0;
}