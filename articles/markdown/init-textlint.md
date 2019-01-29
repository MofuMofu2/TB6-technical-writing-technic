```bash
→ npm init --yes
Wrote to /Users/mofu/git/TB6-technical-writing-technic/package.json:

{
  "name": "TB6-technical-writing-technic",
  "version": "0.0.1",
  "private": true,
  "description": "同人誌の作り方本はあっても文章がかけなきゃ意味ないじゃない！だったら作るしかないですね？",
  "main": "Gruntfile.js",
  "repository": {
    "type": "git",
    "url": "git+https://github.com/MofuMofu2/TB6-technical-writing-technic.git"
  },
  "author": "",
  "license": "MIT",
  "bugs": {
    "url": "https://github.com/MofuMofu2/TB6-technical-writing-technic/issues"
  },
  "homepage": "https://github.com/MofuMofu2/TB6-technical-writing-technic#readme",
  "engines": {
    "node": ">=6.0.0"
  },
  "scripts": {
    "site": "cd site ; hugo --cleanDestinationDir",
    "global-bundler": "gem install bundler",
    "global": "npm run global-bundler",
    "postinstall": "bundle install",
    "pdf": "grunt pdf",
    "md": "grunt markdown",
    "html": "grunt html",
    "test": "npm run html"
  },
  "dependencies": {},
  "devDependencies": {
    "grunt": "1.0.1",
    "grunt-cli": "1.2.0",
    "grunt-contrib-clean": "1.0.0",
    "grunt-open": "0.2.3",
    "grunt-shell": "1.3.0",
    "js-yaml": "3.6.0",
    "load-grunt-tasks": "3.5.0"
  },
  "keywords": []
}
```

textlintのセットアップ

