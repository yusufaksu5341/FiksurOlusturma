# FiksurOlusturma

Bu proje, Süper Lig'deki 19 takımdan oluşan bir futbol ligi için rastgele fikstür oluşturur. Her hafta 18 takım maç yapar ve 1 takım o haftayı boş geçer.ır.

Proje Dosyaları:
main.c: Fikstür oluşturma kodlarını içeren C programı.
takimlar.txt: Süper Lig'deki takımların isimlerini içeren dosya. Her satırda bir takım adı yer alır (toplam 19 takım).
fikstur.txt: Oluşturulan fikstürü içeren dosya."main.c" dosyası çalıştılınca oluşur. Her hafta için maç eşleşmeleri ve o hafta maç yapmayan takım bilgisi yer alır.

  
Takım İsimlerini Okuma: fgets fonksiyonunu kullanarak takım isimlerini dosyadan okuyup takimlar dizisine kaydediyoruz.
Rastgele Fikstür Oluşturma: Takım isimlerini rastgele karıştırarak fikstürü oluşturuyoruz. Her hafta bir takımın maç yapmamasını sağlıyoruz.
Fikstürü Dosyaya Yazma: Oluşturulan fikstürü fikstur.txt dosyasına yazıyoruz.


Örnek Çıktı:
--- 1. Hafta ---
GALATASARAY A.Ş. vs FENERBAHÇE A.Ş.

REEDER SAMSUNSPOR vs BEŞİKTAŞ A.Ş.

İKAS EYÜPSPOR vs GÖZTEPE A.Ş.

RAMS BAŞAKŞEHİR FUTBOL KULÜBÜ vs ÇAYKUR RİZESPOR A.Ş.
TRABZONSPOR A.Ş. vs GAZİANTEP FUTBOL KULÜBÜ A.Ş.
KASIMPAŞA A.Ş. vs COREDON ALANYASPOR
ONVO ANTALYASPOR vs TÜMOSAN KONYASPOR
SİPAY BODRUM FK vs NET GLOBAL SİVASSPOR
BELLONA KAYSERİSPOR vs ATAKAŞ HATAYSPOR
Bu hafta maç yapmayan takım: ADANA DEMİRSPOR A.Ş.

