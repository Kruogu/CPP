//
// Created by tianya on 2024/7/28.
//
#include "iostream"
using namespace std;

//函数重载的注意事项
//1.引用作为重载的条件
void func(int &a){    //int &a = 10;  不合法
    cout<<"func(int &a 的调用)"<<endl;
}

void func(const int &a){   //const int &a = 10;  合法
    cout<<"func(const int &a 的调用)"<<endl;
}


//2、函数重载碰到默认参数
void func2(int a){
    cout<<"func2(int a)的调用"<<endl;
}

//void func2(int a,int b){
//    cout<<"func2(int a,int b)的调用"<<endl;
//}

void func2(int a,int b=10){
    cout<<"func2(int a,int b=10)的调用"<<endl;
}


int main(){
    int b = 10;
    func(b);

//    调用const两种方法
    func(10);
    const int c = 20;
    func(c);

//    2、函数重载碰到默认参数
//    func2(11);
//    func2(11,12);
//    func2(11); //当函数重载碰到默认参数，出现二义性,报错，尽量避免这种情况

    cout<<"HelloWorld"<<endl;
    return 0;
}
