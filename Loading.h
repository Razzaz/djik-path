int loading(char load[25],int x,int y,int speed){
	int a,b,c;
	gotoxy(x,y);
	printf("%s",load);
	gotoxy(x,y+1);
	for(a =1;a<=14;a++){
		for(b=0;b<=550000*speed;b++){//speed dalam 1000ms
		}
		printf("%c",219);
	}
	system("cls");
}
void sleep(long int interval){ // untuk delay print{
	int i;
	for(i=0;i<interval*1000;i++);
	}
void welcome(){
	int i,j;
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	printf("                                %c",201);//print pojok kiri atas
    for(i=0;i<11;i++) {				//print atas
  		printf("%c",205);sleep(20000);
    }
 	printf("%c\n",187);sleep(20000);//print pojok kanan atas
 	printf("                                %c  WELCOME  ",186);sleep(20000);//print kiri 
  	printf("%c\n",186);sleep(20000);//print kanan
 	printf("                                %c",200);//print pojok kiri bawah
    for(j=0;j<11;j++)  {
    	printf("%c",205);sleep(20000);
    } 
    printf("%c\n",188);//print pojok kanan bawah
    sleep(500000);
    system("cls");
}
