#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<MMsystem.h>
int wrong();
int main()
{
    int a,f;
    int right=100;
    int p=0;
	char playername[20];
	printf("WELCOME TO THE GAME \n-------------------------------------\n kya aap panchwi pas se tej hai \n--------------------------------------------------------\n");
	PlaySound(TEXT("C:\\Users\\Ravi shahi\\OneDrive\\Desktop\\class 5.wav"),NULL,SND_SYNC);	
	printf("-------Rules of the Game.-----------\n\n");
    printf("1.You will Be given 5 questions from Class 1-5.\n");
	printf("2.Select the Class along with subject you Want to Answer.\n");
	printf("3.Your points will be double for every correct answer base Money is Rs.20,000.\n");
	printf("4.For worng answer You will be Disqualified\n");
	printf("5.You can press Q anytime to Exit.\n\n");
	
	
	printf("-----------------------------------------------\n");
	printf("Press S to Start the Game.\n");
	printf("-----------------------------------------------\n\n");
	char s;
	printf("Enter:");
	scanf("%c",&s);
	if(s=='s'||s=='S')
	{
	goto game;
	}
	else{
	goto Quit;
	}
	game:
	{
	PlaySound(TEXT("C:\\Users\\Saket Kejriwal\\OneDrive\\Desktop\\lehro.wav"),NULL,SND_SYNC);
	printf("        ----WELCOME\n");
    printf("        -----TO\n");
	printf("        -----THE\n");
	printf("        -----QUIZ\n\n");
	
	printf("-----------------------------------------------\n");
	printf("Lets Start the Game Kya Aap Pachwi Pass Hai.\n");
	printf("-----------------------------------------------\n\n\n");
	
	printf("Enter Player Name:");
	scanf("%s",&playername);
	printf("Enter Account No:");
	scanf("%d",&f);	
	
	
	
	
	printf("\n\nPlease Select the Option you wanna Answer.\n\n");
	
	do
	{
	p++;
	printf("------------------------------------------------------------------------\n");
	printf("Press 1 for Class 1 GK.\n");
	printf("Press 2 for Class 2 Science.\n");
	printf("Press 3 for Class 3 Social Science.\n");
	printf("Press 4 for Class 4 English.\n");
	printf("Press 5 for Class 5 Computer.\n");
	printf("Press 6 to Quit.\n\n");
	printf("Give Your Choice:");
	scanf("%d",&a);
	printf("------------------------------------------------------------------------\n");
	
	
	switch (a)
	{
	    case 1: 
	    right=right+right;
	    printf("Q.Which animal has Tusks Made of Ivory?\n");
	    int n;
	    printf("1.Goat\n");
	    printf("2.Rabbit\n");
	    printf("3.Monkey\n");
	    printf("4.Elephant\n");
	    printf("Give Your Choice:");
	    scanf("%d",&n);
	    switch(n)
	    {
	     case 1:
	     goto wrong;
	     break;
	     case 2:
	     goto wrong;
	     break;
	     case 3:
	     goto wrong;
	     break;
	     case 4:
	     printf("\n\n----------------You are Right-----------------\n");
	     printf("Mubarak ho Aap Jeet Chuke Hai %d Points.\n\n\n",right);
	     PlaySound(TEXT("C:\\Users\\Saket Kejriwal\\OneDrive\\Desktop\\win @@.wav"),NULL,SND_SYNC);
	    }
	    break;
	    
	    case 2:
	    right=right+right;
        printf("Q.When Pluto is Termed as Dwarf Planet?\n");
	    int k;
	    printf("1.2007\n");
	    printf("2.2008\n");
	    printf("3.2009\n");
	    printf("4.2010\n");
	    printf("5.Dont Know\n");
	    printf("Give your choice:");
	    scanf("%d",&k);
	    switch(k)
	    {
	     case 1:
	     goto wrong;
	     break;
	     case 2:
	     printf("\n\n----------You are right------------\n");
	     printf("%d Points Credited in your Account\n\n\n",right);
	     PlaySound(TEXT("C:\\Users\\Saket Kejriwal\\OneDrive\\Desktop\\win @@.wav"),NULL,SND_SYNC);
	     break;
	     case 3:
	     goto wrong;
	     break;
	     case 4:
	     goto wrong;
	     case 5:
	     printf("I Have Not Studied Class 5\n");
	     printf("Correct Option Is 2\n\n\n");
	    }
        break;

        case 3:
        right=right+right;
        printf("Q.A Person who does Important job to Help the Community is called?\n");
	    int l;
	    printf("1.Community helper\n");
	    printf("2.Caring person\n");
	    printf("3.Sick person\n");
	    printf("4.Loving person\n");
	    printf("Give your choice:");
	    scanf("%d",&l);
	    switch(l)
	    {
	     case 1:
	     printf("\n-------You are right------\n");
	     printf("%d Credited in your Account\n\n\n",right);
	     PlaySound(TEXT("C:\\Users\\Saket Kejriwal\\OneDrive\\Desktop\\win @@.wav"),NULL,SND_SYNC);
	     break;
	     case 2:
	     goto wrong;
	     break;
	     case 3:
	     goto wrong;
	     break;
	     case 4:
	     goto wrong;;
	    }
            break;
            

        case 4:
        	right=right+right;
        printf("Q.John is absent What is Predicate in this Sentence?\n");
	    int z;
	    printf("1.Absent\n");
	    printf("2.Is absent\n");
	    printf("3.John\n");
	    printf("4.None of these\n");
	    printf("Give your choice:");
	    scanf("%d",&z);
	    switch(z)
	    {
	     case 1:
	     goto wrong;;
	     break;
	     case 2:
	     printf("\nYou are Right\n");
	     printf("%d Credited in your Account\n\n\n",right);
	     PlaySound(TEXT("C:\\Users\\Saket Kejriwal\\OneDrive\\Desktop\\win @@.wav"),NULL,SND_SYNC);
	     break;
	     case 3:
	     goto wrong;;
	     break;
	     case 4:
	     goto wrong;
	    
	     
	    }
	    break;
	    case 5:
	    	right=right+right;
	    printf("Q.Name the First Machine that used the Interchangeable Punched Cards to obtain the design Pattern on Clothes?\n");
	    int o;
	    printf("1.Jacquards Loom\n");
	    printf("2.Difference Engine\n");
	    printf("3.Tabulating Machine\n");
	    printf("4.Abacuss\n");
	    printf("Give your choice:");
	    scanf("%d",&o);
	    switch(o)
	    {
	     case 1:
	     goto wrong;
	     break;
	     case 2:
	     goto wrong;
	     break;
	     case 3:
	     printf("\n-----------You are right------------\n");
	     printf("%d Credited in your Account\n\n\n",right);
	     PlaySound(TEXT("C:\\Users\\Saket Kejriwal\\OneDrive\\Desktop\\win @@.wav"),NULL,SND_SYNC);
	     break;
	     case 4:
	     goto wrong;
	     break;
	    }
	    case 6:
	    goto won;
	    break;

        
	    
	}
	
}while(p!=5);

};

 wrong:
    {
    printf("Sorry you are Disqualified\n");
    
 Beep (932,100);Sleep(575);
 Beep (932,100);Sleep(125);
 Beep (932,100);Sleep(125);
 Beep (932,100);Sleep(125);
    }
    Quit:
    {
    printf("%s have Quited your Game %d in your account has been Credited.",playername,right);
    }
    won:
    {
    printf("%s have Completed the Game and %d has been Credited in your account No %d .",playername,right,f);
    }

}


