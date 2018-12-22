# Dijk-Path

* [Description](#description)
* [Installation](#installation)
* [Usage](#usage)
* [Documentation](#documentation)
* [FAQ](#faq)
* [License](#license)

## Description

Dijk-Path merupakan sebuah aplikasi pathfinder-assistant untuk mendapatkan jarak tercepat dan terdekat dari lokasi saat ini ke lokasi yang akan dituju. Dijk-path memanfaatkan algoritma Dijkstra, namun kita tahu bahwa dijkstra tidak mampu mendeteksi kemacetan karena hanya mencari rute terdekat saja. Untuk itu digunakan algoritma Queue sebagai algoritma kombinasi untuk dapat mendeteksi hal tersebut.


## Installation

Untuk dapat menggunakan Dijk-Path, Anda perlu melakukan hal berikut :
1. Mendownload source-code nya terlebih dahulu dengan cara menekan tombol download disamping.
2. Buka source-code menggunakan C/C++ IDE. Jika Anda tidak memilikinya, [download disini](https://sourceforge.net/projects/orwelldevcpp/files/latest/download)
3. Kemudian, jalankan dengan cara meng-compile main-program.c

Atau Anda dapat melihat tutorial pada video ini :

<div align="center">
  <a href="https://www.youtube.com/watch?v=cMwkVielz4c"><img src="https://img.youtube.com/vi/cMwkVielz4c/0.jpg" alt="TUTORIAL">
  </a>
</div>
<br>

## Usage
### Sign-In & Sign-Up
![Login](/images/menuSign.png)

Pengguna akan diminta untuk melakukan sign-up terlebih dahulu untuk dapat sign-in.
### Display Route
![Display Route](/images/menuDisplay.png)

Untuk menampilkan rute/map.
### Navigate Me
![Navigate](/images/menuNavigate.png)

Untuk melakukan navigasi ke tempat yang akan dituju. Pengguna akan diminta untuk memasukkan lokasi saat ini serta lokasi yang akan dituju. Kemudian, Dijk-Path akan menavigasikannya.
### Help
![Help](/images/menuHelp.png)


Beirisi panduan singkat tentang cara penggunaan aplikasi.
### Exit
Untuk keluar dari aplikasi

## Documentation
### How it works?
Bagaimana aplikasi ini bekerja? Ilustrasi pada gambar berikut akan menjelaskannya secara lebih detail.
![Works](/images/works.png)

## License
MIT License

Copyright (c) 2018 razzaz & ridart44

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
