#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>


#define NULL 0
#define NEG_INF -32768
/*This program will only take input without whitespaces*/
class String
{
	private:
		char *str;
		int totalSize;

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
		int  length(char *str)
		{
			int i=0;
			while(*(str+i)!='\0')
				i++;

			return i;
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
			gets(str);
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
			{
				cout<<"\nThe capacity of the string is insufficeint";
				cout<<"\nEnter how many times u want to multiply the capacity";
				int x;
				cin>>x;
				this->resize(x);
			}
			int currentLen=this->length();
			for(int i = 0; i<anotherString.length();i++)
				this->str[currentLen+i]=anotherString.str[i];
			this->str[currentLen+anotherString.length()]='\0';

			return this;

		}

	char *intToChar(int num)
	{

		if(num<0)
			num = -num;
		char *str2= (char*) malloc(100);
		int i;

		 for(i=0;num>0;i++,num/=10)
			*(str2+i)='0'+(num%10);
		 str2[i] = '\0';
	       //	 cout<<"==\n"<<str2;
		  char temp;
		 //the no in str2 are in rev order
		 //thereofre reversing it.
		//i acting as len for str2

		for(int j=0;j<(i)/2;j++)
		{
			temp=*(str2+j);
			*(str2+j)= *(str2+i-1-j);
			*(str2+i-1-j)=temp;
		 }


		 return str2;
	}
	String * append(int num)
	{

		if(num<0)
			num = -num;
		char *str2= (char*) malloc(100);
		str2=intToChar(num);
		/*
		int i;

		 for(i=0;num>0;i++,num/=10)
			*(str2+i)='0'+(num%10);
		 s-tr2[i] = '\0';
		  char temp;
		 //the no in str2 are in rev order
		 //thereofre reversing it.
		//i acting as len for str2

		for(int j=0;j<(i-1)/2;j++)
		{
			temp=*(str2+j);
			*(str2+j)= *(str2+i-1-j);
			*(str2+i-1-j)=temp;
		 }


		 cout<<"\nOg string: "<<str2;
		 */

		 String t(str2);
		 free(str2);

		 this->append(t);
		return this;

	 }
	 /*Get the float one checked from sir */
	 String *append(float num,int radixPoint)
	 {

		int integerPart;
		float fractionalPart;

		integerPart=(int)num;
	      //	cout<<integerPart;

		char *str2=(char*) malloc(32766+1);
		if(str2==NULL)
		{
			cout<<"\nMemory allocation failed";
			return NULL;
		}
		str2=intToChar(integerPart);

		int len=0;
		while(str2[len]!='\0')
			len++;
		if(radixPoint>0)
		{
			str2[len++]='.';
			str2[len]='\0';

		    //	cout<<"\n=="<<str2;

			fractionalPart=(num-integerPart);
		    //	cout<<"\n"<<fractionalPart;

		      //	integerPart=fractionalPart*10;
		       //	cout<<"\n=="<<integerPart;

		for(int i=0;i<radixPoint;i++)
		{
			fractionalPart*=10;
			integerPart=fractionalPart;
			str2[i+len]='0'+integerPart;
			fractionalPart-=integerPart;

		}
		str2[i+len]='\0';
		cout<<"\nNew==="<<str2;
		}
		String temp(str2);
		free(str2);
		this->append(temp);
	      return this;
	 }
	 String *insert(String s,int index)
	 {
		int len=this->length();
		int lenForNewString=s.length();

		cout<<"\nLen= "<<len<<"\nLen2 = "<<lenForNewString;

		if(lenForNewString>=(this->capacity()-len))
		{
			int x;
			cout<<"\nEnter the no of times u want to rezie the capacity";
			cin>>x;
			resize(x);
		}

		//for shifting

		for(int i=len-1;i>=index;i--)
			this->str[i+lenForNewString] = this->str[i];
		this->str[len+lenForNewString]='\0';

		//inserting
		for(i=0;i<lenForNewString;i++)
			this->str[i+index]=s.str[i];
		cout<<"\nNew string = "<<this->str;

		return this;
	 }
		int indexOf(char key)
		{
			int i,len=length();
			for(i=0;i<len;i++)
			{
				if(key==*(str+i))
					return i;
			}
			return NEG_INF;

		}
		int cmpstr(char *str,char *str2)
		{
			int len1=length(str),len2=length(str2);
			int len;
			if(len1>len2)
				len=len1;
			else
				len=len2;
			for(int i =0;i<len;i++)
			{
					return str[i]-str2[i];

			}

			return 0;
		}
		int indexOf(char key,int index)
		{
			int i,len=length();
			for(i=index;i<len;i++)
			{
				if(key==*(str+i))
					return i;
			}
			return NEG_INF;
		}
		int indexOf(char *s)
		{
			int i,len=length(),len2=length(s);
			for(i=0;i<len;i++)
			{
					int j=0;
					while(j<len2 && str[i+j]==s[j])
						j++;

					if(j==len2)
						return i;

			}
			return NEG_INF;

		}
		int indexOf(char *s,int x)
		{
			int i,len=length(),len2=length(s);
			for(i=x;i<len;i++)
			{
					int j=0;
					while(j<len2 && str[i+j]==s[j])
						j++;

					if(j==len2)
						return i;

			}
			return NEG_INF;

		}

};
//end

