= 推敲してより良い原稿を作成する

原稿を一通り書き終わった後は、時間が許す限り推敲を行いましょう。推敲をコトバンクで検索すると、「詩文の字句や文章を十分に吟味して練りなおすこと」と出てきます（参考文献参照）。
技術同人誌に置ける推敲は、本文や載せるプログラム・図解を十分に吟味して練り直すこと、と言えます。

商業誌では、編集者があなたの代わりに推敲を行います。技術系の本の場合、編集者の推敲は日本語表現の修正のみで、技術的な観点でのレビューは外部にお願いする場合が多いようです。
ちなみに、技術的なレビューを外部の誰かに頼んでいる場合、本の著者欄に@<code>{監修}がクレジットされます。ここから、商業の技術書は多くの人が原稿の正しさをチェックしていることがわかります。

しかし、技術同人誌はあなたが編集者の役割も兼ねています。複数人で執筆している技術同人誌に寄稿する場合、編集担当の誰かに原稿を預けることになります。
ただ、原稿の中身をどのくらい確認してもらえるかはわかりません。編集担当者の方針によっては、あまり校正をかけないこともあるでしょう。

Twitterなどで呼びかけてレビューを頼めばいいじゃない、と思うかもしれません。しかし、レビューを頼めるかは運次第です。加えて、あなたが望む形のレビューをもらえるかはわかりません。
最終的な原稿の修正は、あなた自身で行う必要があります。

あなたは原稿を書くのでもう十分楽しんだので、早く入稿して解放されたいと思っているかもしれません。気持ちはわかりますが、より良い技術同人誌を作るために頑張りましょう。

== なぜ原稿の推敲は大切なのか？

=== 伝えたいことが伝わらなくなってしまうから

なぜ、推敲は大切なのでしょうか？

それは、@<b>{わかりやすい文章であればあるほど、あなたが広めたい技術を他人に伝えることができるから}です。推敲しても対して変わらないと思っていますか？では、次の文章を見てください。

//list[bad-kibana-text][文章例：1]{
データの内訳に応じて円が分かれていきます。 円を分ける条件を指定しないとデータの総件数が表示されるだけなので、パイを分割する設定を一緒に入れましょう。
//}

//list[good-kibana-text][文章例：2]{
円グラフを作成するための機能です。データの内訳を分析する用途で利用します。設定を変更すれば、円の中央が空いている”ドーナツ型”のグラフを作成することも可能です。
//}

@<list>{good-kibana-text}は、どちらも@<code>{Kibana}というミドルウェアの@<code>{Pie Chart}機能を説明したものです。

//image[kibana-graph][Kibanaの画面例]{

//}

画像の右上にドーナツ型の円がありますね。それがPie Chartのグラフです。Pie Chart機能の詳細は、本題ではないため割愛します。

重要なのは、言葉の使い方・文章の並べ方・句読点の多さによって、伝わってくる内容が全く違う点です。

例えば、@<list>{bad-kibana-text}を読んだとき「Pie Chartを使うと円グラフが描ける」という意味がすぐ伝わってきたでしょうか。
「データの内訳を分割する」・「パイを分割する」できそうだ、と受け取ったのではないかと思います。しかし、筆者が伝えたかったのは「Pie Chartを使うと円グラフが描ける」ことです。
パイの分割はその後のページで説明しているため、ここではさほど重要ではなかったのです。筆者の主張と実際の記載に大きな差がありますね。
これでは読者が「著者の主張」を推測しながら本を読み進めることになります。何回も続けば、読者にかかる負担が増えていきます。

読者への負担が高い本は、読者にとって「読みにくい本」となってしまいます。はっきり言って、読後感の印象は最悪です。読むのに疲れるからです。
こうなると、あなたの伝えたいことは3割程度しか伝わりません。

=== 読者の読解力が問題なのか

「読者の読解力・技術力が足りていないのが悪い」と思われるかもしれません。しかし、そうではありません。

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

== 推敲する観点（基礎編）

普段の生活で推敲をすることはどのくらいありますか？メール文化の中にいれば、書いた文章を推敲する機会があるかもしれません。
Slackなど、チャットを多く利用するのであれば、長文を書くこと自体あまりないかもしれません。
そこで、推敲する観点をまずは押さえましょう。

