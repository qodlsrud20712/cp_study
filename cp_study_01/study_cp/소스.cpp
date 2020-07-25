#include <iostream>
#include <string>
using namespace std;
int inven[64] = { 0 };
int score = 0;



void getItem(int itemId , int cnt = 1, int sc = 0) {
	inven[itemId] += cnt;
	score += sc;
}
// 레퍼런스 변수 = 포인터는 무조건 변수안에 값만이 담겨있어야된다.
// 더블포인터를 썼을 경우 상수도 넣을 수 있고, 변수 연산도 넣을 수 있따
void swap(int &a, int &b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap(double &a, double &b) {
	double tmp = a;
	a = b;
	b = tmp;
}

void swap(int* (&a), int* (&b)) {
	int* tmp = a;
	a = b;
	b = tmp;
}

int main() {
	/*string str;
	int score;
	cin >> str;
	cin >> score;

	cout << "이름 입력 : " << str << endl;
	cout << "점수입력: " << score << endl;

	cout << str << "님의 점수는 " << score << "점입니다" << endl;*/

	int arr[2][3] = { {1,2,3}, {4,5,6} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
	}

	//범위 기반 for문 사용

	for (int(&i)[3] : arr) {
		for (int& j : i) {
			cout << j << ' ';
		}
		cout << endl;
	}

	//1. arr == &arr[0]
	//2. *arr == arr[0]
	//3. arr+1 == arr에 sizeof(*arr)를 더한 값
	//배열은 포인터

	//배열 포인터 사용
	for (int(*ln)[3] = arr; ln < arr + 2; ln++) {
		for (int* c = *ln; c < *ln + 3; c++) {
			cout << *c << ' ';
		}
		cout << endl;
	}

	
	
































	/*getItem(6, 5);
	getItem(3, 2);
	getItem(3);
	getItem(11, 34, 7000);

	cout << score << endl;
	for (int i = 0; i < 16; i++) {
		cout << inven[i] << ' ';

	}
	cout << endl;*/


	//int a = 20, b = 30;
	//double da = 2.222, db = 3.333;
	//int* pa = &a, *pb = &b;

	//swap(a, b);
	//swap(da, db);
	//swap(pa, pb);

	//cout << a << endl;
	//
	//cout << b << endl;

	//cout << da << endl;
	//cout << db << endl;

	//cout << *pa << endl;
	//cout << *pb << endl;



	//int a(10);
	//int b(7);
	//int arr[10] = { 3,1,2,3,4,5,6,7,7,7};
	//int &p = a;
	//p = 12;

	//for (int &n : arr) {
	//	cout << n << ' ';
	//	n++;
	//}
	//cout << endl;

	//for (int n : arr) {
	//	cout << n << ' ';

	//}

	//cout << endl;

	//cout << "swap 전 a = " << a << endl;
	//cout << "swap 후 b = " << b << endl;


	//swap(a, b);

	//cout << "swap 후 a = " << a << endl;
	//cout << "swap 후 b = " << b << endl;
	//
	///*cout << "p = " << p << endl;
	//cout <<"a = " << a << endl;
	//*/cout << b << endl;
	////string name;

	////cout << "이름 입력:";
	////cin >> name;

	////string mes = "hi," + name + " dd.";

	//cout << mes << endl;
//	int i;
//
//	scanf_s("%d", &i);
//
//	if (i >= 90 && i <= 100) {
//		printf("A\n", i);
//	}
//	else if (i >= 80 && i <= 89) {
//		printf("B\n", i);
//	}
//	else if (i >= 70 && i <= 79) {
//		printf("C\n", i);
//	}
//	else if (i >= 60 && i <= 69) {
//		printf("D\n", i);
//	}
//	else {
//		printf("E\n", i);
//	}
//

	//int arr[] = {1,2,3,4,5};

	//for (int i = 0; i<5 ; i++) {
	//	printf("0번 = %d\n", arr[i]);
	//}

	//int n;
	//int arr[10];
	//int res;
	//int min_res;
	//printf("입력할 숫자의 개수 입력:");
	//scanf_s("%d", &n);
	//for (int i = 0; i < n; i++) {
	//	scanf_s("%d", &arr[i]);
	//}
	//
	//for (int i = 0; i < n; i++) {
	//	for (int j = i+1; j < n; j++) {
	//		if (arr[i] > arr[j]) {
	//			res = arr[i];
	//			min_res = arr[j];
	//		}
	//		else if (arr[i] < arr[j]) {
	//			res = arr[j];
	//			min_res = arr[i];
	//		}
	//		else {
	//			continue;
	//		}
	/*		if (arr[i] > arr[j]) {
				i++;
			}
			else if(arr[i] < arr[j]){
				continue;
			}
			else {
				printf("i = %d\n", i);
				printf("j = %d\n", j);
			}*/
	//	}
	//}
	//printf("%d\n", res);
	//printf("%d\n", min_res);

	//printf("%d\n", n);
	//printf("%d", sizeof(n));



}