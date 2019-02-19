= 静的検査ツールを利用する

技術同人誌の本文をテキスト形式で記載した場合、文章に対する静的検査を行うことができます。
この本ではazuさんが作成した、@<code>{textlint}（https://github.com/textlint/textlint）の基本的な利用法を紹介します。

== textlintのインストール

textlintの実行にはNode.js（npm）環境が必要です。ここでは@<code>{npm}を用いてインストールする方法を解説します。
他にも、Google Chrome拡張を導入する（textlint: 文章チェッカー）
またはtextlint-app（https://github.com/textlint/textlint-app）などを利用できます。

この本ではNode.js環境を使って構築します。工夫すれば、CIにも組み込むことができるためです。

はじめに、textlintをインストールします。プロジェクトフォルダに移動し、@<code>{npm install textlint}でtextlintをインストールしましょう。
Re:VIEWファイルに対して静的検査を実施する場合、専用プラグインである@<code>{textlint-plugin-review}（https://www.npmjs.com/package/textlint-plugin-review）も合わせてインストールします。
@<code>{$}はコマンドラインであることを示しています。コンソールにコマンドを記述するときは@<code>{$}を記載しないでください。

//list[textlint-install][npm install]{
$ cd プロジェクトのフォルダ
# プロジェクト内にのみインストールしたいので、--save-devオプションをつける
$ npm install textlint --save-dev
//}

=== package.jsonへtextlintを記載する

textlintをインストールした後は、@<code>{package.json}へtextlintを追記します。@<code>{npm init}を利用すると、@<code>{package.json}の雛形を作成できます。

//list[textlint-init][npm init]{
$ npm init --yes
Wrote to /Users/mofu/git/TB6-technical-writing-technic/package.json:
//}

=== ルールプリセットの導入

textlintをインストールしただけでは、静的検査を実施することはできません。検査用ルールを導入・作成する必要があります。

ここでは、@<code>{textlint-rule-preset-ja-technical-writing}（https://github.com/textlint-ja/textlint-rule-preset-ja-technical-writing）
というルールを導入します。このルールを利用する、技術文章を書く上で守るべき事項を網羅的に検査できます。

例えば、「「ですます調」、「である調」を統一する」・「同一の単語を間違えて連続しているのをチェックする」・「よくある日本語の誤用をチェックする」などをチェックできます。
適用されているルールを全て確認したい場合、READMEを参照してください。

このルールも@<code>{npm install}を使ってインストールします。

//list[textlint-rule-install][ルールセットの導入]{
$ npm install --save-dev  textlint-rule-preset-ja-technical-writing
//}

=== ルールセットを適用

@<code>{.textlintrc}というファイルを新規に作成します。@<code>{.textlintrc}は、textlintコマンドを実行するとき、どのルールを適用するか制御するためのファイルです。

//list[add-textlintrc][.textlintrcの追加]{
{
  "filters": {\},
  "rules": {
    "preset-ja-technical-writing": true
  \}
\}
//}

@<code>{.textlintrc}は、.gitignoreなどと同じ階層に配置すると良いでしょう。@<list>{dir}はこの本を作成するときに利用したリポジトリのディレクトリ構成です。
組版にはRe:VIEWを利用しています。

