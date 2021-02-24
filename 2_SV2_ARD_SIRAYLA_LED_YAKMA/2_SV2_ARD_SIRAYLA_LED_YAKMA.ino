
int Led [10] = {22,23,24,25,26,27,28,29,30,31};      //LED'ler (10 adet) ve bağlı oldukları pinler Led değişkeni ile dizi şeklinde tanımlanır

void setup() {
  
    for(int i=0; i<10; i++)                          //Led[] içerisinde kullanılmak üzere i değişkeni tanımlanır. Başlangıç değeri olarak 0 verilen i değişkeni 9 değerini alıncaya kadar döngü tekrar edilir ve her seferinde 1 artırılır
    
    {
    pinMode(Led [i], OUTPUT);                        //10 adet LED'e çıkış verilir
    }
    
}

void loop() {
  
int Sayici = 0;                                       //Led[] içerisinde kullanılmak üzere Sayici değişkeni ve değişkenin başlangıç değeri tanımlanır
                                  
    while (Sayici < 10)                               //Sayici değişkeni 10'dan küçük bütün değerleri alıncaya kadar while döngüsü tekrarlanır. Burada Sayici en son 9 değerini alır
    
    {
    digitalWrite(Led [Sayici], HIGH);                 //10 adet LED Sayici değişkeni yardımıyla sırayla yakılır       
    delay(1000);                                      //1000 milisaniye=1 saniye bekleme süresi eklenir
    digitalWrite(Led [Sayici], LOW);                  //10 adet LED Sayici değişkeni yardımıyla sırayla söndürülür    
    delay (1000);                                     //1000 milisaniye=1 saniye bekleme süresi eklenir
    Sayici++;                                         //Sayici 1 artırılır
    }
    
}

                                               
