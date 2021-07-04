//CHECK IF SUM OF LEFT SUBARRAY IS EQUAL TO SUM OF RIGHT SUBARRAY
#include <bits/stdc++.h>
using namespace std;

int subArray(vector<int> v, int low , int mid, int high){

if(mid==high-1)
    return 0;

int i = low;
int j = mid+1;
int lsum,rsum;
lsum=0;
rsum=0;
while(i<mid){
    lsum+=v[i];
    i++;
}
while(j<high){
    rsum+=v[i];
    j++;
}
cout<<lsum;
cout<<rsum;
if(lsum==rsum)
    return 1;

else if(lsum>rsum){
    mid ++;
    subArray(v,low,mid,high);
}
else{
    mid--;
    subArray(v,low,mid,high);
}

}

int main(){

    int n,t;
    cin >> t;
    while(t--){
    cin >> n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];
    sort(v.begin(),v.end());
    int mid = n/2;
    int res = subArray(v,0,mid,n);
    (res)?cout<<endl<<"YES" : cout<<endl<<"NO";
    }
    return 0;

}
