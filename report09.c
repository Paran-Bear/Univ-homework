/*순천향 대학교
20144633 정준용*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
/*
1) main()을 제외하고 두 가지 이상의 함수를 정의하여 활용할 것.
적어도 한개의 함수는 그 입력 매개변수로 학생들의 영어 성적 혹은 학점 등의 정보를담은 배열을 입력값으로 받는 것으로 정의할 것.
이때 매개변수를 포인터 변수(표현)로 정의할 것. 
2) 반드시 포인터 표현을 써서 해결할 것.배열의 원소값에 접근할 때도 포인터 표현으로 접근할 것.
*/
/*
1) 100명의 학생에 대한 영어 점수를, rand() 함수를 써서 0~100점 사이의 점수로 랜덤하게 입력받음. 
2) 학생의 상대평가 학점을 1)에서 입력받은 성적에 따라 다음과 같이 부여함. 
1~20등은 A학점, 21~35등은 B학점, 36~60등은 C학점, 61~90등은 D학점, 마지막으로 91~100등은 F학점. 
3) 화면에 학생들의 성적처리 결과를 석차를 기준으로 내림차순(성적이 높은학생부터 낮아지는 순)으로 출력하되 다음과 같은 형식(format)으로 출력할것.
출력 형식에 지정된 값들이 표출되는 순서를 반드시 확인하고 지킬 것. 8주차 문제의 출력 형식에서 순서와 다름.
[석차, 영어 점수, 학점]
단, 한 줄에 여러 개의 결과를 화면에 표출해서 너무 리스트가 길어지지 않도록 할 것.
* 반드시 포인터 표현방식을 이용하여 프로그램할 것.
적어도 3 가지 경우(첫100명의 학생을 A 반이라고 하면, 적어도 다른 B, C 반에 대해서도 프로그램을 실행)에 대해 결과를 내고 각 결과를 모두 보고서에 담을 것.
*/

void ranking(int *pt,int *ptr);
void sort(int arr[]);
void grading(int* pt, char* ptg);
void main()
{
	srand((unsigned int)time(NULL));
	for (int k = 0; k < 3; k++) { //전체 프로그램을 3번 반복
		int score[100];
		char grade[100];
		int rank[100];
		//점수, 학점, 석차가 등록될 변수들
		
		int* pt = score;
		char* ptg = grade;
		int* ptr = rank;
		//점수, 학점, 석차가 등록된 배열의 포인터 변수.
		//printf("%d", pt);
		for (int i = 0; i < sizeof(score) / sizeof(int); i++)
		{//score의 크기(400)을 다시 int의 크기 4만큼 나누면, score 배열의 크기
			*(pt + i) = (int)rand() % 100;
			//포인터 연산을 사용 int(4byte)단위로 + 연산함.
		

		}
		sort(score);
		ranking(pt, ptr);
		grading(ptr, ptg);
		//정렬, 석차, 학점 부여 함수 호출
		int cnt = 1;//단순히 콘솔 출력에 가시성을 위한 변수 선언
		for (int i = 0; i < sizeof(score) / sizeof(int); i++)
		{

			printf("[석차 %.2d등, 점수 %.2d점, 학점 %c]   ", *(ptr + i), *(pt + i), *(ptg + i));
			//인수를 포인터 형으로 표현, %.2d는 자릿수를 2로 맞춤(가시성 향상)
			if (cnt++ % 3 == 0)//한 줄당 3개의 정보를 출력.
				printf("\n");

		}
		printf("\n\n================================\n\n");
	}
	


	
}
void sort(int arr[])//정렬 함수 인수는 배열로 선언
{
	
	int temp = 0;//자리 바꿈을 위한 정수형 변수
	for (int i = 0; i < 100; i++) //sizeof(arr)은 4의 값이 나옴.
	{
		for (int j = 0; j < 100; j++)
		{
			
			if (*(arr + i) > * (arr + j))
			{//차례대로 비교하여, 큰수를 가장 앞으로 배치
				temp = *(arr + i);
				*(arr + i) = *(arr + j);
				*(arr + j) = temp;
			}
		}
	
	}
}
void ranking(int* pt, int* ptr) {

	int temp = 2;//동점수, 동학점 부여를 위한 변수.
	for (int i = 0; i < 100; i++)
	{
		if (*(pt + i - 1) == *(pt + i)) {
			//뒤의 수를 기준으로 앞과 비교함.
			{
				*(ptr + i) = (i - temp++) + 1;
				//같은 점수이면, 같은 등수를 부여
			}
		}
		else {

			*(ptr + i) = i + 1;
			//i=0부터 시작 등수는1부터 시작이므로 i+1을함.
			temp = 1;
		}
	}
}
void grading(int* pt, char* ptg)
{//정수형 배열과 문자형 배열을 인수로 받음.
	for (int i = 0; i < 100; i++) {
		if (*(pt+i) < 21) *(ptg+i) = 'A';//~20등까지 A
		if (*(pt + i) > 20 && *(pt + i) < 36) *(ptg+i) = 'B';//21~35까지 B
		if (*(pt + i) > 35 && *(pt + i) < 61) *(ptg+i) = 'C';//36~60까지 C
		if (*(pt + i) > 60 && *(pt + i) < 91) *(ptg+i) = 'D';//61~90까지 D
		if (*(pt + i) > 90) *(ptg+i) = 'F';//91~ F
	}
}
