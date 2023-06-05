# ![](https://drive.google.com/uc?id=10INx5_pkhMcYRdx_OO4rXNXxcsvPtBYq) 合併排序（Merge Sort）
> ##### 理論請自行找，網路上有很多相關的文章，這邊只關注於範例實作的部分.

---

<!--ts-->
## 目錄
* [簡介](#簡介)
* [示意圖](#示意圖)
* [實作範例](#實作範例)
* [參考資料](#參考資料)
<!--te-->

---

## 簡介
合併排序（Merge Sort）是一種基於分治法的排序算法。<br>
它的基本思想是將待排序的數列分成兩個子數列，然後對每個子數列遞迴地進行排序，<br>
最後將兩個有序的子數列合併成一個有序的數列。<br>
<br>
合併排序的主要步驟如下：<br>
- 將待排序的數列分成兩個子數列，直到每個子數列只有一個元素或是空的情況。
- 對每個子數列遞迴地進行排序，直到每個子數列都是有序的。
- 將兩個有序的子數列合併成一個有序的數列。

<br>

在合併排序中，每次將數列分為兩個子數列的操作的時間複雜度是O(1)。<br>
而合併兩個有序的子數列的操作時間複雜度是O(n)，其中n是兩個子數列的總長度。<br>

在遞迴地對子數列進行排序時，每一層遞迴需要處理的數量是原始數列大小的一半。<br>
因此，遞迴的深度是log₂n，其中n是數列的大小。<br>

因為每一層遞迴的操作時間複雜度是O(n)，所以整個合併排序的時間複雜度可以表示為O(nlogn)。<br>
合併排序的時間複雜度為O(nlogn)，在平均和最壞情況下都相同。<br>
儘管合併排序的時間複雜度比起氣泡排序和插入排序要高，但合併排序是一種穩定的排序算法，且適用於處理大型數據集。

---

## 示意圖:
<img src="https://drive.google.com/uc?id=1Q5yz2iQopRu0F9Nr_ow7c3vjoqwIqfmc" height="70%" width="70%"/>

> 圖片來源：[iThome鐵人賽(Frank) - 演算法 合併排序法 Merge Sort](https://ithelp.ithome.com.tw/articles/10278179) 

---

## 實作範例:
- [Example](https://github.com/RC-Dev-Tech/algorithm-merge-sort/blob/main/C%2B%2B/main.cpp) - Merge Sort (C++)

---

## 參考資料
* [Wiki - Merge Sort](https://zh.wikipedia.org/wiki/%E5%BD%92%E5%B9%B6%E6%8E%92%E5%BA%8F) <br>
* [iThome鐵人賽(Frank) - 演算法 合併排序法 Merge Sort](https://ithelp.ithome.com.tw/articles/10278179) <br>

---

<!--ts-->
#### [目錄 ↩](#目錄)
<!--te-->
---
