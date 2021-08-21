
int main(){
	float a, b, c, d;
	
	printf("\nexpresion de segundo\n\n");
	printf("  2\n");
	printf("ax + bx + c = 0 \n\n");
	printf("introduzca valor de a: ");
	scanf("%f", &a);
	printf(introduzca valor de b: ");
	scanf("%f", &b);
	printf("introduzca valor de c: ");
	scanf("%f", &c);
	
	d=b*b-(4*a*c);
	
	if (d==0)
	printf("sol.: %.2f\n", -b/(2*a));
	else if (d>0){
	printf("sol. 1: %.2f\n", (-b+sqrt(d))/(2*a));
	printf("sol. 2: %.2f\n", (-b-sqrt(d))/(2*a));
	}
	else { /* d<0 */
	printf("sol. 1: %.2f+%.2f i\n", -b/(2*a), (sqrt(-d))/(2*a));
	printf("sol. 2: %.2f-%.2f i\n", -b(2*a),  (sqrt(-d))/(2*a));
	}
	return 0;
	}
