//
//  main.cpp
//  温度转换
//
//  Created by Thbego on 13-9-23.
//  Copyright (c) 2013年 thbego. All rights reserved.
//
#include<iostream>
using namespace std;

double change(double F)
{
    return (F-32)*5/9;
}

double rechange(double C)
{
    return C*9/5+32;
}


int main()
{   int x;
    cout<<"要将华氏温度转换为摄氏温度请输入1 \n要将设施温度转换为华氏温度请输入2 \n";
    cin>>x;
    switch(x)
    {
        case 1:{
            double F;
            cout<<"输入要转换的华氏温度值：";
            cin>>F;
            cout<<"转换后的摄氏温度为："<<change(F)<<endl;break; }
        case 2:{
            double C;
            cout<<"输入要转换的摄氏温度值：";
            cin>>C;
            cout<<"转换后的华氏温度为："<<change(C)<<endl;}
    }
}