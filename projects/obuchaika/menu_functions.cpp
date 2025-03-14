#include "menu_functions.hpp"
#include "menu_items.hpp"
#include <iostream>

namespace Shitov {

const MenuItem* showMainMenu(const MenuItem* current) {
    std::cout << "Главное меню:\n"
              << "1 - Посмотреть университеты Санкт-Петербурга\n"
              << "0 - Я уже студент\n"
              << "Выбор: ";

    int choice;
    std::cin >> choice;

    if (choice == 1) return &UNIVERSITIES_MENU;
    if (choice == 0) return nullptr;

    std::cout << "Некорректный ввод, попробуйте снова.\n";
    return current;
}

const MenuItem* showUniversitiesMenu(const MenuItem* current) {
    std::cout << "Выберите университет:\n"
              << "1 - СПбГУ\n"
              << "2 - ИТМО\n"
              << "3 - Политех\n"
              << "4 - ЛЭТИ\n"
              << "0 - Выйти в главное меню\n"
              << "Выбор: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: return &SPBU_MENU;
        case 2: return &ITMO_MENU;
        case 3: return &POLYTECH_MENU;
        case 4: return &LETI_MENU;
        case 0: return &MAIN;
        default:
            std::cout << "Некорректный ввод, попробуйте снова.\n";
            return current;
    }
}

const MenuItem* showSPBUMenu(const MenuItem* current) {
    std::cout << "Выберите факультет СПбГУ:\n"
              << "1 - Факультет ПМ-ПУ\n"
              << "2 - Факультет МатМех\n"
              << "3 - Лингвистический факультет\n"
              << "0 - Выйти в предыдущее меню\n"
              << "Выбор: ";

    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1: return &PM_PU_FACULTY;
        case 2: return &MATMECH_FACULTY;
        case 3: return &LINGUISTIC_FACULTY;
        case 0: return &UNIVERSITIES_MENU;
        default:
            std::cout << "Некорректный ввод, попробуйте снова.\n";
            return current;
    }
}

} // namespace Shitov
