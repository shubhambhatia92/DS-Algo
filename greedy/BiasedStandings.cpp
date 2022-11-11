//Biased Standings spoj
#include <bits/stdc++.h>
using namespace std;
bool compare(pair<string,long long int> a,pair<string,long long int> b){
    return a.second<b.second;
}

int main() {
    long long int t;
    cin >>t;
    while(t--){
        long long int n;
        cin >>n ;
        vector<pair<string,long long int>>v;
        for(int i=0;i<n;i++){
            string a;
            long long int b;
            cin>>a>>b;
            v.push_back(make_pair(a,b));
        }
         sort(v.begin(),v.end(),compare);
        long long int k=1;
        long long int sum=0;
        for(auto it:v){
            sum+=abs(k-it.second);
            k++;
        }
            
        cout<<sum<<endl;    
        
        
        
    }
}
