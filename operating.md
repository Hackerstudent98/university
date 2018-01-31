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
  
bộ đa vi xử lý thêm CPUs máy tính mạnh hơn , nếu CPU có có 1 tích hợp bộ nhớ điểu khiển 
thêm CPUs cũng tăng số lượng địa chỉ bộ nhớ trong điều khiển , Hoặc đường , bộ đa vi xử lý có thể gây ra một hệ thống thay đổi mô hình truy cập bộ nhớ từ cùng một kiểu truy cập bộ nhớ (UMA) , để truy cập bộ nhớ không đồng đều (NUMA) . UMA được định nghĩa
như là vị trị trong đó truy cập bất kỳ RAM từ CPU mất cùng khoảng một thời gian , Cùng NUMA vài phần trong bộ nhớ có thể
mất nhiều thời gian hơn để truy cập hơn những khu vực khác , tạo một hiệu suất kém , Hệ điều hành có thể giảm thiểu NUMA
hình phạt thông qua quản lý tài nguyên

Gần đây nổi bật trong thiết kế CPU là bao gồm nhiều lõi tính toán tại 1 chip đơn , như là bộ đa vi xử lý hệ thống là được
gọi là đa lõi . chúng sẽ hiểu quả hơn nhiều chíp với 1 lõi đơn bởi vì trong chip sẽ giao nhanh hơn là việc các chip giao 
giao tiếp với nhâu  , Thêm nữa , một chip với nhiều lõi sử dụng đáng kể ít hao tốn nguồn so với nhiều nhiều lõi đơn với chip

Đây là điều quan trọng chứ ý trong khi nhiều lõi trong hệ thống là bộ đa vi xử lý hệ thống , không phải tất cả bộ đa vi xử l
lý hệ thống là đa lõi , chúng sẽ thấy trong phần 1.3.3 , Trong phạm vi bảo hiểm của chúng tôi của bộ đa vi xử lý hệ thống 
trong văn bản này , trừ khi chúng ta nói khác đi , nói chung là chúng ta sử dụng đồng thời nhiều thuật ngữ đa lõi , mà loại trừ một số hệ thống đa.

trong hình 1.7 , chúng ta thấy một cùng lõi thiết kế với 2 lõi  trong cùng một chip , trong thiết kế , mỗi lõi có riêng 
thanh ghi thiết lập cũng như địa phương riêng của nó bộ nhớ cache. Một số thiết kế sử dụng chia sẻ cache hoặc sự kết hợp giữa địa phương và chia sẻ lưu trữ ,Ngoài các cân nhắc về mặt kiến trúc như là cache , bộ nhớ và bus kết nối , đa lõi trong CPUs xuất hiện
trong hệ điều hành nhừ là N chuẩn bộ bộ vi xử lý ,đây đặc trưng gây áp lực tại hệ điều hành thiết kết và ứng dụng của lập t
trình viên cho tới sử dụng nhiều đa lõi 

Cuối cùng máy chủ phiến là tương đối gần đây phát triển trong nhiều bộ đa vi xử lý mạch , I/O mạch và mạng mạch là nơi trong
cùng , sự khác biệt giữa những  cái này và truyền thống hệ thống đa là mỗi bộ xử lý lưỡi là mỗi bộ vi xử lý lưỡi dao khởi động một cách độc lập và chạy riêng của nó hệ điều hành  Một số bo mạch phiến-máy chủ cũng có nhiều bộ xử lý,làm mờ các đường giữa các loại máy tính. Về bản chất, các máy chủ này bao gồm nhiều hệ thống đa xử lý độc lập.

1.3.3 Nhóm lại hệ thống 

Một dạng khác của bộ đa vi xử lý hệ thống là hệ thống cluster , tập hợp cùng nhiều CPU . Clustered Hệ thống khác 
từ bộ đa vi xử lý hệ thống mô tả trong 1.3.2 trong đó chúng sáng tác của 2 hoặc nhiều hệ thống cá nhân hoặc nhiều
nút tham gia cùng nhau. Như là hệ thống xem xét lỏng lẻo . Mỗi cây có thể là đơn bộ vi xư lý hoặc là nhiều lõi 
hệ thống , chúng ra nên ghi chú định nghĩa của clustered không phải là khái niệm , nhiều gói hàng thương mại vật lộn để xác định một hệ thống nhóm và tại sao một dạng là tốt hơn những cái khác , Thông thường được chấp nhận định nghĩa là clustered hệ 
thống chia sẽ lưu trữ và được liên kết chặt chẽ thông qua một mạng nội bộ LAN (như mô tả trong Chương 17) hoặc kết nối nhanh hơn, chẳng hạn như InfiniBand

Clustering thường là sử dụng cung cấp khả năng cao dịch vụ , chính là dịch vụ sẽ tiếp tục mỗi sự kiện , nếu một hoặc n
nhiều hệ thống trong cluster thất bại , Nói chung là chúng tôi đạt được khả dụng bởi thêm một tầng dư trong hệ thống
một lớp của cluster phần mềm chạy tại cluser nút , mỗi nút Mỗi nút có thể giám sát một hoặc nhiều người khác (over the LAN)
Nếu theo dỡi máy móc thất bại , theo dõi máy móc lấy sở hữa kho của nó khởi động lại ứng dụng đang chạy trên máy không thành công
Người sử dụng và khách hàng của các ứng dụng chỉ nhìn thấy một gián đoạn ngắn dịch vụ.















 

