#include <iostream>
#include <math.h>

using namespace std;

int main () {
    int taskNumber = 2;
    switch (taskNumber)
    {
    case (1): {
        double a,b,h;
        cout<<"Input a,b and h"<<endl;
        cin>>a>>b>>h;
        int valueCounter = 1;
        double minAcc = INFINITY,maxAcc = -INFINITY;
        for (double x = a; x <= b; x+=h)
        {
            double y = -(log(fabs(2*sin(x/2))));
            if(y>maxAcc) maxAcc = y;
            if(y<minAcc) minAcc = y;
            cout<<valueCounter<<"  "<<x<<"   "<<y<<endl;
            valueCounter++;
        }
        cout<<"Lowest y value is "<<minAcc<<endl;
        cout<<"Hightest y value is "<<maxAcc<<endl;
        
        break;
    }
    case(2): {
        double a,b,h;
        int n;
        cout <<"Input a,b,h and n"<<endl;
        cin>>a>>b>>h>>n;
        cout<<"№    x    y        S(x)          |Y(x)-S(x)|"<<endl;
        int valueCounter = 1;

        for (double x = a; x <= b; x+=h)
        {
            double y=x*atan(x) - log(sqrt(1+x*x));
            double s= 0;
            for (int k = 1; k <=n; k++)
            {
               s+=pow(-1,k+1)*(pow(x,2*k)/(2*k*(2*k-1)));
            }
            cout<<valueCounter<<"  "<<x<<"  "<<y<<"  "<<s<<"  "<<fabs(y-s)<<endl;


        }
        
        break;
    }   
        
    
    default:{
        cout<<"Incorrect task number";
        break;
    }
        
    }


    return 1;
}