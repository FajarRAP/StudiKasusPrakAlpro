#include <iostream>
using namespace std;

struct data{
  int nim_struk[100];
  string nama_struk[100];
};

class StudiKasus{
  private:
    int nim[100], temp, cari, indeks, n;
    string nama[100], temp2;
    bool ketemu=false;
  public:
    void isi_nilai(){
      cout<<"Masukkan jumlah data\t: ";
      cin>>n;
      for(int a=0; a<n; a++){
        cin.ignore();
        cout<<"Masukkan nama ke-"<<a+1<<"\t: "; 
        getline(cin,nama[a]);
        
      }
      for(int a=0; a<n; a++){
        cout<<"Masukkan nim ke-"<<a+1<<"\t: ";
        cin>>nim[a];
      }
    }
 
    void sorting_ascending(){
      for(int a=0; a<n; a++){
        for(int b=a+1; b<n; b++){
          if(nim[a]>nim[b]){
            temp=nim[a];
            nim[a]=nim[b];
            nim[b]=temp;
            
            temp2=nama[a];
            nama[a]=nama[b];
            nama[b]=temp2;            
          }
        }
      }
    }

    void cari_data(){
      cout<<"Cari : ";
      cin>>cari;
      for(int a=0; a<n; a++){
        if(cari==nim[a]){
          ketemu=true;
          indeks=a;
        }
      }
      if(ketemu){
        cout<<"Nama\t\tNIM"<<endl;
        cout<<nama[indeks]<<" \t\t"<<nim[indeks];
      }else{
        cout<<"Dah bayar SPP belum? kok ga ada di sini!!! Bayarlah miskin kau";
      }
    }

    void cetak(){
      cout<<"Nama\t\tNIM"<<endl;
      for(int a=0; a<n; a++){
        cout<<nama[a]<<" \t\t"; 
        cout<<nim[a]<<" "<<endl;
      }
    }
};


int main() { 
  StudiKasus P7;
  P7.isi_nilai();
  cout<<endl;
  P7.sorting_ascending();
  cout<<endl;
  P7.cetak();
  cout<<endl;
  P7.cari_data();
  cout<<endl;
}