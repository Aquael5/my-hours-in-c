#include <stdio.h>
#include <unistd.h>

int main() {
    int h = 0, m = 0, s = 0;

    while (1) {
        // Limpa a tela
        printf("\033[2J");
        printf("\033[1;1H"); // Posiciona o cursor no topo esquerdo da tela

        // Exibe a mensagem acima do relógio
        printf("\n\n\t\t\tThe time for Aqua Asael Pelegon Semjasa\n");

        // Exibe a hora formatada
        printf("\n\t\t\t%02d:%02d:%02d\n", h, m, s);

        // Incrementa os segundos
        s++;
        if (s >= 60) {
            s = 0;
            m++;
            if (m >= 60) {
                m = 0;
                h++;
                if (h >= 24) {
                    h = 0;
                }
            }
        }

        // Aguarda um segundo antes de atualizar
        usleep(1000000); // 1 segundo em microsegundos
    }

    return 0;
}
