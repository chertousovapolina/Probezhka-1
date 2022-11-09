// ConsoleApplication9.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
// Чертоусова утренняя пробежка-1
#include <iostream>
using namespace std;
int main()
{
    int A;
    float B, C;
    cin >> A >> B;
    C = B;
    for (int i = 0; i < A;i++) {
        C = (C / 100) * 70;
        C += 1;
        
    }
    cout << C;
    
}

