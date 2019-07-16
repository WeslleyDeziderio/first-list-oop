#include <iostream>
#include "Pagamento.h"
#include "ControleDePagamentos.h"

int main(void){
    ControleDePagamentos controle1() = ControleDePagamentos();

    Pagamento pagamento1(2299, "Jade");
    Pagamento pagamento2(2299, "Alexandre");

    controle1.setPagamentos(pagamento1);
    controle1.setPagamentos(pagamento2);

    std::cout << controle.CalculaTotalDePagamentos();

    return 0;
}
