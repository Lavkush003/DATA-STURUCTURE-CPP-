
// 2D Arrays

//int student[2][3]={{100,100,100}, {75,80,85}};

#include<iostream>
using namespace std;



int main(){

    // int students[3][3]={ {100,100,100},
    //                      {85, 74,89},
    //                      {63,72,65}};

    // cout<<students[1][1]<<endl;

    //Input & output in 2D arrays

    int arr[3][4];
    int n=3, m=4;
//input
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }
// output

for(int i=0;i<n;i++){
    for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}
