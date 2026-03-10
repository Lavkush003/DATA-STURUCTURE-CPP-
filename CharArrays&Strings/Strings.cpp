
#include<iostream>
#include<string>

using namespace std;

int main(){
  string str;
  getline(cin, str);
  cout<<str<<endl;

  //print individual characters

  string str1="apna college";

  for(int i=0;i<str.length(); i++){
    cout<<str[i]<<"-";

  }
  cout<<"\n";

  //for each loop

  for(char ch : str){
    cout<<ch<<",";

  }
  cout<<endl;

  string str2="helloworld";

  // str.substr(startIdx, size)

  cout<<str2.substr(1,5)<<endl;


    return 0;
}