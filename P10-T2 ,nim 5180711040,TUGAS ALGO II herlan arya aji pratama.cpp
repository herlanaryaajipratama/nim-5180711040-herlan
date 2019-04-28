#include<conio.h>
#include <iostream>
#include <stdlib.h>
using namespace ::std;
struct data{
char nim[20],nama[20],kelas[20];};
data batas[100];
int a,b,c,d;

void inputdata()
{cout<<"\nJumlah Data Yang Akan diinput : ";cin>>b;
d=0;
for(c=0;c<b;c++){
d=d+1;
cout<<"\nData ke-"<<d<<endl;
cout<<"NIM\t: ";cin>>batas[a].nim;
cout<<"Nama\t: ";cin>>batas[a].nama;
cout<<"Prodi\t: ";cin>>batas[a].kelas;
a++;}system("CLS");}

void lihatdata()
{int i,j;
 cout<<"\n================================Menampilkan Data===============================\n\n";
 cout<<"===============================================================================\n";
 cout<<"||\tNO\t||\tNIM\t||\tNama\t\t||\tProdi\t||\n";
 j=0;
 for(i=0;i<a;i++)
 {j=j+1;
cout<<"===============================================================================\n";
cout<<"||\t"<<j<<"\t||";
cout<<batas[i].nim<<"\t||";
cout<<batas[i].nama<<"\t\t\t||";
cout<<batas[i].kelas<<"\t\t||";cout<<endl;
}
cout<<"=============================================================================== ";
getch();system("CLS");}

void hapusdata()
{int x,y;
 cout<<"Hapus data ke-";cin>>x;
 y=x-1;
 a--;
 for(int i=y;i<a;i++)
 {batas[i]=batas[i+1];}
 system("CLS");
 cout<<"\n\n\n\n\n\n\n\n\n Data ke-"<<x<<" Terhapus                    ";
 getch();system("CLS");
}

void editdata(){
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"NIM\t: ";cin>>batas[l].nim;
cout<<"Nama\t: ";cin>>batas[l].nama;
cout<<"Kelas\t: ";cin>>batas[l].kelas;
lihatdata();
}

int main()
{     int pilih;
 char w;
 cout<<"\t\t\tKETIK ENTER";
 getch();system("CLS");
  awal:
  cout<<" PILIHAN MENU";
  cout<<"\n1. Masukkan data";
  cout<<"\n2. Hapus Data";
  cout<<"\n3. Lihat Data";
  cout<<"\n4. Edit Data";
  cout<<"\n5. Keluar";
  cout<<"\n\nMasukkan Pilihan : ";
  cin>>pilih;
  if(pilih==1)
   {system("CLS");inputdata();goto awal;}
  if(pilih==2)
   {system("CLS");hapusdata();goto awal;}
  if(pilih==3)
   {system("CLS");lihatdata();goto awal;}
  if(pilih==4)
   {system("CLS");editdata();goto awal;}
  if(pilih==5)
   {system("CLS");
cout<<"\n\n\n\n\n\n\n\n                     APAKAH ANDA YAKIN KELUAR DARI PROGRAM INI ?\n\n";
cout<<"                         [Y]/IYA                        [N]/TIDAK                 \n"<<endl;
cout<<"                                         ";cin>>w;
if(w=='y'||w=='Y')
{system("CLS");
cout<<"\n\n\n\n\n                         SELESAI                    ";}
if(w=='n'||w=='N'){system("CLS");goto awal;}}
  else system("CLS");cout<<"Pilihan 1-5";getch();system("CLS");goto awal;}




