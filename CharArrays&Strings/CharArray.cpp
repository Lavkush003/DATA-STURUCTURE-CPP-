
// #include<iostream>
// #include<string>
//Include<cstrting>
// using namespace std;

// int main(){

//       char arr[5]={'c', 'o', 'd', 'e', '\0'};
//       cout<<arr<<endl;

//       //char array legth

//       char work[50]={'h', 'e', 'l', 'l', 'o', '\0'};
//       cout<<strlen(work)<<endl;


//     return 0;
// }


//cin.getline()=> character input

#include<iostream>
#include<cstring>
using namespace std;

int main(){

char sentence[30];
cin.getline(sentence, 30);
cout<<"your word was: "<<sentence<<endl;
cout<<"length : "<<strlen(sentence)<<endl;

    return 0;
}