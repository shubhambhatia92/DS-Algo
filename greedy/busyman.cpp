// busyman spoj

#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int,int> a,pair<int,int> b){
    return a.second<b.second;
}

int main() {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >>n ;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),compare);
        
            int c=1;
            int a=v[0].first;
            int b=v[0].second;
            for(int j=1;j<n;j++){
                if(v[j].first>=b){
                    c++;
                    a=v[j].first;
                    b=v[j].second;
                }
            }
            
        
        cout<<c<<endl;
        
    }
}