[textlint Get Started](https://github.com/textlint/textlint/blob/master/docs/getting-started.md)

```bash
→ npm install --save-dev textlint
npm WARN deprecated circular-json@0.3.3: CircularJSON is in maintenance only, flatted is its successor.
+ textlint@11.2.1
added 258 packages from 138 contributors and audited 570 packages in 5.839s
found 6 vulnerabilities (3 low, 2 moderate, 1 critical)
  run `npm audit fix` to fix them, or `npm audit` for details
(11:47:14) ± [mofu@mofunoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:2 ?:1 ✗)
→ npm audit fix
+ grunt@1.0.3
added 9 packages from 6 contributors, removed 3 packages and updated 9 packages in 2.549s
fixed 5 of 6 vulnerabilities in 570 scanned packages
  1 vulnerability required manual review and could not be updated
```

ルールプリセットの導入

[textlint-rule-preset-ja-technical-writing](https://github.com/textlint-ja/textlint-rule-preset-ja-technical-writing)

```bash
→ npm install --save-dev  textlint-rule-preset-ja-technical-writing
+ textlint-rule-preset-ja-technical-writing@3.1.0
added 86 packages from 34 contributors and audited 1014 packages in 5.105s
found 1 critical severity vulnerability
  run `npm audit fix` to fix them, or `npm audit` for details
(11:54:08) ± [mofu@mofunoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:3 ✗)
→ npm audit fix
up to date in 0.966s
fixed 0 of 1 vulnerability in 1014 scanned packages
  1 vulnerability required manual review and could not be updated
```

ルールセットを適用

```bash
→ ls -al
total 312
drwxr-xr-x   19 mofu  staff     608  1 28 12:01 .
drwxr-xr-x    7 mofu  staff     224  1 28 11:35 ..
drwxr-xr-x   13 mofu  staff     416  1 28 11:54 .git
-rw-r--r--@   1 mofu  staff      37  1 28 11:49 .gitignore
-rw-r--r--    1 mofu  staff       7  1 28 11:43 .node-version
-rw-r--r--@   1 mofu  staff       0  1 28 12:01 .textlintrc ←追加
-rw-r--r--    1 mofu  staff      98  1 28 11:35 Gemfile
-rw-r--r--    1 mofu  staff     249  1 28 11:35 Gemfile.lock
-rw-r--r--    1 mofu  staff    3215  1 28 11:35 Gruntfile.js
-rw-r--r--    1 mofu  staff    1065  1 28 11:35 LICENSE
-rw-r--r--    1 mofu  staff     132  1 28 11:35 README.md
drwxr-xr-x   18 mofu  staff     576  1 28 11:35 articles
-rwxr-xr-x    1 mofu  staff     283  1 28 11:35 build-in-docker.sh
drwxr-xr-x  291 mofu  staff    9312  1 28 11:54 node_modules
-rw-r--r--    1 mofu  staff  111065  1 28 11:54 package-lock.json
-rw-r--r--    1 mofu  staff    1307  1 28 11:54 package.json
-rw-r--r--    1 mofu  staff    3477  1 28 11:35 redpen-conf-ja.xml
-rwxr-xr-x    1 mofu  staff     211  1 28 11:35 setup.sh
```

``.textlintrc``の追加

```json
{
  "filters": {},
  "rules": {
    "preset-ja-technical-writing": true
  }
}
```

textlintの実行

```bash
node_modules/.bin/textlint --preset ja-technical-writing ./articles/markdown/*.md

/Users/mofu/git/TB6-technical-writing-technic/articles/markdown/init-textlint.md
   48:15  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
   67:11  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
   84:9   error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
  109:18  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period
  120:11  error  文末が"。"で終わっていません。  ja-technical-writing/ja-no-mixed-period

/Users/mofu/git/TB6-technical-writing-technic/articles/markdown/think-body.md
   15:18   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   17:20   error    Disallow to use "！"                                                      ja-technical-writing/no-exclamation-question-mark
   17:32   error    弱い表現: "思います" が使われています。                                   ja-technical-writing/ja-no-weak-phrase
   19:29   error    一文に二回以上利用されている助詞 "は" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   19:38   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   20:22   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   20:24   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   20:25   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   22:8    error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   22:37   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   22:62   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   22:107  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   26:12   error    一文に二回以上利用されている助詞 "は" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   26:22   error    Disallow to use "！"                                                      ja-technical-writing/no-exclamation-question-mark
   36:34   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   36:83   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   36:83   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   38:33   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:31   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:32   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:99   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:101  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:108  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:133  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   46:136  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:11   error    漢字が7つ以上連続しています: 本全体論理展開                               ja-technical-writing/max-kanji-continuous-len
   50:24   error    一文に二回以上利用されている助詞 "が" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   53:60   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   55:18   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   57:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   57:49   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   57:84   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   65:21   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   69:30   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   69:81   error    Disallow to use "！"                                                      ja-technical-writing/no-exclamation-question-mark
   69:89   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   69:106  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   73:21   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   73:24   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   73:38   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   75:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   75:29   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   75:30   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   75:94   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   77:52   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   81:82   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   81:89   error    一文に二回以上利用されている助詞 "ので" がみつかりました。                ja-technical-writing/no-doubled-joshi
   81:105  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   81:141  error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   81:141  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   85:35   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   85:50   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   89:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   89:41   error    一文に二回以上利用されている助詞 "が" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   89:47   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   89:48   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   89:75   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   89:75   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   91:41   error    弱い表現: "かも" が使われています。                                       ja-technical-writing/ja-no-weak-phrase
   91:49   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   91:89   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   91:111  error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   91:111  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   93:61   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   93:62   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   93:69   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:1    error    Line 95 sentence length(159) exceeds the maximum sentence length of 100.
Over 59 characters  ja-technical-writing/sentence-length
   95:86   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:174  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:185  error    弱い表現: "思います" が使われています。                                   ja-technical-writing/ja-no-weak-phrase
   95:190  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:203  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:43   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:59   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  101:14   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  101:85   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  101:101  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  101:148  error    弱い表現: "思う" が使われています。                                       ja-technical-writing/ja-no-weak-phrase
  101:163  error    一文に二回以上利用されている助詞 "が" がみつかりました。                  ja-technical-writing/no-doubled-joshi
  105:34   error    弱い表現: "思います" が使われています。                                   ja-technical-writing/ja-no-weak-phrase
  105:68   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  109:17   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  111:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  111:14   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
  113:31   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  114:22   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  115:3    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  115:4    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character

✖ 94 problems (94 errors, 0 warnings)
✓ 64 fixable problems.
Try to run: $ textlint --fix [file]
```

``npm run`` で実行できるようにする

package.jsonへスクリプトを登録

```json
  "scripts": {
    "site": "cd site ; hugo --cleanDestinationDir",
    "global-bundler": "gem install bundler",
    "global": "npm run global-bundler",
    "postinstall": "bundle install",
    "pdf": "grunt pdf",
    "md": "grunt markdown",
    "html": "grunt html",
    "test": "npm run html",
+     "textlint": "node_modules/.bin/textlint --preset ja-technical-writing ./articles/markdown/*.md"
  },
```

- node_modules/.binにコマンドが入っているのでそこを指定する
- presetオプションでルールセットを指定する
- 対象のテキストを指定する

最終的にこうしました（Re:VIEWとMarkdown、どちらもLintできるように）

reviewファイルがなぜかうまくlintできないので、Re:VIEW用プラグインである[textlint-plugin-review](https://www.npmjs.com/package/textlint-plugin-review)をインストール

```bash
→ npm install --save-dev  textlint-plugin-review
npm WARN deprecated txt-ast-traverse@1.2.1: See https://github.com/textlint/textlint/issues/455
npm WARN deprecated textlint-ast-test@1.1.4: See https://github.com/textlint/textlint/issues/455
+ textlint-plugin-review@0.3.3
added 3 packages from 2 contributors and audited 1017 packages in 3.241s
found 1 critical severity vulnerability
  run `npm audit fix` to fix them, or `npm audit` for details
(11:36:45) ± [mofu@mofunoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:3 ?:1 ✗)
→ npm audit fix
up to date in 0.997s
fixed 0 of 1 vulnerability in 1017 scanned packages
  1 vulnerability required manual review and could not be updated
(11:36:53) ± [mofu@mofunoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:3 ?:1 ✗)
```

``.textlintrc``を編集する

```json
{
  "rules": {
    "preset-ja-technical-writing": true
  },
+   "plugins": [
+     "review"
+   ]
}
```

実行してみる

```bash
(11:39:22) ± [mofu@mofunoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:3 ?:1 ✗)
→ ./node_modules/.bin/textlint --preset ja-technical-writing articles/think-toc.re

/Users/mofu/git/TB6-technical-writing-technic/articles/think-toc.re
    5:15   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
    9:76   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   12:5    error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   12:60   error    一文に二回以上利用されている助詞 "か" がみつかりました。                                                                                                    ja-technical-writing/no-doubled-joshi
   16:9    error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   23:29   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   25:21   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   29:1    error    Line 29 sentence length(135) exceeds the maximum sentence length of 100.
Over 35 characters                                                                                    ja-technical-writing/sentence-length
   31:85   error    漢字が7つ以上連続しています: 創造性開発技法                                                                                                                 ja-technical-writing/max-kanji-continuous-len
   33:34   error    弱い表現: "思います" が使われています。                                                                                                                     ja-technical-writing/ja-no-weak-phrase
   35:58   error    一つの文で"、"を3つ以上使用しています                                                                                                                       ja-technical-writing/max-ten
   37:17   error    一文に二回以上利用されている助詞 "は" がみつかりました。                                                                                                    ja-technical-writing/no-doubled-joshi
   37:34   error    一文に二回以上利用されている助詞 "かも" がみつかりました。                                                                                                  ja-technical-writing/no-doubled-joshi
   47:16   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   68:16   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   71:17   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   71:56   ✓ error  "することができます"は冗長な表現です。"することが"を省き簡潔な表現にすると文章が明瞭になります。参考: http://qiita.com/takahi-i/items/a93dc2ff42af6b93f6e0  ja-technical-writing/ja-no-redundant-expression
   73:18   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   75:22   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   77:4    error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   86:79   error    一文に二回以上利用されている助詞 "に" がみつかりました。                                                                                                    ja-technical-writing/no-doubled-joshi
   88:32   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   90:25   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   94:107  error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   96:6    error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   96:14   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   98:105  error    弱い表現: "かも" が使われています。                                                                                                                         ja-technical-writing/ja-no-weak-phrase
  102:84   error    弱い表現: "かも" が使われています。                                                                                                                         ja-technical-writing/ja-no-weak-phrase
  106:1    error    Line 106 sentence length(214) exceeds the maximum sentence length of 100.
Over 114 characters                                                                                   ja-technical-writing/sentence-length
  114:29   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
  116:21   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
  116:48   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark

✖ 32 problems (32 errors, 0 warnings)
✓ 1 fixable problem.
Try to run: $ textlint --fix [file]
```

MarkdownとRe:VIEW、どちらも``npm run``で実行できるようにする

```json
  "scripts": {
    "site": "cd site ; hugo --cleanDestinationDir",
    "global-bundler": "gem install bundler",
    "global": "npm run global-bundler",
    "postinstall": "bundle install",
    "pdf": "grunt pdf",
    "md": "grunt markdown",
    "html": "grunt html",
    "test": "npm run html",
+     "textlint-markdown": "./node_modules/.bin/textlint --preset ja-technical-writing ./articles/markdown/*.md",
+     "textlint-review": "./node_modules/.bin/textlint --preset ja-technical-writing ./articles/*.re"
  },
```

実行してみる

```bash
(11:40:29) ± [mofu@mofunoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:4 ?:1 ✗)
→ npm run textlint-review

> TB6-technical-writing-technic@0.0.1 textlint-review /Users/mofu/git/TB6-technical-writing-technic
> textlint --preset ja-technical-writing ./articles/*.re


/Users/mofu/git/TB6-technical-writing-technic/articles/think-body.re
   15:22   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   17:18   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   19:20   error    Disallow to use "！"                                                      ja-technical-writing/no-exclamation-question-mark
   19:32   error    弱い表現: "思います" が使われています。                                   ja-technical-writing/ja-no-weak-phrase
   21:29   error    一文に二回以上利用されている助詞 "は" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   21:38   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   22:22   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   22:24   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   22:25   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   24:8    error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   24:37   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   24:62   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   24:107  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   28:12   error    一文に二回以上利用されている助詞 "は" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   28:22   error    Disallow to use "！"                                                      ja-technical-writing/no-exclamation-question-mark
   30:23   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   38:34   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   38:83   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   38:83   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   40:33   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   44:7    error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   48:31   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:32   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:99   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:101  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:108  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:133  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   48:136  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   50:11   error    漢字が7つ以上連続しています: 本全体論理展開                               ja-technical-writing/max-kanji-continuous-len
   52:24   error    一文に二回以上利用されている助詞 "が" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   53:36   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   55:60   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   57:18   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   59:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   59:49   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   59:84   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   61:32   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   67:21   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   67:26   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   71:30   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   71:81   error    Disallow to use "！"                                                      ja-technical-writing/no-exclamation-question-mark
   71:89   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   71:106  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   73:17   error    一文に二回以上利用されている助詞 "に" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   73:33   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   75:21   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   75:24   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   75:38   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   77:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   77:29   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   77:30   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   77:94   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   79:52   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   83:82   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   83:89   error    一文に二回以上利用されている助詞 "ので" がみつかりました。                ja-technical-writing/no-doubled-joshi
   83:105  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   83:141  error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   83:141  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   85:20   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   87:35   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   87:50   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
   89:22   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   91:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   91:41   error    一文に二回以上利用されている助詞 "が" がみつかりました。                  ja-technical-writing/no-doubled-joshi
   91:47   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   91:48   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   91:75   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   91:75   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   93:41   error    弱い表現: "かも" が使われています。                                       ja-technical-writing/ja-no-weak-phrase
   93:49   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   93:89   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   93:111  error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
   93:111  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:61   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:62   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   95:69   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:1    error    Line 97 sentence length(189) exceeds the maximum sentence length of 100.
Over 89 characters  ja-technical-writing/sentence-length
   97:86   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:174  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:185  error    弱い表現: "思います" が使われています。                                   ja-technical-writing/ja-no-weak-phrase
   97:190  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   97:203  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   99:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   99:43   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
   99:59   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  101:17   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
  103:14   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  103:85   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  103:101  ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  103:148  error    弱い表現: "思う" が使われています。                                       ja-technical-writing/ja-no-weak-phrase
  103:163  error    一文に二回以上利用されている助詞 "が" がみつかりました。                  ja-technical-writing/no-doubled-joshi
  105:13   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
  107:34   error    弱い表現: "思います" が使われています。                                   ja-technical-writing/ja-no-weak-phrase
  107:68   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  109:17   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period
  111:17   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  113:1    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  113:14   error    Disallow to use "？"                                                      ja-technical-writing/no-exclamation-question-mark
  115:31   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  116:22   ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  117:3    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  117:4    ✓ error  Found invalid control character(BACKSPACE \u0008)                         ja-technical-writing/no-invalid-control-character
  117:19   error    文末が"。"で終わっていません。                                            ja-technical-writing/ja-no-mixed-period

/Users/mofu/git/TB6-technical-writing-technic/articles/think-content.re
    7:1    error  Line 7 sentence length(103) exceeds the maximum sentence length of 100.
Over 3 characters    ja-technical-writing/sentence-length
    7:124  error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
    7:207  error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   11:26   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   13:4    error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   13:7    error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   13:32   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   15:23   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
   17:4    error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   17:7    error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   17:19   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   19:80   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   21:94   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
   21:101  error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
   23:9    error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   25:55   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   27:14   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   32:16   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   42:15   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   44:56   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   46:4    error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   51:22   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   53:56   error  弱い表現: "思います" が使われています。                                    ja-technical-writing/ja-no-weak-phrase
   55:34   error  一文に二回以上利用されている助詞 "が" がみつかりました。                   ja-technical-writing/no-doubled-joshi
   66:23   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
   66:30   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
   66:35   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   69:22   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   71:85   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   74:17   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   80:45   error  "て" が連続して2回使われています。                                         ja-technical-writing/ja-no-successive-word
   80:57   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
   85:10   error  一文に二回以上利用されている助詞 "よりは" がみつかりました。               ja-technical-writing/no-doubled-joshi
   89:9    error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
   97:30   error  弱い表現: "思う" が使われています。                                        ja-technical-writing/ja-no-weak-phrase
   97:72   error  弱い表現: "思う" が使われています。                                        ja-technical-writing/ja-no-weak-phrase
   99:46   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  100:27   error  弱い表現: "思う" が使われています。                                        ja-technical-writing/ja-no-weak-phrase
  100:59   error  弱い表現: "思う" が使われています。                                        ja-technical-writing/ja-no-weak-phrase
  102:28   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
  104:17   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  107:46   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  107:76   error  "〇" が連続して2回使われています。                                         ja-technical-writing/ja-no-successive-word
  107:112  error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  109:11   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  109:14   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  109:40   error  弱い表現: "思います" が使われています。                                    ja-technical-writing/ja-no-weak-phrase
  111:26   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:34   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:67   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:82   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:86   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:94   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:112  error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:113  error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  111:113  error  "？" が連続して2回使われています。                                         ja-technical-writing/ja-no-successive-word
  111:131  error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  113:40   error  Line 113 sentence length(142) exceeds the maximum sentence length of 100.
Over 42 characters  ja-technical-writing/sentence-length
  113:181  error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  115:45   error  Disallow to use "？"                                                       ja-technical-writing/no-exclamation-question-mark
  117:1    error  Line 117 sentence length(119) exceeds the maximum sentence length of 100.
Over 19 characters  ja-technical-writing/sentence-length
  117:55   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  117:68   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  117:69   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  117:69   error  "！" が連続して2回使われています。                                         ja-technical-writing/ja-no-successive-word
  117:70   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  117:70   error  "！" が連続して2回使われています。                                         ja-technical-writing/ja-no-successive-word
  117:101  error  "て" が連続して2回使われています。                                         ja-technical-writing/ja-no-successive-word
  117:106  error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  120:87   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  122:3    error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  122:17   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  129:55   error  文末が"。"で終わっていません。                                             ja-technical-writing/ja-no-mixed-period
  138:38   error  弱い表現: "思います" が使われています。                                    ja-technical-writing/ja-no-weak-phrase
  140:3    error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:19   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:20   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:21   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:22   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:23   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:24   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:25   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:26   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:27   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:28   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:29   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:30   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:31   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark
  142:32   error  Disallow to use "！"                                                       ja-technical-writing/no-exclamation-question-mark

/Users/mofu/git/TB6-technical-writing-technic/articles/think-toc.re
    5:15   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
    9:76   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   12:5    error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   12:60   error    一文に二回以上利用されている助詞 "か" がみつかりました。                                                                                                    ja-technical-writing/no-doubled-joshi
   16:9    error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   23:29   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   25:21   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   29:1    error    Line 29 sentence length(135) exceeds the maximum sentence length of 100.
Over 35 characters                                                                                    ja-technical-writing/sentence-length
   31:85   error    漢字が7つ以上連続しています: 創造性開発技法                                                                                                                 ja-technical-writing/max-kanji-continuous-len
   33:34   error    弱い表現: "思います" が使われています。                                                                                                                     ja-technical-writing/ja-no-weak-phrase
   35:58   error    一つの文で"、"を3つ以上使用しています                                                                                                                       ja-technical-writing/max-ten
   37:17   error    一文に二回以上利用されている助詞 "は" がみつかりました。                                                                                                    ja-technical-writing/no-doubled-joshi
   37:34   error    一文に二回以上利用されている助詞 "かも" がみつかりました。                                                                                                  ja-technical-writing/no-doubled-joshi
   47:16   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   68:16   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   71:17   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   71:56   ✓ error  "することができます"は冗長な表現です。"することが"を省き簡潔な表現にすると文章が明瞭になります。参考: http://qiita.com/takahi-i/items/a93dc2ff42af6b93f6e0  ja-technical-writing/ja-no-redundant-expression
   73:18   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   75:22   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   77:4    error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   86:79   error    一文に二回以上利用されている助詞 "に" がみつかりました。                                                                                                    ja-technical-writing/no-doubled-joshi
   88:32   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   90:25   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
   94:107  error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   96:6    error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   96:14   error    Disallow to use "？"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
   98:105  error    弱い表現: "かも" が使われています。                                                                                                                         ja-technical-writing/ja-no-weak-phrase
  102:84   error    弱い表現: "かも" が使われています。                                                                                                                         ja-technical-writing/ja-no-weak-phrase
  106:1    error    Line 106 sentence length(214) exceeds the maximum sentence length of 100.
Over 114 characters                                                                                   ja-technical-writing/sentence-length
  114:29   error    文末が"。"で終わっていません。                                                                                                                              ja-technical-writing/ja-no-mixed-period
  116:21   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark
  116:48   error    Disallow to use "！"                                                                                                                                        ja-technical-writing/no-exclamation-question-mark

✖ 224 problems (224 errors, 0 warnings)
✓ 65 fixable problems.
Try to run: $ textlint --fix [file]
```

これで準備できました。

## 参考文献

### textlint

- [textlint-plugin-review](https://www.npmjs.com/package/textlint-plugin-review)

### 実際にtextlintを導入している人々

- [Re:VIEWで書いた文章の校正をCircleCIとtextlintでGitHubのPRに自動コメントする仕組み](http://blog.naoshihoshi.com/entry/2018/10/15/113000)