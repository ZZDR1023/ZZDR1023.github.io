// 1. Reveal on scroll
const revealItems = document.querySelectorAll('[data-reveal]');
const observer = new IntersectionObserver((entries) => {
  entries.forEach((entry) => {
    if (entry.isIntersecting) {
      entry.target.classList.add('is-visible');
      observer.unobserve(entry.target);
    }
  });
}, { threshold: 0.12 });
revealItems.forEach((item) => observer.observe(item));

// 2. Cursor orb follow effect
const cursorOrb = document.querySelector('.cursor-orb');
const prefersReducedMotion = window.matchMedia('(prefers-reduced-motion: reduce)').matches;

if (cursorOrb && !prefersReducedMotion) {
  let currentX = window.innerWidth / 2;
  let currentY = window.innerHeight / 2;
  let targetX = currentX;
  let targetY = currentY;

  window.addEventListener('pointermove', (event) => {
    targetX = event.clientX;
    targetY = event.clientY;
  });

  function renderCursorOrb() {
    currentX += (targetX - currentX) * 0.12;
    currentY += (targetY - currentY) * 0.12;
    cursorOrb.style.transform = `translate3d(${currentX}px, ${currentY}px, 0)`;
    requestAnimationFrame(renderCursorOrb);
  }

  renderCursorOrb();
}

// 3. Blog Filter Pills
const filterPills = document.querySelectorAll('.filter-pill');
const articleCards = document.querySelectorAll('.article-card');

if (filterPills.length > 0) {
  filterPills.forEach((pill) => {
    pill.addEventListener('click', () => {
      filterPills.forEach((p) => p.classList.remove('is-active'));
      pill.classList.add('is-active');

      const filterTag = pill.getAttribute('data-tag');
      articleCards.forEach((card) => {
        const cardTags = card.getAttribute('data-tags') || '';
        if (filterTag === 'all' || cardTags.includes(filterTag)) {
          card.style.display = 'block';
        } else {
          card.style.display = 'none';
        }
      });
    });
  });
}

// 4. Code Block Copy Buttons
const copyButtons = document.querySelectorAll('.copy-btn');
copyButtons.forEach((btn) => {
  btn.addEventListener('click', async () => {
    const codeBlock = btn.closest('.code-block');
    const code = codeBlock ? codeBlock.querySelector('code')?.innerText : '';
    if (code) {
      try {
        await navigator.clipboard.writeText(code);
        const originalText = btn.innerText;
        btn.innerText = '已复制 ✓';
        btn.classList.add('copied');
        setTimeout(() => {
          btn.innerText = originalText;
          btn.classList.remove('copied');
        }, 2000);
      } catch (err) {
        console.error('Failed to copy', err);
      }
    }
  });
});

// 5. Active TOC Scroll Spy
const tocLinks = document.querySelectorAll('.toc-link');
const postHeadings = document.querySelectorAll('.post-body h2, .post-body h3');

if (tocLinks.length > 0 && postHeadings.length > 0) {
  const headingObserver = new IntersectionObserver((entries) => {
    entries.forEach((entry) => {
      if (entry.isIntersecting) {
        const id = entry.target.id;
        tocLinks.forEach((link) => {
          if (link.getAttribute('href') === `#${id}`) {
            link.classList.add('is-active');
          } else {
            link.classList.remove('is-active');
          }
        });
      }
    });
  }, { rootMargin: '-10% 0px -70% 0px' });

  postHeadings.forEach((heading) => headingObserver.observe(heading));
}
