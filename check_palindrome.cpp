#include<iostream>
using namespace std;
bool checkPalindrome(string &s,int st,int en){
    if(st>en){
        return true;
    }
    if(s[st]!=s[en]){
        return false;
    }
    st++;
    en--;
    checkPalindrome(s,st,en);
}
int main(){
    string s;
    cin >> s;
    int k=s.length()-1;
    if(checkPalindrome(s,0,k)){
        cout<< s << " is a Palindrome"<< endl;
    }
    else{
        cout<< s << " is not a Palindrome"<< endl;
    }

}