
// Declaration of arrays

//a>  int array[50];
//b> int array[50]={1,2,3};
//c> int array[]={1,2,3};

//size of an array=>
// int size= sizeof(array)/sizeof(int or type of array i. e float, char)
//size=sizeof(array)/sizeof(int)


//Basic array creating

// #include<iostream>
// using namespace std;

// int main(){
    // int arr[5]={7,5,3,2,1};
    // int n=sizeof(arr)/sizeof(int);

    // for(int i=0;i<n;i++){
    //     cout<<arr[i]<<" "; //idx =0,1,2,3,4

    // }
    // cout<<endl;


// Take input array and print the output

// int n;
// cout<<"enter length of array: ";
// cin>>n;

// int arr[n];

// for(int i=0;i<n;i++){
//     cin>>arr[i];
// }

// for(int i=0;i<n;i++){
//     cout<<arr[i]<<",";

// }
// cout<<endl;

//     return 0;
// }


//Find Largest  and smallest number in array=>

// #include<iostream>
// using namespace std;

// int main(){
//    int n;
//    cout<<"enter size of array: ";
//    cin>>n;

//    int arr[n];
//    for(int i=0;i<n;i++){
//     cin>>arr[i];
//    }

//    int max=arr[0];
//    int min=arr[0];
//    for(int i=0;i<n;i++){
//     if(arr[i]>max){
//         max=arr[i];
//     }
//     if(arr[i]<min){
//         min=arr[i];
//     }
//    }

//    cout<<"largest ="<<max<<endl;
//    cout<<"smallest ="<<min<<endl;


//     return 0;
// }


//Arrays are passed by reference

#include<iostream>
using namespace std;

void printArr(int nums[], int n){
    for(int i=0;i<n;i++){
        cout<<nums[i]<<",";
    }
    cout<<endl;
}
int main(){

    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(int);
    cout<<"array size = "<<sizeof(arr)<<endl;

    printArr(arr, n);

    return 0;
}