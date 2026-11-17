# Отчет по лабораторной работе: Системы контроля версий (Git)

**Выполнил:** Алексей Гриднев (ИКС-631)
---

## Логинимся

Настроил имя, почту и редактор nano.

![логи](screenshots/registrBAZA.png)

---

## На отметку 3

git status и git log: ветка master, коммитов нет, log выдает ошибку.

![1](screenshots/na312.png)

Создан sort.c с функцией bubble_sort.

![2](screenshots/sortirovka3.png)

git status: sort.c untracked (красный).

![3](screenshots/statussortirovki4.png)

git add sort.c: файл в stage (new file, зеленый).

![4](screenshots/56git_add_gitstatussort.png)

Первый коммит 89ae1a5, working tree clean.

![5](screenshots/78comit.png)

Комментарий в файле: modified красный, после git add зеленый.

![6](screenshots/913A.png)

Еще правки и коммиты, git push origin master дал ошибку (remote origin не был подключен).

![7](screenshots/1417B.png)

## Ветки на 3

Создана ветка mybranch, переключился, созданы file1.txt и leha.txt.

![8](screenshots/vetki16.png)

Коммит в mybranch (3e28d86), после возврата на master его в логе нет.

![9](screenshots/710a.png)

Коммит file2.txt в master (af18762), ветки разошлись.

![10](screenshots/1114u.png)

git diff mybranch master, коммит screenshots.txt в mybranch, push с ошибкой (нет remote).

![11](screenshots/1517n.png)

Итоговый граф git log --oneline --graph --all.

![12](screenshots/15151717g.png)

---

## На отметку 4

git diff и git diff --staged до и после git add (main с массивом {4, 2, 0}).

![1](screenshots/na417.png)

Удалил число из массива: sort.c в статусе дважды (staged и not staged).

![2](screenshots/na4814.png)

git restore --staged sort.c: файл остался только modified.

![3](screenshots/na48142.png)

Коммит 16369bf, лог из 6 коммитов, добавил printf("hello git\n").

![4](screenshots/na415konet.png)

git restore sort.c: printf пропал, working tree clean. Лаба добавлена в общий репозиторий labs.

![5](screenshots/na415konets.png)

## Ветки и ff-merge

greeting.txt, ветка feature/uppercase, коммит с HELLO, git branch.

![6](screenshots/NA4vetki18.png)

git log --oneline --graph --all, переключился на master.

![7](screenshots/na4vetki919.png)

Fast-forward merge feature/uppercase в master, greeting.txt = HELLO, ветка удалена, push в GitHub.

![8](screenshots/na4vetki9199.png)
