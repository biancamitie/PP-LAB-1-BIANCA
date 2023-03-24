
#include <stdio.h>
int main() {
	int x;
	printf("DIGITE UM NUMERO\n");
	scanf("%d", &x);
	printf("o numero inteiro eh: %d", x);

	return 0;
}

#include <stdio.h>
int main() {
	float x;
	printf("digite um numero real\n");
	scanf("%f", &x);
	printf("o numero real eh %f", x);

	return 0;
}

#include <stdio.h>
int main() {
	int a, b, c, soma;
	printf("digite tres valores inteiros\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	soma = a + b + c;
	printf("a soma desses tres valores inteiros é %d", soma);

	return 0;
}

#include <stdio.h>
int main() {
	float b, a;
	printf("digite numero real\n");
	scanf("%f", &b);
	a = b * b;
	printf("quadrado do numero real é %f\n", a);

	return 0;
}

#include <stdio.h>
int main() {
	float b, a;
	printf("digite numero real\n");
	scanf("%f", &b);
	a = b / 5;
	printf("quinta parte do numero real é %f\n", a);

	return 0;
}

#include <stdio.h>
int main() {
	float F, C;
	printf("digite TEMPERATURA em celsius\n");
	scanf("%f", &C);
	F = C * (9.0 / 5.0) + 32.0;
	printf("a temperatura em Fahrenheit eh %f\n", F);

	return 0;
}

#include <stdio.h>
int main() {
	float F, C;
	printf("temperatura em graus Fahrenheit\n");
	scanf("%f", &F);
	C = 5.0 * (F - 32.0) / 9.0;
	printf("a temperatura em celsius eh %f\n", C);

	return 0;
}

#include <stdio.h>
int main() {
	float K, C;
	printf("temperatura em graus kelvin\n");
	scanf("%f", &K);
	C = K - 273.15;
	printf("a temperatura em celsius eh %f\n", C);

	return 0;
}

#include <stdio.h>
int main() {
	float K, C;
	printf("temperatura em graus celsius\n");
	scanf("%f", &C);
	K = C + 273.15;
	printf("a temperatura em KELVIN eh %f\n", K);

	return 0;
}

#include <stdio.h>
int main() {
	float K, M;
	printf("velocidade em km/h (quilômetros por hora)\n");
	scanf("%f", &K);
	M = K / 3.6;
	printf("velocidadee em m/s eh %f\n", M);

	return 0;
}

#include <stdio.h>
int main() {
	float K, M;
	printf("velocidade em m/s\n");
	scanf("%f", &M);
	K = M * 3.6;
	printf("velocidade em km/h (quilômetros por hora) eh %f\n", K);

	return 0;
}

#include <stdio.h>
int main() {
	float K, M;
	printf("distância em milhas\n");
	scanf("%f", &M);
	K = 1.61 * M;
	printf("distancia convertida em quilômetros eh %f\n", K);

	return 0;
}

#include <stdio.h>
int main() {
	float K, M;
	printf("distância em quilômetros\n");
	scanf("%f", &K);
	M = K / 1.61;
	printf("distancia convertida em milhas eh %f\n", M);

	return 0;
}

#include <stdio.h>
int main() {
	float G, R, pi = 3.141592;
	printf("um ângulo em graus\n");
	scanf("%f", &G);
	R = G * pi / 180;
	printf("convertido em radianos eh %f\n", R);

	return 0;
}

#include <stdio.h>
int main() {
	float G, R, pi = 3.141592;
	printf("um ângulo em radianos\n");
	scanf("%f", &R);
	G = R * 180 / pi;
	printf("convertido em GRAUS eh %f\n", G);

	return 0;
}

#include <stdio.h>
int main() {
	float C, P;
	printf("valor de comprimento em polegadas\n");
	scanf("%f", &P);
	C = P * 2.54;
	printf("convertido em centímetros eh %f\n", C);

	return 0;
}

#include <stdio.h>
int main() {
	float C, P;
	printf("valor de comprimento em CM\n");
	scanf("%f", &C);
	P = C / 2.54;
	printf("convertido em POLEGADAS eh %f\n", P);

	return 0;
}

#include <stdio.h>
int main() {
	float L, M;
	printf("Valor de volume em metros cúbicos m3\n");
	scanf("%f", &M);
	L = 1000 * M;
	printf(" convertido em litros eh %f\n", L);

	return 0;
}

#include <stdio.h>
int main() {
	float L, M;
	printf("valor de volume em litros\n");
	scanf("%f", &L);
	M = L / 1000;
	printf(" convertido em metros cúbicos m3 eh %f\n", M);

	return 0;
}

#include <stdio.h>
int main() {
	float L, K;
	printf("valor de massa em quilogramas\n");
	scanf("%f", &K);
	L = K / 0.45;
	printf(" convertido em libras eh %f\n", L);

	return 0;
}

#include <stdio.h>
int main() {
	float L, K;
	printf("valor de massa em libras\n");
	scanf("%f", &L);
	K = L * 0.45;
	printf(" convertido em quilogramas eh %f\n", K);

	return 0;
}

#include <stdio.h>
int main() {
	float J, M;
	printf("valor de comprimento em jardas\n");
	scanf("%f", &J);
	M = 0.91 * J;
	printf(" convertido em metros eh %f\n", M);

	return 0;
}

#include <stdio.h>
int main() {
	float J, M;
	printf("valor de comprimento em metros\n");
	scanf("%f", &M);
	J = M / 0.91;
	printf(" convertido em JARDAS eh %f\n", J);

	return 0;
}

#include <stdio.h>
int main() {
	float A, M;
	printf("valor de área em metros quadrados m2\n");
	scanf("%f", &M);
	A = M * 0.000247;
	printf(" convertido em acres eh %f\n", A);

	return 0;
}

#include <stdio.h>
int main() {
	float A, M;
	printf("valor de área em acres\n");
	scanf("%f", &A);
	M = A * 4048.58;
	printf(" Convertido em metros quadrados m2 eh %f\n", M);

	return 0;
}

#include <stdio.h>
int main() {
	float H, M;
	printf("valor de área em metros quadrados m2\n");
	scanf("%f", &M);
	H = M * 0.0001;
	printf(" Convertido em hectares eh %f\n", H);

	return 0;
}

#include <stdio.h>
int main() {
	float H, M;
	printf("valor de área em hectares\n");
	scanf("%f", &H);
	H = M = H * 10000;
	printf(" Convertido em metros quadrados m2 eh %f\n", M);

	return 0;
}

#include <stdio.h>
int main() {
	int a, b, c, s;
	printf("digite três valores\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	s = (a * a) + (b * b) + (c * c);
	printf("resultado a soma dos quadrados dos três valores lidos eh %d\n", s);

	return 0;
}

#include <stdio.h>
int main() {
	int a, b, c, d, s;
	printf("digite 4 notas\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	scanf("%d", &d);
	s = (a + b + c + d) / 4;
	printf("a média aritmética eh %d\n", s);

	return 0;
}

#include <stdio.h>
int main() {
	float a, b, s;
	printf("digite um valor real\n");
	scanf("%f", &a);
	printf("digite valor da cotação em dolares\n");
	scanf("%f", &b);
	s = a * b;
	printf("o valor correspondente em dólares eh %.4f\n", s);

	return 0;
}

#include <stdio.h>
int main() {
	int a, b, c;
	printf("digite um numero inteiro\n");
	scanf("%d", &a);
	b = a - 1;
	c = a + 1;
	printf("seu antecessor eh %d\ne seu sucessor eh %d", b, c);

	return 0;
}

#include <stdio.h>
int main() {
	int a, b, c, d;
	printf("digite um numero inteiro\n");
	scanf("%d", &a);
	b = (a * 3) + 1;
	c = (a * 2) - 1;
	d = b + c;
	printf(
		"a soma do sucessor de seu triplo com o antecessor de seu dobro eh "
		"%d\n",
		d);

	return 0;
}

#include <stdio.h>
int main() {
	float a, b;
	printf("digite o tamanho do lado de um quadrado\n");
	scanf("%f", &a);
	b = a * a;
	printf("o resultado a sua área eh %.2f\n", b);

	return 0;
}

#include <stdio.h>
int main() {
	float a, b, p = 3.141592;
	printf("digite valor do raio de um círculo\n");
	scanf("%f", &a);
	b = p * (a * a);
	printf("o resultado a sua área eh %.4f\n", b);

	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, b, c, s;
	printf("digite o valor dos 2 catetos\n");
	scanf("%f", &a);
	scanf("%f", &b);
	c = (a * a) + (b * b);
	s = sqrt(c);
	printf("o valor da hipotenusa eh %.4f\n", s);

	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, c, r;
	printf("digite valor de um produto\n");
	scanf("%f", &a);
	c = (a / 100) * 12;
	r = a - c;
	printf("o valor com desconto eh %.4f\n", r);

	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, c, r;
	printf("o salário de um funcionário\n");
	scanf("%f", &a);
	c = (a / 100) * 25;
	r = a + c;
	printf("o valor do novo salário eh %.4f\n", r);

	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, b, c, d = 780000;
	printf("A importancia de 780.000,00 será dividida entre três ganhadores de "
		   "um concurso.\n");
	a = d * 0.46;
	b = d * 0.32;
	c = d - (a + b);
	printf("o primeiro receberá %f\n", a);
	printf("o segundo receberá %f\n", b);
	printf("o terceiro receberá %f\n", c);
	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float b, c, d;
	int a;
	printf("numero de dias trabalhados pelo encanador\n");
	scanf("%d", &a);
	b = 30 * a;
	c = b * 0.08;
	d = b - c;
	printf("quantia líquida que deverá ser paga %f\n", d);
	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, b, c, d, e;
	printf("digite valor da hora de trabalho\n");
	scanf("%f", &a);
	printf("digite número de horas trabalhadas no mês\n");
	scanf("%f", &b);
	c = (a * b);
	d = c * 0.10;
	e = c + d;
	printf("quantia líquida que deverá ser paga %.3f\n", e);
	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, b, c, d;
	printf("digite o salário-base de um funcionário\n");
	scanf("%f", &a);
	d = a * 0.05;
	b = a * 0.07;
	c = (a + d) - b;
	printf("salario que devera ser pago eh %.3f\n", c);
	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, d, p, v, cp;
	printf("digite um valor\n");
	scanf("%f", &a);
	d = a - (a * 0.10);
	printf("o total a pagar com desconto eh %.3f\n", d);
	p = a / 3;
	printf(
		"o valor de cada parcela, no parcelamento de 3x sem juros eh %.3f\n",
		p);
	v = d * 0.05;
	printf(" comissão do vendedor, no caso da venda ser a vista %.3f\n", v);
	cp = a * 0.05;
	printf(
		"  a comissão do vendedor, no caso da venda ser parcelada %.3f\n", cp);

	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	float a, b, c;
	printf(" digite a altura do degrau de uma escada\n");
	scanf("%f", &a);
	printf("digite a altura que o usuário deseja alcançar subindo\n");
	scanf("%f", &b);
	c = b / a;
	printf(
		"degraus que o usuário deverá subir para atingir seu objetivo eh %f\n",
		c);
	return 0;
}

#include <math.h>
#include <stdio.h>
int main() {
	char a, b;
	printf(" digite uma letra maiúscula\n");
	scanf("%c", &a);
	printf("letra minuscula %c\n", a + 32);
	return 0;
}

#include <stdio.h>
int main(void) {
	int n, i;
	printf("Entre com um numero de 3 digitos ");
	scanf("%d", &n);
	i = (((n % 10) * 100)) + (((n / 10) % 10) * 10) + (n / 100);
	printf("%d inverso eh %d\n", n, i);

	return 0;
}

#include <stdio.h>

int main(void) {
	int n;
	printf("digite um número inteiro de quatro digitos");
	scanf("%d", &n);
	printf("%d \n", n / 1000);
	printf("%d \n", (n % 1000) / 100);
	printf("%d \n", (n % 100) / 10);
	printf("%d \n", n % 10);

	return 0;
}

#include <stdio.h>

int main(void) {
	int s;
	printf("digite quantos segundos ");
	scanf("%d", &s);
	int m = s / 60, h = m / 60;
	m %= 60;
	s %= 60;
	printf("[+] %d hora %d minuto(s) %d segundo(s)\n", h, m, s);

	return 0;
}

#include <stdio.h>

int main(void) {
	unsigned int hora, minuto, segundo, duracao;
	printf("Entre com o horario de inicio");
	scanf("%d%d%d", &hora, &minuto, &segundo);
	printf("tempo percorrido em segundos");
	scanf("%d", &duracao);
	printf("\n Inicio da experiência %d:%d:%d \n\n", hora, minuto, segundo);
	unsigned int inicio = (hora * 60 + minuto) * 60 + segundo;
	unsigned int termino = inicio + duracao;
	unsigned int fimSegundo = termino % 60;
	termino = termino / 60;
	unsigned int fimMinuto = termino % 60;
	unsigned int fimHora = termino / 60;
	printf(" Fim da experiência %d:%d:%d \n", fimHora, fimMinuto, fimSegundo);

	return 0;
}

#include <stdio.h>
int main(void) {
	int idade, ano;
	printf("Entre com a idade e o ano atual");
	scanf("%d%d", &idade, &ano);
	printf("Ano de nascimento eh %d\n", ano - idade);
	return 0;
}

#include <math.h>
#include <stdio.h>

int main(void) {
	int x, y;
	printf("coordenadas x, y");
	scanf("%d%d", &x, &y);
	printf("Distancia eh %.2f\n", sqrt(pow(x, 2) + pow(y, 2)));

	return 0;
}

#include <stdio.h>

int main(void) {
	float a1, a2, a3, vp;
	printf("valor de 3 apostas -> ");
	scanf("%f%f%f", &a1, &a2, &a3);
	printf(" valor do premio -> ");
	scanf("%f", &vp);
	float soma = a1 + a2 + a3;
	printf(" Primeiro apostador ganha  %.2f\n", (vp / soma) * a1);
	printf(" Segundo apostador ganha  %.2f\n", (vp / soma) * a2);
	printf(" Terceiro apostador ganha  %.2f\n", (vp / soma) * a3);

	return 0;
}

#include <stdio.h>

int main(void) {
	float c, l, p;
	printf("comprimento e lado ");
	scanf("%f%f", &c, &l);
	printf("preco do metro de tela ");
	scanf("%f", &p);
	printf("Custo para cercar eh %.0f\n", c * l * p);

	return 0;
}
