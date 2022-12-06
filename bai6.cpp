#include <iostream>
using namespace std;
class Inventory{
    private: 
     int id;
     int soLuong, donGia,totalCost;
    public:
     void setTotalCost(){
        totalCost = soLuong* donGia;
     }
     /*void Nhap(){
         cout<<"Chu y: Nhap du lieu khong am \n";
         cout<<"Nhap so dinh danh: ";cin>>id;
         cout<<"Nhap so luong: ";cin>>soLuong;
         cout<<"Nhap don gia: ";cin>>donGia;
         
     }*/
     Inventory(){
         id = soLuong = donGia=0;
         setTotalCost();
     }
     Inventory(int _id,int gia,int _soLuong){
         id = _id;
         donGia = gia;
         soLuong = _soLuong;
         setTotalCost();
     }
     void setltemNumber(int _id){
         id = _id;
     }
     void  setQuantity(int _soLuong){
         soLuong = _soLuong;
     }
     void setCost(int _gia){
         donGia = _gia;
     }
     int getItemNumber(){
         return id;
     }
     int getQuantity(){
         return soLuong;
     }
     int getCost(){
         return donGia;
     }
     int getTotalCost(){
         return totalCost;
     }
};
int main(){
    int tien,tienconlai;
    Inventory d1(1,1000,200);
    cout<<"Cua hang hien co "<<d1.getQuantity()<<" san pham\n";
    cout<<"Tong tien ban co: ";cin>>tien;
    while (true){
        cout<<"Moi nhap so luong can mua: ";int sl;cin>>sl;
        cout<<"So tien can tra: "<<(sl* d1.getCost())<<endl;
        d1.setQuantity(d1.getQuantity()- sl);
        tienconlai  = tien - d1.getTotalCost();
        cout<<"Tong so hang con lai: "<<d1.getQuantity()<<endl;
        cout<<"Tong tien con lai: "<<tienconlai<<endl;
    }
    
    return 0;

}