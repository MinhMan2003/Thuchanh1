 #include "stdio.h"
 #define MAX 255
 int main(){
   char path[50];
   FILE *fp;
   printf("\nNhap duong dan: ");
   fflush(stdin);
   gets(path);
   fp=fopen(path,"at");
   if(fp==NULL){
   	printf("\nloi mo file");
   }
   else {
   	fprintf(fp,"\nAi nhut thi tot dung thi");
   	fprintf(fp,"\nAi ma hon nua toi thi ba");
   	fclose(fp);
   }
 }
