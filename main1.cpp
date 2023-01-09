#include<iostream>
using namespace std;

void input_array(int* p, int size) { //정수 5개 입력
    for(int i =0; i<size; i++)
    {
        cout << "정수를 입력하세요 : ";
        cin >> p[i];
    }
}

void print_array(int* p, int size) { //배열 출력
    for(int i =0; i<5; i++)
    {
        cout << p[i] << endl;
    }
}

int main()
{
    int arr[5];
    input_array(arr,5);
    print_array(arr,5);

    return 0;
}