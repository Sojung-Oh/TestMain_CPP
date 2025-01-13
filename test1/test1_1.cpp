#include <iostream>
#include <string> //문자열을 처리하기 위한 라이브러리

//using namespace std; // std라는 네임스페이스를 명시하겠다
int val = 0;
std::string str = "";

int main() {
	int val = 0;

	//cout << "안녕하세요" << std::endl;
	//cout << "깃헙 반영 여부 확인" << std::endl;

	//--------자료형

	////bool b = 4; // 0이 아닌 숫자는 모두 1(True)로 취급
	//char c = 'A'; // 문자열은 "", 문자는 '' 
	//int i = 1.5; // 소수점 아래 부분을 잘라버림
	//float f = 1.111;

	////std::cout << b << std::endl;
	////std::cout << "bool형의 사이즈" << sizeof(b) << std::endl;
	//std::cout << c << std::endl;
	//std::cout << i << std::endl;
	//std::cout << f << std::endl;

	//-------------------실습2
	//char student_grade = 'A';
	//double sensor1Temperature = 36.5;
	//double sensor1Humidity = 78.5;
	//double MotorSpeed = 28.6;

	////---------변수와 메모리

	//int a = 100;
	//int b = 100;

	//int* ptr = 0;
	//int* ptr2 = 0;

	//ptr = &a;
	//ptr2 = &b; //각 변수의 주소 16진수로 표현

	//std::cout << ptr << std::endl;
	//std::cout << ptr2 << std::endl;

	//-------------출력
	char ch = 40; //아스키코드 번호에 대응되는 문자 출력
	std::cout << ch << std::endl;

	//---------------입력

	std::cout << "값을 입력하시오: " << std::endl;
	std::cin >> val;
	std::cout << "입력된 값" << std::endl;
	std::cout << val;

	//---------------실습3 입출력

	std::cout << "출력할 문자열을 입력하세요, 이 문자열은 5회 연속 출력됩니다 " << std::endl;
	std::cout << "입력할 문자열: ";
	std::cin >> str; 
	std::cout << "입력된 값: ";
	std::cout << "1회 입력" << str << std::endl;
	std::cout << "2회 입력" << str << std::endl;
	std::cout << "3회 입력" << str << std::endl;
	std::cout << "4회 입력" << str << std::endl;
	std::cout << "5회 입력" << str << std::endl;

	return 0;
}

