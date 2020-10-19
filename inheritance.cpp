#include <iostream>
#include <conio.h>
using namespace std;

class C1{
public:
void fun1(){
cout<<"I am fun1";
}
};
class C2: public C1{
public:
void fun1(){
fun1();
cout<<"I am fun2";
}
};
int main(){

C2 example;
example.fun2();

return 0;
}
