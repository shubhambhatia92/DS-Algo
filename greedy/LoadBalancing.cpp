
// load balancing spoj

#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    while(n!=-1){
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
        }
        int maxi=INT_MIN;

        if(sum%n==0){
            sum=sum/n;
            int diff=0;
            for(int i=0;i<n;i++){
                diff+=arr[i]-sum;
                maxi=max(maxi,abs(diff));

            }
            cout<<maxi<<endl;
            }
        else
            {
                cout<<"-1"<<endl;
            }
            cin>>n;
    }
}
