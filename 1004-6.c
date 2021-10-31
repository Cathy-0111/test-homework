#include <stdio.h>
#include<stdlib.h>
int main()
{
    int month;
    int day;
    scanf("%d%d",&month,&day);
    if (month==1&&day>=21||month==2&&day<19)
    {
      printf("%s","Aquarius");
    }
    else if (month==2&&day>=19||month==3&&day<21)
    {
       printf("%s","Pisces");
    }
    else if(month==3&&day>=21||month==4&&day<21)
    {
       printf("%s","Aries");
    }
    else if(month==4&&day>=21||month==5&&day<22)
    {
       printf("%s","Taurus");
    }
    else if(month==5&&day>=22||month==6&&day<22)
    {
       printf("%s","Gemini");
    }
    else if(month==6&&day>=22||month==7&&day<23)
    {
       printf("%s","Cancer)");
    } 
    else if(month==7&&day>=23||month==8&&day<24)
    {
       printf("%s","Leo");
    }
    else if(month==8&&day>=24||month==9&&day<24)
    {
       printf("%s","Virgo");
    }
    else if(month==9&&day>=24||month==10&&day<24)
    {
       printf("%s","Libra");
    }
    else if(month==10&&day>=24||month==11&&day<23)
    {
       printf("%s","(Scorpio");
    }
    else if(month==11&&day>=23||month==12&&day<22)
    {
       printf("%s","Sagittarius");
    }
    else if(month==12&&day>=22||month==1&&day<21)
    {
       printf("%s","Capricorn");
    }
}