次に示す観点が網羅されていない場合、「この本は読みにくい」印象となってしまいます。本の内容ではなく、文章の読みやすさに関わる観点だからです。
@<br>{この観点の推敲は一番最初に行いましょう。}後まわしにすると、修正箇所が大量に発生するためです。

 * 本の中で語調・記法は統一されているか
 * 接続詞の用法は正しいか
 * 句読点の量と位置は適切か
 * 一文の長さは40文字以内か
 * 段落を切るタイミングは適切か
 * 初見の単語には意味の解説があるか
 * 助詞の使い方は正しいか
 * 同じ言葉を繰り返し利用していないか

こんなのはできて当たり前じゃないか、と思われるかもしれません。しかし、これらの観点が守られていない技術同人誌は数多く存在します。言い換えると、読みやすい文章を書くだけで1つ抜きん出た技術同人誌を作れるということです。

順番に内容を確認していきましょう。

===  語調・記法は統一されているか

技術同人誌の作成期間は、1ヶ月〜2ヶ月となる場合が多いです。複数日にまたがって執筆していると、初期に書いた原稿と終盤間際に書いた原稿で@<code>{技術用語や記述方法（キャメルケース/スネークケースなど）の記載方法が異なる}ことが往々にしてあります。
技術同人誌は内容に正確性が求められるジャンルの本です。@<b>{本の中で表記は統一しましょう}。複数表記が存在すると、読者は何が正しい表現なのかわからず混乱します。
特に複数人で1冊の本を執筆している場合、表記が分かれやすいので特に注意しましょう。この複数人執筆で書かれる本は@<code>{合同誌}と呼ばれています。今後は複数人執筆の本を@<code>{合同誌}と表記します。
合わせて、英数字の表記法も統一するべきです。技術同人誌の場合、@<b>{半角英数字}表記にしましょう。プログラム等を書くときと同じ記述で読みやすくなるためです。

記法と合わせて、語調も統一するべきです。統一されていない場合、本が読みづらくなってしまうからです。
具体的には、次のどちらかから選択します。

 * 「です/ます」などの丁寧語を利用する
 * 「だ/である」などの断定語を利用する

技術同人誌の場合、「です/ます」などの丁寧語を利用すると良いでしょう。これは、商業本の技術書と同じ語調を利用するためです。
自分の技術同人誌を商業出版したいと考えている場合、丁寧語にしておくべきです。修正コストが少ない方が、出版社に売り込みやすいです。

語調は本全体を通して統一します。合同誌になると、語調がバラバラになりやすいので@<b>{事前にルールを設けておくことを強く推奨します}。
語調を後から修正するのは、かなり時間がかかります。この修正作業だけで時間と体力を無駄に消耗するため、語調は最初から統一しておくべきです。

ばらばらでもわかればいいじゃない、と思うかもしれません。実際に悪い例をみてみましょう。@<list>{unity_notation_bad}を見てください。同じミドルウェアの名前が3回出てきます。

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

接続詞は用法を誤ると@<b>{意味が正しく伝わりません}。接続詞を意識すると、文章の意味を正しく伝えるだけでなく、文章の論理構成を検討しつつ本文を記載できます。
文章を書くことに慣れていないうちは、接続詞を入れながら文章を記載しましょう。推敲中にくどいと思った時点で削れば良いのです。

===  句読点の量と位置

句読点（くとうてん）とは、文章を区切るための文字のことです。句点は@<code>{"。"}、読点は@<code>{"、"}のことです。

句点は文章の最後につけます。ただし、かっこ（@<code>{例：「」・（）}）内の文章の場合、基本的には句点をつけません。場合によってはつけることもあります。
『記者ハンドブック』p115に詳しい記載がありますが、技術同人誌を書く上では@<code>{かっこを使用しない文の最後に必ず句点をつける}、と覚えておけば良いでしょう。

句点のルールは、多くの技術同人誌で守られているようです。しかし、問題は読点です。
読点の付け方で著者の文章を書く力を測れると言えます。読点の付け方が悪いせいで、内容が面白くても「読みづらい」技術同人誌が多いのです。

『記者ハンドブック』では、読点に関して次のような説明がされています。

//quote{
読点は文章を読みやすくしたり、記事内容を正しく伝えるために打つ。息の切れ目や読の間（なるべく20文字以内）を考えて付ける。
//}

