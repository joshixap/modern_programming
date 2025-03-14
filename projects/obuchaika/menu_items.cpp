#include "menu_items.hpp"
#include "menu_functions.hpp"

namespace Shitov {

// Определение элементов меню
const MenuItem MAIN = { "Главное меню", showMainMenu, nullptr, nullptr, 0 };

const MenuItem UNIVERSITIES_MENU = { "Университеты Санкт-Петербурга", showUniversitiesMenu, &MAIN, nullptr, 0 };

const MenuItem SPBU_MENU = { "СПбГУ", showSPBUMenu, &UNIVERSITIES_MENU, nullptr, 0 };

// Факультеты СПбГУ
const MenuItem PM_PU_FACULTY = { "Факультет ПМ-ПУ", nullptr, &SPBU_MENU, nullptr, 0 };
const MenuItem MATMECH_FACULTY = { "Факультет МатМех", nullptr, &SPBU_MENU, nullptr, 0 };
const MenuItem LINGUISTIC_FACULTY = { "Лингвистический факультет", nullptr, &SPBU_MENU, nullptr, 0 };

// Массив факультетов СПбГУ
const MenuItem* SPBU_CHILDREN[] = { &PM_PU_FACULTY, &MATMECH_FACULTY, &LINGUISTIC_FACULTY };
const int SPBU_CHILDREN_COUNT = sizeof(SPBU_CHILDREN) / sizeof(SPBU_CHILDREN[0]);

// Обновляем SPBU_MENU с дочерними элементами
const MenuItem SPBU_MENU_UPDATED = { "СПбГУ", showSPBUMenu, &UNIVERSITIES_MENU, SPBU_CHILDREN, SPBU_CHILDREN_COUNT };

// Остальные университеты (заглушки)
const MenuItem ITMO_MENU = { "ИТМО", nullptr, &UNIVERSITIES_MENU, nullptr, 0 };
const MenuItem POLYTECH_MENU = { "Политех", nullptr, &UNIVERSITIES_MENU, nullptr, 0 };
const MenuItem LETI_MENU = { "ЛЭТИ", nullptr, &UNIVERSITIES_MENU, nullptr, 0 };

} // namespace Shitov
