## Dijk-Path

* [Description](#description)
* [Installation](#installation)
* [Usage](#usage)
	+ [Making a simple `GET` request](#making-a-simple-get-request)
	+ [Creating a hystrix-like circuit breaker](#creating-a-hystrix-like-circuit-breaker)
	+ [Creating an HTTP client with a retry mechanism](#creating-an-http-client-with-a-retry-mechanism)
	+ [Custom retry mechanisms](#custom-retry-mechanisms)
* [Documentation](#documentation)
* [FAQ](#faq)
* [License](#license)

### Description

Dijk-Path merupakan sebuah aplikasi pathfinder-assistant untuk mendapatkan jarak tercepat dan terdekat dari lokasi saat ini ke lokasi yang akan dituju. Dijk-path memanfaatkan algoritma Dijkstra, namun kita tahu bahwa dijkstra tidak mampu mendeteksi kemacetan karena hanya mencari rute terdekat saja. Untuk itu digunakan algoritma Queue sebagai algoritma kombinasi untuk dapat mendeteksi hal tersebut.


### Installation

Untuk dapat menggunakan Dijk-Path, Anda perlu melakukan hal berikut :
1. Mendownload source-code nya terlebih dahulu dengan cara menekan tombol download disamping.
2. Buka source menggunakan C/C++ IDE. Jika Anda tidak memilikinya, [download disini](https://sourceforge.net/projects/orwelldevcpp/files/latest/download)
