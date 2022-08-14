#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;
    int x=0;
    while(t--){
        x++;
        int n,k;
        cin>>n>>k;
        string str;
        cin>>str;
        int good=0;
        for(int i=0;i<n/2;i++){
            if(str[i] != str[n-i-1])
            {
                good++;
            }
        }
        cout<<"Case #"<<x<<": ";
        cout<< ((good > k) ? (good - k) : (k-good))<<endl;
    }
}