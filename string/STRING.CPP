#include <iostream.h>
#include <conio.h>
#include <stdlib.h>


#define NULL 0
/*This program will only take input without whitespaces*/
class String
{
	private:
		char *str;
		int totalSize;
		enum whichConstructor
		{
			First,Second
		};
		whichConstructor which;
		String *resize(int times)
		{
			int newsize=times*this->capacity();
			char *str2=(char *) malloc(newsize+1);
			if(str2==NULL)
			{
				cout<<"\nMemory Insufficeint ";
				exit(10);
			}


				//copying the older str in new one
				int i = 0;


				for(i = 0; i<this->length();i++)
					*(str2+i)=*(this->str + i);
				str2[this->length()]='\0';
				free(this->str);
				this->str=str2;
				totalSize=newsize;
				cout<<"\nBhai resize hogaya ";
				return this;


		}

	public:
		/*====Constructors====*/
		String()
		{
			str=(char *) malloc(sizeof(char)*16);


			if(str==NULL)
			{
				cout<<"\nMemory allocation failed ";
				exit(10);
			}

			totalSize=16;
		}
		String(char *s)
		{
			int len=0;
			while(*(s+len)!='\0')
				len++;

			str=(char*)malloc(((sizeof(char)*len)+16));
			if(str==NULL)
			{
				cout<<"\nMemory allocation failed ";
				exit(10);
			}


			for(int i=0;i<len;i++)
				*(str+i)= *(s+i);
			*(str+i)='\0';
			totalSize=length()+16;

		}
		~String()
		{

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

		int capacity()
		{
			return totalSize;
		}

		String substring(int startIndex)
		{
			char *str2;
			int len=(this->length()-startIndex+1);
			str2=(char*) malloc(len);
			int i,j=0;
			len=length();
			for(i=startIndex;i<len;i++)
				str2[j++]=this->str[i];
			str2[j]='\0';
			cout<<"\nStr2 : "<<str2;
			String s1(str2);
			free(str2);
			return s1;

		}
		String substring(int startIndex,int endIndex)
		{
			if(endIndex>length())
			{
				cout<<"\nInvalid Index";
				return NULL;
			}
			else
			{
				int i=0,j;
				int subLength=(endIndex-startIndex);
				char *str2=(char*) malloc(subLength+1);
				/*
				cout<<"\nSubIenght = "<<subLength;
				cout<<"\nStartIndex= "<<startIndex;
				cout<<"\nEndIndex = "<<endIndex;
				//cout<<"\nStr = "<<str;
				*/
				for(i=startIndex;i<=endIndex;i++)
				{
					str2[i-startIndex]=this->str[i];

				    //	cout<<"\n"<<s.str+i;
				}
				//add 1 if u want endIndex should be inclusive
				str2[endIndex-startIndex]='\0';
			      //	cout<<"\nStr 2 :"<<str2;
				String s1(str2);
				free(str2);

				return s1;
			}

		}
		String *append(String anotherString)
		{


			if((capacity()-length())<=anotherString.length())
				this->resize(2);
			int currentLen=this->length();
			for(int i = 0; i<anotherString.length();i++)
				this->str[currentLen+i]=anotherString.str[i];
			this->str[currentLen+anotherString.length()]='\0';

			return this;

		}





};


void main()
{


	clrscr();
	String s1,s2("ABCDEFGHIJ"),s3;
	int len,index;
	char ch;

	s1.setstring();
	s1.getstring();
//	s2.getstring();

	/*
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
	*/
    //  cout<<s1.capacity();
    // 	cout<<s2.capacity();

	int startIndex,endIndex;

	cout<<"\nEnter startIndex: ";
	cin>>startIndex;
	if(startIndex<0 || startIndex>s1.length())
		cout<<"\nInvalid index ";
	else
	{
		s3=s1.substring(startIndex);
		s3.getstring();
	}
	if(startIndex<0|| startIndex>s2.length())
		cout<<"\nIndex invalid";
	else
	{
	   //	s3=s2.substring(startIndex);
	     //	s3.getstring();
	}

	cout<<"\nEnter the startIndex and the EndIndex";
	cin>>startIndex>>endIndex;
	if(startIndex<0||endIndex<0||startIndex>endIndex)
		cout<<"\nInvalid Index";

	else
	{
		s3=s1.substring(startIndex,endIndex);
		cout<<"\nHello";
		s3.getstring();
	}
       /*
	cout<<"\nOld capacity : "<<s1.capacity();
	s1.append(s2);
	cout<<"\nnew capacity "<<s1.capacity();
	s1.getstring();
	*/
	getch();
}
