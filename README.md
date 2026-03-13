# 📄 Tiểu luận Hệ điều hành — An Essay on Operating Systems

**Tiểu luận Hệ điều hành** là repository lưu trữ bài tiểu luận học thuật về môn **Hệ điều hành**, được xây dựng nhằm hệ thống hóa các kiến thức nền tảng và minh họa một số cơ chế quan trọng thông qua **tài liệu lý thuyết**, **bài tiểu luận hoàn chỉnh** và **mã nguồn minh họa**.

Repository tập trung vào các nội dung cốt lõi như:

* Tổng quan về hệ điều hành
* Cấu trúc hệ điều hành
* Tiến trình và tiểu trình
* Lập lịch CPU
* Giao tiếp liên tiến trình
* Đồng bộ hóa tiến trình
* Tắc nghẽn
* Quản lý bộ nhớ

Dự án được tổ chức theo hướng **kết hợp giữa lý thuyết và thực hành**, giúp người học dễ dàng nghiên cứu, ôn tập và tham khảo trong quá trình học môn Hệ điều hành.

---

# 👨‍💻 Tác giả

**Trần Gia Bảo** - **gibor06** </br>
**Lê Quang Bảo**

Sinh viên ngành **Công Nghệ Thông Tin** - **Trường Đại học Công Thương TPHCM**

📍 TPHCM, Việt Nam.

---

# 🌐 Nội dung repository

Repository bao gồm 3 phần chính:

### 1️⃣ Tài liệu lý thuyết

Thư mục `TaiLieu` chứa các tài liệu tham khảo theo từng chương của môn Hệ điều hành.

Bao gồm:

* Chương 1 — Tổng quan
* Chương 2 — Cấu trúc hệ điều hành
* Chương 3 — Tiến trình
* Chương 4 — Tiểu trình
* Chương 5 — Định thời CPU
* Chương 6 — Đồng bộ hóa tiến trình
* Chương 7 — Tắc nghẽn
* Chương 8 — Quản lý bộ nhớ

---

### 2️⃣ Bài tiểu luận hoàn chỉnh

Thư mục `TieuLuan` chứa:

* File Word của bài tiểu luận
* File PDF của bài tiểu luận
* File yêu cầu thực hiện tiểu luận

Đây là phần thể hiện kết quả hoàn chỉnh của quá trình nghiên cứu và biên soạn nội dung.

---

### 3️⃣ Mã nguồn minh họa

Thư mục `Code_Minh_Hoa` chứa các chương trình minh họa bằng **C++** cho một số chủ đề quan trọng trong hệ điều hành.

Bao gồm:

* `SystemCall.cpp` — Minh họa lời gọi hệ thống
* `Fork.cpp` — Minh họa tạo tiến trình bằng `fork()`
* `ForkAnhExec.cpp` — Minh họa kết hợp `fork()` và `exec()`
* `IPC.cpp` — Minh họa giao tiếp liên tiến trình
* `SharedMemory.cpp` — Minh họa bộ nhớ dùng chung
* `DeadlockMutex.cpp` — Minh họa tắc nghẽn với mutex
* `Banker.cpp` — Minh họa thuật toán Banker
* `FIFO.cpp` — Minh họa thuật toán thay trang FIFO

---

# 🧠 Nội dung học thuật chính

Repository tập trung trình bày các chủ đề sau:

### 1️⃣ Tổng quan về hệ điều hành

* Vai trò của hệ điều hành
* Cấu trúc hệ thống máy tính
* Chức năng cơ bản của hệ điều hành

---

### 2️⃣ Tiến trình và tiểu trình

* Khái niệm tiến trình
* Trạng thái tiến trình
* Tạo và kết thúc tiến trình
* Tiểu trình và đa luồng

---

### 3️⃣ Lập lịch CPU

* Các tiêu chuẩn định thời
* FCFS
* SJF
* Round Robin
* Priority Scheduling

---

### 4️⃣ Giao tiếp liên tiến trình (IPC)

* Pipe
* Shared Memory
* Message Passing

---

### 5️⃣ Đồng bộ hóa tiến trình

* Race condition
* Critical section
* Mutex lock
* Semaphore
* Monitor

---

### 6️⃣ Tắc nghẽn

* Điều kiện xảy ra deadlock
* Ngăn chặn tắc nghẽn
* Tránh tắc nghẽn
* Giải thuật Banker

---

### 7️⃣ Quản lý bộ nhớ

* Cấp phát bộ nhớ liên tục
* Phân trang
* Hoán đổi
* Bộ nhớ ảo
* Thuật toán thay trang FIFO

---

# 🛠️ Công nghệ sử dụng

Project sử dụng:

* **C++**
* **PDF / DOCX** cho tài liệu học thuật

---

# 📂 Cấu trúc project

```text
An_essay_onoperatin_systems
│
├── Code_Minh_Hoa
│   ├── Banker.cpp
│   ├── DeadlockMutex.cpp
│   ├── FIFO.cpp
│   ├── Fork.cpp
│   ├── ForkAnhExec.cpp
│   ├── IPC.cpp
│   ├── SharedMemory.cpp
│   └── SystemCall.cpp
│
├── TaiLieu
│   ├── HDH-Chuong1.pdf
│   ├── HDH-Chuong2.pdf
│   ├── HDH-Chuong3.pdf
│   ├── HDH-Chuong4.pdf
│   ├── HDH-Chuong5.pdf
│   ├── HDH-Chuong6.pdf
│   ├── HDH-Chuong7.pdf
│   └── HDH-Chuong8.pdf
│
├── TieuLuan
│   ├── TieuLuan_HDH.docx
│   ├── TieuLuan_HDH.pdf
│   └── YeuCauTieuLuan.pdf
│
└── README.md

```

---

# 📫 Contact

<p align="center">

<a href="mailto:gibor06.dev@gmail.com">
  <img src="https://img.shields.io/badge/Email-D14836?style=for-the-badge&logo=gmail&logoColor=white" alt="Email Badge"/>
</a>

<a href="https://www.facebook.com/gibor06">
  <img src="https://img.shields.io/badge/Facebook-1877F2?style=for-the-badge&logo=facebook&logoColor=white" alt="Facebook Badge"/>
</a>

<a href="https://www.instagram.com/gibor06/">
  <img src="https://img.shields.io/badge/Instagram-%23E4405F.svg?style=for-the-badge&logo=instagram&logoColor=white" alt="Instagram Badge"/>
</a>

</p>
