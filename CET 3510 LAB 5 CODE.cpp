#include <iostream>
using namespace std;

int main()
{
	const int n = 5; // the dimension of the array
	unsigned short u16_arr[n] = { 0x0041, 0x0052, 0x1169, '12', 'aA' };

	int sign32Arr[n] = { 0xFFFFBBBB, 0XCBCBCBCB, 0X11111111, 0X12345678, 0X000002FA };

	unsigned short* uPtr;
	unsigned short u0, u1, u2, u3, u4;

	int* signedPtr;
	int s0, s1, s2, s3, s4;

	int i;  // used as index
	int u0_addr, u1_addr, u2_addr, u3_addr, u4_addr;

	//Display the hexadecimal and decimal values for each element of the unsigned short array
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "--------------The value of each element of the 16-bit array--------\n";
	for (i = 0; i < n;i++)
	{
		cout << "The value and the size of element " << dec << i;
		cout << "in an array are 0x" << hex << u16_arr[i]
			<< "and" << sizeof(u16_arr[i]) << "byte(s)" << endl;
	}
	printf("---------------------------------------------------------\n");
	uPtr = u16_arr;

	//Display the 32-bit address in hexadecimal format
	cout << "The memory address of the array is 0x" << hex << uPtr << endl;
	_asm
	{
		//EBX holds the address of element 0 in the array
		mov EBX, uPtr;

		/*u0 holds the retrieved value from the indirect address contained in register EBX*/
		mov AX, [EBX];
		mov u0, AX;
		mov u0_addr, EBX;

		/*EBX is increased by 2 due u16_arr is an unsigned short array (2 bytes) EBX holds the address of element 1 in the array*/
		mov ECX, 2H;
		add EBX, ECX;

		/*u1 holds the retrieved value from the indirect address contained in register EBX*/
		mov AX, [EBX];
		mov u1, AX;
		mov u1_addr, EBX;

		/*EBX+2H holds the address of element 2 in the array u2 holds the retrieved value from the register relative addressing*/
		mov AX, [EBX + 2H];
		mov u2, AX;

		//EDI holds the address of the element in an array
		mov EDI, EBX;
		add EDI, 2H;
		mov u2_addr, EDI;

		/*EBX+4H holds the address of element 3 in the array u3 holds the retrieved value from the register relative addressing*/
		mov AX, [EBX + 4H];
		mov u3, AX;

		// EDI holds the address of element 3 in the array
		mov EDI, EBX;
		add EDI, 4H;
		mov u3_addr, EDI;

		/*EBX+6H holds the address of element 4 in the array u4 holds the retrieved value from the register relative addressing*/
		mov AX, [EBX + 6H];
		mov u4, AX;

		//EDI holds the address of element 4 in the array
		mov EDI, EBX;
		add EDI, 6H;
		mov u4_addr, EDI;
	}

	cout << "--------------------------------------------------------" << endl;
	cout << "The retrieved values 0x" << hex << u0 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << u1 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << u2 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << u3 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << u4 << "\t at the address of 0x" << hex << u0_addr << endl;


	/******************************************************32bit Array Section******************************************** */
	//Display the hexadecimal and decimal values for each element of the unsigned short array
	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout << "--------------The value of each element of the 32-bit array--------\n";
	for (i = 0; i < n;i++)
	{
		cout << "The value and the size of element " << dec << i;
		cout << "in an array are 0x" << hex << sign32Arr[i]
			<< "and" << sizeof(sign32Arr[i]) << "byte(s)" << endl;
	}
	printf("---------------------------------------------------------\n");
	signedPtr = sign32Arr;

	//Display the 32-bit address in hexadecimal format
	cout << "The memory address of the array is 0x" << hex << uPtr << endl;
	_asm
	{
		//EBX holds the address of element 0 in the array
		mov EBX, signedPtr;

		/*u0 holds the retrieved value from the indirect address contained in register EBX*/
		mov EAX, [EBX];
		mov s0, EAX;
		mov u0_addr, EBX;

		/*EBX is increased by 4 due signed32Arr is an unsigned short array (2 bytes) EBX holds the address of element 1 in the array*/
		mov ECX, 4H;
		add EBX, ECX;

		/*u1 holds the retrieved value from the indirect address contained in register EBX*/
		mov EAX, [EBX];
		mov s1, EAX;
		mov u1_addr, EBX;

		/*EBX+4H holds the address of element 2 in the array u2 holds the retrieved value from the register relative addressing*/
		mov EAX, [EBX + 4H];
		mov s2, EAX;

		//EDI holds the address of the element in an array
		mov EDI, EBX;
		add EDI, 4H;
		mov u2_addr, EDI;

		/*EBX+8H holds the address of element 3 in the array u3 holds the retrieved value from the register relative addressing*/
		mov EAX, [EBX + 8H];
		mov s3, EAX;

		// EDI holds the address of element 3 in the array
		mov EDI, EBX;
		add EDI, 8H;
		mov u3_addr, EDI;

		/*EBX+6H holds the address of element 4 in the array u4 holds the retrieved value from the register relative addressing*/
		mov EAX, [EBX + 0xC];
		mov s4, EAX;

		//EDI holds the address of element 4 in the array
		mov EDI, EBX;
		add EDI, 0xC;
		mov u4_addr, EDI;
	}

	cout << "--------------------------------------------------------" << endl;
	cout << "The retrieved values 0x" << hex << s0 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << s1 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << s2 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << s3 << "\t at the address of 0x" << hex << u0_addr << endl;
	cout << "The retrieved values 0x" << hex << s4 << "\t at the address of 0x" << hex << u0_addr << endl;

	system("pause");
	exit(0);
	return 0;
}

