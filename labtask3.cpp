#include <iostream>
using namespace std;
void Value(int a) {
    cout<<"Inside call By Value function:"<<endl;
    cout<<"Original value a: "<<a<<endl;
    a+=20;
    cout<<"Modified value a:"<<a<<endl;
}
void Reference(int &b){
    cout<<"Inside call By Reference function:"<<endl;
    cout<<"Original value b: "<<b<<endl;
    b+=30;
    cout<<"Modified value b: "<<b<<endl;
}
int main(){

    int c=10;
    int d=15;
    cout<<"Before call By the Value function:"<<endl;
    cout<<"Original value of c:"<<c<<endl;
    Value(c);
    cout<<endl<<"After call By the Value function:"<<endl;
    cout<<"Value of c : " <<c<<endl;
    cout<<endl<<"Before call By Reference function:"<<endl;
    cout<<"Original value of d:"<<d<<endl;
    Reference(d);
    cout<<endl<<"After call By Reference function:"<<endl;
    cout<<"Modified value of d:"<<d<<endl;
}
