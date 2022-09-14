#include <iostream>
#include <math.h>
#include <string>
using namespace std;
double minMyFunc(double a,double b) {
    return a<b?a:b;
    

}
double maxMyFunc(double a,double b, double c) {
    double acc =0;
    a>b?acc=a:acc=b;
    return acc>c?acc:c;
}
int charCheck(string suspect,char variableName) {
    int eAcc = 0, minusAcc = 0, dotAcc = 0;
    
    for (int i = 0; i < suspect.length(); i++) {
        int eAcc = 0, minusAcc = 0, dotAcc = 0;

        if (suspect[i] == 45) minusAcc++;
        if (suspect[i] == 101 || suspect[i] == 69) eAcc++;
        if (suspect[i] == 46) dotAcc++;
    
        if(dotAcc>1||eAcc>1||minusAcc>2) {
            cout << "Unexpected value in " << variableName << endl;
            return 1;
        }
       
        if (suspect[i] < 45 || suspect[i]>57){
            cout << "Unexpected value in " << variableName << endl;
            return 1;
            
        }
     
        return 0;

    }
     
};
int main()
{   
    int taskNumber = 2;
    switch (taskNumber)
    {
    case(1): {
        double x,y,a,b,z;
        cout<<"Input a,b and z"<<endl;
        cin>>a>>b>>z;
        if(z< a*b) {
            cout<<"\n Selected condition: z<a*b "<<endl;
            x=sqrt(a*a+(a*a*z));
        }
        else {
             cout<<"\n Selected condition: z>=a*b "<<endl;
            x=fabs(sin(z)*sin(z) +fabs(a*b*z));
        }
        y= (a*x + b*x*cos(sqrt(x)))/(x+a*b);
        cout<<" y = "<<y<<endl;
        break;
    }
    case(2): {
        double x,y,z,a,b,fx;
        string aCheck,bCheck,zCheck;
        int fxChoose;
        cout<<"Input a,b and z"<<endl;
        cin>>aCheck>>bCheck>>zCheck;
         if (charCheck(aCheck, 'a')) {
        return 1;
    }
    else if (charCheck(bCheck, 'b')) {
        return 1;

    }
    else if (charCheck(zCheck, 'z')) {
        return 1;
    }
        a=stod(aCheck);
        b=stod(bCheck);
        z=stod(zCheck);
        
        cout<<"Choose f(x) : \n1)2x \n2)x*x \n3)x/3"<<endl;
        cin>>fxChoose;
        switch (fxChoose)
        {
            case(1):{
                cout<<"Choosed f(x)=2x "<<endl;
                fx= 2*x;
                break;
            }
            case(2): {
                 cout<<"Choosed f(x)=x*x "<<endl;
                fx=x*x;
                break;
            }
            case(3): {
                 cout<<"Choosed f(x)=x/3 "<<endl;
                fx=x/3;
                break;
            }
       
            default:{
                cout<<"Unacceptable number"<<endl;
                break;
            }          
        }
        if(z<1) {
            cout<<"Selected condition: z<1"<<endl;
            x= 2+z;

        }
        else {
           cout<<"Selected condition: z>=1"<<endl;
           x= sin(z) * sin(z);

        }
        
        
        
        y= (2*a*(fx)+ b*pow(cos(fx+1),2));

        cout<<"y= "<<y<<endl;
        break;
    } 
    case(3): {
        double x,y,z,m;
        cout<<"Input x,y,z: "<<endl;
        cin>>x>>y>>z;
        if(maxMyFunc(x,y,z)==0) {
            cout<<"Zero in denominator. Change input values"<<endl;
        }
        else{
            m=minMyFunc(x+y,y-z)/maxMyFunc(x,y,z);
            cout<<" m = "<<m<<endl;
        }
        
        
        break;
        }
        
         default:{
        cout<<"Unknown task number";

    }
    }
        
    
    // system("pause")
        
    }
   
    
