 // techiedelight.com/merge-sort/

   long long int merge(long long int arr[],long long int temp[],int left,int mid,int right)
{
    long long int inv_count=0;
    int i,j,k;
    i=left;
    j=mid;
    k=left;
    while((i<=mid-1) && (j<=right)){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else
        {
            temp[k++]=arr[j++];
            inv_count=inv_count+(mid-i);
    }
    }

    while(i<=mid-1){
        temp[k++]=arr[i++];
    }
    while(j<=right){
        temp[k++]=arr[j++];
    }
    for(int i=left;i<=right;i++){
        arr[i]=temp[i];
    }
    return inv_count;

}
    
    long long int mergesort(long long int arr[],int left,int right,long long int temp[]){
        int mid;
        long long int inv_count =0;
        if(right>left){
             mid=(right+left)/2;
             inv_count +=mergesort(arr,left,mid,temp);
             inv_count+=mergesort(arr,mid+1,right,temp);

             inv_count+=merge(arr,temp,left,mid+1,right);

        }
        return inv_count;
    }    
        
        

long long int inversionCount(long long arr[], long long N)
{   long long int temp[N];
    return mergesort(arr,0,N-1,temp);
}