# 📝 ZZDR1023 个人博客写作指南

恭喜！你的个人博客系统已经完全搭建好并与你的作品集融为一体。本指南教你如何在未来快速新增、排版和发布新的技术文章。

---

## 🚀 极速发布新文章（3 步走）

### 步骤 1：新建文章页面
进入 `blog/posts/` 目录，复制现有的任意一篇文章（如 `2026-03-ai-native-game-practice.html`），重命名为你的新文章文件名（例如 `2026-04-my-new-post.html`）：

```bash
cd /home/zzdr1023/xm/ZZDR1023.github.io/blog/posts
cp 2026-03-ai-native-game-practice.html 2026-04-my-new-post.html
```

### 步骤 2：编辑文章内容
打开新建的 HTML 文件，修改：
1. `<title>` 和 `<meta name="description">`
2. `<h1>` 标题与副标题元信息（发布日期、阅读时间）
3. 在 `<div class="post-body">` 中编写正文
4. 在右侧 `<ul class="toc-list">` 中填入你的目录章节锚点（如 `#chapter1`）

### 步骤 3：在博客列表页加入卡片
打开 `blog/index.html`，在 `.articles-grid` 容器中追加一个卡片块：

```html
<a class="article-card" href="/blog/posts/2026-04-my-new-post.html" data-tags="ai-native engineering">
  <div class="article-meta">
    <span class="article-badge">AI Native</span>
    <span>2026-04-01</span>
    <span>·</span>
    <span>5 min read</span>
  </div>
  <h2>你的文章标题</h2>
  <p class="article-excerpt">
    这里写简明扼要的摘要，会显示在卡片上……
  </p>
  <span class="article-action">阅读全文 →</span>
</a>
```

### 步骤 4：推送到 GitHub
```bash
git add .
git commit -m "feat: publish new blog post"
git push origin main
```
推送到 GitHub 后，GitHub Pages 会自动更新，全球即刻可见！

---

## 🎨 常用排版组件语法（开箱即用）

你的博客内置了现代极客排版体系，直接在正文中套用即可：

### 1. 重点提示框 (Callouts)
```html
<div class="callout success">
  <div class="callout-title">💡 核心收获</div>
  <p>这里填写正文……</p>
</div>

<div class="callout info">
  <div class="callout-title">⚙️ 技术注意点</div>
  <p>这里填写技术注意点……</p>
</div>
```

### 2. 代码块（带一键复制代码按钮）
```html
<div class="code-block">
  <div class="code-header">
    <span>python // 文件名或语言</span>
    <button class="copy-btn">复制代码</button>
  </div>
  <pre><code># 你的代码内容
def hello_world():
    print("Hello ZZDR1023")
</code></pre>
</div>
```

### 3. 行内代码高亮
正文中的专业术语用 `<code>ROS1</code>`、`<code>systemd</code>` 包裹，会自动渲染为精致的黄铜色像素胶囊。
