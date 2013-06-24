#include<iostream>
#include<string.h>
#include<algorithm>
#include<math.h>

#define PI 3.14159265

using namespace std;

int convert(char c){
    int con=int(c);

    if(con>=65 && con<=90)
       con=con-55;
    else
        con=con-'0';

    return con;
}

int toDecimal(char num[50]){
   int i=0,sum=0,rem,counter=0,acc=1;
   char r;

     counter=strlen(num);


     counter--;

     for(int i=0;i<strlen(num);i++){
         acc=1;
         rem=convert(num[i]);

         if(counter!=0){
            for(int j=1;j<=counter;j++)
                acc*=36;
        }
        else
            acc=1;

        sum+=(rem*acc);

        //cout<<"sum"<<sum<<endl;
        counter--;


    }
   // cout<<sum<<endl;
    return sum;
}


int addition(int a,int b){
  return (a+b);
}

int subtraction(int a,int b){
  return (a-b);
}

int multipilcation(int a,int b){
  return (a*b);
}

int division(int a,int b){
  return (a/b);
}

float fact(int i)
{
    float fac;

    if(i==1)
        return 1;
    else{
        fac=i*fact(i-1);
        return fac;
    }
}


void toThirtysix(int answer){
    int r,i=0;
    char n[40];
    char ch[]={'0','1','2','3','4','5','6','7','8','9',
                'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
     while(answer>0){
           r=answer%36;
           //cout<<"r:"<<r<<endl;
           n[i]=ch[r];
           //cout<<"n:"<<n[i]<<endl;
           i++;
           //cout<<"i:"<<i<<endl;
           answer=answer/36;

      }

    for(int j=0;j<i;j++){
      //cout<<"priinting the final sum"<<endl;
      cout<<n[j];
    }
}



int main()
{
    char num[50],num2[50];
    float result;
    int choice,n1,n2,sum,sub,mul,div;
    char r;



     cout<<"Enter the code for the operations to be performed:"<<endl;
     cout<<"1) Addition"<<endl;
     cout<<"2) Subtraction"<<endl;
     cout<<"3) Division"<<endl;
     cout<<"4) Multiplication"<<endl;
     cout<<"5) Sine"<<endl;
     cout<<"6) Cosine"<<endl;
     cout<<"7) Tangent"<<endl;
     cout<<"8) Square root"<<endl;
     cout<<"9) Inverse"<<endl;
     cout<<"10) Square"<<endl;
     cout<<"11) Factorial"<<endl;


     cin>>choice;

     switch(choice){
                case 1:
                        cout<<"Enter the first number:"<<endl;
                        cin>>num;
                        cout<<"Enter the second number"<<endl;
                        cin>>num2;

                        n1= toDecimal(num);
                        n2= toDecimal(num2);

                       sum=addition(n1,n2);
                      // cout<<sum<<endl;
                       toThirtysix(sum);
                       break;
                case 2:
                     cout<<"Enter the first number:"<<endl;
                     cin>>num;
                     cout<<"Enter the second number"<<endl;
                     cin>>num2;

                     n1= toDecimal(num);
                     n2= toDecimal(num2);
                       sub=subtraction(n1,n2);
                       toThirtysix(sub);
                       break;
                case 3:
                         cout<<"Enter the first number:"<<endl;
                         cin>>num;
                         cout<<"Enter the second number"<<endl;
                         cin>>num2;

                         n1= toDecimal(num);
                         n2= toDecimal(num2);

                         mul=multipilcation(n1,n2);
                         toThirtysix(mul);

                         break;
                case 4:
                         cout<<"Enter the first number:"<<endl;
                         cin>>num;
                         cout<<"Enter the second number"<<endl;
                         cin>>num2;

                         n1= toDecimal(num);
                         n2= toDecimal(num2);

                         division(n1,n2);
                         toThirtysix(div);

                         break;
                case 5:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);
                        result = sin (n1*PI/180);
                        cout<<"The result of the sine is:"<<result<<endl;

                        break;
                case 6:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);
                        result = cos (n1*PI/180);
                        cout<<"The result of the cosine is:"<<result<<endl;

                        break;
                case 7:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);
                        result = tan (n1*PI/180);
                        cout<<"The result of the tangent is:"<<result<<endl;

                        break;
                case 8:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);
                        if(n1>=0){
                           result = sqrt(n1);
                           cout<<"The result of the square root is:"<<result<<endl;
                         }
                         else
                             cout<<"Imaginary"<<endl;

                        break;
                case 9:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);
                        if(n1!=0)
                          cout<<"The result of the inverse is:"<<(1/n1)<<endl;
                        else
                           cout<<"Infinity!"<<endl;
                        break;
                 case 10:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);

                        cout<<"The result of the square is:"<<n1*n1<<endl;

                        break;
                 case 11:
                        cout<<"Enter the number:"<<endl;
                        cin>>num;

                        n1= toDecimal(num);
                        result=fact(n1);
                        cout<<"The result of the factorial is:"<<result<<endl;

                        break;
                default:
                         cout<<"Kindly enter a valid choice!"<<endl;
                         break;

     }
    return 0;
}

