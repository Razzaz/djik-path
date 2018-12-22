COORD coord = {0,0};
void gotoxy(int x, int y){
	COORD coord = {0,0}; //set kordinant
    coord.X = x; coord.Y = y; //set kordinat xy
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord); // set kordinat untuk kursor
}
void kerangka(){
    int i;
    char ch;
    gotoxy(5,9);

    const char *menu[]= {"   Display Route","   Navigate Me !!","   Help","   Exit"};
    gotoxy(5,9);
    printf("MAIN MENU");
    for (i=0; i<=3; i++){
        gotoxy(2,10+i+1);
        printf("%s\n",menu[i]);
    }
    gotoxy(3,24);
    printf("TEKAN ESC UNTUK LOG OUT");
    gotoxy(0,0);
    printf("%c",201);
    for(i = 1; i < 78; i++){ // kerangka atas
        gotoxy(i, 0);
        printf("%c",205);
    }
    gotoxy(78,0);
    printf("%c",187);
    for(i = 1; i < 25; i++){ // kerangka sisi kanan
        gotoxy(78, i);
        if(i == 5){
            printf("%c",185);
        }else{
            printf("%c",186);
        }
    }
    gotoxy(78, 25); //kerangka bawah
    printf("%c",188);
    for(i = 77; i > 0; i--){
        gotoxy(i,25);
        if(i == 35){
            printf("%c",202);
        }else{
            printf("%c",205);
        }
    }
    gotoxy(0,25);
    printf("%c",200);
    for(i = 24; i > 0; i--){ // kerangka kiri
        gotoxy(0,i);
        if(i == 5){
            printf("%c",204);
        }else{
            printf("%c",186);
        }
    }
    for(i = 1; i < 78; i++){ // kerangka atas dua
        gotoxy(i,5);
        if(i == 35){
            printf("%c",203);
        }else{
            printf("%c",205);
        }
    }
    for(i = 6; i < 25; i++){//kerangka tengah
        gotoxy(35,i);
        printf("%c",186);
    }
}
void header(){
	gotoxy(30,2);
	printf("DIJKSTRA ALGORITHM");
	gotoxy(14,3);
	printf("HOW TO GET THE FASTEST ROUTE INTO YOUR DESTINATION");
}
