 #include <stdio.h>
int main(){
float x, i;

for (i=0;i<1;i++)
scanf("%f", &x);

for (i=0;i<1;i++){
if(x>=0 && x<=25.0000)
printf("Intervalo [0,25]\n");
}

for (i=0;i<1;i++){
if(x>25.0000 && x<=50.0000000)
printf("Intervalo (25,50]\n");}

for (i=0;i<1;i++){
if(x>50.0000000 && x<=75.0000000)
printf("Intervalo (50,75]\n");}

for (i=0;i<1;i++){
if(x>75.0000000 && x<=100.0000000)
printf("Intervalo (75,100]\n");
}

for (i=0;i<1;i++){
if(x<0)
printf("Fora de intervalo\n");
}

for (i=0;i<1;i++){
if(x>100.0000000)
printf("Fora de intervalo\n");
}


return 0;
}
