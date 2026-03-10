
//Question3:
//Write aprogram to Find Transpose of aM atrix.
//What is Transpose?
//Transposeofamatrixistheprocessofswappingtherowstocolumns.
//For a2x3 matrix,
//Matrix
//a11 a12 a13 a21 a22 a23
//Transposed Matrix
//a11 a21 a12 a22 a13 a23

#include<iostream>
using namespace std;

int main(){

    int matrix[][3]={
                    {1,2,3},
                    {4,5,6}};
        int n=2, m=3;

        int transpose[m][n]={{0}};

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                transpose[j][i]=matrix[i][j];

            }
        }
      
        //print transpose

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<transpose[i][j]<<" ";
            }

            cout<<endl;

        }



    return 0;
}