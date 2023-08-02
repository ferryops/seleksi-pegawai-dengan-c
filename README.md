
# Program Seleksi Calon Pegawai dengan C

Program ini menggunakan percabangan bersarang (nested branching) untuk memeriksa berbagai kondisi sesuai dengan ketentuan yang diberikan (disini mengacu pada kriteria lowongan).

Demo Aplikasi

![image](https://github.com/ferryops/seleksi-pegawai-dengan-c/assets/53357609/38077ed3-5166-467c-8e43-76a6d58c17d7)

Program meminta pengguna untuk memasukkan informasi pribadi seperti nama, jenis kelamin, usia, dan tinggi badan.

## Deklarasi Variable

char nama[50];
char jenisKelamin;
int usia;
float tinggi;
int pilihan;

Kemudian, program menampilkan pilihan lowongan pekerjaan yang tersedia. Jika pengguna memilih "Rekam Medis" (pilihan 1),

```if (pilihan == 1) {```

program akan meminta pengguna untuk memasukkan pendidikan terakhir dan apakah pengguna memiliki STR aktif. Jika memenuhi semua ketentuan, program akan menampilkan pesan bahwa pengguna lolos seleksi. Jika tidak memenuhi salah satu atau lebih ketentuan, program akan menampilkan pesan bahwa pengguna tidak lolos seleksi.

Disinilah letak percabangan bersarang terjadi, yaitu ketika terdapat percabangan yang terletak di dalam blok percabangan lainnya.

```if ((pendidikanRekamMedis == 2 || pendidikanRekamMedis == 3) && jenisKelamin == 'L'){```

Jika pengguna memilih "Accounting" (pilihan 2), program akan meminta pengguna untuk memasukkan pendidikan terakhir dan apakah pengguna memiliki sertifikat Excel. Jika memenuhi semua ketentuan, program akan menampilkan pesan bahwa pengguna lolos seleksi. Jika tidak memenuhi salah satu atau lebih ketentuan, program akan menampilkan pesan bahwa pengguna tidak lolos seleksi.

referensi admin dalam pembuatan program:

- https://blog.udemy.com/hello-world-program-in-c/
- https://medium.com/@codeforever/conditional-and-unconditional-branching-statements-in-c-9ce886fd8d39

## Jalankan Kode di Localhost

Untuk menjalankan kode C, pastikan Windows dapat mengcompile C
Tutorialnya bisa lihat disini : https://www.lokal-tutorial.my.id/2021/10/cara-setting-vs-code-agar-bisa-compile.html

Untuk menjalankan kode C di Linux, bisa mengikuti tutorial disini https://vitux.com/how-to-write-and-run-a-c-program-in-linux/

