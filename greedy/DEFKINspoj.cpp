#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int w,h,n;
        cin>>w>>h>>n;
        if(n==0){
            cout<<(w)*(h)<<endl;
        }
        else{
        vector<int> x(n);
        vector<int> y(n);
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            x[i]=a;
            y[i]=b;

        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        int maxi1=x[0]-1;
        int maxi2=y[0]-1;
       for(int i=1;i<n;i++){
           maxi1=max(maxi1,x[i]-x[i-1]-1);
           maxi2=max(maxi2,y[i]-y[i-1]-1); 
       }
        maxi1=max(maxi1,w-x[n-1]);
        maxi2=max(maxi2,h-y[n-1]);


        cout<<(maxi1)*(maxi2)<<endl;
        
    }
}
}
