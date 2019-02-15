#include <iostream>
#include <iomanip>

int main() {
    int poleNumber(0);
    int liczbaZajetychPol(0);
    bool znak(true);
    char symbol('X');
   char pole1('1');
   char pole2('2');
   char pole3('3');
   char pole4('4');
   char pole5('5');
   char pole6('6');
   char pole7('7');
   char pole8('8');
   char pole9('9');
   char odp('N');
   do {
       std::cout << "Dzień dobry, czy chcesz zagrać w kółko i krzyżyk? (Y/N) ";
       std::cin >> odp;
       //toupper(odp);
       if(toupper(odp)!='Y')
       {
           break;
       }
       std::cout << std::setw(3) << pole1 << "|" << pole2 << "|" << pole3 << std::endl;
       std::cout << std::setw(3) << "-" << " " << "-" << " " << "-" << std::endl;
       std::cout << std::setw(3) << pole4 << "|" << pole5 << "|" << pole6 << std::endl;
       std::cout << std::setw(3) << "-" << " " << "-" << " " << "-" << std::endl;
       std::cout << std::setw(3) << pole7 << "|" << pole8 << "|" << pole9 << std::endl;

       while(liczbaZajetychPol!=9)
       {

           std::cout << "Podaj numer pola które chcesz zająć ";
           std::cin >> poleNumber;
           bool zajmij(false);
           switch(poleNumber)
           {
               case 1:
                   if(pole1=='1')
                   {
                       pole1 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;

                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;

                   }
                   break;
               case 2:
                   if(pole2=='2')
                   {
                       pole2 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 3:
                   if(pole3=='3')
                   {
                       pole3 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 4:
                   if(pole4=='4')
                   {
                       pole4 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;

                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 5:
                   if(pole5=='5')
                   {
                       pole5 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 6:
                   if(pole6=='6')
                   {
                       pole6 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 7:
                   if(pole7=='7')
                   {
                       pole7 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 8:
                   if(pole8=='8')
                   {
                       pole8 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               case 9:
                   if(pole9=='9')
                   {
                       pole9 = symbol;
                       liczbaZajetychPol+=1;
                       zajmij=true;
                   }
                   else{
                       std::cout<< "Podany numer pola jest zajęty zajmij inne pole"<<std::endl;
                       //znak=!znak;
                   }
                   break;
               default:
                   std::cout<<"Podano niepiprawny numer pola, spróbuj ponownie"<<std::endl;
                   //znak=!znak;
           }
           if(zajmij)
           {
               if (znak) {
                   symbol = 'O';
                   znak = !znak;
               } else {
                   symbol = 'X';
                   znak = !znak;
               }
               zajmij = false;
           }


           std::cout << std::setw(3) << pole1 << "|" << pole2 << "|" << pole3 << std::endl;
           std::cout << std::setw(3) << "-" << " " << "-" << " " << "-" << std::endl;
           std::cout << std::setw(3) << pole4 << "|" << pole5 << "|" << pole6 << std::endl;
           std::cout << std::setw(3) << "-" << " " << "-" << " " << "-" << std::endl;
           std::cout << std::setw(3) << pole7 << "|" << pole8 << "|" << pole9 << std::endl;

       }
       if(pole1==pole2 && pole3==pole2||
          pole4==pole5 && pole5==pole6||
          pole7==pole8 && pole8==pole9||
          pole1==pole4 && pole4==pole7||
          pole2==pole5 && pole5==pole8||
          pole3==pole6 && pole6==pole9||
          pole1==pole5 && pole5==pole9||
          pole3==pole5 && pole5==pole7)
       {
           std::cout<<" WYGRAŁ: "<<pole1<<std::endl;
       }
       else{
           std::cout<<"REMIS"<<std::endl;
       }


   }while(odp!='N');

    return 0;
}