Kiến trúc Máy Tính Và Hệ Thống

Trong phần 1.2 , Chúng ta giới thiệu chung về cấu trúc của một hệ thống máy tính
. Một Hệ thống máy tính có tổ chức trong nhiều cách khác nhau , chúng tôi được 
phân loại theo gần đây cho mục đích chung bộ vi xử lý

1.3.1 Hệ thống bộ vi xử lý đơn
 
cho đến gần đây , phần lớn hệ thống máy tính sử dung 1 vi xử lý đơn , tại một vi xử lý đơn
hệ thống  đầy 1 phần chính CPU khả năng thực thi a mục đích chung tập lệnh chung, gồm 
lệnh từ dùng bộ vi xử lý , Hầu hết tất bộ xử lý đơn hệ thống có hoặc xác định mục đích 
bộ vi xử lý , Chúng có thể đến từ kiểu bộ vi xử lý thiết bị như là dist, keybroad, và 
graphics controllerss , hoặc máy tính lớn, Chúng có thể đén nhiều mục đích chung bộ vi xử 
lý , như là I/O bộ vi xư lý chuyển dữ liệu nhanh chóng trong số thành phần máy tính 

Tất cả những xác định mục đích bộ vi xử lý chạy một giới hạn lệnh gán và không chạy quy trình người dùng
Thỉnh thoảng , chúng quản lý bởi hệ điều hành , trong hệ điều hành gửi những thông tin về 
nhiệm vụ tiếp theo , giám xác tình hình chúng, VD : 1 dist-controllerr chip xử lý nhận 
một trình tự của yêu cầu từ chính CPU và thực hiện đĩa của riêng mình hàng đợi và thuật 
toán lập trình , Đây là sắp xếp giảm xuống chính CPU của trên không của lập kế hoạch đĩa
PCs chứa một chíp xử lý trong keyboard chuyển việc bấm bàn phím trong codes tới cpu . 
Bên trong hệ thống khác hoặc hoàn cảnh , mục đích chung của bộ vi xử lý là mức level thấp
thành phần tạo bên trong thiết bị . Hệ Điều hành không thể giao tiếp với những bộ vi xử lý
, Chúng làm công việc tự  . dùng xác địn mục đích chịp bộ vi xử lý là chung

1.3.2 Bộ đã vi xử lý Hệ thống 

Trong Những năm gần đây , Bộ đa vi xử lý ( còn biết cái tên parallel systems or multicore 
systems) có bắt đầu thống trị toàn bộ hệ thống máy tinhsh , Là Hệ thống có 2 hoặc nhiều 
bộ vi xử lý giao tiếp mới nhau chia sẽ trong máy tính bus , và thỉnh thoảng clock , bộ nhớ 
và thiết bị ngoại vi . Bộ đa vi xử lý hệ thống đầu tiên xuất hiện nổi bất trong server
được ứng dụng máy tính desktop và laptop . Gần đây xuất hiện trong thiết bị di dộng và điện 
thoại thông mình , và máy tính bảng 

Bộ đa vi xử lý có 3 điểm nâng cao 
  1. Increased throughput (tăng thông lượng) tăng con số của bộ vi xử lý , chúng ta chờ đợi
  lấy nhiều công việc xong với tốn ít thời gian , với tốc đọ với N bộ vi xử lý nhưng không phải
  N , Tuy vậy  hơn ít hơn N . Khi bộ đa vi xử lý hợp tác tại một nhiệm vụ một số tiền nhất định 
  của chi phí là phát sinh trong việc giữ cho tất cả phần công việc chính xác . Chi phí này, cộng với ganh đua cho chia sẻ
  tài nguyên làm giảm lợi ích kỳ vọng từ bộ vi xử lý bổ sung . Đơn giản N lập trình viên 
  làm việc cùng với nhâu những phải N thời gian số lượng công việc mà một lập trình viên sẽ tạo ra.
