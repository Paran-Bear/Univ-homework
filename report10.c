/*순천향 대학교
20144633 정준용*/

/*
* 다음을 프로그래밍 하시오. 단, 반드시 함수를 main()를 제외하고 2개 이상 정
의하여 그 함수들을 호출하여 결과를 낼 것. 배열에 접근할 때 반드시 포인터
방식을 활용할 것.
1) 키보드를 통해 영문자와 숫자 등을 섞어서 적어도 10개 문자 이상으로 구
성되는 임의의 문자열을 입력 받아 문자열 배열에 기록함.
2) 키보드를 통해 임의의 문자 한 글자(영문자 혹은 숫자)을 입력 받음.
3) 1)에서 입력된 문자열 내에서 2)에서 입력된 문자가 몇 개 있는지 개수를
셈. 화면에 입력된 전체 문자열과 문자 개수, 탐색된 한 문자, 그리고 문자
열 내의 탐색 문자가 몇 개 있는지를 적절하게 표출할 것.
(출력의 예) 입력된 문자열: avf3 9eos7r seu328
 문자열 문자 개수: 19
 탐색 문자: e
 탐색 문자 개수: 2

*/


#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
int count_s(char* s);
int serch_s(char w, char* s);



void main()
{
	for (int i = 0; i < 5; i++) {
		char s[100];//크기가 100인 문자열 선언
		char w;//문자를 저장할 변수. 크기는 1
		printf("입력 : ");
		gets_s(s, 99);//gets_s함수를 사용하여 빈칸을 포함 99개 까지 입력받음.
		//반드시 뒤에 NULL문자가 있어야함으로 문자열 크기보다 1작게받을것.
		printf("\n검색할 문자 : ");
		scanf("%c", &w);//검색할 문자를 입력받아 저장.
		printf("입력된 문자열 : %s\n문자열 문자 개수:%d\n탐색문자 : %c\n탐색 문자 개수 : %d", s, count_s(s), w, serch_s(w, s));
	}
}
int count_s(char* s)//문자열의 시작 주소를 인수로 받는다.
{
	int i = 0;
	int cnt = 0;
	
	while (*(s+i++) != NULL)//첫 주소지를 시작으로 순차적으로 탐색, 마지막 NULL문자가 오면 루프 끝
	{
		cnt++;		
		//sizeof를 쓰면 안됨.
		
	}
	return cnt;
}
int serch_s(char w, char* s)
{//찾을 문자와, 문자열의 주소를 인수로 받음.
	int i = 0;
	int cnt = 0;
	while (*(s + i) != NULL)
	{
		if (*(s + i++) == w)//문자열의 특정 문자와, 인수로받은 문자가 일치하면 증가
			cnt++;
		
	}
	return cnt;
}
