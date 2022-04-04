#include <iostream>
#include <string>
using namespace std;

int main(void){
    int number = 23;

    for(int i = 0; i <= number; i++){
        if(number == 0 || number == 1){cout << "not prime"; break;}
        if(number == 2){cout << "prime"; break;}
        if(i == 0 || i == 1){continue;}
        else if(number % i == 0){cout << "not prime"; break;}
        else if(i = number){cout << "prime"; break;}
    }
}
