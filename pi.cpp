#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, const char * argv[]) {
    // insert code here...

    int n = 0;
    cout.setf(ios::fixed);        // Display in fixed point notation. For example, display 1e-1 as 0.1
    cout.setf(ios::showpoint); // Always display the decimal point.
    cout.precision(3);         // Set the number of digits to display after the decimal point to 3
    while(n>=0){
        double Sum = 0;
        cout<<"Enter the value of the parameter 'n' in the Leibniz formula (or -1 to quit):"<<endl;
        cin>>n;
        if(n>=0){
            //handle summation
            for(int i=0;i<n+1;i++){
                Sum += pow(-1,i)/(2*i+1);
            }
            //handle term/terms
            if(n==0){
                cout<<"The approximate value of pi using 1 term is: "<<Sum*4<<endl;
            }else{
                cout<<"The approximate value of pi using "<<n+1<<" terms is: "<<Sum*4<<endl;
            }
        }
    }
    return 0;
}

