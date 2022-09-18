#include <iostream>
#include <math.h>
//  #include <time.h>

using namespace std;
double fRand(double fMin, double fMax)
{
    // srand(time(NULL));
    double f = (double)rand() / RAND_MAX;
    return fMin + f * (fMax - fMin);
}

int main() {
    int n;
    cout<<"Enter array size:"<<endl;
    cin>>n;
    double arr[n];
    cout<<"Input array values manually(1)/randomize(2)"<<endl;
    int arrFilling;
    cin>>arrFilling;
    if(arrFilling==1) {
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
    }
    else {
        cout<<"Choose value limits(min,max)"<<endl;
        double minRand, maxRand;
        cin>>minRand>>maxRand;
        cout<<"Sourse array: ";
        for (int i = 0; i < n; i++)
        {
            arr[i]=ceil(fRand(minRand,maxRand)*100)/100;
            cout<<arr[i]<<" ";
        }
        

    }

    
    // CHOOSE TASK
    int taskNumber = 2;
    // CHOOSE TASK


    switch (taskNumber)
    {
    case (1): {
        // 1 - Упорядочить по возрастанию элементы массива, расположенные меж-ду максимальным и минимальным элементами.
        double minEl = INFINITY;
        double maxEl = -INFINITY;
        int minElInd,maxElInd;

        for (int i = 0; i < n; i++){
            if(arr[i]<minEl) {
                minEl=arr[i];
                minElInd=i;
            }
            if (arr[i]>maxEl)
            {
                maxEl=arr[i];
                maxElInd=i;
            }
            }
            if(minElInd ==maxElInd) {
                cout<<"\nElements are equal!!"<<endl;
                break;
            }
            for (int i = minElInd<maxElInd?minElInd:maxElInd; i < (minElInd<maxElInd?maxElInd:minElInd-1); i++)
            {
                for (int j = (minElInd<maxElInd?minElInd:maxElInd+1); j <(minElInd<maxElInd?maxElInd:minElInd+1) ; j++)
                    if(arr[i]<arr[j]){
                        double r =arr[i];
                        arr[i] = arr[j];
                        arr[j]=r;

                    }
                {

                    
                }
                
            }
            cout<<"\nFinal array: ";
             for (int i = 0; i < n; i++)
        {
            
            cout<<arr[i]<<" ";
        }
            
        
        

        break;
    }
    case(2): {
        //2 - Вычислить сумму элементов массива, расположенных между первым и последним нулевыми элементами.
        int firstZeroInd=0,lastZeroInd=0;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 0) {
                firstZeroInd = i;
                break;
                }
        }
        for (int i = firstZeroInd + 1; i < n; i++)
        {
            if (arr[i]==0) lastZeroInd=i;
            
            
        }
        
        
        if(firstZeroInd == lastZeroInd) {
            cout<<"Unacceptable value. Not enough zero elements"<<endl;
            break;
        }
        double sum = 0;
            for (int i = firstZeroInd; i < lastZeroInd; i++)
            {
                sum+=arr[i];
            }
        cout<<"\nAnswer is "<<sum<<endl;
        break;
    }
    case(3): {
        //3 - Вычислить сумму элементов массива, расположенных между первым и последним положительными элементами.
        int firstPosInd = 0, lastPosInd = 0;
         for (int i = 0; i < n; i++)
        {
            if(arr[i] > 0) {
                firstPosInd = i;
                break;
                }
        }
        for (int i = firstPosInd + 1; i < n; i++)
        {
            if (arr[i] > 0) lastPosInd=i;
            
            
        }
        
        
        if(firstPosInd == lastPosInd) {
            cout<<"Unacceptable value. Not enough positive elements"<<endl;
            break;
        }
        double sum = 0;
            for (int i = firstPosInd; i < lastPosInd; i++)
            {
                sum+=arr[i];
            }
        cout<<"\nAnswer is "<<sum<<endl;
        break;
    }
    
    //TODO

    //How to delete element from array???
     
    // case(4): {
    //     //4 - Удалить из введенного одномерного массива все отрицательные элементы, не вводя новый массив.
    //     for (int i = 0; i < n; i++)
    //     {
    //         if(arr[i] < 0) {
    //             delete arr[i];
    //         }
    //     }
        
    // }

    case(5): {
        // 5 - Вычислить произведение элементов массива, расположенных между первым и вторым нулевыми элементами.

        int firstZeroInd=0,secondZeroInd=0;

        for (int i = 0; i < n; i++)
        {
            if(arr[i] == 0) {
                firstZeroInd = i;
                break;
                }
        }
        for (int i = firstZeroInd + 1; i < n; i++)
        {
            if (arr[i]==0) {
                secondZeroInd=i;
                break;
                }
            
            
        }
        
        
        if(firstZeroInd == secondZeroInd) {
            cout<<"Unacceptable value. Not enough zero elements"<<endl;
            break;
        }
        double sum = 1;
            for (int i = firstZeroInd; i < secondZeroInd; i++)
            {
                sum*=arr[i];
            }
        cout<<"\nAnswer is "<<sum<<endl;
        break;
    }

    default:
        break;
    }




    return 1;
}