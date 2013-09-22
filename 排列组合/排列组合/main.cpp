//
//  main.cpp
//  排列组合
//
//  Created by Thbego on 13-9-23.
//  Copyright (c) 2013年 thbego. All rights reserved.
//
#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;
    
    cin>>m>>n;
    int a=m;
    int b=n;
    
    
    {
        for(int i=m-1;i>0;i--)
        {
            
            a=a*(a-1);
                        }
                            }

    
        for(int j=n;j>0;j--)
        {
            
            b=b*(b-1);
                        }
    int Cnm=a/b;
    printf("结果为%d",Cnm);
           
    return 0;
}



