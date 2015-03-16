#include <stdio.h>

void date (int z) {
  if((z>1009999)&&(z<3920000))
    printf("Your Date is : %d",z);
}

/*main() {
  int dd,mm,yyyy=0;
  printf("Input number with this format DDMMYYYY");
  cal: scanf("%d%d%d",&dd,&mm,&yyyy);
  if(dd<32)
    goto month;
  else {
    printf("The value must be between 1 and 31");
    goto cal;
  month:
    if(mm<13)
      goto year
    else
    printf("The value must be between 1 and 31");
    goto cal;
  year:
    if((yyyy<9999) && (yyyy>0))
      printf("The Year is :%d%d%d ",date(dd,mm,yyyy))
      }*/

  main() {
    int z=0;
    printf("Input number with this format DDMMYYYY");
    scanf("%d",&z);
    date(z);
  }
