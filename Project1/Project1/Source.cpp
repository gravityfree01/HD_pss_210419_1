#include"Header.h"
int Sum(int a, int b);
int Sub(int a, int b);

void main() {


	printf("�ȳ��ϼ��� �μ��� �Է��ϸ� �μ��� ��Ģ������ �����ݴϴ�.\n");


	int inputNumber1, inputNumber2;

	printf("ù��° ���� �Է����ּ���.\n");
	
	
	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &inputNumber1);
	

	printf("�ι�° ���� �Է����ּ���.\n");

	fseek(stdin, 0, SEEK_END);
	scanf_s("%d", &inputNumber2);
	

	int sum, sub, mul, div;

	sum = Sum(inputNumber1 , inputNumber2);
	sub = Sub(inputNumber1 , inputNumber2);
	mul = inputNumber1 * inputNumber2;
	div = inputNumber1 / inputNumber2;


	printf("���� ���= %d", sum);
	printf("���� ���= %d", sub);
	printf("���� ���= %d", mul);
	printf("������ ���= %d", div);

	fgetc(stdin);
}






/*
void main() {


	int i = 1;
	int input = 1;

	printf("1~9�� ���� �Է��ϸ� �������� ��µ˴ϴ�.\n");
	printf("0�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");
	scanf_s("%d", &input);
	while (1) {


		if (input == 0) {
			printf("����");
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
�Լ�
Ÿ�� �Լ� �̸� (){}

����
Ÿ�� �Լ� �̸�;


��Ʈ�� �÷�Ʈ�� ������ �� �������!!


int number(){

return 0;
}

void funcVoid(){
	// �Ű������� ��������

}

int function(int args, int arg2){
	// ��Ʈ�Ű����� 2�� �� �޴� ����
	return 0;
}

float functionFloat(float floatingType){
	// float ���·� �Ű������� �޴�Ÿ��
	return 0.0;
}

int* pointerFunction(int* pointer){
	// ��Ʈ ������ ���� �Ű�����
	// ����Ÿ�Է� ���� ����Ʈ �� ��ȯ
}

char* charPointerFunction(char[] arrayType){
	// �迭 ��ü�� �������� ����.
	// ������ �ɸ��� ������ ���·� ������

	return arrayType;
}



*/