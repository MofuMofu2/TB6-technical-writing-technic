= 推敲してより良い原稿を作成する

原稿を一通り書き終わった後は、時間が許す限り推敲を行いましょう。推敲をコトバンクで検索すると、「詩文の字句や文章を十分に吟味して練りなおすこと」と出てきます（参考文献参照）。
技術同人誌に置ける推敲は、本文や載せるプログラム・図解を十分に吟味して練り直すこと、と言えるでしょう。

商業誌では、編集者があなたの代わりに推敲を行います。技術系の本の場合、編集者の推敲は日本語表現の修正のみで、技術的な観点でのレビューは外部にお願いする場合が多いようです。
ちなみに、技術的なレビューを外部の誰かに頼んでいる場合、本の著者欄に@<code>{監修}がクレジットされます。ここから、商業の技術書は多くの人が原稿をチェックしていることがわかります。

しかし、技術同人誌は基本的に編集者は存在しません。あなたが編集者の役割も兼ねているためです。もちろん、合同誌に寄稿する場合は編集担当の誰かに原稿を預けることになります。
ただ、原稿の中身をどのくらい確認してもらえるかはわかりません。編集担当の人がどのような方針を持っているかは、そのときになってみないとわかりません。

Twitterなどで呼びかけてレビューを頼めばいいじゃない、と思うかもしれません。ただし、人を集めることができるかは運次第です。加えて、あなたが望む形のレビューをくれるかはわかりません。
最終的な原稿の修正は、あなた自身で行う必要があります。

あなたは原稿を書くのでもう十分楽しんだので、早く入稿して解放されたいと思っているかもしれません。レビューを誰かに丸投げしたいと思っているかもしれません。しかし、それは絶対避けるべきです。
自分一人で推敲を行えるようになりましょう。

== 原稿の推敲はなぜ大切なのか？

なぜ、推敲は大切なのでしょうか？

それは、@<b>{わかりやすい文章であればあるほど、あなたが広めたい技術を他人に伝えることができるから}です。推敲しても対して変わらないと思っていますか？では、次の文章を見てください。

//list[bad-kibana-text][文章例：1]{
データの内訳に応じて円が分かれていきます。 円を分ける条件を指定しないとデータの総件数が表示されるだけなので、パイを分割する設定を一緒に入れましょう。
//}

//list[good-kibana-text][文章例：2]{
円グラフを作成するための機能です。データの内訳を分析する用途で利用します。設定を変更すれば、円の中央が空いている”ドーナツ型”のグラフを作成することも可能です。
//}

この文章は、どちらも@<code>{Kibana}というミドルウェアの@<code>{Pie Chart}機能を説明したものです。

//image[kibana-graph][Kibanaの画面例]{

//}

画像の右上にドーナツ型の円がありますね。それがPie Chartのグラフです。

<figure class="figure-image figure-image-fotolife" title="Kibanaの画面例">

