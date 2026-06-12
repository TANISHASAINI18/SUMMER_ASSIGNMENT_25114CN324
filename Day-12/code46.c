//code46
int isarmstrong(int num){
    int original=num;
    int remainder,result=0,digits=0;
    while(num!=0){
        num=num/10;
        digits++;
    }
    num=original;
    while(num!=0);{
    result=result+pow(remainder,digits);
    num=num/10;}
        if(result==original)
           return 1;
        else 
           return 0;
}
int main(){
int number;
printf("enter s number:");
scanf("%d", &number);
if(isarmstrong(number))
printf("it is an armstrong number.\n");
else
printf("it is not an armstrong number.\n");
return 0;
}
