#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int bank (int s);


int main(void)
{
  int j=1;
 while (j>0)
   {
    int i=0,a;
    printf("模擬資訊面試按1開始\n");
    while (i==0)
    {
        scanf("%d",&a);
        if (a==1)
        {
            i=1;
        }
        else
          printf("模擬資訊面試按1開始\n");
    }
    a=0;

  int p=0;
    printf("教授:你為什麼選我們科系?\n按1回答:我喜歡打電動\n按2回答:我喜歡解決有問題的人\n按3回答:從小就對電腦很感興趣\n");
  scanf("%d",&a);
  a=0;
  printf("教授:那你為什麼想來這間學校?\n按1回答:離家近\n按2回答:爸媽叫我選的\n按3回答:評價很好\n");
  scanf("%d",&a);
  a=0;


  int score = bank(10);

  printf("結束了，滿分20你拿了 %d ，你覺得我會錄取你嗎?\n(1)會(2)不會\n",score);
  scanf("%d",&p);
  if(score>=12)
  {
    printf("恭喜你錄取了\n");
  }
  else
  {
    printf("你明年再來吧\n");
  }
  printf("遊戲結束\n\n");
  }
}


int bank(int s)
{
  srand(time(0));
  int a=0;
  int arr[21]={0};
  for(int i=1;i<=s;i++)
    {
      int p=0,q;
      here:
      q=rand()%20+1;
      if(arr[q]==0){
        arr[q]=1;
      }
      else{
        goto here;
      }


      if(q==1)
      {
        printf("電腦的發展可分為四個時期：a.積體電路時期；b.機械時期；c.電晶體時期；d.真空管         時期；其發展順序依序為和?\n(1)ABCD\n(2)BADC\n(3)BDCA\n(4)CABD\n");
        scanf("%d",&p);
        if(p==3)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為3\n\n");

      }
      else if(q==2)
      {
        printf("可以解釋快速排序的原理嗎?\n(1)原理是先從原始序列中找一個基準值，接著逐個將資料與基準值比較，比基準值小的資料放在左邊，比基準值大的資料放在右邊，將基準值放在序列的中間，使其左邊都小於基準值，右邊都大於基準值，再從兩邊序列找出基準值，重複前面步驟，直到排序完\n(2)是將資料逐個放入已排好的序列中，且逐個和已排好的資料比較，找到正確的位置插入\n");
        scanf("%d",&p);
        if(p==1)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為1\n\n");
      }
      else if(q==3)
      {
        printf("何謂物聯網?\n(1)是藉由密碼學與共識機制等技術建立與儲存龐大交易資料區塊串鏈的點對點網路系統。 每一個區塊包含了前一個區塊的加密雜湊、相應時間戳記以及交易資料\n(2)是一種計算裝置、機械、數位機器相互關聯的系統，具備通用唯一辨識碼，並具有通過網路傳輸數據的能力，無需人與人、或是人與裝置的互動\n");
        scanf("%d",&p);
        if(p==2)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為2\n\n");
      }
      else if(q==4)
      {
        printf("電腦上 0 與 1 代表什麼\n(1)0對於工程師來說較淺顯易懂\n(2)因為這是六進位的表現方式\n(3)以電路來說1來表示開，以0來表示關\n");
        scanf("%d",&p);
        if(p==3)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為3\n\n");
      }
      else if(q==5)
      {
        printf("如果需要排列大量的資料應該使用何種排序方式?\n(1)泡泡排序\n(2)快速排序\n(3)合併排序\n(4)插入排序\n");
        scanf("%d",&p);
        if(p==2)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為2\n\n");
      }
      else if(q==6)
      {
        printf("HTTP 是什麼？\n(1)超文本傳輸協定\n(2)檔案傳輸協定\n(3)簡單郵件傳輸協定\n(4)網際網路資訊存取協定\n");
        scanf("%d",&p);
        if(p==1)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為1\n\n");
      }
      else if(q==7)
      {
        printf("visualization中文是什麼?\n(1)客製化\n(2)內碼\n(3)緩衝器\n(4)視覺化\n");
        scanf("%d",&p);
        if(p==4)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為4\n\n");
      }
      else if(q==8)
      {
        printf("什麼是ISDN?\n(1)整合服務數位網路\n(2)乙太網路\n(3)權杖環\n(4)鏈式區域網\n");
        scanf("%d",&p);
        if(p==1)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為1\n\n");
      }
      else if(q==9)
      {
        printf("www的全名?\n(1)World Web Wallpaper\n(2)Wild World Website\n(3)World Wide Web\n(4)World Webtoon wide\n");
        scanf("%d",&p);
        if(p==3)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為3\n\n");
      }
      else if(q==10)
      {
        printf("何者是C語言的優點?\n(1)是高階語言\n(2)允許直接訪問物理地址，可以直接對硬體進行操作\n(3)一種指令碼語言，只要一寫就可以執行，因此省去了編譯連結的麻煩\n(4))是機器語言\n");
        scanf("%d",&p);
        if(p==2)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為2\n\n");
      }
      else if(q==11)
      {
        printf("RAM與ROM之間的差異?\n(1)RAM代表隨機存取記憶體，ROM代表唯讀記憶體\n(2)RAM用於電腦，ROM用於手機\n(2)ROM的資料無法儲存而RAM可以\n(3)ROM是揮發性記憶體而RAM不是\n");
        scanf("%d",&p);
        if(p==1)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為1\n\n");
      }
      else if(q==12)
      {
        printf("有玩線上遊戲的經驗嗎\n(1)有\n(2)沒有\n");
        scanf("%d",&p);
        if(p==1||p==2)
        {
          printf("ok\n");
        }
        else
        {
          printf("...\n");
        }
        p=0;
      }
      else if(q==13)
      {
        printf("何謂御風者?\n(1)塞爾達傳說的一個神廟\n(2)臺灣CTF代表隊的隊名\n(3)一個資安團隊的名稱\n(4)一臺超級電腦\n");
        scanf("%d",&p);
        if(p==4)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為4\n\n");
      }
      else if(q==14)
      {
        printf("下列關於防火牆的介紹何者有誤?\n(1)最基本的功能就是隔離網路\n(2)能夠監控傳入和傳出網路流量的網路資安裝置\n(3)是微軟專屬的軟體\n(4)一個架設在網際網路與內網之間的資安系統\n");
        scanf("%d",&p);
        if(p==3)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為3\n\n");
      }
      else if(q==15)
      {
        printf("關於代理伺服器的優點何者有誤?\n(1)提高存取速度\n(2)隱藏真實IP\n(3)因為連結的兩個終端並非直接連結所以速率較慢\n(4)突破網路審查\n");
        scanf("%d",&p);
        if(p==3)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為3\n\n");
      }
      else if(q==16)
      {
        printf("什麼是專家系統?\n(1)人工智慧領域的一門\n(2)google對工程師的評級方式\n(3)一種排序方式\n(4)專家系統無法行使著本應由人擔任的職能\n");
        scanf("%d",&p);
        if(p==1)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為1\n\n");
      }
      else if(q==17)
      {
        printf("什麼是ETC?\n(1)電子道路收費系統\n(2)電梯控制系統\n(3)電子智慧城市\n(4)網路安全控制\n");
        scanf("%d",&p);
        if(p==1)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為1\n\n");
      }
      else if(q==18)
      {
        printf("關於電腦硬體的五大單元何者有誤?\n(1)輸入單元(Input Unit)簡稱IU\n(2)輸出單元(Output Unit)簡稱OU\n(3)控制單元(Control Unit)簡稱CU\n(4)記憶單元(Memory Unit)簡稱MU\n(5)處理單元(Process Unit)簡稱PU\n");
        scanf("%d",&p);
        if(p==5)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為5\n\n");
      }
      else if(q==19)
      {
        printf("何謂TQC?\n(1)電力質量控制\n(2)企業人才技能認證\n(3)資安攻防競賽\n(4)一種演算法\n");
        scanf("%d",&p);
        if(p==2)
        {
          a=a+2;
        }
        p=0;
        printf("正確答案為2\n\n");
      }
      else if(q==20)
      {
        int g=0;
        printf("教授:你最後一次模擬考總分多少?\n");
        scanf("%d",&g);
        if(g>=50&&g<=60)
        {
          printf("有料\n\n");
          a=a+3;
        }
        else if(g>=40&&g<50)
        {
            printf("不錯\n\n");
            a=a+2;
        }
        else if(g>=30&&g<40)
        {
          printf("ok\n\n");
          a=a+1;
        }
          else if(g>=20&&g<30)
        {
          printf("了解\n\n");
        }
        else
        {
          printf("...\n\n");
        }

    }

}
  return a;
  }
