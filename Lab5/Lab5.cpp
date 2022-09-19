#include <iostream>
using namespace std;

int main() {

    // Написать программу по обработке двухмерного динамического массива. Размеры массива n, m и значения его элементов вводятся с клавиатуры.
    int level = 2;
    cout<<"Input matrix size(n m):"<<endl; 
    int n,m;
    cin>>n>>m;
    double arr[n][m];
    cout<<"Input matrix(a11,a12,...,a1m a21,a22,..,a2m,..anm) "<<endl;
    for (int i = 0; i <n ; i++)
    {
      for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Sucsccesfull, your matrix is: "<<endl;

     for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<" ";    
        }
        cout<<"\n";
    }

    switch (level)
    {
    case (1): {

        // 2 - Определить количество столбцов, не содержащих ни одного нулевого элемента.

        int columnCounter = 0;
        for (int i = 0; i <n ; i++) {
            int zeroElCounter = 0;
            for (int j = 0; j < m; j++) {
                if(arr[j][i] == 0) {
                    zeroElCounter++;
                    break;
                }
            }
            if(zeroElCounter == 0 ) columnCounter++;     
        }
        cout<<"Number of full non-zero columns is: "<<columnCounter<<endl;
        break;
    }
    case(2): {

        // 2 - Из матрицы размером n x m получить вектор B, присвоив его k-му эле-менту значение 1, если элементы k-й строки матрицы упорядочены по убыва-нию, иначе 0.

        int b[n];
        for (int i = 0; i < n; i++) {
            bool isDescending = true;
            
            for (int j = 0; j < m; j++) {
                if(j == m-1) break;
                if(arr[i][j]>arr[i][j+1]) {
                    isDescending = false;
                    break;
                } 
            
            }
            isDescending?b[i] = 0:b[i] = 1;
            
        }
        cout<<"Vector B is: [";
        for (int i = 0; i <n; i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<"]";
        
        
        break;
    }
        
       
    
    default:
        break;
    }
   



    return 1;
}