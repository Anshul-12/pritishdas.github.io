//PROJECT OF LIBRERY MANAGER(C++)
 //(1.ADD BOOKS,2.ADMIN LOGIN,3.USER NAME AND PASSWORD,4.DELETE BOOKS,5.UPDATE BOOKS,6.LIST OF COMPLEATE BOOKS,7.BORROW THE BOOKS OF 5 DAYS OTHERWISE PER DAY 500 FINE CHARGE)
 
 #include<iostream>
 #include<string.h>
 #include<studio.h>
 #include<time.h>
 #include<fstream>
 using namespace std;
 
 int main(int argc,char argv)
 {
 	int outerchoice=0;
 	while(outerchoice!=9)
 	{
 		system("cls");
 		cout<<"\library managment version 1.0 \n\n";
 		cout<<"n1.Amin";
 		cout<<"n2.user";
 		cout<<"n9.exit";
 		cout<<"\n\nEnter your choice:";
 		cin>>outerchice;
 		
 		if(outerchice=1)
 		{
 			char adminUserp[10];
 			char adminPassword[10];
 			
 			system("cls")
 			cout<<"\n -----admin login------";
 			cout<<"\n\n enter username:";
 			cin>>adminuser;
 			cout<<"\n enter password:";
 			cin>>adminpassword;
 			if ((strmp(adminuser,ADMINUSER)==0)&&(strcmp(adminpassword,ADMINPOASSWORD)==))
 			{
 				getchar();
 				getchar();
 				system("cls");
 				int innerchoice=0;
 				while(innerchoice!=9)
 				{
 					cout<<"\n\n admin login is successful !!press any key to confirm..";
 					cout<<"\n1. add books";
 					cout<<"\n2. update books";
 					cout<<"\n3.delete books";
 					cout<<"\n4. list of all books";
 					cout<<"\n9.exit";
 					cout<<"\n\n enter the choice:";
 					cin>>innerchoice;
 					switch(innerchoice)
 					{
 						case1.addbook(); break;
 						case2.updatebook(); break;
 						case3.deletebook(); break;
 						case4.list of all books(); break;
 						default:cout<<"\n\n invalid choice. press any key to confirm..";
 						        getchar();
 					}
 					system("cls");
				 }
			 }
			 else
			 {
			 	cout<<"\n\n error: invalid credential.press any key to continue";
			 	getchar();getchar();
			 }
		 }
		 else if(outer choice==2)
		 {
		 	char studentuser[10];
		 	char studentpassword[10];
		 	system("cls");
		 	cout<<"n-----student login-----";
		 	cout<<"\n\n enter username:";
		 	cin>>studentuser;
		 	cin<<"\ n enter password:";
		 	cin>>student password;
		 	
		 	ifm((strcmp(student user,USER)==0)&&(strcmp(student password,USERPASSWORD)==0))
		 	{
		 		int innerchoice=0;
		 		while(innerchoice!=9)
		 		{
		 			system("cls");
		 			cout<<"\n1. borrow a book";
		 			cout<<"\n2. return a book";
		 			cout<<"\n3. list of all books";
		 			cout<<"\n9. exit";
		 			cout<<"\n\n enter the choice:";
		 			cin>>innerchoice;
		 			
		 			switch(innerchoice)
		 			{
		 				case1.borrow book();break;
		 				case2.return book();break;
		 				case3.list of book();break;
		 				case9.break;
		 				default:cout<<"\n\n error:invalid choice.press any key to continue..";
		 				getchar();getchar();
					 }
				 }
				 system("cls");
			}
			else
			{
				cout<<"\n\n error: invalid credentials.press any key gto continue";
				getchar();getchar();
			}
		 }
	return 0;
		 
    }
    
    int addbook()
    {
    	int bookid;
    	char bookname[20];
    	char bookauthor[20];
    	int year,month,day;
    	
    	time_t t=time(NULL);
    	struct tm tm=*localtime(&t);
    	
    	year=tm.tm_year+1900;
    	month=tm.tm_mon+1;
    	day=tm.tm_mday;
    	
    	system("cls");
        cout<<"\n-----add a new book-----";
        
        cout<<"\n\n enter 4 digit numeric id:";
        cin>>bookid;
        cout<<"\n enter book name:";
        cin>>bookname;
        cout<<"\n enter book author:";
        cin<<bookauthor;
        
        char filename[20];
        sprintf(filename,"%d%s","bookid",".dat");
        
        fstream file(filename);
        file<<bookname<<"\n";
        file<<bookauthor<<"\n";
        file<<year<<"\n";
        file<<month<<"\n";
        file<<day<<"\n";
        
        file.close();
        
        cout<<"\n file saved successfully!!";
        getrchar();getchar();
        }
            int deletebook(){
		    }
			int updatebook(){
			}
			int borrowbook(){
			}
			int returnbook(){
			}
			int adminlopgin(){
			}
			int userlogin(){
			}
			int userlogin(){
			}
}

int addbook();
int deletebook();
int updatebook();
int list of all books();
int boirrowbook();
int returnbook();
int adminlogin();
int userlogin();

