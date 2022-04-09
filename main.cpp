#include <iostream>
#include "Computer.h"

Computer readInput(){
    Computer computer;

    int productuinYear = 0;
    double price = 0;
    bool isNotebook = false;
    int totalMemory = 0;
    int unusedMemory = 0;
    std::string operatSystem;

    std::cin >> productuinYear >> price >> isNotebook >> totalMemory >> unusedMemory >> operatSystem;

    computer.setProductionYear(productuinYear);
    computer.setPrice(price);
    computer.setIsNoteBook(isNotebook);
    computer.setHardDiskMemory(totalMemory);
    computer.setFreeMemory(unusedMemory);
    computer.setOperationSystem(operatSystem);

    return computer;
}

void printInforForComputer(Computer & computer){
    std::cout << computer.getProductionYear() << " " << computer.getPrice() << " " << computer.getIsNoteBook() << " "
    << computer.getHardDiskMemory() << " " << computer.getFreeMemory() << " " << computer.getOperationSystem() << std::endl;
}

int main() {
    auto *intel = new Computer();
    auto *amd = new Computer();

    *intel = readInput();
    *amd = readInput();

    //intel->changeOperationSystem((std::string &) "Fedora");
    //amd->useMemory(100);

    printInforForComputer(*intel);
    printInforForComputer(*amd);

    delete intel;
    delete amd;

    return 0;
}

/*
2019 2500.00 0 100000 320 Windows10
2022 3500.57 1 543000 80 MacIOS
 */