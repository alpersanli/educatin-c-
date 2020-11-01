/*
// DERS 1: HER ZAMAN BU YAPI OLMALI

#include <iostream>    
using namespace std;

int main() {

  return 0;
}

// HER ZAMAN BU YAPI OLMALI
*/



/*
// TERMINAL ICIN
//  bunu kopyala yapistir terminale ""clang++-7 -pthread -std=c++17 -o isim isim.cpp"" ardindan "./1" yaz terminale   
*/







/*
// DERS 2: YAZI YAZMA

#include <iostream>    
using namespace std;

int main() {

  cout<<"Hello World";

  return 0;
}
*/






/*
#include <iostream>    
using namespace std;
int main() {

  cout<<"Hello World\n";   // alt satira gecti \n ile 
  cout<<"Hello World";

  return 0;
}
*/




/*
#include <iostream>    
using namespace std;
int main() {

  cout<<"Hello World" << endl ;   // alt satira gecti <<endl ile 
  cout<<"Hello World";

  return 0;
}
*/








/*
// DERS 3: DEGISKEN TIPLERI
#include <iostream>    
using namespace std;
int main() {

  int a = 32;
  float b = 3.52;
  double c = 4.54654;   // daha hassas
  char d = 'A';  // eger d=5 vb olsaydi tablodan alfabe karsiligini yazar
  bool e = false;

  cout<<"a degeri : " << a << endl;
  cout<<"b degeri : " << b << endl;
  cout<<"c degeri : " << c << endl;
  cout<<"d degeri : " << d << endl;
  cout<<"e degeri : " << e << endl;

  int f,g,h,toplam =0;  // toplama islemi icin
  f = 1;
  g = 2;
  h = 3;
  toplam = f+g+h;
  cout<<"toplam degeri : " << toplam << endl;
  
  return 0;
}
*/








/*
// DERS 4: OPERATORLER
#include <iostream>    
using namespace std;
int main() {

  int sayi1 = 10;
  int sayi2 = 4;
  cout<<"sayi1 + sayi2 = " << sayi1 + sayi2 << endl;
  cout<<"sayi1 - sayi2 = " << sayi1 - sayi2 << endl;
  cout<<"sayi1 * sayi2 = " << sayi1 * sayi2 << endl;
  cout<<"sayi1 / sayi2 = " << sayi1 / sayi2 << endl;
  cout<<"sayi1 / sayi2 = " << float(sayi1) / sayi2 << endl;   // ondalik sonuc verir

  int a = 5;
  cout<<"a eski degeri : " << a << endl;
  a = a+2;
  cout<<"a yeni degeri : " << a << endl;
  a +=2;
  cout<<"a en yeni degeri : " << a << endl;
  a ++;     // ++ demek +1 demektir
  cout<<"a en en yeni degeri : " << a << endl;
  a --;     // -- demek -1 demektir
  cout<<"a en en en yeni degeri : " << a << endl;

  return 0;
}
*/








/*
// DERS 5: Cin ILE INPUT ALMAK
#include <iostream>    
using namespace std;
int main() {

  // ornek 1
  int x; 
  cout<<"Bir sayi girin : ";
  cin>> x;
  cout<<"Girdiginiz sayi : " << x << endl;

  // ornek 2
  int a,b,c;
  cout<<"Birinci sayi girin : ";
  cin>> a;
  cout<<"Ikinci sayi girin : ";
  cin>> b;
  cout<<"Ucuncu sayi girin : ";
  cin>> c;
  cout<<"Toplamlari : " << a+b+c << endl;

  // ornek 3
  int d,e,f;
  cout<<"Sayilari giriniz : ";    // bosluklu sekilde yaz 10 20 30 gibi aralarina 1er bosluk koy
  cin>> d >> e >> f;
  cout<<"Toplamlari : " << d+e+f << endl;

  return 0;
}
*/









/*
// DERS 6: STRINGLER
#include <iostream>    
using namespace std;
int main() {

  string str1 = "Bu bir stringtir";
  cout<< "str1 : " << str1 << endl;
  cout<< str1 << endl;    // 2. gosterim boyledir

  return 0;
}
*/










/*
// DERS 7: IF VE ELSE BLOKLARI
#include <iostream>    
using namespace std;
int main() {

  string password = "123";
  string input;
  cout<<"Parolanizi girin : ";
  cin>> input;
  
  if (password == input) {
    cout<<"Dogru girdiniz";
  }
  
  else {
    cout<<"Yanlis girdiniz";
  }

  return 0;
}
*/










/*
// DERS 8: IF, ELSE IF VE ELSE BLOKLARI
#include <iostream>    
using namespace std;
int main() {

  int a,b;
  string islem;
  
  cout<<"Hesapla Makinesi Programi"<<endl;
  cout<<"**************************"<<endl;
  cout<<"1.islem : Toplama Islemi"<<endl;
  cout<<"2.islem : Cikarma Islemi"<<endl;
  cout<<"3.islem : Carpma Islemi"<<endl;
  cout<<"4.islem : Bolme Islemi"<<endl;

  cout<<"Islem Giriniz : ";
  cin>> islem;
  
  if (islem == "1") {
    cout<<"a : ";
    cin>> a;
    cout<<"b : ";
    cin>> b;
    cout<<"a + b = "<< a+b << endl;
  }

  else if (islem == "2") {
    cout<<"a : ";
    cin>> a;
    cout<<"b : ";
    cin>> b;
    cout<<"a - b = "<< a-b << endl;
  }

  else if (islem == "3") {
    cout<<"a : ";
    cin>> a;
    cout<<"b : ";
    cin>> b;
    cout<<"a * b = "<< a*b << endl;
  }

  else if (islem == "4") {
    cout<<"a : ";
    cin>> a;
    cout<<"b : ";
    cin>> b;
    cout<<"a / b = "<< a/b << endl;
  }

  else {
    cout<<"Hatali girdiniz.";
  }

  return 0;
}
*/











/*
// DERS 9: MANTIKSAL OPERATORLER (OR AND NOT)
// AND && , OR || , NOT !
#include <iostream>    
using namespace std;
int main() {

  string sys_username = "alp";
  string sys_password = "123";

  string username;
  string password;

  cout<<"Kullanici adini girin :";
  cin>> username;

  cout<<"Kullanici parolasini girin :";
  cin>> password;

  if (sys_username == username && sys_password == password) {
    cout<<"Dogru";
  }

  else if (sys_username != username && sys_password == password){   // != esit degil demek
    cout<<"Yanlis username , Dogru parola";
  }
  
  else if (sys_username == username && sys_password != password){   
    cout<<"Dogru username , Yanlis parola";
  }

  else {
    cout<<"Hatali username , hatali parola";
  }

  return 0;
}
*/
















// DERS 10: WHILE DONGULERI
#include <iostream>    
using namespace std;
int main() {

  // ornek 1
  int i = 0;

  while (i < 10) {
    cout<<"i : " << i << endl;
    i = i + 1;
  }


  //ornek 2
  int k = 0;
  int l = 0;

  while (k < 10 && l < 10) {
    cout<<"k : " << k <<" ve " <<"l : " << l << endl; 
    k = k+1;
    l = l+1;
  }

  return 0;
}



















// DERS 11: DO WHILE DONGULERI
#include <iostream>    
using namespace std;
int main() {



  return 0;
}
