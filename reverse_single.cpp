#include<iostream>
using namespace std;

void ol(string& s,int en){
    int k=s.length()-1;
    if(en<=0) return;
    swap(s[k-en],s[en]);
    en--;
    ol(s,en);

}
int main(){
    string s;
    cin>> s;
    int k=s.length()-1;
    ol(s,k);
    cout<< "\n" << s << endl;
}