#include <iostream>
using namespace std;

int main(void){
    char character = 'a';
    
    if(character >= 'a' && character <= 'z'){cout << "lower-case alphabet";}
    else if(character >= 'A' && character <= 'Z'){cout << "upper-case alphabet";}
    else{cout << "not an alphabet";}
}