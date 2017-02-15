#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long cc_number;
    
    //input
    do
    {
        printf("Please enter Your CC number: ");
        cc_number = get_long_long();
    }
    while(cc_number < 0);
    
    int count = 0;
    long long digits = cc_number;
    while (digits > 0)
    {
        digits = digits/10;
        count++;
    }
    
    //check leghth of cc_number//
    if(count != 13 && count != 15 && count != 16)
    {
        printf("INVALID\n");
    }
    
    //13 digit code
    while(count == 13)
    {
        //counting every second//
        int x;
        for(int i = 0; i < 13; i++)
            {
    
                int a = 2 * cc_number/10 % 10;
                if(a>9)
                {
                    a = 1 + a % 10;
                }
                int b = 2 * cc_number/1000 % 10;
                if(b>9)
                {
                    b = 1 + b % 10;
                }
                int c = 2 * cc_number/100000 % 10;
                if(c>9)
                {
                    c = 1 + c % 10;
                }
                int d = 2 * cc_number/10000000 % 10;
                if(d>9)
                {
                    d = 1 + d % 10;
                }
                int e = 2 * cc_number/1000000000 % 10;
                if(e>9)
                {
                    e = 1 + e % 10;
                }
                int f = 2 * cc_number/100000000000 % 10;
                if(f>9)
                {
                    f = 1 + f % 10;
                }
                
                x = a + b + c + d + e + f;
            }
        int y;
        int start13;
        for(int j = 0; j < 13; j++)
        {
         int a = cc_number % 10;
         int b = cc_number/100 % 10;
         int c = cc_number/10000 % 10;
         int d = cc_number/1000000 % 10;
         int e = cc_number/100000000 % 10;
         int f = cc_number/10000000000 % 10;
         int g = cc_number/1000000000000 % 10;
         y = a + b + c + d + e + f + g;
         start13 = g;
        }
        int z = x + y;
        if(z % 10 == 0 && start13 == 4)
        {
            printf("VISA\n");
        }
        else if(count == 13)
        {
            printf("INVALID\n");
        }
        break;
    }
   
   //15 digit
while(count == 15)
{
    int x;
    int start152;
    for(int i = 0; i < 15; i++)
    {
        int a = 2 * cc_number/10 % 10;
                if(a>9)
                {
                    a = 1 + a % 10;
                }
                int b = 2 * cc_number/1000 % 10;
                if(b>9)
                {
                    b = 1 + b % 10;
                }
                int c = 2 * cc_number/100000 % 10;
                if(c>9)
                {
                    c = 1 + c % 10;
                }
                int d = 2 * cc_number/10000000 % 10;
                if(d>9)
                {
                    d = 1 + d % 10;
                }
                int e = 2 * cc_number/1000000000 % 10;
                if(e>9)
                {
                    e = 1 + e % 10;
                }
                int f = 2 * cc_number/100000000000 % 10;
                if(f>9)
                {
                    f = 1 + f % 10;
                }
                int g = 2 * cc_number/10000000000000 % 10;
                start152 = g;
                if(g>9)
                {
                    g = 1 + g % 10;
                }
                x = a + b + c + d + e + f + g;
                start152 = cc_number/10000000000000 % 10;
    }
    
    int y;
    int start151;
    for(int j = 0; j < 15; j++)
    {
        int a = cc_number % 10;
        int b = cc_number/100 % 10;
        int c = cc_number/10000 % 10;
        int d = cc_number/1000000 % 10;
        int e = cc_number/100000000 % 10;
        int f = cc_number/10000000000 % 10;
        int g = cc_number/1000000000000 % 10;
        int h = cc_number/100000000000000 % 10;
         y = a + b + c + d + e + f + g + h;
         start151 = h;
    }
    int z = x + y;
    if(start151 == 3 && z % 10 == 0)
    switch(start152)
        {
            case 4:
            printf("AMEX\n");
            break;
            case 7:
            printf("AMEX\n");
            break;
        }
        else if(count == 15)
        {
            printf("INVALID\n");
        }
        break;
}
//WATCH VISA OR MC//
while(count == 16)
{
    int x;
    int start162;
    for(int i = 0; i < 16; i++)
    {
                 int a = 2 * cc_number % 10;
                if(a>9)
                {
                    a = 1 + a % 10;
                }
                int b = 2 * cc_number/100 % 10;
                if(b>9)
                {
                    b = 1 + b % 10;
                }
                int c = 2 * cc_number/10000 % 10;
                if(c>9)
                {
                    c = 1 + c % 10;
                }
                int d = 2 * cc_number/1000000 % 10;
                if(d>9)
                {
                    d = 1 + d % 10;
                }
                int e = 2 * cc_number/100000000 % 10;
                if(e>9)
                {
                    e = 1 + e % 10;
                }
                int f = 2 * cc_number/10000000000 % 10;
                if(f>9)
                {
                    f = 1 + f % 10;
                }
                int g = 2 * cc_number/1000000000000 % 10;
                if(g>9)
                {
                    g = 1 + g % 10;
                }
                int h = 2 * cc_number/100000000000000 % 10;
               
                if(h>9)
                {
                    h = 1 + h % 10;
                }
                x = a + b + c + d + e + f + g + h;
                start162 = cc_number/100000000000000 % 10;
    }
    
    int y;
    int start161;
    for(int j = 0; j < 16; j++)
    {
        int a = cc_number/10 % 10;
        int b = cc_number/1000 % 10;
        int c = cc_number/100000 % 10;
        int d = cc_number/10000000 % 10;
        int e = cc_number/1000000000 % 10;
        int f = cc_number/100000000000 % 10;
        int g = cc_number/10000000000000 % 10;
        int h = cc_number/1000000000000000 % 10;
        int i = cc_number/100000000000000000 % 10;
         y = a + b + c + d + e + f + g + h + i;
         start161 = i;
    }
    int z = x + y;
    if(z % 10 == 0 && start161 == 4)
        {
            printf("VISA\n");
        }
    else if(start161 == 5 && z % 10 == 0)
    switch(start162)
    {
        case 1:
        printf("MASTERCARD\n");
        break;
        case 2:
        printf("MASTERCARD\n");
        break;
        case 3:
        printf("MASTERCARD\n");
        break;
        case 4:
        printf("MASTERCARD\n");
        break;
        case 5:
        printf("MASTERCARD\n");
        break;
    }
    else if(count == 16)
        {
            printf("INVALID\n");
        }
        break;
}
return 0;
}