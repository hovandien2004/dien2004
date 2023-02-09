#include <iostream>
using namespace std;
void nhapmangsothuc(float a[], int n){	
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
}
void xuatmangsothuc(float a[], int n){
		for(int i = 0; i < n; i++){
			
			cout << a[i] << " ";
		}
		
}

int timvitrimax(float a[], int n, int max){
	int max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > a[0])
			max = a[i];
	}if(a[i] == max){
		return i;
	}return -1;
	

}
int main(){
	int n;
	float a[n];
	cout << "Nhap mang: ";
	cin >> n;
	nhapmangsothuc(a, n);
	cout << "xuat mang: ";
	xuatmangsothuc(a, n);
	timvitrimax(a, n, max);

	return 0;
}

