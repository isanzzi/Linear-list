# Implementasi Linear List dalam Bahasa C

Repositori ini berisi beberapa implementasi struktur data linear list menggunakan bahasa pemrograman C. Fokus utamanya adalah implementasi linked list (list berantai), mulai dari contoh sederhana hingga implementasi ADT (Abstract Data Type) yang lebih lengkap dengan berbagai operasi.

## Struktur Repositori

Repositori ini disusun dalam tiga versi (v1, v2, v3), masing-masing mewakili implementasi linear list yang berbeda:

### v1: Linked List Sederhana
Pengenalan dasar tentang linked list dengan operasi fundamental:
- Penyisipan di awal (insert at beginning)
- Penghapusan node pertama (delete first node)
- Menampilkan list (display list)

### v2 & v3: ADT Linked List Lanjutan
Implementasi yang lebih lengkap dengan operasi komprehensif:
- Pembuatan dan pengisian node
- Traversal dan penampilan list
- Berbagai metode penyisipan (awal, akhir, setelah elemen tertentu)
- Berbagai metode penghapusan (awal, akhir, nilai tertentu)
- Pencarian elemen
- Pengelolaan memori (alokasi dan dealokasi)
- Penghitungan elemen

## Fitur Utama

- **Pengelolaan Memori**: Alokasi dan dealokasi node yang tepat
- **Modularitas**: Pemisahan antara file antarmuka (.h) dan implementasi (.c)
- **Penanganan Kesalahan**: Pemeriksaan operasi yang valid (misal, tidak menghapus dari list kosong)
- **Fleksibilitas**: Beberapa cara untuk memanipulasi struktur list

## Contoh Penggunaan

```c
address list = nil;      // Inisialisasi list kosong
address node;
infotype val;

// Membuat dan menyisipkan node dengan nilai 7
Create_Node(&node);
Isi_Node(&node, 7);
Ins_Awal(&list, node);
Tampil_List(list);       // Menampilkan list

// Membuat dan menyisipkan node di akhir dengan nilai 11
Create_Node(&node);
Isi_Node(&node, 11);
Ins_Akhir(&list, node);
Tampil_List(list);       // Menampilkan list lagi

// Menghapus node dan membersihkan memori saat selesai
DeAlokasi(&list);
```

## Detail Implementasi

Linked list diimplementasikan menggunakan struktur yang berisi:
- `info`: Nilai integer yang disimpan dalam node
- `next`: Pointer ke elemen berikutnya dalam list

ADT menyediakan sekumpulan operasi lengkap untuk memanipulasi list, memastikan keamanan memori dan kebenaran logis.

## Kompilasi

Gunakan compiler C standar seperti GCC untuk mengompilasi kode:

```bash
gcc -o main main.c linked.c -I.
```

## Pengembangan

Proyek ini mengikuti praktik pemrograman C standar dengan fokus pada:
- Struktur kode yang bersih
- Pengelolaan memori yang tepat
- Konvensi penamaan fungsi yang jelas
- Dokumentasi yang komprehensif