@<code>{息の切れ目や読の間（なるべく20文字以内）を考えて付ける。}とありました。@<code>{息の切れ目}を@<code>{文節}と勘違いしてやたらと読点を多用する人がいます。
文節とは、文を実際の言語として不自然でない程度に区切った最小の単位のことです。読点が多すぎる人は、助詞（てにをは）が出てくるたびに読点を打ちます。@<b>{平成の終わりにおいて、読点を打ちまくるのはモダンな書き方ではありません。絶対にやめましょう。}@<fn>{30}

//footnote[30][独断と偏見ですが、30代以上の男性は文中で読点を多用する人が多いです。そういう流行だったのでしょうか。]

別に読点が多くたっていいじゃない、と思われるかもしれません。次の例文を読んでください。

//list[comma-bad][読点が多すぎる例]{
Windowsの場合、zipファイルを、利用する以外に、インストールする方法は、存在しません。
一方、Macは、brewコマンドを用いて、インストールすることもできますが、
Elastic公式ではサポートされていないようなので、今回は、インストール方法から、対象外としています。
//}

息切れするような文章です。この調子で60〜80ページ読み続けるのはしんどいですよね。
@<list>{comma-bad}はかなり極端な例です。しかし、このような文章を書いている人は存在します。読点が多すぎる人は、頭の中の言葉と文章が直結している傾向があります。
最初に書く文章はそれでも良いのですが、@<b>{推敲時に必ず読点の量を削りましょう}。大変読みづらいことがお分かりいただけたかと思います。

では、読点を書かなければ良いのでしょうか？今度は読点が存在しない文章をみてみましょう。

//list[comma-none][読点がまったく存在しない例]{
Windowsの場合zipファイルを利用する以外にインストールする方法は存在しません。
一方Macはbrewコマンドを用いてインストールすることもできますが
Elastic公式ではサポートされていないようなので今回はインストール方法から対象外としています。
//}

どこで文章が切れるのか全くわかりません。ここでは2文目に注目してください。@<code>{Mac}が文中の主語になっています。このままでは、文章内の動詞は@<code>{対象外としています}となってしまいます。
Macが対象外としています、は少しおかしいですよね。ここで述べたいのは「Macのインストール方法は、今回は対象外とする」ことです。「Macは対象外としている」ではありません。

読点を打つ場所によって、日本語の意味が変わってきてしまいます。しかし、多すぎてもくどいです。次の事項を守り、文脈に注意を払いながら読点を打ちましょう。

 * 読点は20文字を目安に打つ
 * 文章を切りたい箇所に打つ
 * 1文に読点を打つ数は、最大2回までとする

慣れないうちは、1文に1回だけ読点を打つようにしましょう。こうすることによって、読点を打ちすぎることは無くなります。適切な位置に読点を打つ練習にもなります。
どこに読点を打つべきか考えていると、文章がわかりにくくなっていることに気づける確率も上がります。

//list[connma-good][読点を適切に打った例]{
Windowsの場合、インストーラーはzipファイル形式のみ提供されています。
一方Macの場合、zipファイルまたはbrewコマンドを利用できます。
ただしbrewコマンドを用いた方法は、Elastic公式ではサポートされていません。
よって、この本ではbrewコマンドを用いたインストール方法を扱いません。
//}

1文目は、読点を打ちづらかったため文章の構成から書き換えました。以降の文章は1文に1回読点を打つルールを適用するには長すぎるため、文を分割しました。
私は読点を接続詞の後ろ、または主語の後ろに入れるようにしています。日本語は主語がわかりづらい言語だからです。主語をはっきりすることで、技術の動作や役割を簡潔に説明できると考えています。

===  一文の長さは40文字以内か

文章の頭から句点までは、40文字に納めるようにしましょう。最悪でも45文字以内に納めます。文章の可読性が下がるだけでなく、1文の中に逆説が入ることで意味不明な文になるなどの弊害が発生するためです。

文章が長すぎる例を示します。

//list[long-text][1文が長すぎる例]{
Timelionでは独自の関数を指定すると、複数の要素を描画することができますが、
Visualizeでは1つの画面には1種類のグラフしか描画することはできません。
（81文字）
しかし、Timelionでは1つの画面に線グラフと棒グラフを両立させることができますので
2つのグラフを同じ画面で比較したいときに便利です。
（70文字）
//}

