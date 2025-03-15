#include <stdio.h>
#include <stdlib.h>

// 1. Setiap orang dalam rantai ini adalah "Node"
typedef struct Node {
    int data;           // Informasi yang disimpan (misalnya, nomor orang)
    struct Node *next;  // Pointer ke orang berikutnya (node berikutnya)
} Node;

// 2. Fungsi untuk menambahkan orang di depan rantai (insert at beginning)
void insertAtBeginning(Node **head, int newData) {
    Node *newNode = (Node*)malloc(sizeof(Node)); // Buat orang baru (alokasi memori)
    newNode->data = newData;  // Beri nomor pada orang ini
    newNode->next = *head;    // Tangannya memegang orang sebelumnya (head lama)
    *head = newNode;          // Orang baru sekarang menjadi kepala (head baru)
}

// 3. Fungsi untuk menampilkan rantai orang (linked list)
void displayList(Node *head) {
    Node *current = head;  // Mulai dari kepala rantai
    while (current != NULL) {
        printf("%d -> ", current->data); // Tampilkan nomor orang
        current = current->next;  // Lanjut ke orang berikutnya
    }
    printf("NULL\n");  // Akhir dari rantai (tidak ada orang lagi)
}

// 4. Fungsi untuk menghapus orang pertama dalam rantai (delete first node)
void deleteFirstNode(Node **head) {
    if (*head == NULL) return; // Jika rantai kosong, keluar
    Node *temp = *head;        // Simpan kepala yang akan dihapus
    *head = (*head)->next;     // Kepala pindah ke orang berikutnya
    free(temp);                // Hapus kepala lama dari memori
}

// 5. Fungsi utama (main)
int main() {
    Node *head = NULL;  // Awalnya rantai kosong (tidak ada orang)

    // Tambahkan orang ke rantai (10, 20, 30)
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);

    printf("Linked List setelah penambahan:\n");
    displayList(head);  // Tampilkan isi rantai

    // Hapus orang pertama dalam rantai
    deleteFirstNode(&head);
    printf("Linked List setelah penghapusan:\n");
    displayList(head);  // Tampilkan isi rantai setelah penghapusan

    return 0;
}
