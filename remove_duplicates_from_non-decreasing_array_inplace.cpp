/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same.

Since it is impossible to change the length of the array in some languages, you must instead have the result be placed in the first part of the array nums.
More formally, if there are k elements after removing the duplicates, then the first k elements of nums should hold the final result.
It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.*/

#include <iostream>
#include<vector>
using namespace std;
int main(){
    int i,p1,p2,n;
    cin>>n;
    vector<int> input(n);

    for(i=0;i<n;i++)
        cin>>input[i];

    //two pointers approach
    p1 = 0;
    for(p2=1;p2<n;p2++){
        if(input[p2]!=input[p1]){
            p1++;
            input[p1]=input[p2];
        }
    }
    //first k slots holding unique elements as results
    cout<<endl<<p1+1;

    return 0;
}
