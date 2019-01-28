```bash
→ npm init --yes
Wrote to /Users/mofu/git/TB6-technical-writing-technic/package.json:

{
  "name": "C94-hiyoko-surviveBlackLoad",
  "version": "0.0.1",
  "private": true,
  "description": "同人誌の作り方本はあっても文章がかけなきゃ意味ないじゃない！だったら作るしかないですね？",
  "main": "Gruntfile.js",
  "repository": {
    "type": "git",
    "url": "git+https://github.com/onestop-techbook/C94-hiyoko-surviveBlackLoad.git"
  },
  "author": "",
  "license": "MIT",
  "bugs": {
    "url": "https://github.com/onestop-techbook/C94-hiyoko-surviveBlackLoad/issues"
  },
  "homepage": "https://github.com/onestop-techbook/C94-hiyoko-surviveBlackLoad#readme",
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
(11:47:14) ± [mofu@ishiiaoinoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:2 ?:1 ✗)
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
(11:54:08) ± [mofu@ishiiaoinoMacBook-Pro.local] ~/git/TB6-technical-writing-technic (textlint U:3 ✗)
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