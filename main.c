#include <stdio.h>

// Funções de conversão de comprimento
double metros_para_centimetros(double metros) {
    return metros * 100.0;
}
double metros_para_milimetros(double metros) {
    return metros * 1000.0;
}
double centimetros_para_metros(double centimetros) {
    return centimetros / 100.0;
}
double centimetros_para_milimetros(double centimetros) {
    return centimetros * 10.0;
}
double milimetros_para_metros(double milimetros) {
    return milimetros / 1000.0;
}

double milimetros_para_centimetros(double milimetros) {
    return milimetros / 10.0;
}

// Funções de conversão de potência
double watts_para_quilowatts(double watts) {
    return watts / 1000.0;
}
double watts_para_cv(double watts) {
    return watts / 735.5;
}
double quilowatts_para_watts(double quilowatts) {
    return quilowatts * 1000.0;
}
double quilowatts_para_cv(double quilowatts) {
    return quilowatts * 1.35962;
}
double cv_para_watts(double cv) {
    return cv * 735.5;
}
double cv_para_quilowatts(double cv) {
    return cv / 1.35962;
}

void comprimento() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Comprimento ===\n");
        printf("[1] Metros para Centímetros\n");
        printf("[2] Metros para Milímetros\n");
        printf("[3] Centímetros para Metros\n");
        printf("[4] Centímetros para Milímetros\n");
        printf("[5] Milímetros para Metros\n");
        printf("[6] Milímetros para Centímetros\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = metros_para_centimetros(valor);
                printf("%.2f metros = %.2f centímetros\n", valor, resultado);
                break;
            case 2:
                resultado = metros_para_milimetros(valor);
                printf("%.2f metros = %.2f milímetros\n", valor, resultado);
                break;
            case 3:
                resultado = centimetros_para_metros(valor);
                printf("%.2f centímetros = %.2f metros\n", valor, resultado);
                break;
            case 4:
                resultado = centimetros_para_milimetros(valor);
                printf("%.2f centímetros = %.2f milímetros\n", valor, resultado);
                break;
            case 5:
                resultado = milimetros_para_metros(valor);
                printf("%.2f milímetros = %.2f metros\n", valor, resultado);
                break;
            case 6:
                resultado = milimetros_para_centimetros(valor);
                printf("%.2f milímetros = %.2f centímetros\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

void temperatura() {
    printf("=== Conversões de Temperatura ===\n");
    // Implementar as opções de conversão de temperatura aqui
}

void massa() {
    printf("=== Conversões de Massa ===\n");
    // Implementar as opções de conversão de massa aqui
}

void volume() {
    printf("=== Conversões de Volume ===\n");
    // Implementar as opções de conversão de volume aqui
}

void tempo() {
    printf("=== Conversões de Tempo ===\n");
    // Implementar as opções de conversão de tempo aqui
}

void velocidade() {
    printf("=== Conversões de Velocidade ===\n");
    // Implementar as opções de conversão de velocidade aqui
}

void dados() {
    printf("=== Conversões de Dados ===\n");
    // Implementar as opções de conversão de dados aqui
}

void potencia() {
    int opcao;
    double valor, resultado;

    do {
        printf("\n=== Conversões de Potência ===\n");
        printf("[1] Watts para Quilowatts\n");
        printf("[2] Watts para Cavalos-vapor (cv)\n");
        printf("[3] Quilowatts para Watts\n");
        printf("[4] Quilowatts para Cavalos-vapor (cv)\n");
        printf("[5] Cavalos-vapor (cv) para Watts\n");
        printf("[6] Cavalos-vapor (cv) para Quilowatts\n");
        printf("[0] Voltar ao menu principal\n");
        printf("Escolha uma opção : ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 6) {
            printf("Digite o valor: ");
            scanf("%lf", &valor);
        }

        switch (opcao) {
            case 1:
                resultado = watts_para_quilowatts(valor);
                printf("%.2f watts = %.2f quilowatts\n", valor, resultado);
                break;
            case 2:
                resultado = watts_para_cv(valor);
                printf("%.2f watts = %.2f cavalos-vapor (cv)\n", valor, resultado);
                break;
            case 3:
                resultado = quilowatts_para_watts(valor);
                printf("%.2f quilowatts = %.2f watts\n", valor, resultado);
                break;
            case 4:
                resultado = quilowatts_para_cv(valor);
                printf("%.2f quilowatts = %.2f cavalos-vapor (cv)\n", valor, resultado);
                break;
            case 5:
                resultado = cv_para_watts(valor);
                printf("%.2f cavalos-vapor (cv) = %.2f watts\n", valor, resultado);
                break;
            case 6:
                resultado = cv_para_quilowatts(valor);
                printf("%.2f cavalos-vapor (cv) = %.2f quilowatts\n", valor, resultado);
                break;
            case 0:
                printf("Voltando ao menu principal...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);
}

int main() {
    int opcao;

    do {
        printf("\n===== Menu de Conversões =====\n");
        printf("[1] Comprimento\n");
        printf("[2] Temperatura\n");
        printf("[3] Massa\n");
        printf("[4] Volume\n");
        printf("[5] Tempo\n");
        printf("[6] Velocidade\n");
        printf("[7] Dados (Bits, Bytes, KB, MB, GB, TB)\n");
        printf("[8] Potência (Watts, Quilowatts, Cavalos-vapor)\n");
        printf("[0] Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                comprimento();
                break;
            case 2:
                temperatura();
                break;
            case 3:
                massa();
                break;
            case 4:
                volume();
                break;
            case 5:
                tempo();
                break;
            case 6:
                velocidade();
                break;
            case 7:
                dados();
                break;
            case 8:
                potencia();
                break;
            case 0:
                printf("Saindo do programa. Até mais!\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
