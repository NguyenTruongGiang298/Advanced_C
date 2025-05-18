# Bài 1: Compiler và Macro 
## Compiler:
* Quá trình preprocessor: Chuyển đổi file .c và .h -> thành file .i 
  * Thêm mã nguồn header
   
  * Mở rộng macro
   
  * Xóa ghi chú
  
* Quá trình compiler: Chuyển đổi file.i -> file.s

* Quá trình assembler: Chuyển đổi file.s -> file.o

* Quá trình linker: Chuyển đổi file.0 -> file.exe
## Macro:
* Định nghĩa: từ hoặc chỉ thị
  * #include: chèn nội dung 1 file vào mã nguồn chương trình đang chạy
  
  * #define: thay thế cho 1 câu hàm, một số, một chuổi hoặc 1 macro khác
 
  * #undefine: hủy định nghĩa 1 macro đã được định nghĩa trước đó
 
  * #if, #else if: kiểm tra điều kiện, đúng biên dịch, sai bỏ qua
 
  * #ifdef, #ifndef: thường dùng khi thêm một file header vào mã nguồn, tránh thêm file vào nhiều lần
 
  * #define ... #x: chuẩn hóa văn bản thành 1 chuỗi
 
  * define ... ##x: nối 2 đoạn văn bản với nhau
 
## Variadic Macro:
* Cho phép nhận 1 số lượng biến tham số có thể thay đổi
```j
#define Macro_name(...) __VA_ARGS__
```
`...` đại diện cho một số lượng đối số

`__VA_ARGS__` sử dụng để chèn các đối số

`\` dùng để liên kết các dòng liên quan


