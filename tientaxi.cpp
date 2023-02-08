#include <iostream>
using namespace std;
int main(){
	float x, tongtien=0;
	cout << "Nhap so km di duoc: ";
	cin >> x;
	if(x <= 1)
		tongtien = x * 15000;
	else
		if(x <= 5)
			tongtien = 15000 + (x-1)*13500;
		else
			if(x <= 120)
				tongtien = 15000 + 4*13500 + (x-5)*11000;
			else
				if(x > 120)
					tongtien = (15000 + 4*13500 + (x-5)*11000)*0.9;
	cout << "Tong tien = " << tongtien;
			
		
	
	
	
	
	return 0;
}