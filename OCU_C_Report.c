/*순천향 대학교
20144633 정준용*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

void report6();
void report5();
/*-------------chap08 func--------------*/
void sorting();
void ranking();
void grading();
/*-------------chap08 func--------------*/

/*-------------chap07 func--------------*/
int pay(int h, int m,  int pay_per_hour);
int dc(int car, int total, int dc_per);
/*-------------chap07 func--------------*/

void min_ave(int arr, int *min, float *ave);//함수 원형 선언.

//함수 정의
int main(void)
{srand((unsigned int)time(NULL));
	int arr[100];//100개의 리스트 생성 초기화는 하지 않음.
	int min = 999;//최소값 변수를 생성하고 999로 초기화.
	float ave = 0;//평균은 실수형 변수에 저장위해 생성.
	int* pmin = &min;//최소값 변수의 주소를 저장할 포인터 생성 및 초기화.
	float *pave = &ave;//평균값 변수의 주소를 저장할 실수형 포인터 생성 및 초기화.
	
	for (int j = 0;j < 10;j++) {//과제 수행을 위한 3번 반복
		printf("=================%d번째 실행.=================\n", j + 1);
		for (int i = 0; i < 100; i++) {//100개의 난수를 저장
			arr[i] = (int)rand() % 100;
			//printf("%d\n", arr[i]);
			//랜덤함수를 int로 형변환 한 후, 100으로 나눈 나머지를 저장.
			//100으로 나눈 나머지를 범위로 지정하면 1~100으로 지정됨.
		}

		printf("Befor call func --> min : %d, ave : %.2f\n", min, ave);//함수 호출전 변수의 값들 출력
		min_ave(arr, pmin, pave);//리스트,포인터 변수들을 매개변수로 전달하여 함수 호출.
		printf("After call func --> min : %d, ave : %.2f\n", min, ave);
		min = 999;ave = 0;//최소값과 평균값을 초기화.
		printf("=============================================\n\n");
	}
}


void min_ave(int arr1[], int *min, float *ave)
{
	float aver=0;//평균값을 저장할 실수형 지역변수
	
	for (int i = 0;i < 100;i++)
	{   
		if (*min > arr1[i]) *min = arr1[i];//현재 min의 값이 arr[i]보다 크면 arr[i]를 min에 저장.
		aver += arr1[i];//리스트의 모든 값을 더하여 aver에 저장.
	}
	
	*ave = aver / 100;//평균값을 구하여 포인터를 통해 전달
}


