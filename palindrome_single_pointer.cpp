#include<iostream>
using namespace std;
bool checkPalindrome(string &s,int en){
    int k=s.length()-1;
    if(en<=0){
        return true;
    }
    if(s[k-en]!=s[en]){
        return false;
    }
    en--;
    checkPalindrome(s,en);
}
int main(){
    string s;
    cin >> s;
    int k=s.length()-1;
    if(checkPalindrome(s,k)){
        cout<< s << " is a Palindrome"<< endl;
    }
    else{
        cout<< s << " is not a Palindrome"<< endl;
    }

}