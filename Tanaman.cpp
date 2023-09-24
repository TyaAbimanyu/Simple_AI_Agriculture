#include <stdio.h>
#include <string.h>
#include <iostream>
#include <fstream>


int main(){
    char sinar[25];
    int suhu;
    double ph;

    printf("Halo! Selamat Datang di Aplikasi Panen Aja!\n");

    printf("1. Masukkan intensitas sinar matahari\n");
    printf("Input: ");
   scanf("%s", sinar); getchar();

  printf("2. Masukkan temperatur (dalam celcius)\n");
    printf("Input: ");
    scanf("%d", &suhu); getchar();

    printf("3. Masukkan pH airn");
    printf("Input: ");
    scanf("%lf", &ph); getchar();
    
    printf("Tanaman yang paling cocok untuk ditanam : \n");

    if(strcmp(sinar,"Tinggi") == 0 && (suhu >= 12 && suhu <= 30) && (ph >= 6.2 && ph <= 6.8)){
        printf("- Tomat\n");
    }
	if(strcmp(sinar,"Tinggi") == 0 && (suhu >= 21 && suhu <= 37) && ph == 6){
	    printf("- Padi\n");
	}
	if(strcmp(sinar,"Tinggi") == 0 && (suhu >= 12 && suhu <= 25) && (ph >= 6 && ph <= 7)){
	    printf("- Gandum\n");
	}
	if(strcmp(sinar,"Tinggi") == 0 && (suhu >= 25 && suhu <= 32) && (ph >= 5.8 && ph <= 6.2)){
	        printf("-Jagung\n");
	}
	if(strcmp(sinar,"Sedang") == 0 && (suhu >= 12 && suhu <= 20) && (ph >= 6 && ph <= 6.5)){
	        printf("-Kentang\n");//
	}

    printf("Selamat Menanam!");

    return 0;
}

//int test () {
//std::ifstream myfile ("tanaman.txt");
