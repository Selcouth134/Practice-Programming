//DEMONSTRATION OF BITWISE OPERATORS
#include <iostream>
using namespace std;
int main(){
    int x = 6;
    int y = 2;
    cout<<(x<<y)<<endl; //LEFTWISE
    cout<<(x>>y)<<endl; //RIGHTWISE
    cout<<(x&y)<<endl;  //&
    cout<<(x|y)<<endl;  //.
    cout<<(x^y)<<endl; //XOR
    return 0;
}

