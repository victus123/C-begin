#include<stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    int n,r,ham=0,so_can_tim;
 
    cout << "Nhap vao n: ";
     cin >> n;
 
    for(so_can_tim	=n;n!=0;n=n/10){
         r=n%10;
         ham=ham*10+r;
    }
    if(so_can_tim==ham)
         cout << so_can_tim << " day la so doi xung";
    else
         cout << so_can_tim << " day ko phai la  so doi xung";
 
    return 0;
}
