
#include<iostream>
#include<cstring>

using namespace std;

void toUpper(char word[], int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='A' && ch<='Z'){ //uppercase
            continue;
        }else{  //lowercase
            word[i]=ch-'a'+'A';

        }
    }
}

void tolowerCase(char word[], int n){
    for(int i=0;i<n;i++){
        char ch=word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }else{
            word[i]=ch-'A'+'a';
        }
    }
}

void reverse(char word[], int n){
    int st=0, end=n-1;
    while(st<end){
        swap(word[st], word[end]);
        st++;
        end--;
    }
}

bool isPalindrome(char str[], int n){
    int st=0, end=n-1;

    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"not valid palindrome\n";
            return false;

        }
    }
    cout<<"valid palindrome\n";
    return true;
}
int main(){
   char word[]="ApPle";
   toUpper(word, strlen(word));
   cout<<word<<endl;

   tolowerCase(word, strlen(word));
   cout<<word<<endl;

   reverse(word, strlen(word));
   cout<<"reverse = "<<word<<endl;

   char word1[]="racecar";
   isPalindrome(word1, strlen(word1));

    return 0;
}