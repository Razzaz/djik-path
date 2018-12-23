struct Register{
	char username[50];
	char password[50];
	struct Register* link;
};
struct Register* top = NULL;
void Push(char user[50], char pass[50]){
	struct Register* temp = (struct Register*)malloc(sizeof(struct Register));
	strcpy(temp->username,user);
	strcpy(temp->password,pass);
	top = temp;
	gotoxy(4,14);
}

void Search(char user[50],char pass[50]){
	int flag=0;
	struct Register* temp = top;
	if(temp==NULL){
		system("cls");
		gotoxy(4,12);
		printf("This Account Not Registered!");
		Sleep(1000);
		system("cls");
		tampilanregis();
	}
	while(temp!=NULL){
		if(strcmp(temp->username,user)==0 && (strcmp(temp->password,pass)==0)){
			flag=1;
			break;
		}
		else {
			temp = temp->link;
		}
	}
	if(flag ==1){
		system("cls");
		loading("SIGN IN..",30,15,100);
		system("cls");
		gotoxy(30,15);
		printf("Welcome %s",user);
		Sleep(1500);
		system("cls");
        kerangka();
		header();
		d_mainmenu();
		}
	}

void logout(){
	struct Refister *temp ;
	if(top==NULL){
		printf("  Empty!!");
		sleep(1);
		return;
	}
	else{
	temp =top;
	top = top->link;
	free(temp);
	}

}
void Print(){
	struct Register* temp = top;
	while(temp!=NULL){
		printf("\nWELCOME %s \n",temp->username);
		temp = temp->link;
		}
	printf("\n");
}
void signup(){
	int i =0;
	char ch;
	char USERNAME[50],PASSWORD[50];
	printf("USERNAME : ");
	scanf(" %[^\n]s",&USERNAME);
	gotoxy(4,12);
	printf("PASSWORD : ");
	while(1){
		ch = getch();
		if(ch == ENTER || ch ==TAB){
			PASSWORD[i]='\0';
			break;
		}
		else if (ch == BKSP){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}
		else{
			PASSWORD[i++] =ch;
			printf("* \b");
		}
	}
	Push(USERNAME,PASSWORD);
	printf("Registered !!");
}
void signin(){
	int i =0;
	char ch;
	char USERNAME[50],PASSWORD[50];
	printf("USERNAME : ");
	scanf(" %[^\n]s",&USERNAME);
	gotoxy(4,12);
	printf("PASSWORD : ");
	while(1){
		ch = getch();
		if(ch == ENTER || ch ==TAB){
			PASSWORD[i]='\0';
			break;
		}
		else if (ch == BKSP){
			if(i>0){
				i--;
				printf("\b \b");
			}
		}
		else{
			PASSWORD[i++] =ch;
			printf("* \b");
		}
	}
	Search(USERNAME,PASSWORD);
}
void curser2(int no){
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
        }
        highlight2(no,count);
        ch=getch();
        if(ch=='\r'){
            if(no==2){
                if (count==1){
                	system("cls");
                	gotoxy(4,9);
                	printf("SIGN UP");
                	gotoxy(4,11);
                	signup();
                	Sleep(800);
					system("cls");
				}
                else if(count==2) {
                	system("cls");
                	gotoxy(4,9);
                	printf("SIGN IN");
                	gotoxy(4,11);
                	signin();
				}
            }

        }
    }
}
void highlight2(int no,int count){
    if(no==2){
        gotoxy (2,11);
        printf("   SIGN UP");
        gotoxy (2,12);
        printf("   SIGN IN");
        switch(count){
        case 1:
            gotoxy (2,11);
            printf(" - SIGN UP");
            break;
        case 2:
            gotoxy (2,12);
            printf(" - SIGN IN");
            break;
        }
    }
}
void tampilanregis(){
	int i;
    char ch;
    const char *menu[]= {"   SIGN UP","   SIGN IN"};
    gotoxy(5,9);
    for (i=0; i<=0; i++){
        gotoxy(2,10+i+1);
        printf("%s\n",menu[i]);
    }
    curser2(2);
}
