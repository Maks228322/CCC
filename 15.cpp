#include <iostream>
#include <time.h> 

using namespace std;

int* masrandom() {
    int* x = new int[3];
    x[0]= 1 + rand() % 30;
    x[1] = 1 + rand() % 11;
    x[2]= rand() % 4 + 1999;
    return x;
   
}
int main() {
    srand(time(NULL));
    for (; ; ) {
       int* x = masrandom();
       int k = 15;
       int g = 6;
       int h = 2001;
        cout <<"Your day: "<< k << "." << g << "." << h << endl;
        cout <<"Random day: " <<x[0] << "." << x[1] << "." << x[2] << endl;
        if (x[0] == 15 && x[1] == 6 && x[2] == 2001)
        {
            cout << "You are lucky" << endl;
            break;
        }
        else { cout << "Try again" << endl; }
    }
    
       
}