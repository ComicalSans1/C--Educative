#include <iostream>
using namespace std;

int main(void){
    int total_seconds = 3870;
    
    int hrs = (total_seconds - (total_seconds % 3600)) / 3600;
    int tminhrs = total_seconds - hrs * 3600;
    int mins = (tminhrs - (tminhrs % 60)) / 60;
    int secs = tminhrs - mins * 60;
    
    cout << hrs << endl;
    cout << mins << endl;
    cout << secs << endl;
               
}