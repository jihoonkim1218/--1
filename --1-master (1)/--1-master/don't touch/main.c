#include <stdio.h>
#include <windows.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h> 
#include <string.h>
#define sl 600
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
	printf("|  그 림 판      계 산 기    c 언 어        |\n");
	printf("|   [ 1 ]         [ 2 ]       [ 3 ]         |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    기능:     |\n");
	printf("---------------------------------------------\n");
	sc();
	char a=getche();
	if (a==1) draw();
	if (a=='2') {
		Sleep(500);
		load();
		cul();
	}
	if (a=='3') ccc();
	
}

void sc() {
	COORD pos = {40,10};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

void gotoXY(int *x, int *y) {
	COORD pos = {*x,*y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
void draw(){
	
}

void cul(){
	system("cls");
	printf("---------------------------------------------\n");
	printf("|              [    계산기    ]             |\n");
	printf("|   1. [정수형]                             |\n");
	printf("|   2. [실수형]                             |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|-------------------------------------------|\n");
	printf("|                            |    기능:     |\n");
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
	int a=1; 
	printf("---------------------------------------------\n");
	printf("|        [1.요약] [2.역사] [3. 설명]        |\n");
	printf("|                                           |\n");
	printf("| 케임브리지 대학교에서 시작된 CPL이라는    |\n");
	printf("| 언어에서 BCPL(Basic CPL)이 탄생하였고,    |\n");
	printf("| BCPL이 미국으로 물건너와 켄 톰슨이        |\n");
	printf("|'B' 라는 언어를 만든 뒤에, 같은 벨 연구소의|\n");
	printf("|  데니스 리치가 최종적으로 'C'라는 이름으로|\n");
	printf("| 언어를 만들었다.  					    |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("---------------------------------------------\n");	
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
	printf("로딩중");
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
	printf("로딩중");
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
	printf("|           [    정수형 계산기    ]         |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|         식을 적어주세요(도움말:0b0)       |\n");
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
	printf("|           [    실수형 계산기    ]         |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|         식을 적어주세요(도움말:0b0)       |\n");
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
	printf("|           [    계산기 도움말    ]         |\n");
	printf("|   1. 식은 숫자 2개만, 문자는 1개          |\n");
	printf("|                                           |\n");
	printf("|   2. X^Y는 X의 Y제곱                      |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|                                           |\n");
	printf("|        *돌아가려면 엔터키 한번*           |\n");
	printf("---------------------------------------------\n");	
	char b=getch();
	if (a==1) cur1();
	if (a==2) cur2();
}
