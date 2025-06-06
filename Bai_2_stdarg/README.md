# Thư viện Stdarg và thư viện assert
## Thư viện stdarg.h
* Cung cấp phương thức làm việc với các hàm số có lượng input parameter không cố định.

## Một vài macro:
* *va_list*: kiểu dữ liệu đại diện cho danh sách đối số cần thao tác.

```j
  va_list var_name;
  ```

* *va_start*: bắt đầu một danh sách đối số biến đổi cần được gọi trước khi truy cập đối số biến đổi đầu tiên. Cần được gọi trước khi truy cập vào đối số biến đổi đầu tiên.

```j
  va_start(var_name, size_of_list);
  ```

* *va_arg*: Truy cập một đối số trong danh sách, hàm này nhận đối số của kiểu dữ liệu được xác đinh bởi tham số thứ 2 trong hàm.

```j
  va_arg(var_name, data_type);
  ```

* *va_end*: Kết thúc việc sử dụng danh sách đối số biến đổi, nó được gọi trước khi kết thúc hàm.

```j
  va_end(var_name);
  ```

* *va_copy*: Sao chép dữ liệu giữa hai biến cùng kiểu va_list.

```j
  va_copy(var_name_2,var_name_2);
  ```

* **Kết hợp thư viện stdarg.h và Variadic macro để tránh phụ thuộc vào tham số đầu.**

## Thư viện assert.h

* Cung cấp các macro, dùng trong xử lý logic giống với if.

* Kiểm tra điều kiện nếu điều kiện đúng `true` thì thực thi, sai `false` thì dừng chương trình và đưa ra vị trí sai.

* Điểm khác biệt: hàm `assert` đưa ra vị trí lỗi cụ thể.

```j
assert(... && "messages")
```
