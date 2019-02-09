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

=== 伝えたいことが伝わらなくなってしまうから

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

画像の右上にドーナツ型の円がありますね。それがPie Chartのグラフです。この機能の詳細は、本題ではないため割愛します。

言葉の使い方・文章の並べ方・句読点の多さによって、伝わってくる内容が全く違う点が重要なのです。

例えば、@<list>{bad-kibana-text}を読んだとき「Pie Chartを使うと円グラフが描ける」という意味がすぐ伝わってきたでしょうか。
「データの内訳を分割する」・「パイを分割する」できそうだ、と受け取ったのではないかと思います。しかし、筆者が伝えたかったのは「Pie Chartを使うと円グラフが描ける」ことです。
パイの分割はその後のページで説明しているため、ここではさほど重要ではなかったのです。これでは読者が「著者の主張」を推測しながら本を読み進めることになります。

読者への負担が高い本は、読者にとって「読みにくい本」となってしまいます。はっきり言って、読後感の印象は最悪です。読むのに疲れるからです。
こうなると、あなたの伝えたいことは3割程度しか伝わりません。

=== 読者の読解力が問題なのか

読者の読解力・技術力が足りていないのが悪い。と思われるかもしれません。しかし、本当にそうでしょうか。

ここで『20歳の自分に受けさせたい文章講義 (星海社新書)』から、私が1番好きな文を引用します。@<fn>{seikai}

//footnote[seikai][新書なので電子版は存在しません。しかし、内容は一読する価値があります。本の感想や紹介はAmazonのカスタマーレビューを見てください。私は大学生のときにこの本に出会えて本当に良かった、と思っています。]

//quote{
専門書やマニア向けの雑誌などが（一般読者にとって）読みづらいのは、このためだ。出てくる言葉が難しいのではない。読者に甘え、本来やるべき説明を怠っているから、読みづらいのである。
//}

言いたいことが「伝わらない」のは読者のせいではありません。本を書いた人の責任である、と古賀さんは言います。さらに「専門性に逃げるのは、書き手の怠慢であり、甘えにすぎないのだ」とも述べています。

専門書の位置づけで技術同人誌を書くのであれば、「専門的な観点が多すぎて初心者に伝わらない」のは許されるかもしれません。
ただし、タイトルやキャッチコピーに@<code>{わかりやすい}や、@<code>{初心者の/はじめての}と書くのであれば話は別です。専門書よりも丁寧に、かつ慎重に原稿を書かなければなりません。

なぜならば、初心者はあなたの行間を読み取ることが難しいからです。前提知識が足りていないため、説明不足な点を自分で補うことができません。
そのため、行間の補足が必要な箇所が多くなると「読みづらい/わかりにくい」という感想を持ちやすいのです。サンプルコードが動作しなければ、もっと印象は悪くなります。

本当かなと思うのであれば、試しにAmazonのWebサイトで@<code>{Java 入門書}と検索してみてください。低評価のレビュー文の大半は「説明がわかりにくい」「サンプルコードが動作しない」といったものです。
ひどいものだと、中級者向けの本に「初心者が読んだけどわからなかった」というレビューがついていたりします。

対象読者をきちんと定め、誰が見てもわかるように明記する（誤解ないように宣伝する）のは本を作る人がやるべきことです。売れるから、刺さりやすいから、イイねがいっぱいもらえるからといって、安易に初心者向けを謳わない方が良いです。

読者というものは勝手なように見えるかもしれません。言いたい放題で理不尽なのは、よくわかります。
しかし、読者はあなたの書いた本からしか情報を取得できません。わからないことは調べて読んでほしい？行間を読んでほしい？技術書に対するAmazonのレビューをみれば、それは幻想だとわかるでしょう。
読者が本を買って読む目的は、次の2つに集約されます。

 * Web検索では手に入れられない情報を知ること
 * 横断的な情報をまとめて取得・管理すること