@<list>{long-text}の例は、意味は通じる文章です。そこまで「読みづらい」と思わないかもしれません。しかし、これはコードブロック内でわざと折り返しているからです。組版した形式で記載してみます。


Timelionでは独自の関数を指定すると、複数の要素を描画することができますが、Visualizeでは1つの画面には1種類のグラフしか描画することはできません。
しかし、Timelionでは1つの画面に線グラフと棒グラフを両立させることができますので2つのグラフを同じ画面で比較したいときに便利です。
　

今度はどうでしょう。印象が変わったのではないかと思います。では、1文が40文字以内に納まるように文章を書き換えます。

//list[short-text][1文を40文字以内に納めた例]{
Timelionでは独自の関数を指定すると、複数の要素を描画できます。
（35文字）
しかし、Visualizeでは1つの画面には1種類のグラフしか描画できません。
（39文字）
Timelionは、異なる種類のグラフを同時に比較したいときに便利です。
（36文字）
//}

文章を見直すと、「Timelionでは独自の関数を指定すると、複数の要素を描画することができます」「Timelionでは1つの画面に線グラフと棒グラフを両立させることができます」
は、内容が重複しているため削りました。では、組版するとどうなるでしょうか。


Timelionでは独自の関数を指定すると、複数の要素を描画できます。
しかし、Visualizeでは1つの画面には1種類のグラフしか描画できません。
Timelionは、異なる種類のグラフを同時に比較したいときに便利です。
　

先ほどに比べ、かなり読みやすくなりました。単純なルールですが、一段とわかりやすい文章になります。

=== 段落を切るタイミングは適切か

段落は、文章のまとまりを複数に分ける役割を持っています。意味が変わるタイミングで入れましょう。
具体的には@<code>{しかし}など、前の文章から主張が変化するときに入れます。

段落が少なすぎる場合、紙面を文字が覆いつくしてしまいます。可読性が下がってしまいます。
初めは4・5文続いたら段落を切り替える、と考えておきましょう。

文章や段落などの切り方がうまくいかない場合、主張がまとまっていないことが多いです。
まずは言いたいことを整理し、余計な文章を削ってみましょう。似たような内容があれば、それも削除しましょう。

初めのうちはたくさん書かないと伝わらないかも、と不安になります。それは、カレーにケチャップとマヨネーズをかけて食べる行為に等しいのです。
カレーはカレー味で十分美味しいのです。余計なものは不要です。技術同人誌も同じことです。

本筋とは関係ない内容を書きたい場合、コラムとして記載する・付録として章を追加て対策しましょう。
『技術同人誌を書くための文章技術』でも、コラムと付録を用意しています。書き方には直接関係ないものの、技術同人誌を書く上では付随する話だからです。

読みづらいと感じたら思い切って削る、これを頭に入れて進めましょう。

===  初見の単語には意味の解説があるか

専門用語やプロダクト名を記述するとき、「〇〇とは××のことです」と言葉の定義を記述しているか確認しましょう。
「初心者」「はじめての」とタイトルにつけたあなた。この観点は@<b>{絶対に守ってください}。初学者はあなたの解説するプロダクトについて知りたいのです。
単語の意味が解説されていないと、あなたの本は初学者の求める要件を満たせません。読者の満足度はかなり下がってしまいます。

@<list>{non-comment}は、本の中で初めてLogstashという単語が出てきたときの文章です。

//list[non-comment][本の中で初めて記載されるプロダクト名に解説がない場合]{
Logstashは、txt・xml・jsonファイルなどを収集できます。
それだけでなく、Twitter APIと連携してTwitterのつぶやき情報を取り込む事も可能です。
さらに、データベース（RSDB）に接続して情報を抜くこともできます。
//}

@<list>{non-comment}の文章だけでは「で、結局Logstashってなんやねん」と感じてしまいますよね。

//list[add-comment][本の中で初めて記載されるプロダクト名に解説がある]{
Logstashは、ログを収集し、指定した対象に連携できるツールです。
それだけではなく、ログの加工機能も持ち合わせています。
LogstashはRubyで作られています。

Logstashは、txt・xml・jsonファイルなどを収集できます。
それだけでなく、Twitter APIと連携してTwitterのつぶやき情報を取り込む事も可能です。
さらに、データベース（RSDB）に接続して情報を抜くこともできます。
//}

