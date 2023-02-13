#include <iostream>
using namespace std;
void nhap(float a[], int n){
	for(int i = 0; i < n; i++)
		cin >> a[i];
}

void xuat(float a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < 0){
			cout << a[i] << " ";
		}
	}
}

void ptumax(float a[], int n){
	float max = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] > max){
			max = a[i];
		}
	}for(int i = 0; i < n; i++){
		if(a[i] == max){
			cout << i;
		}
	}
}


void ptumin(float a[], int n){
	float min = a[0];
	for(int i = 1; i < n; i++){
		if(a[i] < min){
			min = a[i];
		}
	}for(int i = 0; i < n; i++){
		if(a[i] == min){
			cout << i;
		}
	}
}

int PTuAmDauTien(float a[], int n){
	for(int i = 0; i < n; i++){
		if(a[i] < 0) 
			return a[i];	
	}return -1;	
}

void TongSoDuong(float a[], int n){
	float tong = 0;
	for(int i = 0; i < n; i++){
		if(a[i] > 0){
			tong = tong + a[i];
		}
	}cout << tong;
} 

void SapXep(float a[], int n){
	for(int i = 0; i < n-1; i++){
		for(int j = i + 1; j < n; j++){
				if(a[i] > a[j]){
					int tam = a[i];
					a[i] = a[j];
					a[j] = tam;
				}
			}
	}
	for(int i = 0; i < n-1; i++){
		if(a[i] > 0){
			for(int j = i + 1; j < n; j++){
				if(a[i] < a[j]){
					int tam = a[i];
					a[i] = a[j];
					a[j] = tam;		
				}
			}
		}
	}
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
}


void Xoa(float a[], int &n){
	for(int i = n-1; i >= 0; i--){
		if(i % 2 == 1){
			for(int j = i; j < n - 1; j++){
				a[j] = a[j + 1];
			}
			n--;
		}
	}
}

int main(){
	int n, x;
	cout << "Nhap so phan tu cua mang: ";
	cin >> n;
	float a[n];
	cout << "Nhap mang: ";
	nhap(a, n);
	cout << "cac phan tu am trong mang la: ";
	xuat(a, n);
	cout << "\n" <<"vi tri phan tu lon nhat trong mang: ";
	ptumax(a, n);
	cout << "\n" << "Vi tri phan tu nho nhat trong mang: ";
	ptumin(a, n);
	cout << "\n" << "Phan tu am dau tien: ";
	cout << PTuAmDauTien(a, n);
	cout << "\n" << "Tong cac so duong trong mang: ";
	TongSoDuong(a, n);
	cout << "\n" << "Tang dan so am va giam dan so duong: ";
	SapXep(a, n);
	
	Xoa(a, n);
	cout << "\n" <<"Mang sau khi xoa: ";
	for(int i = 0; i < n; i++){
		cout << a[i] << " ";
	} 
	
	return 0;
}
