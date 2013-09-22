//
//  main.cpp
//  digui
//
//  Created by Thbego on 13-9-22.
//  Copyright (c) 2013年 thbego. All rights reserved.
//

#include <iostream>
using namespace std;
int f( int x,int y)
{
    if (y==0)
        return 1;
    else
        return x*f(x,y-1);
        
        }

int main()
{
    printf("请分别输入x，y的值");
    int m,n;
    cin>>m; cin>>n;
    printf("x的y次幂=%d",f(m,n));
    return 0;
}