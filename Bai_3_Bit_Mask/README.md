# BIT MASK
## Bit Mask là gì
* Sử dụng các bit để lưu trữ và thao tác với các cờ hoặc các trạng thái. Có thể sử dụng bit mask để đặt, xóa, kiểm tra trạng thái của 1 bit cụ thể.

* Dùng để tối ưu hóa bộ nhớ, quản lý trạng thái 1 đối tượng nào đó.

* NOT: a = ~ b

* AND: a = b & c

* OR: a= b | c

* XOR: a = b ^ c

## Dịch Bit
* `<<` Dịch trái: Các bit bên phải sẽ được dịch sang trái, thêm bit 0 vào bit phải trong cùng.

* Toán tử dịch trái: `a.2^k`

* `>>` Dịch phải: Các bit bên trái sẽ được dịch sang phải, thêm bit 0 vào bit trái ngoài cùng.

* Toán tử dịch phải: `a / 2^k`

## Bit Field
* Sử dụng bit field để tối ưu hóa bộ nhớ

* `uint8_t a : 2;` chỉ dùng 2 bit trong 8 bit được cấp phát

