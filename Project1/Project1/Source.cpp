#include"Header.h"
int Sum(int a, int b);
int Sub(int a, int b);

void main() {


	printf("안녕하세요 두수를 입력하면 두수의 사칙연산을 구해줍니다.\n");


	int inputNumber1, inputNumber2;

	printf("첫번째 수를 입력해주세요.\n");
	
	
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &inputNumber1);
	

	printf("두번째 수를 입력해주세요.\n");

	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &inputNumber2);
	

	int sum, sub, mul, div;

	sum = Sum(inputNumber1 , inputNumber2);
	sub = Sub(inputNumber1 , inputNumber2);
	mul = inputNumber1 * inputNumber2;
	div = inputNumber1 / inputNumber2;


	printf("덧셈 결과= %d", sum);
	printf("뺄셈 결과= %d", sub);
	printf("곱셈 결과= %d", mul);
	printf("나눗셈 결과= %d", div);

	fgetc(stdin);
}






/*
void main() {


	int i = 1;
	int input = 1;

	printf("1~9의 수를 입력하면 구구단이 출력됩니다.\n");
	printf("0을 입력하면 프로그램이 종료됩니다.\n");
	scanf_s("%d", &input);
	while (1) {


		if (input == 0) {
			printf("종료");
			break;
		}
		while (i < 10) {
			printf("%d*%d=%d\n", input, i, input * i);
			input += 1;
		}
		if (i > 10) {
			printf("Erorr");
		}
		else (input > 10); {
			printf("Erorr");
		}


	}i++;

	fgetc(stdin);
}



void main(){

	int a = 0;



	fgetc(stdin);
}

int nomalFunction() {
	return 0;

}

void function(int, number) {

}

/*
함수
타입 함수 이름 (){}

변수
타입 함수 이름;


인트나 플로트는 리턴을 꼭 해줘야함!!


int number(){

return 0;
}

void funcVoid(){
	// 매개변수가 없는형태

}

int function(int args, int arg2){
	// 인트매개변수 2개 를 받는 형태
	return 0;
}

float functionFloat(float floatingType){
	// float 형태로 매개변수를 받는타입
	return 0.0;
}

int* pointerFunction(int* pointer){
	// 인트 포인터 형태 매개변수
	// 리턴타입로 정수 포인트 로 반환
}

char* charPointerFunction(char[] arrayType){
	// 배열 자체를 받을수도 있음.
	// 리턴은 케릭터 포인터 형태로 리턴함

	return arrayType;
}



*/