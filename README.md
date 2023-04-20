# minitalk

## About

**The purpose of this project is to code a small data exchange program using *UNIX signals.***

- This project is to create two executables: a server and a client.
- Client, will send message (a string) to the server using UNIX signals.
- Server, must correctly receive message using SIGUSR1 and SIGUSR2 signals then send feedback to client.
- Makefile, is used to easily compile the server and the client executables.

---

## Proje hakkında

**Bu projenin amacı, UNIX sinyallerini kullanarak küçük bir veri değişim programını
kodlamaktır.**

- Executable dosyaları client ve server olarak oluşturulur.
- Client, UNIX sinyallerini kullanarak sunucuya bir mesaj gönderir.
- Server, SIGUSR1 ve SIGUSR2 sinyallerini alarak gelen mesaji doğru bir şekilde yazdırmalı ve client’e mesajin iletildiğine dair geri bildirim göndermelidir.
- Makefile, server ve clienti kolayca derlemek için kullanılır.
