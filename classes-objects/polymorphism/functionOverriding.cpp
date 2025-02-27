#include <cstring>
#include <iostream>
#include <strings.h>
using namespace std;
class PayMethod
{
	public:	
			void processPayment(double amount)
			{
				cout<<"\nPaying "<<amount<<" throught Cash (Default)";
			}
};


class CreditCard : public PayMethod
{
	private:
			char cardHolder[50],cardNumber[17],cvv[4];
	
	public:
			CreditCard(char *ch,char *cn, char *cvv)
			{
				strcpy(cardHolder,ch);
				strcpy(cardNumber,cn);
				strcpy(this->cvv,cvv);
			}

			void processPayment(char *cardNumber, char *cardHolder, char *cvv, double amount)
			{
				if(strcmp(this->cardNumber,cardNumber)==0)
				{
					if(strcasecmp(this->cardHolder,cardHolder)==0)
					{
						if(strcmp(this->cvv,cvv)==0)
							cout<<"\nPayment of "<<amount<<" processed throught cc";
						else
							cout<<"\nWrong cvv";
					}
					else
						cout<<"\nCard chori ka hai ";

				}
				else
					cout<<"\nCard number sahi se dekh";
			}

			void display()
			{
				cout<<"\n Card Number : "<<cardNumber;
				cout<<"\nCard Holder : "<<cardHolder;
				cout<<"\nCVV : "<<cvv;
			}
};
int main()
{
	PayMethod pm;
	pm.processPayment(10000);
	//here the size of the char array inlcudes len of the content plus 1 for null character
	char ch[100] = "SL";
	char cardNO[100] = "1234567890123456";
	char cvv[4] = "877";
	CreditCard cc(ch,cardNO,cvv);
	cc.processPayment(cardNO,ch,cvv,24.11);


	return 0;
}
