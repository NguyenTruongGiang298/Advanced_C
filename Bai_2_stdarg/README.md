# Bài 2: Thư viện Stdarg và Assert
# Thư viện Stdarg

## Định nghĩa: cho phép nhận một số lượng input parameter không cố định
```j
function(int numbers_of_parameter, ...)
```
* Ưu điểm: Có thể xử lý số input không cố định

* Nhược điểm: phụ thuộc vào numbers_of_parameter, không thể xử lý quá số lượng này
## Một vài macro của thư viện:
* `va_list`: kiểu dữ liệu đại diện cho danh sách đối số truyền vào

* `va_start`: bỏ qua numbers_of_parameter, xử lý các đối số ở sau

* `va_arg`: truy cập vào 1 đối số trong danh sách với kiểu dữ liệu tương ứng

* `va_end`: gở bỏ danh sách

* `va_copy`: sao chép danh sách

## Có thể kết hợp stdarg và variadic macro để xóa bỏ sự phụ thuộc vào tham số numbers_of_parameters ở đầu

# Thư viện Assert
* Cung cấp macro để kiểm tra điều kiện giống if-else

* Nếu điều kiện đúng -> True, nếu điều kiện sai -> False và dừng chương trình ngay lập tức

* Điểm khác biệt: đưa ra vị trí lỗi cụ thể giúp người dùng debug dể hơn

  ```j
  assert(condition && "messages")
  ```
