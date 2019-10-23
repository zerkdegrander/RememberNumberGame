#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <limits.h>
#include<conio.h>

int x,y,num,num1,num2,num3,num4,skor;
	int s,s1,num,z;
	int a[16]= {};
	int c[16]= {};
	int b[13]= {};
	int d[16]= {};
	int e[16]= {};
	int f[16]= {};
	int mArr[100][100]={};

void nilai(int skor){
	printf ("Permainan Selesai");
	printf("Skor Anda (%d/5)",skor);
}

int clean_stdin()
{
    while (getchar()!='\n');
    return 1;
}

void randomArray (int Arr[], int z){	
	int r;
		for(r=0; r<z; r++){
		Arr[r]= rand() %50+1;
	}
}

void randomArrayrandom (int Arr[]){
	int i;
	for (i = 0; i < 16; i++) {     // fill array
   	 Arr[i] = i;
  //  printf("%d,", array1[i]);
	}
	
	for (i = 0; i < 16; i++) {    // shuffle array
    int temp1 = Arr[i];
    int randomIndex1 = rand() % 16;

    Arr[i]           = Arr[randomIndex1];
    Arr[randomIndex1] = temp1;
	}
	
}

void matriksArray (int Arr[],int Arr1[],int Arr2[100][100]){
	int r1,r2,z=0;
	for( r1=0; r1<4; r1++){	
		for( r2=0; r2<4; r2++){
		
			Arr2[r1][r2]= Arr[Arr1[z]];
			z++;
		}
	}
}
void atas(){                                                             
printf(" _____                     _                            _     \n");      
printf("| __  |___ _____ ___ _____| |_ ___ ___    ___ _ _ _____| |_ ___ ___ \n");
printf("|    -| -_|     | -_|     | . | -_|  _|  |   | | |     | . | -_|  _| \n");
printf("|_|\\__|___|_|_|_|___|_|_|_|___|___|_|    |_|_|___|_|_|_|___|___|_|  \n\n\n");                                                                                                                                                          
}
void level(int tahap,int level){
	
if(tahap==1){
	printf("\t\t\t\t\tMudah\n");
	printf("\t\t\t\t\tLevel: %d\n\n",level); 
}
if(tahap==2){
	printf("\t\t\t\t\tSedang\n");
	printf("\t\t\t\t\tLevel: %d\n\n",level); 
 }
if(tahap==3){
	printf("\t\t\t\t\tSusah\n");
	printf("\t\t\t\t\tLevel: %d\n\n",level); 
}
}
void tampil(int tes2[100][100]){
	int i,j,x=0,y,z=1,p=4;
	printf("\n\n");
	
	for(i=1;i<=13;i++){
		if(i==1 || i%3==1){
			printf("\t*********************************\n");
		}
		else if(i%3==0){
			printf("\t|       |       |       |       |\n");
		}
		else{
			p=z+3;
			printf("\t");
			for(z;z<=p;z++){
				if(z<10){
					printf("||%d|    ",z);       
			}
				else{
					printf("||%d|   ",z);
				}
				
			}
			printf("|\n");
			printf("\t|       |       |       |       |\n");
			printf("\t");
			for(j=0;j<=3;j++){
				printf("|   %d",tes2[x][j]);
				if(tes2[x][j]<10){
					printf("   ");}
				else if(tes2[x][j]>=10 && tes2[x][j]<100){
					printf("  ");}
				else{
					printf(" ");
				}
				
				
			}
			x=x+1;
			printf("|\n");
		}
	}
	
}



void kosong(){
	printf("\n\n");
	printf("\t*****************************\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t*****************************\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t*****************************\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t*****************************\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t|      |      |      |      |\n");
	printf("\t*****************************\n");

}

void body1(){
	  system("cls");
  atas();
printf("[1] Mulai\n");
printf("[2] Bantuan\n");
printf("[3] Keluar\n");
printf("Pilihan Anda : ");
}

void play1(){
	system ("cls");
	atas();
	printf("Pilih level:\n");
	printf("[1] Mudah\n");
	printf("[2] Sedang\n");
	printf("[3] Sulit\n");
	printf("Pilihan Anda : ");
}

void next1(){
	system("cls");
	atas();
  printf("[4] Kembali ke menu awal\n");
  printf("[5] Exit\n");
  printf("Pilihan anda : ");
}

static int cmp(const void *p1, const void *p2){
	if (p1!=0 && p2!=0)
	return *(int*)p1 > *(int*)p2;
}

void answer(int Arr[],int Arr1[],int z){
	int i,s=0;
	
	printf ("Urutkan angka dengan urutan terkecil ke terbesar:\n");
	for (i=0; i<z; i++){
		s=16-z;
		s=s+i;
		printf("\nangka ke %d   =",i+1);
		int rows =0;  
    char c;
    do
    {  
      //  printf("\nEnter an integer from 1 to 3: ");

    } while (((scanf("%d%c", &rows, &c)!=2 || c!='\n') && clean_stdin()) || rows<1 || rows>50);
		//scanf("%d", &Arr[s]);
		Arr[s]=rows;
		printf("Kotak nomer  =");	
	scanf("%d",&Arr1[i]);
	}
}