void main()
{
    clrscr();


    String s1;
    String s2("ABCDEFGHI");
    String s3("QWERty");


    s1.setstring();
    s1.getstring();


    cout << "\nLength of s1: " << s1.length() << endl;


    int index;
    cout << "\nEnter index to get character: ";
    cin >> index;
    char character = s1.charAt(index);
    cout << "\nCharacter at index " << index << ": " << (character ? character : ' ') << endl;


    s1.toLowerCase();
    cout << "\nLowercase s1: ";
    s1.getstring();

    s1.toUpperCase();
    cout << "\nUppercase s1: ";
    s1.getstring();

    // Test capacity
    cout << "\nCapacity of s1: " << s1.capacity() << endl;
    cout << "\nCapacity of s2: " << s2.capacity() << endl;

    // Test substring
    int startIndex, endIndex;
    cout << "\nEnter start index for substring: ";
    cin >> startIndex;
    String sub1 = s1.substring(startIndex);
    sub1.getstring();

    cout << "\nEnter start and end index for substring: ";
    cin >> startIndex >> endIndex;
    String sub2 = s1.substring(startIndex, endIndex);
    sub2.getstring();


    cout << "\nAppending s3 to s1";
    s1.append(s3);
    s1.getstring();


    int num;
    cout << "\nEnter number to append: ";
    cin >> num;
    s1.append(num);
    s1.getstring();

/*
    float floatnum;
    int radixPoint;
    cout << "\nEnter float number to append: ";
    cin >> floatnum;
    cout << "\nEnter number of decimal places: ";
    cin >> radixPoint;
    s1.append(floatnum, radixPoint);
    s1.getstring();
  */
    cout << "\nEnter index to insert s2 into s1: ";
    cin >> index;
    s1.insert(s2, index);
    s1.getstring();


    char key;
    cout<<"\nEnter the char u want to search";
    cin>>key;

    index = s1.indexOf(key);
    if(index==NEG_INF)
	cout<<"\nNOt found";
    else
	cout<<"\nFound";

    cout<<"\nEnter the index from which u want to start searching ";
    cin>>index;
    index = s1.indexOf(key,index);
    if(index==NEG_INF)
	cout<<"\nNOt found";
    else
	cout<<"\nFound";

    char s[100];
    cout<<"\nEnter the string u want to search ";
    cin>>s;
    int value= s1.indexOf(s);
    if(value!=NEG_INF)
	cout<<"\nThe starting index of "<<s<<" is "<<value;
    else
	cout<<"\nThe string( "<<s<<") is not found";


    cout<<"\nEnter the index ";
    cin>>index;
    value= s1.indexOf(s,index);
    if(value!=NEG_INF)
	cout<<"\nThe starting index of "<<s<<" is "<<value;
    else
	cout<<"\nThe string( "<<s<<") is not found";



    getch();
}