void chap1() {
	/* main 삽입 부분
	
	int gram = 0; //정수 gram를 0으로 초기화.
	double kgram = 0.0; //실수 kgram을 0으로 초기화.

	printf("무게를 입력해 주세요 (단위 g) : ");
	//사용자에게 입력받기 위한 문구 출력. 줄바꿈 문자 \n을 사용하지 않음.
	scanf("%d", &gram);//입력받은 정수값을 gram의 주소로 전달.

	kgram = (double)gram / 1000; //실수 kgram에 정수 gram을 kg단위로 변환. (kg=g/1000)

	printf("%dg-->%.3lfkg", gram, kgram);//%d는 정수형 변수를, %lf는 실수형 변수를 출력.
	//%.3lf는 소수점 이하 3자리만 출력을 의미
	
	*/

	printf("HELLO My first C Program.\n\r");
	/*
	\n은 라인 피드로 간단하게 줄 바꿈기호 입니다.
	  \r은 캐리지 리턴입니다. 간단하게 커서를 앞으로 옮기는 역할을 합니다.
	  \n\r 을 쓰게되면 줄을 바꾸고, 커서를 맨앞으로 옮긴다는 뜻입니다.
	*/

	printf("Jeong Jun Yong goes for a C programmer.\n\r");
}
void report3(){

	float num = 0;
	int integer = 0;
	printf("input actual number : ");
	scanf("%f", &num);

	//integer = num;
	//printf("num = %f\ninteger = %f", num, integer);
	//정수형만 담을수 있은 변수에 실수형 데이터 타입을 강제로 대입하면, 데이터 타입이 달라 데이터가 손실.

	/*
	float num = 0; //실수형 변수 num선언 후 초기화.
	int integer = 0;//정수형 변수 integer선언 후 초기화.
	printf("input actual number : ");//콘솔창에 문구 출력
	scanf("%f", &num);//사용자에게 입력받은 실수를 num변수에 저장.
	integer = (int)num;//입력받은 실수 num을 integer에 대입. 
	printf("num = %f\ninteger = %d", num, integer);//결과를 콘솔에 출력.	
	return 0;
	*/

	
}
void report4() {
	/*
	double line = 0; //실수형 변수 line선언 후 초기화.
	printf("한 변의 길이 : ");
	scanf("%lf", &line);//사용자에게 실수형 데이터 입력 받음.
	//넓이 공식 [(3*루트3)/2]*변의 길이^2
	double A=0;//최종 결과 값을 저장할 실수형 변수를 선언.
	A = ( ( ( 3 * sqrt(3) ) / 2) * pow(line,2) );//math.h에 저장된 함수를 사용.
	//연산은 가장 안쪽의 괄호부터 수행하므로, 먼저 수행될 연산을 가장 안쪽 괄호에 넣음.
	printf("육각형의 넓이 : %lf", A);//실수형(double)변수를 출력함.-->결과.
	*/
}
void report5() {
	int code = 0, useddata = 0, tax = 0;
	//통신망 코드번호와 사용데이터를 저장할 변수를 선언과 초기화
	printf("통신망 코드 입력 : ");
	scanf("%d", &code);
	printf("사용량(MB) 입력 : ");
	scanf("%d", &useddata);
	int total = 0;//최종 사용 요금을 저장할 변수 선언과 초기화
	float data = useddata; //사용한 데이터를 gb로 변환하여 출력할 변수.
	int udata = 0;//사용한 데이터 요금만 출력하기 위해 선언한 변수.
	switch (code)//입력받은 코드에 대해 분기
	{
	case 1:
		if (useddata > 5001)
		{
			total += 1000 * 15;
			total += 4000 * 10;
			useddata -= 5000;//5gb미만의 사용 요금은 이미 정해져 있으므로 단순 계산하여도 OK
			total += useddata * 5;//5gb이상의 사용 요금에 대해서만 나머지 계산

		}
		else if (useddata > 1000 && useddata < 5001)
		{
			total += 1000 * 15;
			useddata -= 1000;
			total += useddata * 10;
		}
		else if (useddata < 1001)
		{
			total += useddata * 15;
		}
		else
			printf("에러 발생");
		tax = (total + (code * 5000))*0.1;//세금 계산.
		udata = total;//사용한 데이터 요금만 따로 출력.
		total += tax + (code * 5000);//전체 요금 계산.
		printf("LTE 요금 :: 기본 요금 : %d원, 사용료(%fGB) : %d원, 세금 : %d원, 요금 합계 : %d원\n", code * 5000, data / 1000, udata, tax, total);
		break;
	case 2:
		if (useddata > 10000)//10001~부터의 범위
		{
			total += 10000 * 20;
			useddata -= 10000;
			total += useddata * 10;
		}//LTE와 요금계산의 비율만 다르고 방식은 같음.
		else if (useddata < 10001)//~10000까지의 범위
		{
			total += useddata * 20;
		}
		else
			printf("에러 발생");
		tax = (total + (code * 5000))*0.1;
		udata = total;
		total += tax + (code * 5000);
		printf("5G 요금 :: 기본 요금 : %d원, 사용료(%fGB) : %d원, 세금 : %d원, 요금 합계 : %d원\n", code * 5000, data / 1000, udata, tax, total);

		break;
	default:
		printf("코드를 확인해 주세요.");//유효한 코드는 1, 2만 있으므로 그 외는 모두 디폴트로 처리
	}




	return 0;

}
void report6() {
	for (int count = 0; count < 10; count++)//10명의 학생을 반복한다.
	{

		int test = 0, report = 0, atten = 0, errcnt = 0, total = 0;
		//시험,과제,출석,에러횟수,총점을 저장할 변수를 선언과 초기화
		float percent = 0;//백분율을 계산하기 위한 변수를 선언과 초기화
		for (int err = 0; err < 3; err++) {//3회의 오입력을 허용
			printf("학생 %d의 시험 성적을 입력하세요", count + 1);
			scanf("%d", &test);
			if (test < 0 || test >100)//허용 범위가 아닐때 조건 실행
			{
				if (errcnt != 2) printf("시험 성적은 0~100사이 정수로 입력하세요!\n");
				errcnt++;//에러 카운트를 +1
			}
			else {//입력값이 허용 범위일때 
				errcnt = 0; break; //반복문을 탈출하고 에러카운트를 초기화.
			}
		}
		if (errcnt > 2)//에러 카운트가 3회를 초과하면 조건 실행
		{
			printf("입력된 값 오류로 프로그램 종료함.");
			break;//전체 10회의 반복문을 모두 실행하지 않고 종료
		}
		//이하 출석과 과제 성적 입력에 대해서도 반복.
		for (int err = 0; err < 3; err++) {
			printf("학생 %d의 출석 성적을 입력하세요", count + 1);
			scanf("%d", &atten);
			if (atten < 0 || atten >45)
			{
				if (errcnt != 2) printf("출석 성적은 0~45사이 정수로 입력하세요!\n");
				errcnt++;
			}
			else {
				errcnt = 0; break; 
			}
		}
		if (errcnt > 2)
		{
			printf("입력된 값 오류로 프로그램 종료함.");
			break;
		}for (int err = 0; err < 3; err++) {
			printf("학생 %d의 과제 성적을 입력하세요", count + 1);
			scanf("%d", &report);
			if (report < 0 || report >50)
			{
				if (errcnt != 2) printf("과제 성적은 0~50사이 정수로 입력하세요!\n");
				errcnt++;
			}
			else {
				errcnt = 0; break; 
			}
		}
		if (errcnt > 2)
		{
			printf("입력된 값 오류로 프로그램 종료함.");
			break;
		}
		//출석 성적이 30 미만인 학생은 과제와 시험성적에 관계없이 F처리.
		if (atten < 30) printf("학생%d의 성적은 F 입니다.", count + 1);
		else
		{
			total = test + report + atten;//점수 합계.
			percent = ((float)total / 195) * 100;
			//백분율 식은 최종점수를 최대점수로 나누고, 100을 곱하여 구함.
			//total변수가 정수형이면 계산이 안되기때문에 형변환을 해줌.
			total = (int)(percent + 0.5);
			//실수형 변수를 정수로 형변환을 하면 소수점 이하는 버려지므로 0.5를 더하여 버리면 반올림과 같은 효과.
			printf("학생 %d의 백분율은 %d%%입니다.\n", count + 1, total);
			//백분율 산출하여 출력.
			if (total < 41) printf("학생%d의 성적은 F 입니다.", count + 1);
			else if (total > 40 && total < 51) printf("학생%d의 성적은 C 입니다.", count + 1);
			else if (total > 50 && total < 61) printf("학생%d의 성적은 C+ 입니다.", count + 1);
			else if (total > 60 && total < 71) printf("학생%d의 성적은 B 입니다.", count + 1);
			else if (total > 70 && total < 81) printf("학생%d의 성적은 B+ 입니다.", count + 1);
			else if (total > 80 && total < 91) printf("학생%d의 성적은 A 입니다.", count + 1);
			else if (total > 90 && total < 101) printf("학생%d의 성적은 A+ 입니다.", count + 1);
			else printf("에러입니다.");
			printf("\n");//학생들의 성적을 산출하여 최종 결과를 출력
		}
	}

	return 0;

}
void report7() {
	/*
	printf("주차 시간을 입력해 주세요(h m) : ");
	int h, m, car;//주차시간과 경차여부를 저장하는 변수
	scanf("%d %d", &h, &m);//주차의 시간과 분을 띄워쓰기를 기준으로 받는다.
	printf("경차여부 y->1\tn->0 : ");//경차의 여부
	scanf("%d", &car);//경차를 여부 저장 1->O 0->X
	int total = 0, discount = 0;//최종 요금과, 할인금액을 저장하는 변수.
	total = pay(h, m, 1000);//최종 요금 변수에 함수를 호출하여 반환값을 저장.
	discount = dc(car, total, 50);//할인 요금 변수에 함수를 호출하여 반환값을 저장.
	//printf("%d", total);
	printf("주차요금 :\t%d 원\n경차할인 :\t%d 원\n합산요금 :\t%d 원", total, discount, total - discount);
	//최종 요금을 정리하여 출력.
*/

	srand((unsigned int)time(NULL));
	for (int i = 0; i < 5; i++)
	{
		int num = rand();
		int h, m, car;//주차시간과 경차여부를 저장하는 변수
		int total = 0, discount = 0;//최종 요금과, 할인금액을 저장하는 변수.
		h = (int)rand() % 100;
		m = (int)rand() % 60;
		car = i % 2;

		printf("주차 시간을 입력해 주세요(h m) : %d %d\n", h, m);

		//scanf("%d %d", &h, &m);//주차의 시간과 분을 띄워쓰기를 기준으로 받는다.
		printf("경차여부 y->1\tn->0 : %d\n", car);//경차의 여부
		//scanf("%d", &car);//경차를 여부 저장 1->O 0->X

		total = pay(h, m, 1000);//최종 요금 변수에 함수를 호출하여 반환값을 저장.
		discount = dc(car, total, 50);//할인 요금 변수에 함수를 호출하여 반환값을 저장.
		//printf("%d", total);
		printf("주차요금 :\t%d 원\n경차할인 :\t%d 원\n합산요금 :\t%d 원\n", total, discount, total - discount);
		//최종 요금을 정리하여 출력.
	}
	return 0;
}
void reprot8() {
	int score[100];//점수가 저장될 배열
	int rank[100];//석차가 저장될 배열
	char grade[100];//등수가 저장될 배열

	srand((unsigned int)time(NULL));
	//랜덤함수의 시드를 시간에 맞춰 재 정의
	for (int i = 0; i < 100; i++) {
		score[i] = (int)rand() % 100;
		//랜덤함수를 int로 형변환 한 후, 100으로 나눈 나머지를 저장.
		//100으로 나눈 나머지를 범위로 지정하면 1~100으로 지정됨.
	}
	sorting(score);//정렬 함수 호출.
	ranking(rank, score);//석차를 구하는 함수 호출
	grading(rank, grade);//학점을 구하는 함수 호출.
	for (int i = 0; i < 100; i++) {//1~100등까지의 모든 학생 출력
		printf("[%d점,%d등,%c학점] ", score[i], rank[i], grade[i]);
		if ((i + 1) % 4 == 0) printf("\n");//4명씩 줄바꿈 하여 출력함.
	}
}




