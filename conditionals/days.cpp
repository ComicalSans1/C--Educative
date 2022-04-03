#include <iostream>
#include <string>
using namespace std;

int main(void){
    int number = 3;
    string cars[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    cout << cars[number - 1];
}
