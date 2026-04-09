#include <stdio.h>

#define USD_RATE 1300
#define EUR_RATE 1400

int main() {

    int won = 1000000;

    int usd = won / USD_RATE;
    int usd_remain = won % USD_RATE;

    int eur = won / EUR_RATE;
    int eur_remain = won % EUR_RATE;

    printf("Korean Won : %d\n\n", won);

    printf("USD Exchange\n");
    printf("USD : %d\n", usd);
    printf("Remaining KRW : %d\n\n", usd_remain);

    printf("EUR Exchange\n");
    printf("EUR : %d\n", eur);
    printf("Remaining KRW : %d\n", eur_remain);

    return 0;
}
