//
// Created by tianya on 2024/11/8.
//

#include "iostream"
using namespace std;

//模板的局限性
//模板并不是万能的,有些特定数据类型，需要用具体化方式做特殊实现

class Person{
public:
    Person(string name,int age){
        this->m_Name = name;
        this->m_Age = age;
    }
    //姓名
    string m_Name;
    //年龄
    int m_Age;
};


//对比两个数据是否相等函数
template<class T>
bool myCompare(T &a,T &b){//compare  比较
    if(a == b){
        return true;
    } else{
        return false;
    }
}

//利用具体化Person的版本实现代码，具体化优先调用
template<>bool myCompare(Person &p1,Person &p2){
//bool myCompare(Person &p1,Person &p2){//这样也行
    if(p1.m_Name==p2.m_Name && p1.m_Age==p2.m_Age){
        return true;
    } else{
        return false;
    }
}


void test01(){
    int a = 10;
    int b = 20;
    bool ret = myCompare(a,b);
    if(ret) {
        cout<<"两个数相等"<<endl;
    }
    else {
        cout<<"两个数不相等"<<endl;
    }
}

void test02(){
    Person p1("Tom",10);
    Person p2("Tom",10);
    bool ret = myCompare(p1,p2);//直接报错 ，类不能比较
//    第一种解决方案：重载 == 运算符，太麻烦了，不建议使用
//    第二种解决方案：重载函数模板,优先调用重载
    if(ret)
        cout<<"p1 = p2"<<endl;
    else
        cout<<"p1 != p2"<<endl;
}
int main(){
//    test01();
    test02();
    cout<<"HelloWorld"<<endl;
    return 0;
}
