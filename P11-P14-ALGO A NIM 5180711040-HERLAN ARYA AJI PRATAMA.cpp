#include <iostream>
using namespace::std;
main()
{ char pil;
    int h1=25000,h2=50000,h3=100000,n,t1,t2,t3,td1,td2,td3,ulangi;
    string kode,memb,nama;
    cout<<"member   y/t:";cin>>memb;
    if(memb=="y")
        {cout<<"input kode :";cin>>kode;
            if(kode=="A001"){cout<<"Nama   :Bayu";}
            else if(kode=="A002"){cout<<"Nama   :Irvan";}
            else if(kode=="A003"){cout<<"Nama   :Susiati";}
            else if(kode=="A007"){cout<<"Nama   :Diana";}
            else if(kode=="A008"){cout<<"Nama   :Roni";}
            do{cout<<"\nkode pilihan-berat-harga Gas elpiji";
            cout<<"\n A-3kg-Rp.25000";
            cout<<"\n B-5kg-Rp.50000";
            cout<<"\n C-12kg-Rp.100000";
cout<<"\npilihan :";cin>>pil;
       switch (pil) {
       case 'A':  cout<<"\nGas elpiji 3 KG";cout<<"\nBerapa tabung yang anda beli:";cin>>n;t1=h1*n;
                  cout<<"\ntotal sebelum diskon =";cout<<t1;td1=t1-0.05;cout<<"\nharga sesudah diskon:";cout<<td1;break;


        case 'B':  cout<<"Gas elpiji 5 KG";cout<<"\nBerapa tabung yang anda beli:";cin>>n;t2=h2*n;
                  cout<<"\ntotal sebelum diskon =";cout<<t2;td2=t2-0.05;cout<<"\nharga sesudah diskon:";cout<<td2;break;

        case 'C':  cout<<"Gas elpiji 12 KG";cout<<"\nBerapa tabung yang anda beli:";cin>>n;t3=h3*n;
                  cout<<"\ntotal sebelum diskon =";cout<<t3;td3=t3-0.05;cout<<"\nharga sesudah diskon:";cout<<td3;break;}
                  cout<<"\napakah Data pemesanan anda sudah benar Y/T ";cin>>pil;ulangi++;
}while(pil=='Y');}
    else if(memb=="t")
        {
            cout<<"Inputkan Nama :";cin>>nama;
         do{ cout<<"\nkode pilihan-berat-harga Gas elpiji";
            cout<<"\n A-3kg-Rp.25000";
            cout<<"\n B-5kg-Rp.50000";
            cout<<"\n C-12kg-Rp.100000";
cout<<"\npilihan :";cin>>pil;
       switch (pil) {
       case 'A':  cout<<"\nGas elpiji 3 KG";cout<<"\nBerapa tabung yang anda beli:";cin>>n;t1=h1*n;
                  cout<<"\ntotal  =";cout<<t1;break;


        case 'B':  cout<<"Gas elpiji 5 KG";cout<<"\nBerapa tabung yang anda beli:";cin>>n;t2=h2*n;
                  cout<<"\ntotal  =";cout<<t2;break;

        case 'C':  cout<<"Gas elpiji 12 KG";cout<<"\nBerapa tabung yang anda beli:";cin>>n;t3=h3*n;
                  cout<<"\ntotal  =";cout<<t3;break;}cout<<"\napakah Data pemesanan anda sudah benar Y/T ";cin>>pil;ulangi++;

}while(pil=='Y');}

}
