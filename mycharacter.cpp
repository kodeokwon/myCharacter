int s = 100;

void setup() {
	size(800, 800);
	int s = 10;
	int x = 480;           //Áß½ÉÁ¡ ÁÂÇ¥
	int y = 400;

	fill(250, 200, 30);         //¾ó±¼
	quad(x - s * 32, y - s * 20, x - s * 16, y + s * 20, x + s * 20, y + s * 16, x + s * 8, y - s * 32);
	quad(x - s * 16, y + s * 20, x - s * 20, y + s * 28, x + s * 4, y + s * 32, x + s * 20, y + s * 16);
	triangle(x - s * 32, y - s * 20, x - s * 32.5, y - s * 24.5, x - s * 27, y - s * 21.5);      //¸Ó¸®
	triangle(x - s * 27, y - s * 21.5, x - s * 27, y - s * 27, x - s * 23, y - s * 22.7);
	triangle(x - s * 23, y - s * 22.7, 265, y - s * 29, x - s * 17, y - s * 24.5);
	triangle(x - s * 17, y - s * 24.5, x - s * 14, y - s * 30, x - s * 11, y - s * 26.3);
	triangle(x - s * 11, y - s * 26.3, x - s * 10, y - s * 31.5, x - s * 7, y - s * 27.5);
	triangle(x - s * 7, y - s * 27.5, x - s * 4, y - s * 32.5, x, y - s * 29.6);
	triangle(x, y - s * 29.6, x + s, y - s * 34, x + s * 3, y - s * 30.5);
	triangle(x + s * 3, y - s * 30.5, x + s * 7, y - s * 35.5, x + s * 8, y - s * 32);
	arc(x - s * 18, y + s * 15, 80, 80, PI / 4, PI * 7 / 4);     //±Í
	arc(x + s * 8, y + s * 8, 280, 80, PI * 6 / 4, PI * 10 / 4);//ÄÚ

	fill(250, 250, 250);          //´«
	circle(x + s * 10, y - s * 2, 184);
	circle(x, y, 184);

	fill(0, 0, 0);          //´«µ¿ÀÚ
	circle(x + s * 3, y + s, 22);
	circle(x + s * 14, y - s, 22);

	fill(250, 90, 50);      //ÀÔ
	triangle(x - s * 8, y + s * 19.1, x + s * 12, y + s * 24, x + s * 20, y + s * 16);

	fill(250, 100, 0);           //¿Ê
	ellipse(x + s * 3, y + s * 40, 130, 160);      //¿ì ÆÈ
	quad(x - s * 20, y + s * 28, x - s * 24, y + s * 40, x + s * 7, y + s * 40, x + s * 4, y + s * 32);
	ellipse(x - s * 21, y + s * 40, 130, 200);       //ÁÂ ÆÈ
}