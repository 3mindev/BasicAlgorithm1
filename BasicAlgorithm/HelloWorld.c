//reduction
//http://119.201.123.184/30stair/reduction/reduction.php?pname=reduction

#include <stdio.h>
#include <math.h>

int main()
{
	float img_x, img_y, copy_x, copy_y, answer1, answer2, answer3, answer4, temp;
	scanf("%f %f %f %f", &img_x, &img_y, &copy_x, &copy_y);

	answer1 = -1.0;
	answer2 = -1.0;
	answer3 = -1.0;
	answer4 = -1.0;

	if (img_y * copy_x / img_x < copy_y) { answer1 = copy_x / img_x*100; }
	if (img_y * copy_y / img_x < copy_x) { answer2 = copy_y / img_x*100; }
	if (img_x * copy_x / img_y < copy_y) { answer3 = copy_x / img_y*100; }
	if (img_x * copy_y / img_y < copy_x) { answer4 = copy_y / img_y*100; }

	//printf("%.2f %.2f %.2f %.2f\n", answer1, answer2, answer3, answer4);
	if ( answer1 > answer2 ){
		temp = answer2;
		answer2 = answer1;
		answer1 = temp;
	}
	if (answer1 > answer3) {
		temp = answer3;
		answer3 = answer1;
		answer1 = temp;
	}
	if (answer1 > answer4) {
		temp = answer4;
		answer4 = answer1;
		answer1 = temp;
	}
	if (answer2 > answer3) {
		temp = answer3;
		answer3 = answer2;
		answer2 = temp;
	}
	if (answer2 > answer4) {
		temp = answer4;
		answer4 = answer2;
		answer2 = temp;
	}
	if (answer3 > answer4) {
		temp = answer4;
		answer4 = answer3;
		answer3 = temp;
	}

	printf("%.1f%%", answer4);

	scanf("%d", &answer4);
	return 0;

}