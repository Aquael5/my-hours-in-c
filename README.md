# my-hours-in-c
Simple digital watch 

Usei para limpar a tela e para posicionar o cursor no topo esquerdo da tela.printf("\033[2J")printf("\033[1;1H")
Exibi a hora formatada com , usando para centralizar o relógio na tela.printf("\n\n\t\t\t%02d:%02d:%02d\n", h, m, s)\t
Aumente os segundos, minutos e horas de forma adequada.
Usei para aguardar um segundo antes de atualizar o relógio.usleep(1000000)


Observação: Este código usa sequências de escape ANSI para controlar a posição do cursor e limpar a tela. Isso pode não funcionar em todos os terminais ou plataformas. Além disso, o uso pode não ser portável para todos os sistemas operacionais.usleep
