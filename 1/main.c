#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#define sl 600
#define x_end 78
#define y_end 21
void sc();
void gotoXY();
/*
	printf("---------------------------------------------\n");
	printf("|                [    title    ]               |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");
*/
int main() {
	system("mode con cols=46 lines=13");
	start();
	return 0;
}

void start() {
	system("Cls");
	printf("---------------------------------------------\n");
	printf("|                [    PC    ]               |\n");
	printf("|                                           |\n");
	printf("|  �� �� ��      �� �� ��    c �� ��        |\n");
	printf("|   [ 1 ]         [ 2 ]       [ 3 ]         |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    ���:     |\n");
	printf("---------------------------------------------\n");
	sc();
	char a=getche();
	if (a=='1') {
		Sleep(500);
		load();
		file11();
	} 
	if (a=='2') {
		Sleep(500);
		load();
		cul();
	}
	if (a=='3') {
		Sleep(500);
		load();
		ccc();
}
}

void sc() {
	COORD pos = {41,10};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void file11() {
	system("cls");
	printf("---------------------------------------------\n");
	printf("|                [    title    ]            |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");
	FILE *file=fopen("Memo-pc.txt","w");
	COORD pos = {2,5};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	char str[100000]={'0',};
	gets(str);
	fprintf(file,"%s", str);
	fclose(file);
	start();
}

void cul(){
	system("cls");
	printf("---------------------------------------------\n");
	printf("|              [    ����    ]             |\n");
	printf("|   1. [������]                             |\n");
	printf("|   2. [�Ǽ���]                             |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    ���:     |\n");
	printf("---------------------------------------------\n");
	sc();
	char a=getche();
	if (a=='1') {
		Sleep(500);
		load();
		cur1();
	}
	if (a=='2') {
		Sleep(500);
		load();
		cur2();
	}
}

void ccc() {
	system("cls");
	char a='1';
	while (1) {


	load();
	if (a=='1'){

	printf("---------------------------------------------\n");
	printf("| [1.���] [2. ����] [3. explain] [4. ����] | \n");
	printf("|                                           |\n");
	printf("| ���Ӻ긮�� ���б����� ���۵� CPL�̶��    |\n");
	printf("| ���� BCPL(Basic CPL)�� ź���Ͽ���,    |\n");
	printf("| BCPL�� �̱����� ���ǳʿ� �� �轼��        |\n");
	printf("|'B' ��� �� ���� �ڿ�, ���� �� ��������|\n");
	printf("|  ���Ͻ� ��ġ�� ���������� 'C'��� �̸�����|\n");
	printf("| �� �������.  					    |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    ���:     |\n");
	printf("---------------------------------------------\n");

}
	if (a=='2') {

	printf("---------------------------------------------\n");
	printf("| [1.���] [2. ����] [3. explain] [4. ����] | \n");
	printf("|                                           |\n");
	printf("| *���α׷��Ӹ� �Ͼ��                      |\n");
	printf("| *���α׷��Ӱ� �ϴ� �� ���� ����           |\n");
	printf("| *�ؾ� �� ��                               |\n");
	printf("| �� �۰� �ܼ��ϰ� �����ض�             |\n");
	printf("| *�� ���� ������� �۾��� �����϶�         |\n");
	printf("|                                           |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    ���:     |\n");
	printf("---------------------------------------------\n");

	}
	if (a=='3') {

	printf("---------------------------------------------\n");
	printf("| [1.���] [2. ����] [3. explain] [4. ����] | \n");
	printf("|                                           |\n");
	printf("| *Trust the programmer                     |\n");
	printf("| *Don't prevent the programmer from doing  |\n");
	printf("| *what needs to be done                    |\n");
	printf("| *Keep the language small and simple       |\n");
	printf("| *Provide only one way to do an operation  |\n");
	printf("|                                           |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    ���:     |\n");
	printf("---------------------------------------------\n");

	}
	if (a=='4') {
		break;
	}
	sc();
	a=getche();
	Sleep(500);
}
start();
}

void load() {
	system("cls");
	printf("---------------------------------------------\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");
	COORD pos = {20,5};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("�ε���");
	Sleep(sl);
	printf(".");
	Sleep(sl);
	printf(".");
	Sleep(sl);
	printf(".");
	Sleep(sl);
	system("cls");
	printf("---------------------------------------------\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");
	COORD pos1 = {20,5};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos1);
	printf("�ε���");
	Sleep(sl);
	printf(".");
	Sleep(sl);
	printf(".");
	Sleep(sl);
	printf(".");
	Sleep(sl);
}

void cur1() {
	printf("---------------------------------------------\n");
	printf("|           [    ������ ����    ]         |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|         ���� �����ּ���(����:0b0)       |\n");
	printf("|                     |                     |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");
	COORD pos = {10,6};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	long long a,c;
	char b;
	scanf("%d%c%d", &a, &b, &c);
	if (a==0&&b=='b'&&c==0) f1(1);
	if (b=='^') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%lld",(long long)pow((double)a,(double)c));
		char asdf=getch();
		start();
	}
	if (b=='+') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%lld",a+c);
		char asdf=getch();
		start();
	}
	if (b=='-') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%lld",a-c);
		char asdf=getch();
		start();
	}
	if (b=='*') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%lld",a*c);
		char asdf=getch();
		start();
	}
	if (b=='/') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%lld",a/c);
		char asdf=getch();
		start();
	}
}

void cur2() {
	printf("---------------------------------------------\n");
	printf("|           [    �Ǽ��� ����    ]         |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|         ���� �����ּ���(����:0b0)       |\n");
	printf("|                     |                     |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");
	COORD pos = {10,6};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	double a,c;
	char b;
	scanf("%lf%c%lf", &a, &b, &c);
	if (a==0&&b=='b'&&c==0) f1(1);
	if (b=='^') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%.10g1",pow((double)a,(double)c));
		char asdf=getch();
		start();
	}
	if (b=='+') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%.10g",a+c);
		char asdf=getch();
		start();
	}
	if (b=='-') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%.10g",a-c);
		char asdf=getch();
		start();
	}
	if (b=='*') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%.10g",a*c);
		char asdf=getch();
		start();
	}
	if (b=='/') {
		COORD pos = {22,7};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
		printf("%.10g",a/c);
		char asdf=getch();
		start();
	}
}

void f1(int a) {
	printf("---------------------------------------------\n");
	printf("|           [    ���� ����    ]         |\n");
	printf("|   1. ���� ���� 2����, ���ڴ� 1��          |\n");
	printf("|                                           |\n");
	printf("|   2. X^Y�� X�� Y����                      |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|        *���ư����� ����Ű �ѹ�*           |\n");
	printf("---------------------------------------------\n");
	char b=getch();
	if (a==1) cur1();
	if (a==2) cur2();
}


