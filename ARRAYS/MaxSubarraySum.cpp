
#include<iostream>
#include<climits>
using namespace std;


//Brute Force Approach

void maxSubarraySum1(int *arr, int n){ //O(n*3)
    int maxSum=INT_MIN;

    for(int start=0; start<n; start++){
        for(int end=start; end<n; end++){
            int currSum=0;
            for(int i=start; i<=end; i++){
                currSum+=arr[i];
            }
            cout<<currSum<<",";
            maxSum=max(maxSum, currSum);
            
        }
        cout<<endl;
    }
    cout<<"maximum subarray sum is: "<<maxSum<<endl;
}

void maxSubarraySum2(int *arr, int n){ //O(n*2)
    int maxSum=INT_MIN;

    for(int start=0; start<n; start++){ //start=2
        int currSum=0;
        for(int end=start; end<n; end++){
            currSum+=arr[end];
            maxSum=max(maxSum, currSum);
        }


    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}

//Kadane's Algorithms for maximum subarray sum

void maxSubarraySum3(int *arr, int n){
    int maxSum=INT_MIN;
    int currSum=0;

    for(int i=0;i<n;i++){
        currSum+=arr[i];
        maxSum=max(currSum, maxSum);
        if(currSum<0){
            currSum=0;
        }
    }
    cout<<"Maximum subarray sum = "<<maxSum<<endl;
}

int main(){
     int arr[6]={2,-3, 6, -5, 4, 2};
     int n=sizeof(arr)/sizeof(int);
   maxSubarraySum1(arr, 6);

   maxSubarraySum2(arr, 6);
     maxSubarraySum3(arr, n);
   

    return 0;
}