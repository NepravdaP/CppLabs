#include <iostream>
#include <math.h>
#include <string>
using namespace std;
    // 2 - Для заданного целого числа N определить цифру а, наиболее часто встречающуюся в этом числе. Сформировать одномерный массив из 5 элемен-тов: a, а2, а3, а4, а5.
int main() {
    cout<<"Input N :"<<endl;
    string n;
    cin>>n;
    int repArr[n.length()];
   
    

    for (int i = 0; i < n.length(); i++)
    {
        int repCounter =0;
        for (int j =i+ 1;j < n.length(); j++)
        {
            
            if (n[i] == n[j]) repCounter++;
            repArr[i] = repCounter;      
            
        }
           
    }
    int maxRepsCounter=0,maxRepsInd;
    
    for (int i = 0; i <n.length(); i++)
    {
        if(repArr[i]>maxRepsCounter) {
            maxRepsCounter= repArr[i];
            maxRepsInd = i;
        }
    }
    
    int a = n[maxRepsInd] - '0';
    int finArray[5];
    cout<<"Resulted array : ";
    for (int i = 0; i < 5; i++)
    {
        finArray[i] =pow(a,i+1);
        cout<<finArray[i]<<",";
    }

    
    
    



    return 1; 
}