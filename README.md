# university
Bai Tap C

6.7 Định dạng kiểu dữ liệu 
  C cung cấp cơ sở gọi typedef cho tạo kiểu dữ liệu mới cái tên ,
  Vd khai báo 
        typedef int Length;
 cách ghi này cái tên Length là tương đương với int , đây loại Length được sử dụng trong 
 khai báo , ép kiểu , chính xách cách loại int 
        Length len, maxlen;
        Length *lengths[];
  Đơn giản khai báo 
        typedef char *String;
 cách ghi trên tươi đương cho char * hoặc ký tự pointer , có thể khi sử dụng khai báo và ép kiểu
        String p, lineptr[MAXLINES], alloc(int);
        
        int strcmp(String, String);
        p = (String) malloc(100);
Chú ý loại bất đầu khai báo trong 1 typedef xuất hiện trong ví trí của tên biến , không phải sau từ
typedef , tương đồng typedef is như lưu chữ classes extern , static etc . We have used viết hoa tên 
cho typedefs, cho làm chúng chuẩn đầu ra 

là một nhiều ví dụ , chung ta nên làm typedefs cho cây nodes xem cho mỗi chap này

  typedef struct tnode *Treeptr;
  
  typedef struct tnode {
        char *word;
        int count;
        Treeptr left;
        Treeptr Right;
  } Treenode
  
  Đây là tạo 2 dạng mới với từ khóa called Treenode (là một kiểu cấu trúc) and Treeptr (một pointer
  tới kiểu cấu trúc ). Khi talloc nên bất đầu 
Treeptr talloc(void)
{
    return (Treeptr) malloc(sizeof(Treenode));
}

  Đây cũng là nhấn mạnh một typedef khai báo không làm tạo 1 dạng mới trong bất kỳ ý thức
  là đơn thuần thêm 1 cái tên mới cho tồn tại dạng. cũng không phải là ở đó bất kỳ mới về mặt ngữ 
  nghĩa , biến khai báo theo kiểu này có chính xác cùng tính chất là một biến có khai báo đánh vần
  ra rõ ràng , sử hiểu quả typedef là như #define , ngoài trừ nó rất thứ hay ho cho biên dịch
  
  Đối phó với văn bản thay thế vượt quá khả năng tiền xử lý , Ví dụ
  
    typedef int (*PFI)(char *, char *);
 
 tạo dạng PFI , cho pointer tới function (của 2 char * đối số ) trả về int , chúng ta cả thể dụng 
 chúng như 
    PFI strcmp, numcmp;
  ngoài hoàn toàn thẩm mỹ vấn đề, ở đầy là 2 lý do chính cho việc sử dụng typedefs , Đầu tiền là 
  tới thông số hóa một chương trình bất đầu lại vấn đề tính di động , nếu typedefs là sử dụng
  cho kiểu dự liệu đấy có thể phụ thuộc vào máy móc , duy nhất typedefs cần thay đổi khi chương 
  trình thay đổi . 1 tình hình phổ biến là sử dụng typedef tên cho nhiều integer số lượng ,  khi 
  làm 1 thích hợp gắn cho lựa chọn short, int và long cho mỗi máy móc chính . Dạng như vậy size_t 
  và ptrdiff_t từ chuẩn thư viện là 1 ví dụ
   thứ 2 mục đích của typedefs chính là cung cấp tớt cho tài liệu một chương trình a loại gọi 
   Treeptr có thể dễ dàng hiểu được hơn 1 việc khai bao duy nhất pointer tới 1 kiểu cấu trúc phức
   tạp
  
6.8 Đoàn thể (Unions)
  
  Một đoàn thể là một biến điều có thể giữ (khoảng thời gian khác) đối tượng của sự khác biệt 
  dạng và độ lớn , cùng với biên dịch theo dõi độ lớn và sắp xếp yêu cầu , Đoàn thể cung cấp 1 
  con đường vận dụng sự khác thể loại dữ liệu trong 1 khu vực , cùng bên trong nhúng bất kỳ
  máy móc phụ thuộc vào thông tin trong chương trình , Chúng là tương tự tới biến thể trong pascal
  
    Là một ví dụ như là cố thể một int, a float , hoặc character pointer , giá trị của một củ thế
    hằng số cả thể lưu trữ trong 1 biến của thích hợp dạng , nhưng nó là phần lớn tiện lợi cho bản 
    quảng lý nếu giá trị chiếm cùng số lượng cho lưu chữ của đoàn thể - 1 đơn thể biến cũng có hợp
    pháp giữ
    
      unions u_tag {
        int ival;
        float fval;
        char *sval;
      } u;
    Biến u sẽ lớn đủ cho việc giữ lớn nhất cho 3 dạng , xác địn độ lớn là thực hiện phụ thuộc 
    bất kỳ 1 của giữ dạng có thể giao tới u và khi sử dụng trong biểu thức , quá dà là sử dụng 
    xem xét dạng lấy lại có thể dạng phần lớn gần đầy lưu trức . Đầy là  trách nhiệm lâp trình
    viên theo dõi của dạng hiện tại lưu trữ tại 1 đoàn viên , kết quả thực hiện-phụ thuộc
    nếu sảy ra là lưu trữ một dạng trích xuất là khác
      tương tự , thành viên của một đoàn viên truy cập là 
        unions-name.member
    or 
        unions-pointer -> member
 chỉ là kiểu cấu trúc , nếu biên utype được sử dụng theo dõi của hiện tại dạng lưu trữ trong u
 khi 1 có thể thấy code như là
 
      if (utype == INT) 
          printf("%d\n", u.ival);
      else if (utype == FLOAT);
          printf("%f\n", u.fval));
      else if (utype == STRING)
          printf("%s\n", u.sval));
      else
          printf("bad type %d in utype\n", utype);
  Đoàn thể có thể xảy ra bên trong cấu trúc và mảng hoặc có thể ngược lại , ký hiệu cho truy 
  cập 1 thành viên của đoàn viên là cấu trúc ( hoặc ngược lại ) là xác định tới 
  
