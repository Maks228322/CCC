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
void createVect(int*&X, int size)
{ srand((time(NULL)));  
for (int i = 0; i < size; i++)  
    X[i] = rand() % 20 - 10; 
}


int main() {
    setlocale(LC_ALL, "RUSSIAN");
    int n;  
    int* pA, * pB;  
    cout << "Задайте кiлькiсть елементiв ->";  
    cin >> n;  
    pA = new int[n];   
    createVect(pA, n);     
    view(pA, n); 
    cout << "Задайте кiлькiсть елементiв ->";  
    cin >> n;  
    pB = new int[n];   
    createVect(pB, n);  
    view(pB, n);   
    delete[]pA;  
    delete []pB;      
    return 0; 
} 