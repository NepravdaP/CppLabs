#include <iostream>
#include <math.h>
#include <string>
using namespace std;
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
    // const double PI = 3.1415926;
        //double x = -4.5, y = 0.75e-4, z = 0.845e2, u;
    string xCheck, yCheck, zCheck;
    cout << "Input x,y,z" << endl;
    cin >> xCheck >> yCheck >> zCheck;
    // cout << "x = " << x << " y = " << y << " z = " << z << endl;
    if (charCheck(xCheck, 'x')) {
        return 1;
    }
    else if (charCheck(yCheck, 'y')) {
        return 1;

    }
    else if (charCheck(zCheck, 'z')) {
        return 1;
    }
    else {
        double x = stod(xCheck), y = stod(yCheck), z = stod(zCheck), u;

        u = ((pow((8 + pow(fabs(x - y), 2) + 1), (1. / 3)) / (pow(x, 2) + pow(y, 2) + 2))) - exp(fabs(x - y)) * pow((pow(tan(z), 2) + 1), x);
        if ((x * x + y * y + 2) == 0 || ((3 - z * z) / 5 == 0)) {

            cout << "Zero in denominator!! Change input values" << endl;
        }
        else {
            cout << u << endl;

        }
    }
        
        
        
        

        

            

    
    
    


    
    return 1;
    
}