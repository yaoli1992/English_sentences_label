# QT_demo

作者：particle

公众号：点云PCL

英语比较句子标注

比较数据集构建，给定一个输入文本，每个文本都是一个用户的评论，判断该文本是否是比较句子，如果是比较句子需要提取出比较关系，一个输入文本Document 可能包含多个比
较关系，每个比较关系有 4 个要素：比较主体t1，比较客体t2，比较属性项aspect_term，比较观点opinion 。

**运行界面**
                                                                         
![the outcome of point_Gui](https://github.com/yaoli1992/dianyunPCL_QT_demo/blob/master/image/image.JPG)




# 用法

选择
复制比较主体t1，比较客体t2，比较属性项aspect_term，关键词或语句到对应的文本框中，
分别点击t1,t2,选择比较观点opinion，最后点击 aspect_term，将生成对应的json属性在右边的文本框中
