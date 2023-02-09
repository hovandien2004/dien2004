#include <iostream>
#include<math.h>
using namespace std;
int main(){
    double a,b,c,delta;
    cout << "Nhap vao 3 so a, b, c: ";
    cin >> a >> b >> c;
    if(a==0)
    {
        if(b==0)
            {
                if(c==0)
                    cout << "Phuong trinh co vo so nghiem";
                else
                    cout << "Phuong trinh vo nghiem";
            }
        else
            cout << "Phuong trinh co nghiem duy nhat x1 = x2 = " << -c/b;
    }
    else
    {
        delta=b*b-4*a*c;
        if (delta<0)
            cout << "Phuong trinh vo nghiem";
        else{
            cout << "x1=" << (-b+sqrt(delta))/(2*a) << endl;
			cout << "x2= " << (-b-sqrt(delta))/(2*a); 
		
		}
			
    }    
  
}