これなら、Logstashとは何か、を読者が知っている状態になります。機能解説の理解もしやすいでしょう。
対面でのコミュニケーションとは違い、筆者から読者へ情報を伝える手段は本の内容のみに限られています。
著者と読者の認識を合わせておくことは、お互いの認識齟齬がない状態にするために重要です。
本の中で一番最初に専門用語が登場したとき、解説がされているか再度確認しましょう。

===  同じ言葉を繰り返し利用していないか

同じ意味の言葉は、1段落に1回のみ使用します。例外として、表現を変えて繰り返し記述する場合や、専門用語・プロダクト名は繰り返し使用しても構いません。
ただし、多くても3回程度にとどめておきます。冗長な文章として見えやすいからです。

//list[repeat-word][同じ言葉が繰り返し出てくる例]{
使いたいグラフを決めたあとはグラフを配置していきます。
基本は＋の部分を押しながら、ドラック&ドロップでグラフを配置していくだけです。
グラフの大きさを変更したい場合、グラフ右下をクリックしたままドラック&ドロップで
大きさを調整します。ある程度は自動で大きさが決まってしまうので、ミリ単位の調節はできません。
//}

@<code>{グラフ}という単語がくどいですよね。１段落に4回も出てきています。

//list[non-repeat-word][同じ言葉を削った例]{
まずはじめに、利用したいグラフを決定します。
基本は＋の部分を押しながら、ドラック&ドロップで配置していくだけです。
グラフの大きさを変更したい場合、対象の右下をクリックしたままドラック&ドロップで
大きさを調整します。ある程度は自動で大きさが決まってしまうので、ミリ単位の調節はできません。
//}

数を2つ減らしました。先ほどよりは見やすくなりました。

===  助詞の使い方は正しいか・抜け漏れはないか

助詞とは、主語や動詞、名詞など、言葉同士の関係を示すための言葉です。例をいくつか示します。

 * て
 * に
 * を
 * は
 * が/は

言葉の関係性を示す言葉を慎重に利用しないと、意味が全く違うものになります。先に述べた観点を元に推敲していれば、あなたの文章はだいぶ読みやすくなっているはずです。
言いたいことと記述されている文章を比較し、言いたいこと通りに伝わってくるか確かめましょう。

また、助詞に抜け漏れがあると、文章全体が稚拙に見えてしまいます。助詞の書き漏れがないか、合わせて確認しましょう。

助詞の使い方が正しいか確認するときは、@<b>{最低でも先に述べた推敲を行った1日後}に行います。書いた直後に見直しをかけると、頭の中で内容を補完してしまうためです。
期間を空けて見直しをすることで、「言いたかったことと違う・抜け漏れがある」ことに気がつきやすくなります。

== 推敲する観点（応用編）

次に紹介する観点は、技術同人誌の質を上げるために確認するべきものです。ここから先は、著者の好みや個性が出る観点です。
より良い技術同人誌を作るためのアイディアが必要であれば、参考にすると良いでしょう。

 * こそあど言葉を利用しない
 * 文章を断定形で記述する
 * 文章に適切なフォントを利用する
 * タイトル詐欺をしない
 * 動作するコードを載せる

=== こそあど言葉を利用しない

こそあど言葉とは、「これ・それ・あれ・どれ」などの指示語のことです。指示語は便利な言葉ですが、文章内で多用されると@<b>{何を指しているのか理解しづらく}なってしまいます。
情報の正確性が求められる技術同人誌を書くときは、こそあど言葉の利用を避けるべきです。

//list[many-this-that][こそあど言葉が多い例]{
ログは好きなディレクトリに配置できます。ただし、ログファイルに適切な読み取り権限を付与しておく必要があります。

リスト6.1 apacheの出力ログ
（コードブロック内にログが記載されている）

ログを解凍して中身をみると、このように表示されました。これをそのまま読むのは大変ですよね。
//}

@<code>{このように}と@<code>{これ}の2つは指示語です。もちろんこのままでも意味は通じますが、指示語を使わない形式へ書き換えてみます。

//list[non-this-that][こそあど言葉を利用しない例]{
ログは好きなディレクトリに配置できます。ただし、ログファイルに適切な読み取り権限を付与しておく必要があります。

