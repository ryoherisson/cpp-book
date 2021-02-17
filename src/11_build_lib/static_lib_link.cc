// 複数のオブジェクトファイルを1つのファイルにまとめ、 リンク時にオブジェクトファイルの代わりとして使用することができます。
// 複数のオブジェクトファイルをまとめたファイルを静的ライブラリといい、 そのファイルをリンクすることを静的リンクといいます。

//  静的ライブラリ libhoge.a を作成
// $ ar rc libhoge.a add.o sub.o

// 作成したアーカイブを確認
// $ ar t libhoge.a

// libhoge.aを静的リンク
// $ g++ -std=c++11 main.o libhoge.a