// Бондаренко Максим, варіант 1
//

#include <iostream>
using namespace std;
void Fill_arr(int* arr, int n) {
    for (int i = 0; i < n; i++)
        *(arr + i)=rand()%41-20;}
void Print_arr(int* arr, int n) {
    for (int i = 0; i < n; i++)
        cout<<*(arr + i)<<" ";}
void Del_3(int *&arr, int &n) {
    int* newarr = new int[n--];
    for (int i = 0; i < 2; i++)
        newarr[i] = arr[i];
    for (int i = 2; i < n; i++)
        newarr[i] = arr[i+1];
    delete[] arr;
    arr = newarr;
}
int main()
{
    int x;
start:
    cout << "Choose task:";
    cin >> x;
    switch (x) {
    case 1: {
        int n=15;
        int* arr = new int[n];
        Fill_arr(arr, n);
        Print_arr(arr, n);
        cout << endl;
        Del_3(arr, n);
        Print_arr(arr, n);
    }break;
    case 2: {
        int n = 15, N;
        int* arr = new int[n];
        Fill_arr(arr, n);
        Print_arr(arr, n);
        cout << endl;
        cout << "Print your number N:";
        cin >> N;
        int* newarr = new int[n++];
        for (int i = 0; i < 2; i++)
            newarr[i] = arr[i];
        newarr[2] = N;
        for (int i = 3; i < n; i++)
            newarr[i] = arr[i - 1];
        delete[] arr;
        arr = newarr;
        Print_arr(arr, n);
    }break;
    case 3: {
        
    }break;
    default: {
        cout << "Виберіть задачу 1-3";
        goto start;
    }
    }
    return 0;
}

