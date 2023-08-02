BEGIN
DECLARE nama[50] AS string
DECLARE jenisKelamin AS char
DECLARE usia AS integer
DECLARE tinggi AS float
DECLARE pilihan AS integer
DECLARE pendidikanRekamMedis AS integer
DECLARE pendidikanAccounting AS integer
DECLARE strAktif AS char
DECLARE sertifikatExcel AS char

    PRINT ">>>>>Seleksi pegawai RS Kampus UDINUS (KU) Semarang<<<<<"
    PRINT "Masukkan nama: "
    READ nama

    PRINT "Masukkan jenis kelamin [L/P]: "
    READ jenisKelamin

    PRINT "Masukkan usia: "
    READ usia

    PRINT "Masukkan tinggi badan: "
    READ tinggi

    PRINT "SELAMAT DATANG, " + nama + "!!"
    PRINT "Lowongan yang dibuka:"
    PRINT "1. Rekam Medis"
    PRINT "2. Accounting"
    PRINT "Masukkan pilihan anda: "
    READ pilihan

    IF pilihan = 1 THEN
        PRINT "Masukkan pendidikan terakhir anda!"
        PRINT "1. SMA"
        PRINT "2. D3-RMIK"
        PRINT "3. S1-MIK"
        PRINT "Pendidikan terakhir anda adalah: "
        READ pendidikanRekamMedis

        IF (pendidikanRekamMedis = 2 OR pendidikanRekamMedis = 3) AND jenisKelamin = 'L' THEN
            PRINT "Apakah anda memiliki STR aktif? [Y/N]: "
            READ strAktif

            IF strAktif = 'Y' OR strAktif = 'y' THEN
                PRINT "Selamat " + nama + " Dinyatakan Lolos Seleksi!"
            ELSE
                PRINT "Maaf " + nama + ", anda tidak lolos seleksi."
            END IF
        ELSE
            PRINT "Maaf " + nama + ", anda tidak lolos seleksi."
        END IF
    ELSE IF pilihan = 2 THEN
        PRINT "Masukkan pendidikan terakhir anda!"
        PRINT "1. SMA"
        PRINT "2. SMK-Akuntansi"
        PRINT "3. S1-Akuntansi"
        PRINT "Pendidikan terakhir anda adalah: "
        READ pendidikanAccounting

        IF pendidikanAccounting = 3 AND jenisKelamin = 'P' THEN
            PRINT "Apakah anda memiliki sertifikat Excel? [Y/N]: "
            READ sertifikatExcel

            IF sertifikatExcel = 'Y' OR sertifikatExcel = 'y' THEN
                PRINT "Selamat " + nama + " Dinyatakan Lolos Seleksi!"
            ELSE
                PRINT "Maaf " + nama + ", anda tidak lolos seleksi."
            END IF
        ELSE
            PRINT "Maaf " + nama + ", anda tidak lolos seleksi."
        END IF
    ELSE
        PRINT "Maaf " + nama + ", anda tidak lolos seleksi."
    END IF

    RETURN 0

END
