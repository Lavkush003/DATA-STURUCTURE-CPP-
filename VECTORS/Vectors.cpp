
//Like Dynamic arrays that can resize dynamically at runtime.
//They are stored contiguously in memory.

// vector<int> vec1;
// vector<int> c=vec2={1,2,3,4};
//vector<int> vec3{5, -1};

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    int n=vec.size();

    for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }


    return 0;
}