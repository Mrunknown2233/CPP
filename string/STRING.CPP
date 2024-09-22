#include <iostream.h>
#include <conio.h>
#include <stdlib.h>


#define NULL 0
/*This program will only take input without whitespaces*/
class String
{
	private:
		char *str;
	public:
		/*====Constructors====*/
		String()
		{
			str=(char *) malloc(sizeof(char)*16);
			if(str==0)
			{
				cout<<"\nMemory allocation failed ";
				exit(10);
			}
			
		}
		String(char *s)
		{
			int len=0;
			while(*(s+len)!='\0')
				len++;

			str=(char*)malloc(((sizeof(char)*len)+16));
			if(str==0)
			{
				cout<<"\nMemory allocation failed ";
				exit(10);
			}

			for(int i=0;i<len;i++)
				*(str+i)= *(s+i);
			*(str+i)='\0';

		}
		~String()
		{
			cout<<"\nDeallocating the space for the object ";
			free(str);
		}
	      /*====Methods====*/
		void setstring()
		{

			cout<<"\nEnter the string u want";
			cin>>str;
		}
		void getstring()
		{
			cout<<"\nThe string is "<<str;
		}

		int length()
		{
			/*Functions containg while arre not
			  exapnded inline */
			int len=0;
			while(*(str+len)!='\0')
				len++;
		     //	cout<<"\nThe length of the string is "<<len;

			return len;
		}
		char charAt(int index)
		{
			return (index>length()|| index<0)? '\0':*(str+index);
			/*
			if(index>length())
			{
				cout<<"\nInvalid index ";
				return '\0';
			}
			else
				return *(str+index);
			*/
		}
		void toLowerCase()
		{
			//asci of a = 97
			//ascii of z = 122

			int len=length(),i;
			/*Functions containg while arre not
			  exapnded inline */
			  for(i=0;i<len;i++)
			  {
				if(*(str+i)>='A' && *(str+i)<='Z')
					*(str+i)= *(str+i)+32;
			  }

		}
		void toUpperCase()
		{
			//asci of a = 97
			//ascii of z = 122

			int len=length(),i;
			/*Functions containg while arre not
			  exapnded inline */
			  for(i=0;i<len;i++)
			  {
				
				if(*(str+i)>='a' && *(str+i)<='z')
					*(str+i)= *(str+i)-32;
			  }

		}



};


void main()
{

	clrscr();
	String s1,s2("Soumya");
	int len,index;
	char ch;
	s1.setstring();
	s1.getstring();


	len=s1.length();
	cout<<"\nThe length of the string is "<<len;


	cout<<"\nEnter the index ";
	cin>>index;
	ch=s1.charAt(index);
	if(ch)
		cout<<"\nThe char at index("<<index<<") is "<<ch;
	else
		cout<<"\nInvalid position";

	s1.toLowerCase();
	s1.getstring();


	s1.toUpperCase();
	s1.getstring();
	getch();
}