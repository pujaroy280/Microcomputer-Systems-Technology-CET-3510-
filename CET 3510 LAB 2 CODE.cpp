#include <stdio.h>
#include <iostream>

using namespace std;

char main(void) {

	char temp;
	char r1, r2;
	short int r;

	_asm {
		mov bl, 'a';
		mov bh, 'A';
		mov r1, bl;
		mov r2, bh;
		mov r, bx;
	}

	cout << "Before swapping " << endl;
	printf("BH = %c, BL = %c\n", r2, r1);
	printf("BH = 0x%x, BL = 0x%x, BX = 0x%x\n", r2, r1, r);

	_asm {
		mov temp, bh;
		mov bh, bl;
		mov bl, temp;
		mov r1, bl;
		mov r2, bh;
		mov r, bx;
	}

	cout << "After swapping " << endl;
	printf("BH = %c, BL = %c \n", r2, r1);
	printf("BH = 0x%x, BL = 0x%x, BX = 0x%x \n", r2, r1, r);

	system("pause");
	return 0;
}
