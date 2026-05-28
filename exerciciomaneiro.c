#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {
    int numero;

    printf("Calculo de fatorial (recursivo)\n");
    printf("Digite um numero inteiro nao negativo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Fatorial nao tem pra negativo k.\n");
        return 1;
    }

    if (numero > 12) {
        printf("Aviso: O fatorial de %d e gigantenorme e nao vai ta dando porque vai estora a memoriaa.\n", numero);
    }

    int resultado = fatorial(numero);
    printf("%d! = %d\n", numero, resultado);

	system("pause");
    return 0;
}
