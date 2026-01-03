#include<iostream>
using namespace std;
int power(int base,int exponent){
    if(exponent==0) return 1;
    if(exponent==1) return base;
    if(exponent &1){
        return base*power(base,exponent/2)*power(base,exponent/2);
    }
    else{
        return power(base,exponent/2)*power(base,exponent/2);
    }
}
int main(){
    int base;
    cin >> base;
    int expo;
    cin >> expo;
    int as=power(base,expo);
    cout << as << endl;

}