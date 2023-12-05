-- Membuat tabel
CREATE TABLE customers (
id INT PRIMARY KEY,
name VARCHAR(50),
email VARCHAR(50)
);

-- Menyisipkan data ke dalam tabel
INSERT INTO customers (id, name, email)
VALUES (1, 'FAQIH MUHAMMAD IHSAN', 'Faqihmuhamad876@gmail.com');

-- Mengambil data dari tabel
SELECT * FROM customers;
