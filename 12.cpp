#include <iostream>
#include <time.h> 

using namespace std;

void view(const int*, int);
void createVect(int*&, int);

void view(const int* X, int size)
{
    cout << "Масив " << endl;
    for (int i = 0; i < size; i++) {

        cout << X[i] << '\t';
    }
    cout << endl << endl;
}

void createVect(int*& X, int size)
{
    srand((time(NULL)));
    for (int i = 0; i < size; i++)
        X[i] = rand() % 20 - 10;
}

void  PosNum( int* X, int size)
{
    int null = 0;
    for (int i = 0; i < size; i++) {
        if (X[i] < null) {
           X[i]=X[i]*(-1);
        }
    }
    for (int i = 0; i < size; i++) {

        cout << X[i] << '\t';
    }
    cout << endl << endl;
}

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int n;
    int* pA, * pB, * pC;
    cout << "Задайте кiлькiсть елементiв ->";
    cin >> n;
    pA = new int[n];
    createVect(pA, n);
    view(pA, n);
    PosNum(pA, n);
    cout << "Задайте кiлькiсть елементiв ->";
    cin >> n;
    pB = new int[n];
    createVect(pB, n);
    view(pB, n);
    PosNum(pB, n);
    cout << "Задайте кiлькiсть елементiв ->";
    cin >> n;
    pC = new int[n];
    createVect(pC, n);
    view(pC, n);
    PosNum(pC, n);
    delete[]pC;
    delete[]pA;
    delete[]pB;
    return 0;
}