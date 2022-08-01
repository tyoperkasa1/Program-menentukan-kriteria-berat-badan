#include <stdio.h>
int main() {
float tinggi,imt;
int berat;
printf("Berat badan(Kg) : ");
scanf("%d",&berat);
printf("Tinggi badan(m) : ");
scanf("%f",&tinggi);
imt=berat/(tinggi*tinggi);
if(imt > 30){
	printf("IMT = %.2f %s",imt, "Termasuk Kegemukan");
}
	else if(imt <= 30){
		printf("IMT = %.2f %s",imt, "Termasuk gemuk");
	}
		else if(imt <= 25){
			printf("IMT = %.2f %s",imt, "Termasuk normal");
		}
			else if(imt > 18,5){
				printf("IMT = %.2f %s",imt, "Termasuk kurus");
			}
return 0;
}

