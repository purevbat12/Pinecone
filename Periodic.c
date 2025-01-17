#include "stdio.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>
#define s 118
typedef struct score{
    bool scr;
    int val;
} score;
typedef struct elements{
    int number;
    float mass;
    char name[15];
    char symbol[2];
} elements;
void menu();
void mass(elements *el);
void view(elements *el){
    int choice, num;
    char e[2];
    bool x = true;
    printf("Options{\n  (0) Show all of the elements.\n  (1) Show specific element according to symbol.\n  (2) Show elements up to the specified element via symbol.\n}\nYour input: ");
    while(x){
        scanf("%d", &choice);
        if(choice == 0 || choice == 1 || choice == 2){
            x = false;
        }
        else{
            printf("\nInvalid input, please try again: ");
        }
    }
    printf("Option %d chosen!\n", choice);
    x = true;
    switch(choice){
        case 0:
            for(int i = 0; i < s; i++){
                printf("\nName: %s\t\tSymbol: %s\tAtomic Number: %d\tAtomic Mass: %.3f\n\n", el[i].name, el[i].symbol, el[i].number, el[i].mass);
            }
            break;
        case 1:
            fflush(stdin);
            printf("\nType in the symbol: ");
            while(x){
                gets(e);
                for(int i = 0; i < s; i++){
                    if(strcmp(el[i].symbol, e) == 0){
                        x = false;
                    }
                }
                if(x){
                    printf("\nElement not found, invalid input. Please try again: ");
                }
            }
            for(int i = 0; i < s; i++){
                if(strcmp(e, el[i].symbol) == 0){
                    printf("\nName: %s\tSymbol: %s\tAtomic Number: %d\tAtomic Mass: %.3f\n\n", el[i].name, el[i].symbol, el[i].number, el[i].mass);
                }
            }
            break;
        case 2:
            fflush(stdin);
            printf("\nType in the symbol: ");
            while(x){
                gets(e);
                for(int i = 0; i < s; i++){
                    if(strcmp(el[i].symbol, e) == 0){
                        x = false;
                    }
                }
                if(x){
                    printf("\nElement not found, invalid input. Please try again: ");
                }
            }
            for(int i = 0; i < s; i++){
                if(strcmp(e, el[i].symbol) == 0){
                    num = el[i].number;
                }
            }
            for(int i = 0; i < num; i++){
                printf("\nName: %s\tSymbol: %s\tAtomic Number: %d\tAtomic Mass: %.3f\n\n", el[i].name, el[i].symbol, el[i].number, el[i].mass);
            }
            break;
    }
    printf("\nWould you like to go back to menu or exit? 1(menu) or 0(exit) :");
    bool x1 = true;
    while(x1){
        scanf("%d", &choice);
        switch(choice){
            case 1:
                x1 = false;
                menu();
                break;
            case 0:
                x1 = false;
                printf("\nThanks for using this program, bye!\n");
                exit(0);
                break;
            default:
                printf("Please type in valid input: ");
        }
    }
}
void menu(){
    elements el[] = {
        {1, 1.008, "Hydrogen", "H"},
        {2, 4.003, "Hellium", "He"},
        {3, 6.941, "Lithium", "Li"},
        {4, 9.012, "Beryllium", "Be"},
        {5, 10.81, "Boron", "B"},
        {6, 12.01, "Carbon", "C"},
        {7, 14.01, "Nitrogen", "N"},
        {8, 16.00, "Oxygen", "O"},
        {9, 19.00, "Flourine", "F"},
        {10, 20.18, "Neon", "Ne"},
        {11, 22.99, "Sodium", "Na"},
        {12, 24.31, "Magnesium", "Mg"},
        {13, 26.98, "Aluminium", "Al"},
        {14, 28.09, "Silicon", "Si"},
        {15, 30.97, "Phosphorus", "P"},
        {16, 32.06, "Sulfur", "S"},
        {17, 35.45, "Chlorine", "Cl"},
        {18, 39.95, "Argon", "Ar"},
        {19, 39.10, "Potassium", "K"},
        {20, 40.08, "Calcium", "Ca"},
        {21, 44.96, "Scandium", "Sc"},
        {22, 47.87, "Titantium", "Ti"},
        {23, 50.94, "Vanadium", "V"},
        {24, 52.00, "Chromium", "Cr"},
        {25, 54.94, "Manganese", "Mn"},
        {26, 55.85, "Iron", "Fe"},
        {27, 58.93, "Cobalt", "Co"},
        {28, 58.69, "Nickel", "Ni"},
        {29, 63.55, "Copper", "Cu"},
        {30, 65.38, "Zinc", "Zn"},
        {31, 69.72, "Gallium", "Ga"},
        {32, 72.63, "Germanium", "Ge"},
        {33, 74.92, "Arsenic", "As"},
        {34, 78.97, "Selenium", "Se"},
        {35, 79.90, "Bromine", "Br"},
        {36, 83.80, "Krypton", "Kr"},
        {37, 85.47, "Rubidium", "Rb"},
        {38, 87.62, "Strontium", "Sr"},
        {39, 88.91, "Yttrium", "Y"},
        {40, 91.22, "Zirconium", "Zr"},
        {41, 92.91, "Niobium", "Nb"},
        {42, 95.95, "Molydbenum", "Mo"},
        {43, 98.00, "Technetium", "Tc"},
        {44, 101.1, "Ruthenium", "Ru"},
        {45, 102.9, "Rhodium", "Rh"},
        {46, 106.4, "Palladium", "Pd"},
        {47, 107.9, "Silver", "Ag"},
        {48, 112.4, "Cadnium", "Cd"},
        {49, 114.8, "Indium", "In"},
        {50, 118.7, "Tin", "Sn"},
        {51, 121.8, "Antimony", "Sb"},
        {52, 127.6, "Tellurium", "Te"},
        {53, 126.9, "Iodine", "I"},
        {54, 131.3, "Xenon", "Xe"},
        {55, 132.9, "Cesium", "Cs"},
        {56, 137.3, "Barium", "Ba"},
        {57, 138.9, "Lanthanum", "La"},
        {58, 140.1, "Cerium", "Ce"},
        {59, 140.9, "Praseodynium", "Pr"},
        {60, 144.2, "Neodymium", "Nd"},
        {61, 144.9, "Promethium", "Pm"},
        {62, 150.4, "Samarium", "Sm"},
        {63, 152.0, "Europium", "Eu"},
        {64, 157.2, "Gadolinium", "Gd"},
        {65, 158.9, "Terbium", "Tb"},
        {66, 162.5, "Dysprosium", "Dy"},
        {67, 164.9, "Holmium", "Ho"},
        {68, 167.3, "Erbium", "Er"},
        {69, 168.9, "Thulium", "Tm"},
        {70, 173.0, "Ytterbium", "Yb"},
        {71, 175.0, "Lutetium", "Lu"},
        {72, 178.5, "Hafnium", "Hf"},
        {73, 180.9, "Tantalium", "Ta"},
        {74, 183.8, "Tungsten", "W"},
        {75, 186.2, "Rhenium", "Re"},
        {76, 190.2, "Osmium", "Os"},
        {77, 192.2, "Iridium", "Ir"},
        {78, 195.1, "Platinum", "Pt"},
        {79, 197.0, "Gold", "Au"},
        {80, 200.6, "Mercury", "Hg"},
        {81, 204.4, "Thallium", "Tl"},
        {82, 207.2, "Lead", "Pb"},
        {83, 209.0, "Bismuth", "Bi"},
        {84, 209.0, "Polonium", "Po"},
        {85, 210.0, "Astatine", "At"},
        {86, 222.0, "Radon", "Rn"},
        {87, 223.0, "Francium", "Fr"},
        {88, 226.0, "Radium", "Ra"},
        {89, 227.0, "Actinium", "Ac"},
        {90, 232.0, "Thorium", "Th"},
        {91, 231.0, "Protactinium", "Pa"},
        {92, 238.0, "Uranium", "U"},
        {93, 237.0, "Neptunium", "Np"},
        {94, 244.1, "Plutonium", "Pu"},
        {95, 243.1, "Americium", "Am"},
        {96, 247.1, "Curium", "Cm"},
        {97, 247.1, "Berkelium", "Bk"},
        {98, 251.1, "Californium", "Cf"},
        {99, 254.0, "Einsteinium", "Es"},
        {100, 257.1, "Fermium", "Fm"},
        {101, 258.1, "Mendelevium", "Md"},
        {102, 259.1, "Nobelium", "No"},
        {103, 266.0, "Lawrencium", "Lr"},
        {104, 267.0, "Rutherfordium", "Rf"},
        {105, 268.0, "Dubnium", "Db"},
        {106, 269.0, "Seaborgium", "Sg"},
        {107, 270.0, "Bohrium", "Bh"},
        {108, 270.0, "Hassium", "Hs"},
        {109, 278.0, "Meitnerium", "Mt"},
        {110, 281.0, "Darmstadium", "Ds"},
        {111, 282.0, "Roentgenium", "Rg"},
        {112, 285.0, "Copernicium", "Cn"},
        {113, 286.0, "Nihonium", "Nh"},
        {114, 289.0, "Flerovium", "Fl"},
        {115, 290.0, "Moscovium", "Mc"},
        {116, 293.0, "Livermorium", "Lv"},
        {117, 294.0, "Tennessine", "Ts"},
        {118, 294.0, "Oganesson", "Og"}
    };
    printf("\t\t\t\t\t\t\t\t\t\t\tPeriodic table quiz.\n\nInput the index of your challenge.\nThe list of items{\n\n  (0) View periodic table content.\n\n  (1) Atomic mass of an element by the symbol.\n\n}\nYour input: ");
    bool x = 1;
    int inp;
    while(x){
        scanf("%d", &inp);
        if(inp == 1 || inp == 0){
            x = 0;
        }
        else{
            printf("\nInvalid input, please type again: ");
        }
    }
    printf("\nYou have choosen %d option.\n", inp);
    switch(inp){
        case 1:
            mass(el);
            break;
        case 0:
            view(el);
            break;
    }
}
int main(){
    menu();
    return 0;
}
void mass(elements *el){
    srand(time(NULL));
    char *sym;
    sym = malloc(sizeof(char) * 2);
    int num, random, i1 = 0, i2 = 0, correct = 0, incorrect = 0;
    float mass1;
    bool x = 1;
    score *scores;
    printf("\nInput the symbol of the element that you want to exam yourself until: ");
    while(x){
        fflush(stdin);
        gets(sym);
        printf("\nUntil %s element.\n", sym);
        for(int i = 0; i < s; i++){
            if((strcmp(sym, (el + i)->symbol)) == 0){
                num = (el + i)->number;
                printf("The element is %s", (el + i)->name);
                x = 0;
                break;
            }
        }
        if(x){  
            printf("Invalid input, please type again: ");
        }
    }
    printf("\nYou have %d elements to exam yourself randomly!\n", num);
    scores = malloc(sizeof(struct score) * num);
    bool x1 = false;
    int *li;
    li = malloc(sizeof(int) * num);
    li[0] = rand() % num;
    for(int i = 1; i < num; i++){
        random = rand() % num;
        for(int j = 0; j < i; j++){
            if(li[j] == random){
                x1 = true;
                break;
            }
        }
        if(x1){
            i--;
        }
        else{
            li[i] = random;
        }
        x1 = false;
    }
    printf("Format for the examination { symbol : atomic mass }\n");
    for(int i = 0; i < num; i++){
        printf("\n%s atomic mass: ", el[li[i]].symbol);
        scanf("%f",  &mass1);
        if(mass1 - el[li[i]].mass == 0){
            printf("Correct.\n\n");
            scores[i].scr = true;
        }
        else{
            printf("Incorrect.\n\n");
            scores[i].scr = false;
            scores[i].val = el[i].number;
        }
        for(int j = 0; j < num; j++){
            if(li[i] == el[j].number){
                scores[i].val = li[i];
            }
        }
        if(li[i] == 0){
            scores[i].val = 0;
        }
    }
    score temp;
    printf("\n");
    for(int i = 0; i < num - 1; i++){
        for(int j = 0; j < num - 1; j++){
            if(scores[j].val > scores[j + 1].val){
                temp = scores[j + 1];
                scores[j + 1] = scores[j];
                scores[j] = temp;
            }
        }
    }
    for(int i = 0; i < num; i++){
        if(scores[i].scr){
            correct++;
        }
        else{
            incorrect++;
        }
    }
    double rate = ((double)correct / (double)num) * 100.0;
    if(rate == 00.0){
        printf("Not even close.\n\n");
    }
    else if(rate >= 30.0){
        printf("Needs some practice.\n\n");
    }
    else if(rate >= 50.0){
        printf("Mid.\n\n");
    }
    else if(rate >= 80.0){
        printf("Good job.\n\n");
    }
    else if(rate >= 90.0 && rate <= 100.0){
        printf("Great job!\n\n");
    }
    printf("Your Score{\n  Correct: %d\n  Incorrect: %d\n  Success rate: %.2lf%%\n}\nStatus: ", correct, incorrect, rate);
    
    for(int i = 0; i < num; i++){
        printf("%s = %s\t", el[scores[i].val].symbol, scores[i].scr ? "Correct" : "Incorrect");
    }
    printf("\nWould you like to go back to menu or exit? 1(menu) or 0(exit) :");
    int choice;
    x1 = true;
    while(x1){
        scanf("%d", &choice);
        switch(choice){
            case 1:
                x1 = false;
                menu();
                break;
            case 0:
                x1 = false;
                printf("\nThanks for using this program, bye!\n");
                exit(0);
                break;
            default:
                printf("Please type in valid input: ");
        }
    }
}