//list[dir][Re:VIEWを用いた場合のディレクトリ構成例]{
$ ls -al 
total 328
drwxr-xr-x   18 mofumofu  staff     576  2 11 14:14 .
drwxr-xr-x   10 mofumofu  staff     320  2  5 19:52 ..
-rw-r--r--@   1 mofumofu  staff    6148  2 10 20:49 .DS_Store
drwxr-xr-x   16 mofumofu  staff     512  2 17 20:19 .git
-rw-r--r--    1 mofumofu  staff      82  2 10 20:55 .gitignore
-rw-r--r--    1 mofumofu  staff      93  2  2 18:23 .textlintrc
-rw-r--r--    1 mofumofu  staff      98  1  9 20:42 Gemfile
-rw-r--r--    1 mofumofu  staff     249  1  9 20:42 Gemfile.lock
-rw-r--r--    1 mofumofu  staff    3215  1  9 20:42 Gruntfile.js
-rw-r--r--    1 mofumofu  staff    1065  1  9 20:41 LICENSE
-rw-r--r--    1 mofumofu  staff     132  1  9 20:43 README.md
drwxr-xr-x   21 mofumofu  staff     672  2 17 19:44 articles
-rwxr-xr-x    1 mofumofu  staff     283  1  9 20:42 build-in-docker.sh
drwxr-xr-x  294 mofumofu  staff    9408  2 11 14:14 node_modules
-rw-r--r--    1 mofumofu  staff  111874  2  2 18:23 package-lock.json
-rw-r--r--    1 mofumofu  staff    1547  2  2 18:23 package.json
-rw-r--r--    1 mofumofu  staff    3477  1  9 20:42 redpen-conf-ja.xml
-rwxr-xr-x    1 mofumofu  staff     211  1  9 20:42 setup.sh
//}

== textlintの実施

ルールセットの定義が終わったら、静的検査を実施します。@<code>{node_modules/.bin/textlint --preset ルール名 静的検査対象}でtextlintを実行できます。
@<list>{textlint-markdown}では、markdownファイルにtextlintを実施しています。

//list[textlint-markdown][markdownファイル全てにtextlintを実施する]{
$ node_modules/.bin/textlint --preset ja-technical-writing ./articles/markdown/*.md

/Users/mofu/git/TB6-technical-writing-technic/articles/markdown/init-textlint.md
48:15  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
67:11  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
84:9   error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
109:18  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
120:11  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period

/Users/mofu/git/TB6-technical-writing-technic/articles/markdown/think-body.md
15:18   ✓ error  Found invalid control character(BACKSPACE \u0008)
ja-technical-writing/no-invalid-control-character

〜省略〜
✖ 94 problems (94 errors, 0 warnings)
✓ 64 fixable problems.
Try to run: $ textlint --fix [file]
//}

行数・エラー内容・ルール名がセットで出力されます。コマンド実行時に@<code>{--fix}オプションを利用すると、自動でエラー個所を修正できます。

=== npm runで実行できるようにする

@<code>{package.json}へtextlintコマンドを登録すれば、@<code>{npm run コマンド名}でtextlintを実行できるようになります。
今回は@<code>{textlint}というコマンド名を登録しました。@<code>{package.json}に@<code>{npm run textlint}で実行したいコマンドを記載します。

@<list>{add-command}は@<code>{"textlint": "node_modules/.bin/textlint --preset ja-technical-writing ./articles/markdown/*.md"}を@<code>{package.jsonへ追加した例です。

こうすることで、CIツールと組み合わせてtextlintを実施できるようになります。

//list[add-command][package.jsonへコマンドを追記]{
  "scripts": {
    "site": "cd site ; hugo --cleanDestinationDir",
    "global-bundler": "gem install bundler",
    "global": "npm run global-bundler",
    "postinstall": "bundle install",
    "pdf": "grunt pdf",
    "md": "grunt markdown",
    "html": "grunt html",
    "test": "npm run html",
# この行を追加
    "textlint": "node_modules/.bin/textlint --preset ja-technical-writing
# 紙面の都合で改行
                ./articles/markdown/*.md"
  \},
//}

これで、文章の静的検査ができるようになりました。複数人執筆の場合、CIツールと組み合わせて検査できる環境があると良いでしょう。編集者の修正負荷を下げることができます。

== 参考文献

=== textlint

 * textlint
 ** https://efcl.info/2015/09/10/introduce-textlint/

=== プラグイン

 * textlint-plugin-review
 ** https://www.npmjs.com/package/textlint-plugin-review

 * プラグインの紹介ページ
 ** https://github.com/textlint-ja

=== 実際にtextlintを導入している人々

 * Re:VIEWで書いた文章の校正をCircleCIとtextlintでGitHubのPRに自動コメントする仕組み
 ** http://blog.naoshihoshi.com/entry/2018/10/15/113000
