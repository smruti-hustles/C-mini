
#include <stdio.h>

int main()
{
   int n,m,a,exit,exi;
   
   printf("***Welcome to Modern Periodic Table***\n\n");
   printf("In this all you have to do is to enter the atomic number and you will get all the information about that element.");
   printf("Lets begin!!!😁✌️");
   
   printf("Enter 1 to know about the Periodic Table\n");
   printf("Enter 2 to close the Periodic Table\n");
   
   printf("Enter : ");
   scanf("%d",&n);
   
   if(n==1){
       printf("Press 3 to search the atomic number\n");
       printf("Enter\n");
       scanf("%d",&m);
       
       if(m==3){
           printf("Enter the atomic number of the element and you will get the information");
           scanf("%d",&a);
           
           switch(a) {
        case 1: printf("Hydrogen - H ");
                break;
        case 2: printf("Helium - He ");
                break;
        case 3: printf("Lithium - Li ");
                break;
        case 4: printf("Beryllium - Be ");
                break;
        case 5: printf("Boron - B ");
                break;
        case 6: printf("Carbon - C ");
                break;
        case 7: printf("Nitrogen - N ");
                break;
        case 8: printf("Oxygen - O ");
                break;
        case 9: printf("Fluorine - F ");
                break;
        case 10: printf("Neon - Ne ");
                break;
        case 11: printf("Sodium - Na ");
                break;
        case 12: printf("Magnesium - Mg ");
                break;
        case 13: printf("Aluminium - Al ");
                break;
        case 14: printf("Silicon - Si ");
                break;
        case 15: printf("Phosphorus - P ");
                break;
        case 16: printf("Sulfur - S ");
                break;
        case 17: printf("Chlorine - Cl ");
                break;
        case 18: printf("Argon - Ar ");
                break;
        case 19: printf("Potassium - K ");
                break;
        case 20: printf("Calcium - Ca ");
                break;
        case 21: printf("Scandium - Sc ");
                break;
        case 22: printf("Titanium - Ti ");
                break;
        case 23: printf("Vanadium - V ");
                break;
        case 24: printf("Chromium - Cr ");
                break;
        case 25: printf("Manganese - Mn ");
                break;
        case 26: printf("Iron - Fe ");
                break;
        case 27: printf("Cobalt - Co ");
                break;
        case 28: printf("Nickel - Ni ");
                break;
        case 29: printf("Copper - Cu ");
                break;
        case 30: printf("Zinc - Zn ");
                break;
        case 31: printf("Gallium - Ga ");
                break;
        case 32: printf("Germanium - Ge ");
                break;
        case 33: printf("Arsenic - As ");
                break;
        case 34: printf("Selenium - Se ");
                break;
        case 35: printf("Bromine - Br ");
                break;
        case 36: printf("Krypton - Kr ");
                break;
        case 37: printf("Rubidium - Rb ");
                break;
        case 38: printf("Strontium - Sr ");
                break;
        case 39: printf("Yttrium - Y ");
                break;
        case 40: printf("Zirconium - Zr ");
                break;
        case 41: printf("Niobium - Nb ");
                break;
        case 42: printf("Molybdenum - Mo ");
                break;
        case 43: printf("Technetium - Tc ");
                break;
        case 44: printf("Ruthenium - Ru ");
                break;
        case 45: printf("Rhodium - Rh ");
                break;
        case 46: printf("Palladium - Pd ");
                break;
        case 47: printf("Silver - Ag ");
                break;
        case 48: printf("Cadmium - Cd ");
                break;
        case 49: printf("Indium - In ");
                break;
        case 50: printf("Tin - Sn ");
                break;
        case 51: printf("Antimony - Sb ");
                break;
        case 52: printf("Tellurium - Te ");
                break;
        case 53: printf("Iodine - I ");
                break;
        case 54: printf("Xenon - Xe ");
                break;
        case 55: printf("Cesium - Cs ");
                break;
        case 56: printf("Barium - Ba ");
                break;
        case 57: printf("Lanthanum - La ");
                break;
        case 58: printf("Cerium - Ce ");
                break;
        case 59: printf("Praseodymium - Pr ");
                break;
        case 60: printf("Neodymium - Nd ");
                break;
        case 61: printf("Promethium - Pm ");
                break;
        case 62: printf("Samarium - Sm ");
                break;
        case 63: printf("Europium - Eu ");
                 break;
        case 64: printf("Gadolinium - Gd ");
                break;
        case 65: printf("Terbium - Tb ");
                break;
        case 66: printf("Dysprosium - Dy ");
                break;
        case 67: printf("Holmium - Ho ");
                break;
        case 68: printf("Erbium - Er ");
                break;
        case 69: printf("Thulium - Tm ");
                break;
        case 70: printf("Ytterbium - Yb ");
                break;
        case 71: printf("Lutetium - Lu ");
                break;
        case 72: printf("Hafnium - Hf ");
                break;
        case 73: printf("Tantalum - Ta ");
                break;
        case 74: printf("Tungsten - W ");
                break;
        case 75: printf("Rhenium - Re ");
                break;
        case 76: printf("Osmium - Os ");
                break;
        case 77: printf("Iridium - Ir ");
                break;
        case 78: printf("Platinum - Pt ");
                break;
        case 79: printf("Gold - Au ");
                break;
        case 80: printf("Mercury - Hg ");
                break;
        case 81: printf("Thallium - Tl ");
                break;
        case 82: printf("Lead - Pb ");
                break;
        case 83: printf("Bismuth - Bi ");
                break;
        case 84: printf("Polonium - Po ");
                break;
        case 85: printf("Astatine - At ");
                break;
        case 86: printf("Radon - Rn ");
                break;
        case 87: printf("Francium - Fr ");
                break;
        case 88: printf("Radium - Ra ");
                break;
        case 89: printf("Actinium - Ac ");
                break;
        case 90: printf("Thorium - Th ");
                break;
        case 91: printf("Protactinium - Pa ");
                break;
        case 92: printf("Uranium - U ");
                break;
        case 93: printf("Neptunium - Np ");
                break;
        case 94: printf("Plutonium - Pu ");
                break;
        case 95: printf("Americium - Am ");
                break;
        case 96: printf("Curium - Cm ");
                break;
        case 97: printf("Berkelium - Bk ");
                break;
        case 98: printf("Californium - Cf ");
                break;
        case 99: printf("Einsteinium - Es ");
                break;
        case 100: printf("Fermium - Fm ");
                break;
        case 101: printf("Mendelevium - Md ");
                break;
        case 102: printf("Nobelium - No ");
                break;
        case 103: printf("Lawrencium - Lr ");
                break;
        case 104: printf("Rutherfordium - Rf ");
                break;
        case 105: printf("Dubnium - Db ");
                break;
        case 106: printf("Seaborgium - Sg ");
                break;
        case 107: printf("Bohrium - Bh ");
                break;
        case 108: printf("Hassium - Hs ");
                break;
        case 109: printf("Meitnerium - Mt ");
                break;
        case 110: printf("Darmstadtium - Ds ");
                break;
        case 111: printf("Roentgenium - Rg ");
                break;
        case 112: printf("Copernicium - Cn ");
                break;
        case 113: printf("Nihonium - Nh ");
                break;
        case 114: printf("Flerovium - Fl ");
                break;
        case 115: printf("Moscovium - Mc ");
                break;
        case 116: printf("Livermorium - Lv ");
                break;
        case 117: printf("Tennessine - Ts ");
                break;
        case 118: printf("Oganesson - Og ");
                break;
        default: printf("Invalid atomic number entered.");
    }         
      
       }
   }
   else if(n==2){
       printf("Exit");
       return;
   }
   else{
       printf("Wrong choice");
   }
    return 0;
}
