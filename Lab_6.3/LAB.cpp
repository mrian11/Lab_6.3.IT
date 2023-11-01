#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

int* Create(int n, const int Low, const int High)
{
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
    return a;
}

template<typename T>
T* CreateU(T n, const T Low, const T High)
{
    T* a = new T[n];
    for (T i = 0; i < n; i++)
    {
        a[i] = Low + rand() % (High - Low + 1);
    }
    return a;
}

void Print(int* a, int n)
{
    cout << "Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << setw(5) << a[i];
    }
    cout << endl;
}

template<typename T>
void PrintU(T* a, T n)
{
    cout << fixed << setprecision(2);
    cout << "Array: ";
    for (T i = 0; i < n; i++)
        cout << setw(5) << a[i];
    cout << endl;
}

template<typename T>
T SumU(T* a, const T size)
{
    T S = 0;
    for (T i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            S += a[i];
    return S;
}

int Sum(int* a, const int size)
{
    int S = 0;
    for (int i = 0; i < size; i++)
        if (a[i] % 2 == 0)
            S += a[i];
    return S;
}

int main()
{
    srand((unsigned)time(NULL)); 
    const int n = 10;
    int High = 15;
    int Low = -15;
    int* a = Create(n, Low, High);
    int* b = CreateU(n, Low, High);
    Print(a, n);
    PrintU(b, n);
    cout << "Sum  'a'= " << Sum(a, n) << endl;
    cout << "Sum  'b'= " << SumU(b, n) << endl;
    delete[] a;
    delete[] b;
    return 0;
}