情報を手に入れる目的で本を読む人に、調べ物をしながら本を読むことを期待するのは難しいのです。対抗するためには、クオリティの高い原稿をぶつけるしかありません。

読者のためだけではなく、あなたの心を守るために推敲を行いましょう。

== 推敲する観点

普段の生活で推敲をすることはどのくらいありますか？メール文化の中にいれば、書いた文章を推敲する機会があるかもしれません。
Slackなど、チャットを多く利用するのであれば、長文を書くこと自体あまりないかもしれません。
そこで、推敲する観点をまずは押さえましょう。

=== 最低限やるべき観点

この観点が網羅されていない場合、「この本は読みにくい」印象となってしまいます。本の内容ではなく、文章の読みやすさに関わる観点だからです。@<br>{この観点の推敲は、一番最初に行いましょう。}

 * 語調・記法は統一されているか
 * 接続詞の用法は正しいか
 * 句読点の量と位置
 * 一文の長さは40文字以内か
 * 初見の単語には意味の解説があるか
 * 助詞の使い方は正しいか
 * 同じ言葉を繰り返し利用していないか

当たり前じゃないか、と思われるかもしれません。しかし、これらの観点が守られていない技術同人誌は数多く存在します。言い換えると、読みやすい文章を書くだけで1つ抜きん出た技術同人誌を作れるということです。

順番に内容を確認していきましょう。

===  語調・記法は統一されているか

技術同人誌を書く場合、1ヶ月〜2ヶ月の期間をかけることになる場合が多いです。複数日にまたがって執筆していると、初期に書いた原稿と終盤間際に書いた原稿で@<code>{技術用語や記述方法（キャメルケース/スネークケースなど）の記載方法が異なる}ことが往々にしてあります。
技術同人誌は内容に正確性が求められるジャンルの本です。@<b>{本の中で表記は必ず統一しましょう}。複数表記が存在すると、読者は何が正しい表現なのかわからず混乱します。特に複数人で同時に執筆している場合、表記が分かれやすいので特に注意しましょう。

記法と合わせて、語調も統一するべきです。統一されていない場合、本が読みづらくなってしまうためです。
具体的には、次のうちどちらかから選択します。

 * 「です/ます」などの丁寧語を利用する
 * 「だ/である」などの断定語を利用する

技術同人誌の場合、「です/ます」などの丁寧語を利用すると良いでしょう。これは、商業本の技術書と同じ語調を利用するためです。
自分の技術同人誌を商業出版したいと考えている場合は、丁寧語にしておくべきです。修正コストが少ない方が、売り込みに行きやすいです。

語調は本全体を通して統一します。合同誌になると、語調がバラバラになりやすいので@<b>{事前にルールを設けておくことを強く推奨します}。
後から修正することは、本当に面倒で時間がかかります。この修正作業だけで時間と体力を無駄に消耗するため、語調は最初から統一しておくべきです。

実際に悪い例をみてみましょう。@<list>{unity_notation_bad}を見てください。同じミドルウェアの名前が3回出てきます。

//list[unity_notation_bad][語調・記法が統一されていない例]{
BeatsはOSにインストールすることで、機器のデータをElasticsearchやlogstashに転送する
簡易的なデータ収集ツールです。例えばネットワークのパケット情報・Windowsのイベントログ・死活監視の情報などを収集することが
できるため、LogStashでカバーできないような情報を集めてくることができる。
Logstashにログを転送することで、他のログと同じように加工・転送が可能となるため、痒いところに手がとどくツールという位置づけ。
//}

3つの表現が出てきました。

 * logstash
 * LogStash
 * Logstash

Logstashは、Elasticsearch社製のログ収集・転送ツールです。@<code>{Logstash}と記述するのが正しいのですが、表現が分かれてしまっていると混乱しますよね。
Logstashを知っていれば「Logstashのことを指している」と理解できるでしょう。
しかし、初めてLogstashを知った人は、@<code>{Logstash}と@<code>{LogStash}を別のプロダクトだと思ってしまうかもしれません。

