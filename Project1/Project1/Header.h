#ifndef __HEADER_H_
#define __HEADER_H_



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

/*

*/
// 파라미터에 따라 구구단 값을 출력해주빈다.
void Print9(int number){
	for (int i = 1; i <= 9; i++) {
		printf("\n %d*%d=%d", number, i, number * i);
	}
}


bool IsErrorNumber(int number) {
	if (number < 0 || number > 9) return true;

	return false;
}

/*
int Sum(int a, int b) {
	return a + b;
}

int Sub(int a, int b) {
	return a - b;
}

*/
#endif




