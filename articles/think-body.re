= 本文の内容を記載する

こんにちは。りまりま団のもふもふです。

このエントリは、下2つのエントリからの続きモノです。



[http://rimarimadan.hatenablog.com/entry/2019/01/07/210011:embed:cite]


[http://rimarimadan.hatenablog.com/entry/2019/01/09/215308:embed:cite]


## 文章を書こうとすると手が止まってしまう

今までのエントリでは、技術同人誌を書き始めるまでに立ちはだかる、心理的な壁を払拭するための施策についてお話ししました。

既に、心は技術書執筆、やっていきですぞ！という気持ちなのではと思います。

しかし、いざ書き始めると、手が止まってしまう人は多いのではないでしょうか。
ここでの文章とは、最低1万字から始まる長文のことを指しています。チャットやSNS・メールのように、100〜500文字の文ではありません。

「い、1万字…？」と思ったあなた。これ、少ないんですよ。仮に1行40文字・1ページへ36行の設定を行なった場合、1ページに1440文字記載されます。60ページ分本文を書く場合、1440(文字) × 60（p） = 86400文字必要です。コードブロックや図形を挿入するとしても、6万字程度は文章を書くことになります。

この時点で、文章を書くことに苦手意識がある人は心が折れてしまいそうです。

それでも、私は「あなたは同人誌を一冊作れる！」と言いたいのです。

## 目次の中で1番好きなところから手をつける

[http://rimarimadan.hatenablog.com/entry/2019/01/09/215308:embed:cite]

このエントリでは、まず目次を出しましょう、という話をしました。あなたの手元には、既に目次のリストがあるはずです。

リストの中から1番好きなところ・1番言いたいところを選びましょう。そして**そこから**書き始めましょう。本の頭から書こうとすると、手が止まってしまうのです。

本の構成は昔のあなたが決めてくれています。どこから書いたとしても、本全体の論理構成が大きく崩れることはありません。今は、内容を書くことだけに集中すれば良いのです。

ここで重要なのは、**1つの工程が終わるまでは別のことをやらない**ことです。文章を書いているときに手が止まりやすい人は、次の作業を同時並行で進めようとする傾向があります。

- 本文（解説文章や考察）の記載
- コードブロック（プログラム・設定ファイル・コマンド・画面キャプチャなど）の記載
- 文章の校正

大事なのは**文章の質を都度高めるよりも、書ききることを優先する**ということです。推敲[^suikou]は文章が全て出揃った時点で行うべきです。この理由を羅列します。

[^suikou]: 師の字句や文章の構成を吟味して練り直すことです。（[コトバンク](https://kotobank.jp/word/%E6%8E%A8%E6%95%B2-5396890)）高校生の漢文の授業で推敲のエピソードをやった記憶があります。一字のために悩むのはエモいですよね。

- 章ごとのつなぎ＝本全体論理展開がおかしくないかの確認・修正は文章が全て出揃わないとできない
- 推敲時に各章の文章量の比率を調整することが多い
- 推敲は文章を寝かせた後におこなった方が効率が良い
- 締め切り近くになって本文が書けていない状態は心理的に負担になりやすい

**印刷所に出す時点で読める原稿になっていれば良いのです**。最初から完璧な原稿が書ける人は存在しません。まずは一通りの完成段階まで持っていきましょう。

## どんな順番で記載するといいの？

ここで頭の良いあなたは、「書ききった方がいいのはわかった。じゃあ実際どんな順番で書けばいいのよ？」と思っているのではないでしょうか。あなたの置かれている状況に応じて書く順序を変えたほうが良いので、状況ごとに分けて記載します。

### 取り扱う技術に関するコードや設定ファイルが手元にある場合

次の事例に当てはまる場合、コードや設定ファイル等をコードブロックとして目次の下に挿入する作業から取り掛かりましょう。このとき、書きたい話の流れに沿って貼り付けておくと楽ができます。文章を記載するとき、コードブロックの並び替えが不要になるためです。

- 載せる予定のコードが80%以上書けている
- 動作する設定ファイルが手元に80%以上揃っている
- 書きたい内容に関するログのストックを持っている

要は、**「成果物がある人」はそれを本文として映えるように整理して本文にする作業から行いましょう**、ということです。

先にコードブロックで本文の骨組みを作成し、コードブロックの解説を本文として記載する作戦です。自分の実装内容について語ればよいので、何を書いて良いかがわからない！という悩みなく本文を作成できるはずです。さらに、コードブロックの分量で「何かしら進んでいる」という安心感を得ることができます。

## 上記に当てはまらない（手元に成果物がない/これから作る）場合

これからコードブロック内に載せる成果物を作成しようとする場合、まず**本文の文章**から記載しましょう。

文章を書き慣れていない人が「手を動かすのは早い方だから」とコードブロック内の成果物を作成しようとするのは避けるべきです。技術的にハマってしまった場合、本文を作成するために利用できる時間がどんどん無くなってしまうからです。

先に本文ができていれば、最悪コードブロックなしでも入稿することは可能です。しかし、手元に何もないと入稿すらできません。待っているのは**新刊が落ちた**という事実です。

後々焦らないようにするためには、**何かしら目に見える形で進捗をつくる**ことが重要です。

本文を記載しておくと良いこともあります。それは、自分の書いた文章を見ながらコードを作成・実行できることです。「この解説とやりたいことがずれているので修正しよう」「わかりにくいので解説をもう少し膨らませよう」など、本文の内容に対し、自分で自分にフィードバックを得やすくなります。

## 本文の内容を膨らませるためのヒント

本文を書く順番に関する知見を得ることができました。最後に必要なのは、「どんな内容を書けば良いのか？」という知見です。基本的に好きなことを書けば良いのですが、次の観点を入れると分かりやすさを増すことができます。

### 環境構築ではOS差異を網羅すると良い

技術同人誌をいくつかめくってみると、Mac OSで動作確認している人が多い印象があります。想定環境が記載されていない本もちらほらと見かけます。

ただ、どんな人が本を読むかはわかりませんよね。読者がWindowsを利用しているかもしれません。Windows利用者にあなたの好きな技術を広めるのであれば、Windowsでの動作方法が記載されていた方が良いですよね。

特にインフラ・ミドルウェアに関する内容を書こうとしている方は、できればOSごとに構築手順の違いを網羅しておくと良いです。実際に環境を持つことが大変なのであれば、公式ドキュメントの環境構築手順のURLを添付しておくだけでも良いです。

もふもふちゃんの『[Elastic Stackで作るBI環境](http://amzn.asia/d/be7bGtk)』という本がニッチなジャンルでも息が長かった原因は「本で利用しているミドルウェア全てにおいて、Windows・Debian系Linux・CentOS系Linux・Mac OSでの環境構築方法とセットアップ方法が記載されている」からなのではないかと思います。公式ドキュメントのどこに環境構築方法が書いてあるかわからないのであれば、本を読みながら設定したいですよね。

環境構築方法を丁寧に書いておくことは、将来の自分を大いに救ってくれるでしょう。私も本の改版時は自分の本を見ながらセットアップをやりました。

###  動作確認方法をしっかりと

コードブロック内のコードが、コピー＆ペーストだけで実行できるかは必ず確認しましょう。あなたの予想以上に、本の通りにできないと戸惑う人は多いです。Amazonで技術書のレビューを読んでみてください。コードが動作しないとネガティヴな印象を持つ人はたくさんいます。人間間違えるからしょうがないと思うのですが、間違えがないほうが良いに決まっています。

### 参考文献を記載する

本の作成をするときに、自分の理解や主張は間違っていないか確認すると思います。調べた物のURLや本のタイトルを載せておくと良いでしょう。文量をカサ増しできますし、読者も文献を探す手間を省くことができるので一石二鳥です。

### 「ハマりどころ」を記載する

「ハマりどころ」とは、その技術を利用しているときに遭遇しやすいエラー文や設定ミスのことです。あなたが困った部分は他の人も困るはずです。将来の自分を助けると思って、ハマりどころとその対処法を記載しておくと良いでしょう。私は今までこれに何度も救われてきました。

文章、書けそうでしょうか？

- コードや設定ファイルがあるならコードブロックを目次の下に貼り付ける。順序を気にすると後で楽ができる。
- これから作る場合、本文をとにかく書く。推敲は全部できてから。
- 将来の自分を助けるつもりで書く

これで「書きたいのに何も書けない」状態を回避できるはずです。