#include <stdio.h>
#include <math.h>

float nilai_rad(float deg) {
	float phi, ling, rad;

	phi = (float) 22/7; /* Menenetukan nilai phi */
	ling = (float) 1/180; /* Menentukan nilai ling */
	rad = (float) deg * phi * ling; /* Mengubah nilai degree menjadi radian */
	return rad; /* Mengembalikan nilai radian dari fungsi nilai_Rad */
}

int main(int argc, char const *argv[])
{
	float x = cos(nilai_rad(30)); /* Menjalankan funsi cos() dari library math.h */
	float y = sin(nilai_rad(30)); /* Menjalankan funsi sin() dari library math.h */

	/* Mencetak nilai cos dan sin */
	printf("%f\n", x);
	printf("%f\n", y);
	return 0;
}