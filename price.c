#include<stdio.h>
int main(){

int apple_sold = 5;
int apple_price =12;

int orange_sold = 7;
int orange_price = 7;

int total_apple_profit = apple_sold * apple_price;
int total_orange_profit = orange_sold * orange_price;

int total_earned  = total_apple_profit + total_orange_profit;

printf("selling price of apple:%d Rs\n" , total_apple_profit);
printf("selling price of orange:%d Rs\n" , total_orange_profit);
printf("total earning :%d Rs\n" , total_earned);

return 0;
}