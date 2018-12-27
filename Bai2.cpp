//ham doc de()
// chon de lam
//docde() ham doc de tu file txt
// doc dong 1
//su dong vong lap for
// nhap cau tra loi theo quy dinh
// ham kiem tra dap an KiemTra(string a,string)
//tao 2 struct de luu diem
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include <vector>
using namespace std;
typedef struct BoDe{// khai bao cau truc 1 cau hoi
	
	string CauHoi;
	string A,B,C;
	string DA;
} BoDe;
typedef struct Nguoi{
	int diem;
	string ten;
}Nguoi;
void LayDe();
void DocDe();
vector <BoDe> dscau;
int main(){
	LayDe();

}
void LayDe(){
			
		ifstream f("de1.txt");
		string s,DA;
		int n; // so luong cau hoi
		getline(f,s); // luu bien vao bien s (kieu string)
		n = atoi(s.c_str()); // doi tu string sang kieu int
		for(int i = 0; i < n; i++)
		{
			getline(f,s); dscau[i].CauHoi=s;
			cout<<s<<endl;// xuat dong cau hoi
			getline(f,s);//lay dong dap an A
			dscau[i].A;
			cout<<s<<endl;
			getline(f,s);
			dscau[i].B;
			cout<<s<<endl;
			getline(f,s);
			dscau[i].C;
			cout<<s<<endl;
			getline(f,s);
			dscau[i].DA;
			cout<<"nhap dap an o day";
			getline(cin,DA);
		}
}

