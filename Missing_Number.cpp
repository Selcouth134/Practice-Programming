/*Given two arrays of integers, find which elements in the second array are missing from the first array.

Example


The  array is the orginal list. The numbers missing are .

Notes

If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
Return the missing numbers sorted ascending.
Only include a missing number once, even if it is missing multiple times.
The difference between the maximum and minimum numbers in the original list is less than or equal to .*/

#include<bits/stdc++.h>
using namespace std;

vector<int> missingNumbers(vector<int> arr, vector<int> brr) {

    int a[10001];
    vector<int> res;
    int t,k=0;
    for(int i=0;i<brr.size();i++){
        t = brr[i];
        a[t]--;
    }
    for(int i=0;i<arr.size();i++){
        t = arr[i];
                a[t]++;
        }
    sort(brr.begin(),brr.end());
    int l = brr[0];
    for(int i=l;i<=l+100;i++){
        t=a[i];
        if(t<0){
            res.insert(res.begin()+k,i);
            k++; }
    }
    return res;
}

int main(){
    vector<int> arr = {204,208,206,209};
    vector<int> brr = {202,204,204,208,206,209};
    vector<int> result = missingNumbers(arr, brr);

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        if (i != result.size() - 1) {
            cout << " ";
        }
    }
}