リスト6.1 apacheの出力ログ
（コードブロック内にログが記載されている）

ログを解凍して中身をみると、リスト6.1のように表示されました。リスト6.1のログをそのまま読むのは大変ですよね。
//}

少しくどいかもしれませんが、@<list>{non-this-that}の記述の方が対象がはっきりとしています。
くどいのが苦手であれば、@<list>{few-this-that}のような表記をすると良いでしょう。

//list[few-this-that][こそあど言葉を最低限に抑えた例]{
ログは好きなディレクトリに配置できます。ただし、ログファイルに適切な読み取り権限を付与しておく必要があります。

リスト6.1 apacheの出力ログ
（コードブロック内にログが記載されている）

ログを解凍して中身をみると、リスト6.1のように表示されました。このログをそのまま読むのは大変ですよね。
//}

@<list>{few-this-that}では、明確に対象がわかる箇所でこそあど言葉を利用しています。
@<code>{このログ}と記述がある直前の文章内に、@<code>{リスト6.1}という記述があります。@<code>{リスト6.1}の繰り返し表記を避けるため、指示語を利用しているのです。
こそあど言葉を利用するときは、直前の文章内の名詞を置き換える程度にとどめておくと良いでしょう。

=== 文章を断定形で記述する

技術同人誌は情報の正確性が求められるジャンルの本です。@<code>{〜と思います}・@<code>{〜のはずです}などの曖昧な言葉を避けるべきです。@<fn>{i-think}
内容が正しいという自信がなければ、参考文献を探して知識を補強する必要があります。
早速、具体例を示します。

//footnote[i-think][この本では「〜すると良いでしょう」と曖昧な言い回しを利用しています。これは技術同人誌の書き方という正解がないトピックを扱っているためです。付録のtextlintの解説内には登場しないので、確認してください。]

//list[use-maybe][曖昧な表見を使っている例]{
Elasticsearchは、Javaのヒープメモリをかなり消費するツールです。
Dockerコンテナ上ではあまり性能が出ないため、大量のデータを流す予定がある場合はコンテナ利用を避けた方が良いと思います。
//}

ElasticsearchをDockerコンテナ上で利用すると、性能に影響が出るので避けるべきと記述があります。ただ、著者に自信がないためか@<code>{良いと思います}と曖昧な言葉で記述されています。
これでは、読者は「本当にElasticsearchはコンテナで利用しない方が良いのか」と不安になってしまいますね。曖昧な言葉を使わずに書き換えてみましょう。

//list[not-use-maybe][曖昧な表見を使わない例]{
Elasticsearchは、Javaのヒープメモリをかなり消費するツールです。
Dockerコンテナ上ではあまり性能が出ないため、大量のデータを流す予定がある場合はコンテナを利用するべきではありません。
//}

とはいえ、内容が合っているか不安なときもあります。そのときは潔く「わからないので情報お待ちしております」などと記載します。
奥付の連絡先を見た人が、有益な情報を送ってくれるかもしれません。

=== 文章に適切なフォントを利用する

一般的な本の中では、@<b>{本文は明朝体、タイトルや見出しはゴシック体}を利用することが多いです。『書体の使い分けー伝わるデザイン 研究発表のユニバーサルデザイン』では、
「太い文字で長い文章を書くと紙面が黒々してしまうので、可読性が下がります。目にも大きな負担がかか」るため、本文は明朝体を利用するべきとあります。
見出しは目立たせる必要があるため、文字が太く目立ちやすいゴシック体を利用します。

ブログは本文がゴシック体の文章でも読みやすいよ、と思われるかもしれません。本はブログなどと違い、行間が狭くなります。紙面の高さが限られているためです。
よって、太い文字を本文に使うべきではありません。

実際に比較してみましょう。

//image[all-gothic][全てゴシック体の例]{

//}

文章の全てにヒラギノ角ゴシック体を使用した例です。少し文章が詰まって見えます。短文であれば良いのですが、1万文字を一度に読むと疲れてしまいそうです。

//image[all-minchyo][全て明朝体の例]{

//}

文章の全てにヒラギノ明朝体を使用した例です。読みやすいのですが、メリハリが足りません。どこが見出しなのか理解するのは難しそうです。

//image[gothic-and-minchyo][ゴシック体と明朝体を使い分けた例]{

