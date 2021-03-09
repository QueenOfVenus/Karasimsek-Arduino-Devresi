# Karasimsek-Arduino-Devresi

Herkese merhaba! 
DSC Gazi topluluğunun hazırlamış ve benim de katılmış olduğum IoT1929 Arduino Eğitiminde verilen ödevlerde uyguladığım çözümlemeleri sizlerle paylaşacağım. 
Şunu belitmek isterim ki daha önce bu alan ile ilgili hiçbir çalışma yapmadım. Bu eğitim ile öğrendiklerimi sizinle paylaşırken herhangi bir yalnışım olursa lütfen 
bana yorum ile bildiriniz. Çünkü hepimiz insanız ve hata yapabiliriz. Önemli olan hatalarımızdan ders çıkarmaktır. 
Teşekkürler :D

**************************************************************************

Ödevimiz: KARAŞİMŞEK

Karaşimşek devresinde LED’ler baştan sonra belirli bir hızla yandıktan sonra sondan başa doğru sönmesiyle oluşur.

Problem Tanımı:

Ali Bey, televizyonda Karaşimşek adlı diziyi izliyordur. Oradaki arabayı görünce aynı devreyi Arduino devresinde yapmak istemiştir. 
Ali Bey’e baştan sona LED’leri 0,5 saniye aralıklarla baştan sona yakarak sondan başa doğru söndürmesine yardımcı olmalısınız.

Neler Olmalı?

· En az 5 LED kullanmalısın.

· LED’lerin hepsi aynı süre yanıp sönmelidir.

· Devrenin kodlarını, devre şemasını ve devrenin çalışır halindeki videoyu bizimle paylaşmalısın.

· En pratik çözümü olmalıdır.

**************************************************************************

Çözüm Gidişatım:

Aklıma ilk gelen çözüm TinkerCad ortamında 5 ledi breadboard üzerinde yan yana dizip seri haldeyken ilk ledin katodunu Gnd'ye (toprak) 
en son ledin anodunu da herhangi bir PWN Pini'ne bağlamaktı fakat devreyi çalıştırdığımda herhangi bir reaksiyon olmadı.

Başka bir çözüm yolu düşündüm. Yukarıda yaptığım işlemi tek bir ledde denediğimde led yanıyordu. Madem tekli yanıyor o halde 
her ledin anodunu tek bir PWN'e (tek bir PWN pinine bağlama düşüncem elektriksel olarak ledlerin birbiri ile ortak bir noktası olmalı düşüncemden kaynaklı) 
katodunu Gnd'ye bağlamalıydım. BreadBoard'da bir dikey alana PWN pinini bağladım. Sonra her ledin anodunu PWN'i bağladığım aynı alana bağladım. (Normal bir BreadBorad'da 
bunu yapamazdım çünkü 5 Ledim haliyle 5 anot çıkışım ve bir tane de PWN kablom bile dikeyde bir kablo boşta kalıyordu. Fakat TinkerCad simülatörü kabloları üst üste 
takmamızda sorun çıkarmıyor.) Sonuca bakacak olursak eğer aynı PWN'lere bağlı ledlerin aynı anda çıkış verdiği için aynı anda yanacaaklarını keşfettim. 
(Bkz : Karaşimşek ilk keşif.brd)

Bu sonucun üzerine dedik ki ledleri tek tek ayrı PWN'lere vereyim böylece koda yazarak hepsini ayrı ayrı kontrol edebilirim. (Bkz : Karaşimşek Sedeleştirilmiş .jpg)
Devrem bu sefer istediğim gibi çalıştı fakat bu en sade çözüm değildi ve benden istenen de en sadesiydi.

Final:

En sade devreyi yapmayı düşünürken ledleri tek tek Gnd'ye gönderip kablolarla çoklamak yerine ledlerin her birinin katot(-) bacağını yatay Gnd alanına taktım. 
Gnd'yi Arduino Leonardo ile çoğalttım. Anot bacakları da üst taraftaki dikey alanlara yerleştirip PWN pinlerine bağladım. 


Hoşçakalın...

