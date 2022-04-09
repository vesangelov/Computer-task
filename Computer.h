//
// Created by vesel on 6.4.2022 г..
//

#ifndef COMPTURER_TASK_EXERCISE_COMPUTER_H
#define COMPTURER_TASK_EXERCISE_COMPUTER_H

#include <iostream>
#include <string>

class Computer{
    int productionYear;
    double price;
    bool isNoteBook;
    int hardDiskMemory;
    int freeMemory;
    std::string operatioSystem;
public:
    int getProductionYear(){
        return this->productionYear;
    }

    double const getPrice(){
        return this->price;
    }

    bool getIsNoteBook(){
        return this->isNoteBook;
    }

    int getHardDiskMemory(){
        return this->hardDiskMemory;
    }

    int getFreeMemory(){
        return this->freeMemory;
    }

    std::string getOperationSystem(){
        return this->operatioSystem;
    }

    int setProductionYear(int year){
        return this->productionYear = year;
    }

    double setPrice(double currentPrice){
        return this->price = currentPrice;
    }

    bool setIsNoteBook(bool isComputerNotebBook){
        return this->isNoteBook = isComputerNotebBook;
    }

    int setHardDiskMemory(int memory){
        return this->hardDiskMemory = memory;
    }

    int setFreeMemory(int currentFreeMemory){
        return this->freeMemory = currentFreeMemory;
    }

    std::string setOperationSystem(std::string currentSystem){
        return this->operatioSystem = currentSystem;
    }

    std::string changeOperationSystem(std::string & newSystem){
        setOperationSystem(newSystem);
    }

    int useMemory(int usedMemory){
        int leftMemory = getFreeMemory() - usedMemory;
        if(leftMemory < 0){
            std::cout << "Not enough free memory" << std::endl;
        }
        else {
            setFreeMemory(usedMemory);
        }
    }

    Computer(int year, double currentPrice, bool isNotebook, int totalMemory, int unusedMemory, std::string operatSystem){
        this->productionYear = year;
        this->price = currentPrice;
        this->isNoteBook = isNotebook;
        this->hardDiskMemory = totalMemory;
        this->freeMemory = unusedMemory;
        this->operatioSystem = operatSystem;
    }

    ~Computer(){}


    Computer() {

    }
};

#endif //COMPTURER_TASK_EXERCISE_COMPUTER_H
