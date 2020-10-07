#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct mahasiswa{
	char nama[40];
	char npm[12];
	char kelamin[15];
	char alamat[50];
	char semester[2];
	char nohp[13];
	char jurusan[20];
};
typedef struct mahasiswa mahasiswa;


int main(){
	int input;
	int i=0, n=20, j=0, inputt=0;
	struct mahasiswa mhs[n];
	
	//INPUT AWAL
	input:
	printf("=========INPUT========\n");
	printf("Masukkan nama anda : ");
	scanf(" %[^\n]%*c", &mhs[0].nama);
	printf("Masukkan npm : ");
	scanf(" %[^\n]%*c", &mhs[0].npm);
	printf("Masukkan alamat anda : ");
	scanf(" %[^\n]%*c", &mhs[0].alamat);
	printf("Masukkan jenis kelamin anda : ");
	scanf(" %[^\n]%*c", &mhs[0].kelamin);
	printf("Masukkan no hp anda : ");
	scanf(" %[^\n]%*c", &mhs[0].nohp);
	printf("Semester berapakah anda? ");
	scanf(" %[^\n]%*c", &mhs[0].semester);
	printf("Jurusan apa yang anda tempuh saat ini? ");
	scanf(" %[^\n]%*c", &mhs[0].jurusan);
	i=i+1;
	system("cls");
	printf("==============================================\n");
	printf("Anda telah memasukkan data mahasiswa %s!\n", mhs[0].nama);
	
	while(i<=20){
		menu:
		printf("==============================================\n\n");
		printf("Apa yang ingin anda lakukan?\n");
		printf("1. Tambah Data\n");
		printf("2. Lihat data\n");
		printf("3. Edit data\n");
		printf("4. Delete data\n");
		printf("5. Selesai\n");
		printf("Pilih : ");
		scanf("%d", &input);
		system("cls");
		
		if(input==1){
			if(i==n){
				printf("Data penuh! Silahkan hapus data terlebih dahulu!");
				getch();
				system("cls");
				goto menu;
			}
			printf("=========INPUT========\n");
			printf("Masukkan nama anda : ");
			scanf(" %[^\n]%*c", &mhs[i].nama);
			printf("Masukkan npm : ");
			scanf(" %[^\n]%*c", &mhs[i].npm);
			printf("Masukkan alamat anda : ");
			scanf(" %[^\n]%*c", &mhs[i].alamat);
			printf("Masukkan jenis kelamin anda : ");
			scanf(" %[^\n]%*c", &mhs[i].kelamin);
			printf("Masukkan no hp anda : ");
			scanf(" %[^\n]%*c", &mhs[i].nohp);
			printf("Semester berapakah anda? ");
			scanf(" %[^\n]%*c", &mhs[i].semester);
			printf("Jurusan apa yang anda tempuh saat ini? ");
			scanf(" %[^\n]%*c", &mhs[i].jurusan);
			i=i+1;
			system("cls");
			printf("==============================================\n");
			printf("Anda telah memasukkan data mahasiswa %s!\n", mhs[i-1].nama);
		}
		else if(input==2){
			if(i==0){
				printf("========================\n");
				printf("Tidak ada data! Silahkan input data terlebih dahulu!");
				getch();
				system("cls");
				goto menu;
			}
			for(j=0;j<i;j++){
				printf("==========Data Mahasiswa %d=========\n", j+1);
				printf("Nama\t\t: %s\n",mhs[j].nama);
				printf("NPM\t\t: %s\n",mhs[j].npm);
				printf("Alamat\t\t: %s\n",mhs[j].alamat);
				printf("Jenis Kelamin\t: %s\n",mhs[j].kelamin);
				printf("No hp.\t\t: %s\n",mhs[j].nohp);
				printf("Semester\t: %s\n",mhs[j].semester);
				printf("Jurusan\t\t: %s\n",mhs[j].jurusan);
				printf("=====================================\n\n");
			}
			printf("Tekan tombol apa saja untuk kembali...");
			getch();
			system("cls");
		}
		else if(input==3){
			inputubah:
			if(i==0){
				printf("========================\n");
				printf("Tidak ada data! Silahkan input data terlebih dahulu!");
				getch();
				system("cls");
				goto menu;
			}
			for(j=0;j<i;j++){
				printf("==========Data Mahasiswa %d=========\n", j+1);
				printf("Nama\t\t: %s\n",mhs[j].nama);
				printf("NPM\t\t: %s\n",mhs[j].npm);
				printf("Alamat\t\t: %s\n",mhs[j].alamat);
				printf("Jenis Kelamin\t: %s\n",mhs[j].kelamin);
				printf("No hp.\t\t: %s\n",mhs[j].nohp);
				printf("Semester\t: %s\n",mhs[j].semester);
				printf("jurusan\t\t: %s\n",mhs[j].jurusan);
				printf("=====================================\n\n");
			}
			printf("Ketik '0' untuk kembali ke menu.\n");
			printf("Data mahasiswa keberapa yang ingin anda ubah? ");
			scanf("%d", &input);
			if(input==0){
				system("cls");
				goto menu;
			}
			else if(input<=i){
			}
			else{
				printf("======================================\n");
				printf("Tidak ada mahasiswa pada nomor %d!",input);
				getch();
				system("cls");
				goto inputubah;
			}
			input=input-1;
			system("cls");
			inputlagi:
			printf("==========Data Mahasiswa %d=========\n", input+1);
			printf("1. Nama\t\t: %s\n",mhs[input].nama);
			printf("2. NPM\t\t: %s\n",mhs[input].npm);
			printf("3. Alamat\t: %s\n",mhs[input].alamat);
			printf("4. Jenis Kelamin: %s\n",mhs[input].kelamin);
			printf("5. No hp.\t: %s\n",mhs[input].nohp);
			printf("6. Semester\t: %s\n",mhs[input].semester);
			printf("7. jurusan\t: %s\n",mhs[input].jurusan);
			printf("=====================================\n\n");
			printf("Data mana yang ingin anda ubah? ");
			scanf("%d", &inputt);
			if(inputt==1){
				printf("Masukkan nama anda : ");
				scanf(" %[^\n]%*c", &mhs[input].nama);
			}
			else if(inputt==2){
				printf("Masukkan npm : ");
				scanf(" %[^\n]%*c", &mhs[input].npm);
			}
			else if(inputt==3){
				printf("Masukkan alamat anda : ");
				scanf(" %[^\n]%*c", &mhs[input].alamat);
			}
			else if(inputt==4){
				printf("Masukkan jenis kelamin anda : ");
				scanf(" %[^\n]%*c", &mhs[input].kelamin);
			}
			else if(inputt==5){
				printf("Masukkan no hp anda : ");
				scanf(" %[^\n]%*c", &mhs[input].nohp);
			}
			else if(inputt==6){
				printf("Semester berapakah anda? ");
				scanf(" %[^\n]%*c", &mhs[input].semester);
			}
			else if(inputt==7){
				printf("Jurusan apa yang anda tempuh saat ini? ");
				scanf(" %[^\n]%*c", &mhs[input].jurusan);
			}
			else{
				goto inputlagi;
			}
			system("cls");
		}
		else if(input==4){
			hapus:
			if(i==0){
				printf("========================\n");
				printf("Tidak ada data! Silahkan input data terlebih dahulu!");
				getch();
				system("cls");
				goto menu;
			}
			for(j=0;j<i;j++){
				printf("==========Data Mahasiswa %d=========\n", j+1);
				printf("Nama\t\t: %s\n",mhs[j].nama);
				printf("NPM\t\t: %s\n",mhs[j].npm);
				printf("Alamat\t\t: %s\n",mhs[j].alamat);
				printf("Jenis Kelamin\t: %s\n",mhs[j].kelamin);
				printf("No hp.\t\t: %s\n",mhs[j].nohp);
				printf("Semester\t: %s\n",mhs[j].semester);
				printf("Jurusan\t\t: %s\n",mhs[j].jurusan);
				printf("=====================================\n\n");
			}
			printf("Ketik '0' untuk kembali ke menu.\n");
			printf("Data mahasiswa ke berapa yang ingin anda hapus? ");
			scanf("%d", &input);
			if(input==0){
				system("cls");
				goto menu;
			}
			else if(input<=i){
			}
			else{
				printf("======================================\n");
				printf("Tidak ada mahasiswa pada nomor %d!",input);
				getch();
				system("cls");
				goto hapus;
			}
			for(input;input<i;input++){
				strcpy(mhs[input-1].nama,mhs[input].nama);
				strcpy(mhs[input-1].npm,mhs[input].npm);
				strcpy(mhs[input-1].alamat,mhs[input].alamat);
				strcpy(mhs[input-1].kelamin,mhs[input].kelamin);
				strcpy(mhs[input-1].nohp,mhs[input].nohp);
				strcpy(mhs[input-1].semester,mhs[input].semester);
				strcpy(mhs[input-1].jurusan,mhs[input].jurusan);
			}
			i=i-1;
			system("cls");
			printf("Data mahasiswa telah dihapus!");
			getch();
			system("cls");
			goto menu;
		}
		else if(input==5){
			printf("Terima kasih.");
			getch();
			goto exit;
		}
	}
	exit:
	return 0;	
}
