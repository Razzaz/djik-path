void d_mainmenu(){
    int i;
    char ch;
    const char *menu[]= {"   Display Route","   Navigate Me !!","   Help","   Exit"};
    //system("cls");
    gotoxy(5,9);
    printf("MAIN MENU");
    for (i=0; i<=3; i++){
        gotoxy(2,10+i+1);
        printf("%s\n",menu[i]);
    }
    curser(4);
}
void curser(int no){
    int count=1;
    char ch='0';
    gotoxy(2,11);
    while(1){
        switch(ch){
        case 80:
            count++;
            if (count==no+1) count=1;
            break;
        case 72:
            count--;
            if(count==0) count=no;
            break;
        case 27 :
			system("cls");
			logout();
			loading("Logging Out",30,15,100);
			system("cls");
        	tampilanregis();
        	break;
        }
        highlight(no,count);
        ch=getch();
        if(ch=='\r'){
            if(no==4){
                if (count==1) disp() ;
                else if(count==2) {
                	navigate();
					header();
    				kerangka();
				}
                else if(count==3) help();
                else if (count==4) keluar();
            }

        }
    }
}

void highlight(int no,int count)
{
    if(no==4){
        gotoxy (2,11);
        printf("   Display Route");
        gotoxy (2,12);
        printf("   Navigate Me !!");
        gotoxy (2,13);
        printf("   Help ");
        gotoxy (2,14);
        printf("   Exit ");
        switch(count){
        case 1:
            gotoxy (2,11);
            printf(" - Display Route");
            break;
        case 2:
            gotoxy (2,12);
            printf(" - Navigate Me !!");
            break;
        case 3:
            gotoxy (2,13);
            printf(" - Help");
            break;
        case 4:
            gotoxy (2,14);
            printf(" - Exit");
            break;
        }
    }
}
void disp(){
	system("cls");
	header();
    kerangka();
    map();

}
void navigate (){
	system("cls");
	header();
    kerangka();
    loading("NOW LOADING",50,14,70);
    header();
    kerangka();
    int i;
    char ch;
    const char *menu[]= {"   Display Route","   Navigate Me !!","   Help","   Exit"};
    gotoxy(5,9);
    printf("MAIN MENU");
    for (i=0; i<=3; i++){
        gotoxy(2,10+i+1);
        printf("%s\n",menu[i]);
    }
    
    works();
}
void help(){
	system("cls");
	header();
    kerangka();
    gotoxy(37,9);
    printf("-Use your up and down button to select");
    gotoxy(37,10);
    printf(" the menu");
    gotoxy(37,11);
	printf("-Hit Enter to Process your Instruction");
    gotoxy(37,12);
    printf("-Choose Display Route to View Map ");
    gotoxy(37,13);
    printf("-Choose Navigate Me !! to Find the");
    gotoxy(37,14);
    printf(" Fastest Route Into Your Destination");
    //masukkan fungsi lo disini
}
void keluar(){
	gotoxy(0,26);
    exit(0);
}
