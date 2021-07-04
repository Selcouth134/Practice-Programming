//DEMONSTRATION OF NOT BITWISE OPERATOR IN SIGNED INT
//UNSIGNED INT HAS 0 AND POSITIVE INTEGERS
#include <iostream>
using namespace std;
int main(){
    int x;
    x = 1; // 1......111
    cout<<(~x)<<endl;
    x = 5;
    cout<<(~x)<<endl;
    return 0;
}
