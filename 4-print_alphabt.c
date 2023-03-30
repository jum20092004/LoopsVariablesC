# include <stdio.h>
int main (){
int h;
for (h = 97;h <= 122;h ++){
    if (h == 101 || h == 113 ){
        continue;
    }
    putchar (h);
}
putchar ('\n');

}