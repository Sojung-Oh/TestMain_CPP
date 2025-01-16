#include <iostream>
#include <string>

using namespace std;

#define MAIN4

#ifdef MAIN4

int main()
{
	//string 생성
	if (!true) {
		string str1 = "";
		string str2 = "codingon";
		string str3("condingon");
		string str4(str2); //str4 = str2
		char str_arr[] = { 'h', 'e', 'l', 'l', 'o', NULL }; //string의 끝 값으로 null(또는 0) 값 넣어주지 않으면 쓰레기값 계속 들어감
		string str5(str_arr);

		cout << "str 1: " << str1 << endl;
		cout << "str 2: " << str2 << endl;
		cout << "str 3: " << str3 << endl;
		cout << "str 4: " << str4 << endl;
		cout << "str 5: " << str5 << endl;
	}
	
	//string 연산
	if (!true) {
		string str1 = "coding";
		string str2 = "on";
		string str3("aaa");
		string str4("bbb");
		string str5("bbbbb");

		cout << "str 1 + str 2 : " << str1 + str2 << endl;
		cout << "str 1 > str 2 : " << (str1 < str2) << endl; //문자열의 알파벳 순서 앞글자 비교
		cout << "str 1 > str 2 : " << (str4 < str5) << endl; //문자열의 앞부분이 같을 경우 길이 비교
	}

	//string 함수
	if (!true) {
		string str1 = "helloworld";
		string str2 = "codingon";
		string str3("on");
		string str4("world");
		string str5("bbbbb");

		//cout << "at : " << str1.at(5) << endl;
		//cout << "index : " << str1[5] << endl;
		//cout << "front : " << str1.front() << endl;
		//cout << "back : " << str1.back() << endl;
		//cout << "length : " << str1.length() << endl;
		//str1.resize(5);
		//cout << "resize : " << str1 << endl;
		//cout << "empty : " << str1.empty() << endl; //str1이 비어있는지 여부 확인
		////str1.clear();
		//cout << "clear : " << str1.empty() << endl;

		cout << "find : " << str1.find(str4) << endl; // 있으면 첫번재 인덱스를 반환, 없으면 트래시 값 반환
		cout << "substr : " << str2.substr(3,2) << endl;
		cout << "compare : " << str1.compare(str2) << endl;

		cout << "isdigit : " << isdigit('1') << endl; //문자가 숫자이면 true, 아니면 false
		cout << "isalpha : " << isalpha('c') << endl; //문자가 알파벳이면 true,아니면 false

		cout << "toupper('c') : " << toupper('c') << endl; //아스키 코드 번호로 결과 나옴

		char ch = toupper('c');
		char ch2 = 68; //문자형 변수에 아스키 코드 번호를 담아 해당 문자를 지정하는 것도 가능
		cout << "ch : " << ch << endl;
		cout << "ch2 : " << ch2 << endl;

		cout << "string to int  : " << stoi("1234") << endl;
		
		cout << "string to int  : " << typeid(stoi("1234")).name() << endl; //자료형 확인하기
	
	}

	//--------------실습13. string 사용해보기

	if (!true) {
		string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";
		cout << "length of s  : " << s.length() << endl;
		cout << "100th letter of s  : " << s[99] << endl;
		cout << "index of first 'two' in the s  : " << s.find("two") << endl; //여기서 결과가 11이니 12 인덱스 이후부터 "two" 다시 찾으면 두번째 "two" 찾을 수 있다
		cout << "index of second  'two' in the s  : " << s.find("two", 12) << endl;
	
	}
	
	//-------------실습14. string 사용해보기

	if (!true) {
		string input1, input2;
		
		int i = 0;
		int i_2 = 0;
		int count1;
		int count2;

		do{ cout << "첫번째 문자열을 입력하세요  : " << endl;
		cin >> input1;
		
		count1 = input1.length();

		while (i < count1)
		{
			int val = isdigit(input1[i]);
			if (val == 0)
			{
				cout << "No " << endl;
				break;
			}
			else {
				i_2++;
			}
			i++;
		}
		if (i_2  == count1)
		{
			cout << "첫번째 문자열은 ok " << endl;
		}
		else 
		{cout << "첫번째 문자열은 no " << endl; }

		} while (i_2 != count1);

		int j = 0;
		int j_2 = 0;

		do {
			cout << "두번째 문자열을 입력하세요  : " << endl;
			cin >> input2;
			count2 = input2.length();

			while (j < count1)
			{
				int val2 = isdigit(input2[j]);
				if (val2 == 0)
				{
					cout << "No " << endl;
					break;
				}
				else {
					j_2++;
				}
				j++;
			}
			if (j_2 == count2)
			{
				cout << "두번째 문자열은 ok  " << endl;
			}
			else
			{
				cout << "두번째 문자열은 no " << endl;
			}

		} while (j_2 != count2);

		cout << "첫번째 문자열과 두번째 문자열을 이어붙이기 : " << input1 + input2 << endl;
		cout << "첫번째 문자열과 두번째 문자열의 합 : " << stoi(input1) + stoi(input2) << endl;

	}

	//--------실습15. string 사용해보기

	if (!true)
	{
		string s = "Codingon";
		//----첫번째 문자 소문자로 변경
		s[0] = tolower(s[0]);
		cout << "'Codingon'의 첫번째 문자 소문자로 변경 : " << s << endl;
		cout << "'codingon'의 'ding'이라는 부분 문자열 반환 : " << s.substr(2, 4) << endl;
		cout << "'coooooon'이 되도록 변경 : " << s.replace(2, 4, "oooo") << endl;
		cout << "'con'이 되도록 변경 : " << s.erase(2, 5) << endl;

	}

	//-----배열

	if (!true) {
		int arr_init[] = { 0, }; //[]안에 아무것도 안 쓰는 건 지금은 배열 크기 선언하지 않겠다는 의미!

		int arr_int[] = { 1, 2, 3, 4, 5, 6, };
		
		char arr_char[] = { 'a', 'b', 'c', };
		float arr_float[] = { 0.0, };

	}

	//--------실습16. 배열 사용해보기

	if (!true) {
		int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
		int prime_number[4] = {2, 3, 5, 7};

		for (int i = 0; i < 10; i++) {
			
			for (int j = 0; j < 4; j++) {
				if (arr[i] == prime_number[j]) {
					cout << "소수 : " << arr[i] << endl;
				}
			}
		}
		
	}

	//---------실습17. 배열에 콘솔 입력 후 출력

	if (true) {
		int arr_i[10] = { 1,2,3,4,5,6,7,9,10 };
		cout << "배열 크기 : " << sizeof(arr_i) << endl;
		cout << "원소 크기 : " << sizeof(arr_i[0]) << endl;
		int count = sizeof(arr_i) / sizeof(arr_i[0]);
		count = count - 1;
		for (int i = 0; i <= count; i++)
		{
			cout << "int형 배열 " << i + 1 << "번째에 요소 입력할 값: ";
			cin >> arr_i[i];
		}
		for (int j = count; j >= 0; j--) {
			cout << "int형 배열 " << j + 1 << "번째에 요소 입력된 값: ";
			cout << arr_i[j] << endl;
		}
		cout << "끝";
	}


	return 0;
}
#endif