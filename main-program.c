#include "Library.h"
int loading(char load[25],int x,int y,int speed);//tampilkan loading awal tentukan jenis loading,kordinat dan speed time
void kerangka();//tampilkan kerangka menu
void welcome();//tampilkan welcome
void header();//tampilkan header
void d_mainmenu();//tampilan menu utama
void disp() ; // fungsi menampilkan rute
void navigate(); // fungsi mencari rute tercepat
void help(); // fungsi help
void keluar();//fungsi exit
void tampilanregis();//menampilkan interface registrasi l@alu mainmenu
void gotoxy(int x,int y);//atur kordinat

int main(){
	loading("Loading",30,15,250);
	welcome();
	tampilanregis();
	gotoxy(0,30);
}
