 // Бондаренко Максим, варіант 1
//

#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

void Fill_arr(int* arr, int n) {
    srand(time(NULL));
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
        int M = 20, a;
        int* arr = new int[M];
        Fill_arr(arr, M);
        Print_arr(arr, M);
        cout << endl;
        int* newarr1 = new int[10];
        a = 0;
        for (int i = 0; i < M; i++) {
            if (i % 2 != 0) { newarr1[a] = arr[i];
            a++;
            }
        }
        int* newarr2 = new int[10];
        a = 0;
        for (int i = 0; i < M; i++) {
            if (i % 2 == 0) { newarr2[a] = arr[i];
            a++;
            }
        }
        delete[] arr;
        cout << "Parni indeksi elementiv:";
        Print_arr(newarr1, 10);
        cout << endl;
        cout << "Neparni indeksi elementiv:";
        Print_arr(newarr2, 10);
    }break;
    default: {
        cout << "Choose task 1-3"<<endl;
        goto start;
    }
    }
    return 0;
}