[f:id:MofuMofu:20190126183007j:plain]<figcaption>Kibanaの画面例</figcaption></figure>[https://www.elastic.co/guide/en/kibana/current/pie-chart.html:embed:cite]



この機能の詳細は、本題ではないため割愛します。言葉の使い方・文章の並べ方・句読点の違いで全然印象が違うのがわかりますか？

はじめの文章は「？？？」と思う点がたくさんあるように感じたのではないでしょうか。「データの内訳に応じて円が別れていきます」と言われて「Pie Chartを使うと円グラフが描ける」とすぐ解釈できる人は少ないと思います。
この「？？？」という感情が蓄積されると、本に対する印象は「読みにくい本」へ変化します。こうなってしまうと、あなたの伝えたいことは3割程度しか伝わりません。あなたの努力は水の泡、です。

読者の読解力の問題だ！と思われる方もいるでしょう。ここで『20歳の自分に受けさせたい文章講義 (星海社新書)』から、私が1番好きな文を引用したいと思います。[^seikai]

[https://www.seikaisha.co.jp/information/2011/12/20-post-71.html:embed:cite]

[^seikai]: 新書なので電子版は存在しません。しかし、内容は一読する価値があります。本の感想や紹介は[Amazonのカスタマーレビュー](https://www.amazon.co.jp/20%E6%AD%B3%E3%81%AE%E8%87%AA%E5%88%86%E3%81%AB%E5%8F%97%E3%81%91%E3%81%95%E3%81%9B%E3%81%9F%E3%81%84%E6%96%87%E7%AB%A0%E8%AC%9B%E7%BE%A9-%E6%98%9F%E6%B5%B7%E7%A4%BE%E6%96%B0%E6%9B%B8-%E5%8F%A4%E8%B3%80-%E5%8F%B2%E5%81%A5/product-reviews/4061385100)に譲りますが、私は大学生のときにこの本に出会えて本当に良かった、と思っています。

> 専門書やマニア向けの雑誌などが（一般読者にとって）読みづらいのは、このためだ。出てくる言葉が難しいのではない。読者に甘え、本来やるべき説明を怠っているから、読みづらいのである。

私も同感です。「伝わらない」のは読者のせいではありません。本を書いた人の責任です。古賀さんは「専門性に逃げるのは、書き手の怠慢であり、甘えにすぎないのだ」と表現しています。

専門書の位置づけで技術同人誌を書くのであればまだしも、タイトルやキャッチコピーに「わかりやすい」「初心者の/はじめての」といれるのであれば、絶対に専門用語でのゴリ押しは避けるべきです。

あなたが思っている以上にタイトル詐欺の本は多いです。例えば、特定の技術のAPIに関する解説だけしか書かれていない本を初心者が読み、「わからない」と言われたときですら、本を作った人に落ち度があるのです。<b>対象読者をきちんと定め、誰が見てもわかるように明記する（誤解ないように宣伝する）のは本を作る人がやるべきことです</b>。

読者というものは勝手なように見えるかもしれません。理不尽なのはわかります。しかし、読者はあなたの書いた本からしか情報を取得できません。わからないことは調べて読んでほしい？行間を読んでほしい？技術書に対するAmazonのレビューをみれば、そんなものは幻想だとわかります。

読者のためにも、あなたのためにも推敲はやりましょう。

== 推敲する観点

普段の生活で推敲をすることはどのくらいありますか？メール文化の中にいれば、そこそこあるかもしれません。チャットだと少ないのではと思います。

推敲できるか不安なあなたへ、もふもふちゃん調べの推敲観点ランキングを発表します。

1.  語調・記法は統一されているか
1. 接続詞の用法は正しいか
1. 句読点の量と位置
1. 一文の長さは40文字以内か
1. 初見の単語には意味の解説があるか
1. 助詞の使い方は正しいか

**4位までの観点は絶対にやっておきましょう**。

原稿を作成している環境によって、使えるやり方が変わってきますが、いくつかおすすめのやり方を挙げておきます。

=== 紙出しする

ベタですが、一度紙に印刷する方法です。紙出しの利点は、**原稿の仕上がりサイズを直接確認できる点**です。

字や段落が詰まって読みにくいという点をにチェックするためには、一度紙出しするのが確実です。

インク代や紙代がかかるので、ほぼ完成となったところで紙出しすると良いでしょう。とはいえ技術同人誌を作るのが初めての場合、紙面で仕上がりを確認する工程はサボらない方が良いです。

=== タブレットを使う

私はPDFをiPadに送信し、Apple pencil（初代の😡）で赤入れすることが多いです。

紙出しの手間を省きつつ、作業環境と別のディスプレイで確認することで、見落としを防ぐようにしています。

タブレットを持っていない場合、初期購入費用がかかるのが難点です。

=== lintツールを使う

lintツールを使いたい！そんな人もいるでしょう。技術同人誌界隈で利用が観測されたツールを紹介します。


[https://github.com/textlint/textlint:embed:cite]

[https://github.com/prh/prh:embed:cite]

[http://redpen.cc/docs/latest/index_ja.html:embed:cite]


注意点として、

- テキスト形式の原稿にしか使えない
- 論理構成や話の流れなどはチェックできない

ことがあります。最後は自分で確認することには変わりません。

ただ、助詞の使い方・句読点の量・一文の長さはlintツールが自動で教えてくれます。とにかく文章を書くのに自信がない場合、lintツールに助けてもらうのも良いでしょう。

== まとめ

- 推敲は大事だよ
- 伝わらないと負けだよ

推敲に時間をかけるためにも、本文は早いとこ完成させましょうね！

== 参考文献

* コトバンク：推敲
** https://kotobank.jp/word/%E6%8E%A8%E6%95%B2-539689