//}

見出しはヒラギノ角ゴシック体、本文はヒラギノ明朝体を利用した例です。文章にメリハリをつけつつ、可読性も維持されています。

組版ツールによってフォントの設定方法は変わります。自分の利用するツールと相談しつつ、適切なフォントを設定しましょう。
ただし、@<b>{PDFにフォントを埋め込まないと、印刷時にフォントが欠ける現象が発生する}可能性があります。
慣れないうちは組版ツールのデフォルトフォントを利用すると安全です。

フォントを変更する場合、Adobe Acrobatを利用してフォントを埋め込む処理をするべきです。
うまくできていなければ、印刷所から原稿を差し戻される可能性もあります。フォントにこだわるよりは、原稿の質にこだわった方が良いです。

=== タイトル詐欺をしない

@<code>{タイトル詐欺}とは、@<b>{本のタイトルから読み取れる情報が本文の内容と一致していない}状態を指しています。
タイトル詐欺が良くない理由は、@<b>{読者の期待を裏切ってしまう行為は満足度を下げる要因になる}からです。

例をいくつか示します。

 * タイトル例A：初めてでもできる！Elastic Stack5
 ** 内容：Elasticsearch（バージョン6.4）のIndex設計において気を使うべき点
 * タイトル例B：Markdownを使って文章を書く方法
 ** 内容：MarkdownエディタのWebサービスを使う方法
 * タイトル例C：失敗しない監視設計
 ** 内容：監視のアンチパターン事例集

タイトル例Aはひどいタイトル詐欺です。タイトルに記載されているバージョンと本文で取り扱っているバージョンが違います。
タイトルからは、@<code>{Elastic Stack}というプロダクトの話に関するものという印象を受けます。対する本文は@<code>{Elasticsearch}についてです。
タイトルと内容が違います。

加えて、タイトルには@<code>{初めてでもできる！}とついています。「初めてでも」と記載されているのです。読者は@<b>{何も知らない状態で}@<code>{Elastic Stack}を始めても大丈夫なのだろう、と期待します。
しかし本文は@<code>{Index設計}という高度な話題を取り扱っています。具体的には、@<code>{Elasticsearch}の中でどのようにデータを保管するかを設計する行為です。これは初心者向けの話題でしょうか？

タイトル例Aの内容であれば、@<code>{Elasticsearch6.4におけるIndex設計手法}というタイトルの方がふさわしいでしょう。

タイトル例Bも読者の期待を裏切るパターンです。@<code>{文章を書く方法}という文言からは、Markdownを使って文章を組み上げる方法を連想します。
しかし、内容はMarkdownエディタサービスの使い方について記載しています。読者に期待させる内容と、実際の内容がずれてしまっています。
タイトル例Bの内容であれば、@<code>{（サービス名）で作るMarkdown文章}の方が内容に沿っています。

タイトル例Cも、具体的な内容によってはタイトル詐欺となります。@<code>{失敗しない}からは@<code>{失敗しない方法}のこと・@<code>{失敗事例}の2つが連想できるからです。
人によって連想される内容が違うのが厄介です。事故を避けるためには、@<code>{監視におけるアンチパターン集}とタイトルをつける方が安全です。

タイトル詐欺を防ぐためには、内容を一通り書き終わった後に@<b>{この内容を一言で表すとを再度確認する}ことが重要です。@<b>{サークル申し込み時の内容をそのままにしておくのは危険です}。

=== 動作するコードを載せる

この観点は、@<b>{紙面に掲載されているコード・設定ファイルなどをそのまま流用しても動作する}ことを確認するものです。
商業本で低評価がついてしまう理由の一つに、「本文内のプログラムなどにミスが存在する」ことです。

人間、誰しもミスをするものです。プロの編集者を通しても誤字脱字を0にすることは難しいのです。商業本の発売後に正誤表が発表されていることが証拠です。
しかし、技術的な箇所は間違いを0にしておきたいものです。ここに間違いがあると、本を通して知見を得ることが難しくなるためです。

間違いを減らすため有効なのは、@<b>{実際に動作させたものをそのまま貼り付ける}ことです。自分の環境では動作しているのですから、安心感も担保できます。
GitHubリポジトリなどにコードを載せておけば、プロフィールを充実させることも可能です。


