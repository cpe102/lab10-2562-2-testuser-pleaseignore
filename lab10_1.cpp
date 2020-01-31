// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<cmath>
#include<ctime>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    cout<< "You will get ";
    switch (x)
    {
    case 1: cout << "A";
        break;
    case 2: cout << "B+";
        break;
    case 3: cout << "B";
        break;
    case 4: cout << "C+";
        break;
    case 5: cout << "C";
        break;
    case 6: cout << "D+";
        break;
    case 7: cout << "D";
        break;
    case 8: cout << "F";
        break;
    default: cout << "W";
        break;
    }
    cout << " in this 261102";
}
