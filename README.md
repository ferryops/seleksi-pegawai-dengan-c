Program ini menggunakan percabangan bersarang (nested branching) untuk memeriksa berbagai kondisi sesuai dengan ketentuan yang diberikan (disini mengacu pada kriteria lowongan).

Program meminta pengguna untuk memasukkan informasi pribadi seperti nama, jenis kelamin, usia, dan tinggi badan.

<!-- deklarasi variable -->

char nama[50];
char jenisKelamin;
int usia;
float tinggi;
int pilihan;

Kemudian, program menampilkan pilihan lowongan pekerjaan yang tersedia. Jika pengguna memilih "Rekam Medis" (pilihan 1),

<!-- if (pilihan == 1) { -->

program akan meminta pengguna untuk memasukkan pendidikan terakhir dan apakah pengguna memiliki STR aktif. Jika memenuhi semua ketentuan, program akan menampilkan pesan bahwa pengguna lolos seleksi. Jika tidak memenuhi salah satu atau lebih ketentuan, program akan menampilkan pesan bahwa pengguna tidak lolos seleksi.

Disinilah letak percabangan bersarang terjadi, yaitu ketika terdapat percabangan yang terletak di dalam blok percabangan lainnya.

<!-- kondisi
if ((pendidikanRekamMedis == 2 || pendidikanRekamMedis == 3) && jenisKelamin == 'L'){ -->

Jika pengguna memilih "Accounting" (pilihan 2), program akan meminta pengguna untuk memasukkan pendidikan terakhir dan apakah pengguna memiliki sertifikat Excel. Jika memenuhi semua ketentuan, program akan menampilkan pesan bahwa pengguna lolos seleksi. Jika tidak memenuhi salah satu atau lebih ketentuan, program akan menampilkan pesan bahwa pengguna tidak lolos seleksi.

referensi admin dalam pembuatan program:

https://blog.udemy.com/hello-world-program-in-c/
https://medium.com/@codeforever/conditional-and-unconditional-branching-statements-in-c-9ce886fd8d39

Terima kasih sudah order tugas di stacktugas.id, senang bisa membantu

Untuk menjalankan kode C, pastikan Windows dapat mengcompile
Tutorialnya bisa lihat disini : https://www.lokal-tutorial.my.id/2021/10/cara-setting-vs-code-agar-bisa-compile.html


      _             _    _                           _     _ 
     | |           | |  | |                         (_)   | |
  ___| |_ __ _  ___| | _| |_ _   _  __ _  __ _ ___   _  __| |
 / __| __/ _` |/ __| |/ / __| | | |/ _` |/ _` / __| | |/ _` |
 \__ \ || (_| | (__|   <| |_| |_| | (_| | (_| \__ \_| | (_| |
 |___/\__\__,_|\___|_|\_\\__|\__,_|\__, |\__,_|___(_)_|\__,_|
                                    __/ |                    
                                   |___/                     

