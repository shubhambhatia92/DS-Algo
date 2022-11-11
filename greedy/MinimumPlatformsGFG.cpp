// { Driver Code Starts
// Program to find minimum number of platforms
// required on a railway station
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


int findPlatform(int arr[], int dep[], int n)
{
    sort(dep,dep+n);
    sort(arr,arr+n);
    int i=1;
    int j=0;
    int plat=1;
    int maxi=1;
    while(i<n and j<n){
        
     if(dep[j]>=arr[i]){
         plat++;
         i++;
     }
     else
     { if(dep[j]<arr[i]){
         plat--;
         j++;
         
     }
        
    }
    maxi=max(maxi,plat);
}
return maxi;
}

// { Driver Code Starts.
// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--) 
    {
        int n;
        cin>>n;
        int arr[n];
        int dep[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        for(int j=0;j<n;j++){
            cin>>dep[j];
        }
    cout <<findPlatform(arr, dep, n)<<endl;
    } 
   return 0;
}  // } Driver Code Ends