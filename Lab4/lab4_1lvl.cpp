#include <iostream>
#include <math.h>
// TODO 
// fix conditions with values BETWEEN (i+1)
using namespace std;

int main() {
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    double arr[n];
    cout<<"Input array elements divided by \"Space\""<<endl;
    for (int i = 0; i <n; i++)
    {
       cin>>arr[i];
    }
    cout<<"Array: ";
    for (int i = 0; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }


    // CHOOSE TASK
    int taskNumber = 8;
    // CHOOSE TASK


    switch (taskNumber)
    {
    case (1): {
    //1 - Среднее арифметическое положительных элементов массива.
    int quantity = 0;
    double sumPositive = 0;

    for (int i = 0; i < n; i++)
    {
        if(arr[i]>0){
            quantity++;
            sumPositive+=arr[i];
        }
        
    }
    cout<<"\nAnswer is  "<<sumPositive/quantity<<endl;
    break;
    }
    case(2): {

        //2 - Произведение элементов, расположенных после наибольшего элемента.
        double maxAcc = -INFINITY;
        int maxInd = 0;

        for (int i = 0; i < n; i++)
        {
            if(arr[i]>maxAcc) {
                maxAcc=arr[i];
                maxInd=i;
            }
        }
        double multiplyEls=1;
        for (int i = maxInd+1; i < n; i++)
        {
            multiplyEls*=arr[i];
        }
        cout<<"\nAnswer is "<<multiplyEls<<endl;
        break;
        
        
    

    }   
    case(3): {
       //3 - Сумму элементов массива, расположенных до последнего положительного элемента 
       int lastPosInd;
        
        for (int i = 0; i < n; i++) {
            if(arr[i]>0) lastPosInd = i;
    
        }
        double sum=0;
        for (int i = 0; i < lastPosInd; i++)
        {
        sum+=arr[i];
        }
        cout<<"\nAnswer is  "<<sum<<endl;

       break;
    }  
    case(4): {
        //4 - Сумму элементов, расположенных до наименьшего элемента.
        double minAcc = +INFINITY;
        int lastMinInd;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<minAcc) {
                minAcc=arr[i];
                lastMinInd=i;
            }
        }
        double sum=0;
        for (int i = 0; i < lastMinInd; i++)
        {
           sum+=arr[i];
        }
        cout<<"\nAnswer is "<<sum<<endl;
        

        break;

    }
    case(5): {
        //5 - Среднее арифметическое отрицательных элементов массива.
        double sumNegative = 0;
        int negativeCounter = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i]<0)
            {
                sumNegative+=arr[i];
                negativeCounter++;
            }
            
        }
        cout<<"Answer is "<<sumNegative/negativeCounter<<endl;

        

        break;
    }
    case(6): {
        //6 - Сумму дробных частей элементов массива.
        double sum =0;
         for(int i = 0;i<n;i++) {
             sum+= fmod(arr[i],1); 
         }
         cout<<"\nAnswer is "<<sum<<endl;
         break;
    }
    case(7): {
        //7 - Сумму элементов массива, расположенных до минимального элемента.
        double minAcc= INFINITY;
        int minElInd;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]<minAcc) {
                minAcc= arr[i];
                minElInd = i;
            }

        }
        double sum = 0;
        for (int i = 0; i < minElInd; i++)
        {
            sum+= arr[i];
        }
        cout<<"\nAnswer is "<<sum<<endl;
        
        break;
    }
    case(8): {
         //8 - Сумму целых частей элементов массива, расположенных после последнего отрицательного элемента.
            int lastNegativeInd;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]<0) lastNegativeInd= i;
            }
            int sum = 0;
            for (int i = 0; i <lastNegativeInd; i++)
            {
                sum+= floor(arr[i]);
            }
            cout<<"\nAnswer is "<<sum<<endl;
            
            
         break;
    }
    case(9): {
        //9 - Сумму элементов массива, расположенных после последнего элемента, равного нулю.
        int lastZeroInd;
        
        for (int i = 0; i < n; i++) {
            if(arr[i]==0) lastZeroInd = i;
    
        }
        double sum=0;
        for (int i = 0; i < lastZeroInd; i++)
        {
        sum+=arr[i];
        }
        cout<<"\nAnswer is  "<<sum<<endl;
        break;
    }
       
    
    default:
        break;
    }
    
    
        





    // system("pause");
   
    return 1;
}