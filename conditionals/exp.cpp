#include <iostream>
using namespace std;

int main(void){
    int base = 2;
    int exponent = 3;
    int num = 1;
    for(int i = 1; i <= exponent; i++){
        num *= base;
    }
    cout << num;
}
