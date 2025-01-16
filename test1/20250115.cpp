#include <iostream>
#include <string>

//#define MAIN3

#ifdef MAIN3

int main() {
	//---------실습8. 구구단 만들기

	//-------(1) 5단만 출력하기

	//std::cout << "5단 출력" << std::endl;

	//int until = 10;

	//for (int i = 1; i < until; i++)
	//{
	//	std::cout << "5 * " << i << " = " << 5 * i<< std::endl;
	//}

	//------(2) 1~9단까지 모두 출력해보기
	//std::cout << "1 ~ 9단 출력" << std::endl;
	//int until = 10;

	//for (int i = 1; i < until; i++)
	//{
	//	std::cout << "----" << i <<"단----" << std::endl;
	//	for (int i2 = 1; i2 < until; i2++)
	//	{
	//		std::cout << i << " * " << i2 << " = " << i * i2 << std::endl;
	//	}
	//}
//---------실습9. 1부터 n까지의 합 구하기

	//std::cout << "1부터 n까지의 합 구하기\n" << std::endl;
	//
	//std::cout << "숫자(양의 정수)를 입력하세요: " << std::endl;

	//int input;
	//std::cin >> input;

	//int res = 0;

	//for (int i = 1; i <=  input; i++) res = res + i; //for문도 한줄일 경우에는 중괄호 없이 이렇게 표현할 수 있다.

	//std::cout << "1부터 " << input << "까지의 합은 : " << res << std::endl;

	//--------실습10. while문 사용해보기
	bool flag = true;

	//--------------실습8 while로 다시짜기

	if (!flag) {
		//---8.(1)

	//-------(1) 5단만 출력하기

		std::cout << "5단 출력" << std::endl;

		int until = 10;
		int i = 1;

		while (i < until)
		{
			std::cout << "5 * " << i << " = " << 5 * i << std::endl;
			i++;
		}

		//-----8.(2)
		std::cout << "1 ~ 9단 출력" << std::endl;
		int i2 = 1;
		int j = 1;

		while (i2 < until)
		{
			std::cout << "----" << i2 << "단----" << std::endl;
			
			int j = 1;
			while (j < until)
			{
				std::cout << i2 << " * " << j << " = " << i2 * j << std::endl;
				j++;
			}
			i2++;
		}
	}
	
	//----------실습9 while 이용해서 다시 짜기

	if (!flag) {
		//---------실습9. 1부터 n까지의 합 구하기

	std::cout << "1부터 n까지의 합 구하기\n" << std::endl;
	
	std::cout << "숫자(양의 정수)를 입력하세요: " << std::endl;

	int input;
	std::cin >> input;

	int res = 0;
	int i = 1;

	while (i <= input) {
		res = res + i;
		i++;
	}

	std::cout << "1부터 " << input << "까지의 합은 : " << res << std::endl;
	}

	//----------실습11. 사용자가 입력한 숫자 더하기
	if (!flag) {
		int input;
		int res = 0;
		std::cout << "사용자가 입력한 숫자 더하기\n" << std::endl;
		
		do {
			std::cout << "숫자를 입력하세요(0: exit): ";
			std::cin >> input;
			res += input;
		} while (input != 0);
		std::cout << "사용자가 입력한 수의 합은 : " << res << std::endl;
	}

	//-------실습12. 입력한 숫자만큼 별찍기
	if (!flag) {
		int input;
		int floor = 1;
		std::cout << "숫자를 입력하세요(0: exit): ";
		std::cin >> input;


		while (floor <= input) {

			for (int i = 1; i <= floor; i++) {
				std::cout << "*";
			}
			floor += 1;
			std::cout << "\n" << std::endl;
		}
	}

	//-------종합실습3. 피라미드 형태 별 찍기
	
	if (flag) {
		int input;
		int floor = 1;
		std::cout << "피라미드의 높이를 입력하세요(0: exit): ";
		std::cin >> input;


		while (floor <= input) { 

			//공백
			for (int i = 1; i <= input - floor; i++) {
				std::cout << " ";
			}


			//별찍기
			for (int i = 1; i <= 1 + (floor-1)*2 ; i++) {
				std::cout << "*";
			}
			std::cout << "\n" << std::endl;
			floor += 1;
		}
	}

	return 0;
}
#endif