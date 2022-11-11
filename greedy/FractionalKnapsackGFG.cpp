// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    bool cmp(struct Item a1,struct Item a2){
        double x=(double)a1.value/(double)a1.weight;
        double y=(double)a2.value/(double)a2.weight;
        return x>y;
        
    }
    //Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, struct Item arr[], int n)
    {
        
        sort(arr, arr + n, cmp);
        for(int i=0;i<n;i++){
            cout<<arr[i].value<<" "<<arr[i].weight<<endl;
        }
        double f=0.0;
        return f;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends