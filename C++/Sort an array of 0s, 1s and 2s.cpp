#include<bits/stdc++.h>
using namespace std;
#define lld long long int 

void sort012(int arr[],int n)
{
   int temp[3]={0};//we will apply count sort so its the storing array

//traversing over the array and will increase the suitable index value
   for(int i=0;i<n;i++)
   {
    if(arr[i]==0)
    {
       temp[0]++;
    }
    else if(arr[i]==1)
    {
        temp[1]++;
    }
    else
    {
        temp[2]++;
    }
   }
 

// storing the 0's . 1's and 2's in temp array as given 
for(int i=0;i<n;i++){
   
   // checking every count of 0's, 1's and 2's
   // then putting it equal to the array (arr) created
   // and decrementing count
    if(temp[0]){
        arr[i]=0;
        temp[0]--;
    }
    
    else if(temp[1]){
        arr[i]=1;
        temp[1]--;
    }
    
    else{
        arr[i]=2;
        temp[2]--;
    }
}
}


int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    sort012(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