さらに、@<list>{unity_notation_bad}は語調も統一されておらず、読みやすくはありません。

そこで、次のように書き換えてみましょう。

//list[unity_notation_good][語調・記法が統一されている例]{
BeatsはOSにインストールすることで、機器のデータをElasticsearchやLogstashに転送する
簡易的なデータ収集ツールです。例えばネットワークのパケット情報・Windowsのイベントログ・死活監視の情報などを収集することが
できるため、Logstashでカバーできないような情報を集めてくることができます。
Logstashにログを転送することで、他のログと同じように加工・転送が可能となるため、痒いところに手がとどくツールという位置づけです。
//}

これで、@<code>{Logstash}という表現に統一できました。

目視で記法が統一されているか確認することは、とても難しい作業です。エディタ・ワープロソフトの@<code>{検索・置換}機能で一括置換を行うと良いでしょう。

例えば、Visual Studio Codeであれば、@<code>{Command（Ctl） + F}キーで検索・置換機能を起動できます。
@<img>{unity_notation}を見るとわかる通り、表記揺れがある場合でも文字列検索を行えます。ここで一括置換を行えば、表記ゆれを解消できます。

エディタの一種Atomも、同じような置換機能を持っています。テキストで原稿を作成する場合、エディタの力で用語を統一しましょう。

//image[unity_notation][Visual Studio Codeで置換を行なっている様子]{
//}

WordやGoogle Documentsなどのワープロソフトを利用する場合も、同じように検索・置換を行えます。
Wordの場合は@<code>{Command（Ctl） + H}、Google Documentsの場合は@<code>{Command（Ctl） + F}で検索・置換を行います。
こちらも積極的に活用していきましょう。

//image[unity_notation_google_doc][Google Documentsで置換を行なっている様子]{

//}

===  接続詞の用法は正しいか

@<code>{接続詞}という言葉を聞いたことはありますか？接続詞とは、文と文とをつなぐ役割を持つ品詞の一種です。
新聞内で利用する日本語の書き方を指南している『記者ハンドブック』内（p108）では、接続詞の種類として次の単語が挙げられています。

 * あるいは
 * かつ
 * しかし
 * しかも
 * すなわち
 * それ故
 * それとも
 * ただし
 * ところが
 * ところで
 * ないし
 * なお
 * ならびに
 * また
 * または
 * もしくは
 * 持って
 * および
 * 従って
 * 併せて

数が多いので、利用する機会が多い接続詞に絞ります。

 * しかし
 ** 前の文章の内容を打ち消すときに利用する

//image[but][しかしを利用する文章例]{

//}

 * すなわち
 ** 前に述べた言葉を別の意味で説明し直すときに利用する

//image[other_words][すなわちを利用する文章例]{

//}

 * それ故
 ** 前の文章の理由や根拠を述べるときに記載する（だから・そのためも同じ意味）
 ** 最近はひらがな表記が一般的である
 ** "だから"は多用すると子供っぽい印象となるので注意が必要

//image[because][しかしを利用する文章例]{

//}

 * ただし
 ** 前の文章について条件や例外をつけ足すときに利用する

//image[exception][ただしを利用する文章例]{

//}

 * ところが
 ** 前の文章から予想できない事項について記載するときに利用する

//image[unexpected][ところがを利用する文章例]{

//}

 * また
 ** 前の文章と同じ事項を重ねて表現するときに利用する

//image[add][また を利用する文章例]{

//}

 * および
 ** 前の文章 AND 後ろの文章 と表現するときに利用する

//image[and][およびを利用する文章例]{

//}

 * または
 ** 前の文章 OR 後ろの文章 と表現するときに利用する

//image[or][またはを利用する文章例]{

//}

接続詞は用法を誤ると@<b>{意味が正しく伝わりません}。接続詞を意識すると、文章の意味を正しく伝えるだけでなく、文章の論理構成を検討つつ本文を記載できます。
文章を書くことに慣れていないうちは、接続詞を入れながら文章を記載すると良いでしょう。推敲中にくどいと思った時点で削れば良いのです。

