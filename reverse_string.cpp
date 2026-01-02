#include<iostream>
using namespace std;

void ol(string& s,int st,int en){
    if(st>en) return;
    swap(s[st],s[en]);
    st++;
    en--;
    ol(s,st,en);

}
int main(){
    string s;
    cin>> s;
    int k=s.length()-1;
    ol(s,0,k);
    cout<< "\n" << s << endl;
}