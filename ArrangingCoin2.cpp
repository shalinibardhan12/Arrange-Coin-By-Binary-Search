#include<iostream>
using namespace std;
int CompleteRow(int n){
    int s =0;
    int e =n;
    int mid = (s+e)/2;
    while(s<=e){
        int k = ((mid*mid)+mid)/2;
        if(n>=k){
            s = mid+1;
        }
        else {
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return s-1;
}
int main(){
    int n;
    cout<<"enter the number of coin "<<endl;
    cin>>n;
    int ans = CompleteRow(n);
    cout<<"Total number of complete row is "<<ans;
}