===  句読点の量と位置

句読点とは、文章を区切るための文字のことです。句点は@<code>{"。"}、読点は@<code>{"、"}のことです。

句点は文章の最後につけます。ただし、かっこ（@<code>{例：「」・（）}）内の文章の場合、基本的には句点をつけません。場合によってはつけることもあります。
『記者ハンドブック』p115に詳しい記載がありますが、技術同人誌を書く上では@<code>{かっこを使用しない文の最後に必ず句点をつける}、と覚えておけば良いでしょう。

//list[dot_bad][句点が正しくつけられていない例]{

//}

//list[dot_good][句点が正しくつけられている例]{

//}

句点のルールは、多くの技術同人誌で守られているようです。しかし、問題は読点です。
読点の付け方で著者の文章を書く力を測れると言えます。読点の付け方が悪いせいで、内容が面白くても「読みづらい」技術同人誌は多いからです。

『記者ハンドブック』では、読点に関して次のような説明がされています。

//quote{
読点は文章を読みやすくしたり、記事内容を正しく伝えるために打つ。息の切れ目や読の間（なるべく20文字以内）を考えて付ける。
//}

読点の目的が全く果たされていないパターンをいくつか挙げます。

==== 読点が多すぎる

@<code>{息の切れ目や読の間（なるべく20文字以内）を考えて付ける。}とありました。この@<code>{息の切れ目}を@<code>{文節}と勘違いしてやたらと読点を多用する人がいます。
文節とは、文を実際の言語として不自然でない程度に区切った最小の単位のことです。読点が多すぎる人は、助詞（てにをは）が出てくるたびに読点を打ちます。@<b>{平成の終わりに置いて、読点を打ちまくるのはモダンな書き方ではありません}。絶対にやめましょう。@<fn>{30}

//footnote[30][独断と偏見ですが、30代以上の男性は文中で読点を多用する人が多いです。そういう流行だったのでしょうか。]

別に読点が多くたっていいじゃない、と思われるかもしれません。実際に例を見てみましょう。

//list[comma-bad][読点が多すぎる例]{

//}

//list[comma-none][読点がまったく存在しない例]{

//}

//list[connma-good][読点を適切に打った例]{

//}


===  一文の長さは40文字以内か
===  初見の単語には意味の解説があるか
===  助詞の使い方は正しいか
===  同じ言葉を繰り返し利用していないか


== まとめ

- 推敲は大事だよ
- 伝わらないと負けだよ

推敲に時間をかけるためにも、本文は早いとこ完成させましょうね！

== 参考文献

* コトバンク：推敲
** https://kotobank.jp/word/%E6%8E%A8%E6%95%B2-539689

* ２０歳の自分に受けさせたい文章講義（2012）古賀史健 星海社新書
** https://www.seikaisha.co.jp/information/2011/12/20-post-71.html

=== 一括置換

* テキストを検索および置換する（Microsoft Office）
** https://support.office.com/ja-jp/article/%E3%83%86%E3%82%AD%E3%82%B9%E3%83%88%E3%82%92%E6%A4%9C%E7%B4%A2%E3%81%8A%E3%82%88%E3%81%B3%E7%BD%AE%E6%8F%9B%E3%81%99%E3%82%8B-c6728c16-469e-43cd-afe4-7708c6c779b7

=== 接続詞

* ベネッセ教育サイト 【国語文法】 接続詞とはなんですか？
** https://benesse.jp/teikitest/chu/japanese/japanese/c00508.html

* 記者ハンドブック第13版 （2016）共同通信社
** https://www.kyodo.co.jp/books/isbn/978-4-7641-0687-1/

* 接続詞・接続的副詞[句]・接続助詞の種類（日英）（有限会社西尾情報処理事務所）
** http://www.nipo.co.jp/conjunc1.htm