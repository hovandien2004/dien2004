#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "Nhap nam : ";
	cin >> n;
	if(n % 4 == 0){
		if(n % 100 == 0){		
			if(n % 400){
				cout << "Nam Nhuan";
			}else{
				cout << "Nam khong nhuan";
			}		
		}else{
			cout << "Nam nhuan";
		}
	}else{
		cout << "Nam Khong nhuan";
	}	
	return 0;
}
