#include <iostream>
#include <string>

//#define MAIN2 //전처리기. 파일 속성에서 전처리기 속성 편집해서 자동처리 하게 할 수도 있지만 남이 보기엔 이게 제일 직관적

#ifdef MAIN2

int main(){
	/*int val = 0;

	std::cout << "input any number" << std::endl;
	std::cin >> val;

	std::cout << "hello" << std::endl;
	std::cout << "I'm taking K-Digital-Training course" << std::endl;
	std::cout << "Renewable Energy course - 1st" << std::endl;

	if (val == 1) {
		std::cout << "아두이노";
	}
	else if (val == 2) {
		std::cout << "Python";
	}
	else if (val == 3) {
		std::cout << "AWS";
	}
	else {
		std::cout << "nothing";
	}
	std::cout << "입니다." << std::endl;*/
	//----------------실습4. if문(1)

	//int age = 0;

	//std::cout << "나이를 입력하세요." << std::endl;
	//std::cin >> age;

	//if (age <= 0) {
	//	std::cout << "잘못된 입력입니다." << std::endl;
	//}
	//else if (age < 8) {
	//	std::cout << "유아입니다." << std::endl;
	//}
	//else if (age < 14) {
	//	std::cout << "초등학생입니다." << std::endl;
	//}
	//else if (age < 17) {
	//	std::cout << "중학생입니다." << std::endl;
	//}
	//else if (age < 20) {
	//	std::cout << "고등학생입니다." << std::endl;
	//}
	//else if (age < 200) {
	//	std::cout << "성인입니다." << std::endl;
	//}
	//else {
	//	std::cout << "나이가 너무 많습니다." << std::endl;
	//}

	//--------------실습5. if문(2)

	//std::string name = "";
	//std::cout << "이름을 입력하세요." << std::endl;
	//std::cin >> name;

	//if (name == "홍길동") {
	//	std::cout << "남자입니다." << std::endl;
	//}
	//else if (name == "성춘향") {
	//	std::cout << "여자입니다." << std::endl;
	//}
	//else {
	//	std::cout << "모르겠어요." << std::endl;
	//}

	//------------switch문 

	/*int val = 0;

	std::cout << "숫자를 입력하세요: ";
	std::cin >> val;

	switch (val) {
		case 0:
			std::cout << "case 0 입니다!!" << std::endl;
			break;
		case 1:
			std::cout << "case 1 입니다!!" << std::endl;
			break;
		case 2:
			std::cout << "case 2 입니다!!" << std::endl;
			break;
		case 3:
			std::cout << "case 3 입니다!!" << std::endl;
			break;
		default:
			break;
	}*/

	//---------논리연산자

	//int val = 0;
	//bool flag = true;

	//std::cout << "내가 입력한 숫자는? ";

	//std::cin >> val;

	//if (val >= 40 && val <= 60) // 40 <= val <= 60은 잘못된 조건문. 앞부분만 먼저 확인해서 true <= 60 으로 계산 
	//{
	//	std::cout << "40에서 60 사이입니다.";
	//}
	//else if (val >= 70 && val <= 80) // 70 <= val && val <= 80 이렇게 써도 ok!
	//{
	//	std::cout << "70에서 80 사이입니다.";
	//}
	//else if (val >= 80 && val <= 90)
	//{
	//	std::cout << "80에서 90 사이입니다.";
	//}
	//else {
	//	std::cout << "pass";
	//}

//int val_1 = 9;
//int val_2 = 21;
//int result = 0;
//
//result = val_1 + 21;
//std::cout << "덧셈 결과: " << result << std::endl;
//
//result = val_1 - val_2;
//std::cout << "뺄셈 결과: " << result << std::endl;
//
//result = val_2 * val_1;
//std::cout << "곱셈 결과: " << result << std::endl;
//
//result = val_2 / val_1;
//std::cout << "나눗셈 결과: " << result << std::endl;
//
//result = val_2 % val_1;
//std::cout << "나머지 결과: " << result << std::endl;
//
//val_1++;
//std::cout << "val_1 증가연산자 결과: " << val_1 << std::endl;

//---------실습6. switch문

//int score = 0;
//char grade = 'N';
//bool flag = false;
//
//std::cout << "점수를 입력하세요: ";
//std::cin >> score;
//
//if (score < 0) {
//	std::cout << "잘못된 입력입니다" << std::endl;
//}
//else {
//	if (90 < score && score <= 100) {
//		grade = 'A';
//		if(flag) std::cout << "학점은 A입니다" << std::endl;
//	}
//	else if (75 < score && score <= 90) {
//		grade = 'B';
//		if (flag) std::cout << "학점은 B입니다" << std::endl;
//	}
//	else if (50 < score && score <= 75) {
//		grade = 'C';
//		if (flag) std::cout << "학점은 C입니다" << std::endl;
//	}
//	else if (34 < score && score <= 50) {
//		grade = 'D';
//		if (flag) std::cout << "학점은 D입니다" << std::endl;
//	}
//	else {
//		grade = 'F';
//		if (flag) std::cout << "학점은 F입니다" << std::endl;
//	}
//
//	switch (grade) {
//	case 'A':
//		std::cout << "학점은 A입니다." << std::endl;
//		break;
//	case 'B':
//		std::cout << "학점은 B입니다." << std::endl;
//		break;
//	case 'C':
//		std::cout << "학점은 C입니다." << std::endl;
//		break;
//	case 'D':
//		std::cout << "학점은 D입니다." << std::endl;
//		break;
//	case 'F':
//		std::cout << "학점은 F입니다." << std::endl;
//		break;
//	}
//}

//-----------실습7. 삼항 연산자

//int input = 0;
//int rest = 0;
//std::cout << "숫자를 입력하세요: ";
//std::cin >> input;
//
//rest = input % 5;
//
//rest == 0 ? std::cout << input << "는 5의 배수입니다." << std::endl : std::cout << input << "는 5의 배수가 아니네요ㅜㅜ" << std::endl;

//-------------종합 실습1

//int today = 0000;
//int bday = 0000;
//
//std::cout << "오늘의 월과 일을 4자리 숫자로 입력하세요. (e.g. 2025년 1월 14일 -> 0114): ";
//std::cin >> today;
//
//std::cout << "생일의 월과 일을 4자리 숫자로 입력하세요. (e.g. 2000년 10월 14일 -> 1014): ";
//std::cin >> bday;
//
//today < bday? std::cout << "생일이 아직 조금 남았네요." << std::endl : std::cout << "생일이 지났네요." << std::endl;


//-----------종합실습2. 계산기 프로그램 만들기
float val_1 = 0.0;
float val_2 = 0.0;
char circul = ' ';
float res = 0.0;

std::cout << "두 개의 변수를 입력하세요: " << std::endl;
std::cin >> val_1;
std::cin >> val_2;

std::cout << "연산자를 입력하세요: ";
std::cin >> circul;

switch (circul) {
case '+'  :
	res = val_1 + val_2;
	std::cout << "연산 결과는 " << res <<"입니다." << std::endl;
case '-':
	res = val_1 - val_2;
	std::cout << "연산 결과는 " << res << "입니다." << std::endl;
case '*':
	res = val_1 * val_2;
	std::cout << "연산 결과는 " << res << "입니다." << std::endl;
case '/':
	if (val_2 == 0) {
		std::cout << "0으로 나눌 수 없습니다." << std::endl;
	}
	else {
		res = val_1 / val_2;
		std::cout << "연산 결과는 " << res << "입니다." << std::endl;
	}
default:
	std::cout << "연산자가 잘못 입력되었습니다." << std::endl;
}


	return 0;

}
#endif