/*-------------chap08 func--------------*/
void grading(int arr1[], char arr2[])
{//정수형 배열과 문자형 배열을 인수로 받음.
	for (int i = 0; i < 100; i++) {
		if (arr1[i] < 21) arr2[i] = 'A';//~20등까지 A
		if (arr1[i] > 20 && arr1[i] < 36) arr2[i] = 'B';//21~35까지 B
		if (arr1[i] > 35 && arr1[i] < 61) arr2[i] = 'C';//36~60까지 C
		if (arr1[i] > 60 && arr1[i] < 91) arr2[i] = 'D';//61~90까지 D
		if (arr1[i] > 90) arr2[i] = 'F';//91~ F
	}
}
void sorting(int arr[])
{
	int temp = 0;//자리 바꿈을 위한 정수형 변수
	for (int i = 0; i < 100; i++)
	{
		for (int j = 0; j < 100; j++)
		{
			if (arr[i] > arr[j])
			//차례대로 비교하여, 큰수를 가장 앞으로 배치
			{//자리바꿈 코드.
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
void ranking(int arr1[],int arr2[]){
	int temp = 2;//동점수, 동학점 부여를 위한 변수.
	for (int i = 0; i < 100; i++)
	{
		if (arr2[i-1] == arr2[i])
			//뒤의 수를 기준으로 앞과 비교함.
		{
			arr1[i] = (i-temp++)+1;
			//같은 점수이면, 같은 등수를 부여
		}
		else {
			
			arr1[i] = i+1;
			//i=0부터 시작 등수는1부터 시작이므로 i+1을함.
			temp = 1;
		}
	}
}
/*-------------chap08 func--------------*/


/*-------------chap07 func--------------*/
int pay(int h, int m, int pay_per_min)
//시, 분, 10분당 요금을 인수로 받음.
{
	int total=0;//최종 요금 변수 선언 및 초기화.
	total += (h / 24) * 25000; //1일 요금 * 25000원 부과
	//정수를 나누면 소숫점은 버려지므로, 24로 나누어 24시간 단위로 쪼갬
	h -= (h / 24) * 24;//24시간 단위로 시간을 나누고, 시간을 24 미만으로 남김.
	//ex) 49/24=2 -> 2*24=48 -> 49-48=1
	if (h < 4) {//4시간 이상이면 모두 25000원이므로, 4미만의 경우에 실행
		total += h * pay_per_min * 6;//남은 시간 * 10분당 요금 * 6
		total += ((m + 9) / 10) * pay_per_min;//분 요금을 10분단위로 절상하고 요금 부과.
		//10분단위로 절상하기 위해 +9를 해주고, 10으로 나눔. ex) (31+9)/10=4, (27+9)/10=3
	}
	else if (h >= 4) total += 25000;//4시간을 초과하면 시간에 관계없이 25000부과.
	return total;//최종 요금을 반환
}
int dc(int car,int total,int dc_per)
//경차의 여부, 최종 요금, 할인율을 인수로 받음.
{
	
	if (car == 1) return (total / 100) * dc_per;
	//경차이면 최종요금에 할인율을 적용. 할인 할 요금을 반환
	else return 0;//경차가 아니면 0을 반환
	
	
}
/*-------------chap08 func--------------*/