char compareArray(int a[],int b[],int d[],int e[],int f[],int size,int soal){
	int i,j=0;
	for (i=0; i<size; i++){
		if(a[i] != b[i])
			return 1;
	}
		for (i=0; i<soal; i++){
		j=16-soal;
		j=j+i;
		if(d[e[i]-1] != f[j]){
		
		printf("ini asliii:%d\n",e[i]);
		printf("ini jawaban:%d\n",d[e[i]]);
		printf("ini asli:%d\n",f[j]);
			return 1;}
	}
	return 0;
}

int border(){
printf("\n");
printf("_______________________________________________________________________________\n");
printf("\n");
}

int next(){
	atas();
  printf("[4] Kembali ke menu awal\n");
  printf("[5] Exit\n");
  printf("Pilihan anda : ");
   int rows =0;  
    char c;
    do
    {  
        

    } while (((scanf("%d%c", &rows, &c)!=2 || c!='\n') && clean_stdin()) || rows<4 || rows>5);
 // scanf("%d",&num2);
  switch (rows) {
    case 4:
    system("cls");
    body();

    case 5:
    system("cls");
    end();
  }
}

void reset(int Arr1[], int Arr2[], int Arr3[],int Arrm[100][100]){
	int i,j;
	for(i=0;i<16;i++){
		Arr1[i]=0;
		Arr3[i]=0;
	}
	for(i=0;i<13;i++){
		Arr2[i]=0;
		
	}
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			Arrm[i][j]=0;
		}
	}
}

int play(){
	atas();
	skor=0;
	printf("Pilih level:\n");
	printf("[1] Mudah\n");
	printf("[2] Sedang\n");
	printf("[3] Sulit\n");
	int rows =0;  
    char c;
    do
    {  
        printf("\n");

    } while (((scanf("%d%c", &rows, &c)!=2 || c!='\n') && clean_stdin()) || rows<1 || rows>3);
	//scanf("%d",&num1);
	
	
	switch (rows){
		case 1:
			system("cls");
			y=1;
			x=1;
			while (y <= 5){
				if (y%2==0)
				x=x+1;
			//	printf("%d\n",x);
				game(x);
				++y;
			}
			nilai(skor);
			border();
  			next();
  			nilai(skor);
  			
		case 2:
			system("cls");
			y=1;
			x=3;
			while (y <= 5){
				if (y%2==0)
				x=x+1;
			//	printf("%d\n",x);
				game(x);
				++y;
			}
			nilai(skor);
			border();
  			next();
  			nilai(skor);
		case 3:
			system("cls");
				y=1;
			x=5;
			while (y <= 5){
				if (y%2==0)
				x=x+1;
				printf("%d\n",x);
				game(x);
				++y;
			}
			nilai(skor);
			border();
  			next();
  			nilai(skor);
  			
	}
}

int body(){
  system("cls");
  atas();
printf("[1] Mulai\n");
printf("[2] Bantuan\n");
printf("[3] Keluar\n");
printf("Pilihan Anda : ");
//scanf("%d",&num);
int rows =0;  
    char c;
    do
    {  
        //printf("\nEnter an integer from 1 to 3: ");
        body1();

    } while (((scanf("%d%c", &rows, &c)!=2 || c!='\n') && clean_stdin()) || rows<1 || rows>3);
switch (rows) {
  case 1:
  system("cls");
  play();
  border();
  next();
  break;

  case 2:
  system("cls");
  border();
  next();
  break;
  
  case 3:
  system("cls");
  end();
}
}

int game(int x){
	reset(a,b,c,mArr);
	z=x+2;
	randomArray(a,z);
/*	for(s=0; s<z; s++){
		printf("%d\n", a[s]);
	}
	printf("\n");*/
	randomArrayrandom(b);
/*		for(s=0; s<16; s++){
		printf("%d\n", b[s]);
	}*/
	matriksArray(a,b,mArr);
/*		for( s=0; s<4; s++){
			for( s1=0; s1<4; s1++){
			printf("%d ", mArr[s][s1]);
		}
		printf("\n\n");
	}*/
/*	for(s=0; s<16; s++){
		d[s]=a[b[s]];
		printf("%d\n", d[s]);
	}*/
	atas();
	tampil(mArr);
	printf("\tJumlah angka acak= %d\n",z);
	printf("\tIngatlah angkanya\n\n");
	system("pause");
	system("cls");
	atas();
	kosong();
	qsort(a, sizeof(a)/sizeof(int), sizeof(int), cmp);
	/*	for (s=0; s<sizeof(a)/sizeof(int); ++s)
		printf("%d ", a[s]);
		printf("\n");*/
	qsort(f, sizeof(a)/sizeof(int), sizeof(int), cmp);
	answer(c,e,z);
	if (compareArray(a,c,d,e,f,16,z)==0){
		printf("\nCorrect\n\n");
		skor++;
	}
	else {
		system("cls");
		printf("\n\tWrong\n");
		printf("\tJawaban yang benar");
		tampil(mArr);
		
	}
	system("pause");
	system("cls");
}

int main (){
	system("color 1E");
	srand(time(NULL));
	  body();
	
}
