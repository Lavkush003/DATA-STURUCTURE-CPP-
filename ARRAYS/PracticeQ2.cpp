
//Question2:
//Printoutthesumofthenumbersinthesecondrowofthe“nums”array.
//Example:
//Input-
//int nums[][]={{1,4,9},{11,4,3},{2,2,3}};
//Output-18

#include<iostream>
using namespace std;

int main(){
 int nums[][3]={{1,4,9}, {11,4,3}, {2,2,3}};
int n=3,m=3;
int sum=0;
for(int i=1;i<2;i++){
    for(int j=0;j<=2;j++){

        sum+=nums[1][j];

    }
}
cout<<"sum = "<<sum<<endl;

    return 0;
}