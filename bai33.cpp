//ham doc de()
// chon de lam
//docde() ham doc de tu file txt
// doc dong 1
//su dong vong lap for
// nhap cau tra loi theo quy dinh
// ham kiem tra dap an KiemTra(string a,string)
//tao struct bode
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

void LayDe();
void DocDe();
int KiemTra (string A,string B);
void LuuDiem(string a,int diem);
void Xuat();
vector <BoDe> dscau;
int main(){
	LayDe();

}
void LayDe(){
		int diem =0;	
		ifstream f("de1.txt");
		string s,DA;
		BoDe bd1;
		int n; // so luong cau hoi
		getline(f,s); // luu bien vao bien s (kieu string)
		n = atoi(s.c_str()); // doi tu string sang kieu int
		for(int i = 0; i < n; i++)
		{
			getline(f,s); bd1.CauHoi=s;
			cout<<s<<endl;// xuat dong cau hoi
			getline(f,s);//lay dong dap an A
			//dscau[i].A;
			bd1.A=s;
			cout<<s<<endl;
			getline(f,s);
			//dscau[i].B;
			bd1.B=s;
			cout<<s<<endl;
			getline(f,s);
			//dscau[i].C;
			bd1.C=s;
			cout<<s<<endl;
			getline(f,s);
			//dscau[i].DA;
			bd1.DA = s;
			cout<<"nhap dap an o day";
			getline(cin,DA);
			diem += KiemTra(bd1.DA,DA);// cong diem tung cau hoi
				
			dscau.push_back(bd1);//sau khi xuat push_back gan vao vector
		}
		f.close();
		//goi file luu diem
		string ten;
		cout <<  endl<< "nhap ten de luu diem: " ;
		getline(cin, ten);// nhap ten nguoi choi
		LuuDiem(ten,diem);
		
		cout<<" nhap 1 de xem diem nguoi choi"<<endl;
		int m;
		cin>>m;
		if( m== 1)
			Xuat();	
		
}


int KiemTra (string A,string B){//ham kiem tra chuoi dap an va dap an cua nguoi choi
	if(A.compare(B)==0)//ham so sanh chuoi string
	 return 2;
	else
		return 0; 
	}
void LuuDiem(string a,int diem){// ham luu diem cua tung nguoi choi
	fstream f;
	f.open("luudiem.txt", ios::out | ios::app);// mo file luudiem de  luu diem nguoi choi (ios::app luu lien tiep khong bi ghi de)
	f << a << "\t" << diem << "\n";// luu a la ten, diem
	f.close();
}

void Xuat(){// ham xuat diem va ten cau cac nguoi choi
	string s;
		ifstream f3("luudiem.txt");
		// vong lap
		getline(f3, s);// lay ten va diem tu file luudiem
		do{
			cout << s << endl;
			getline(f3, s);
		}while(s.compare("") != 0);// neu dong cuoi cung trong file txt khong co gi het thi ket thuc viet doc
		f3.close();
}
