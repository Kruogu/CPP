//
// Created by tianya on 2024/11/17.
//
#include "iostream"
using namespace std;

//string�����ɾ��

//string& insert(int pps,const char*s);        //�����ַ���
//string& insert(int pos,const string& str);   //�����ַ���
//string& insert(int pos,int n,char c);        //��ָ��λ�ò���n���ַ�
//string& erase(int pos,int n npos);           //ɾ����Pos��ʼ��n���ַ�

void test01(){
    string str = "hello";
//    ����
    str.insert(1,"111");
    cout <<"str = "<<str<<endl;

//    ɾ��
    str.erase(1,3);
    cout <<"str = "<<str<<endl;
}
int main(){
    test01();
    cout<<"HelloWorld"<<endl;
    return 0;
}
