---
## Front matter
title: "Шаблон отчёта по лабораторной работе 2"
subtitle: "Система контроля версий git"
author: "Комкова Виктория Руслановна"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: IBM Plex Serif
romanfont: IBM Plex Serif
sansfont: IBM Plex Sans
monofont: IBM Plex Mono
mathfont: STIX Two Math
mainfontoptions: Ligatures=Common,Ligatures=TeX,Scale=0.94
romanfontoptions: Ligatures=Common,Ligatures=TeX,Scale=0.94
sansfontoptions: Ligatures=Common,Ligatures=TeX,Scale=MatchLowercase,Scale=0.94
monofontoptions: Scale=MatchLowercase,Scale=0.94,FakeStretch=0.9
mathfontoptions:
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Ознакомиться с работой системы git, выполнить необходимые задания, составить отчет по выполненной лабораторной работе.





# Задание

1. Изучение документации, ппиложенной к лабораторной работе
2. Настройка Гитхаба
3. Создание SSH ключа и рабочего пространства
4. Создание репозитория и настройка каталога курса
5. Выполнение заданий самостоятельной работы

# Теоретическое введение

Здесь описываются теоретические аспекты, связанные с выполнением работы.

Например, в табл. [-@tbl:std-dir] приведено краткое описание стандартных каталогов Unix.

: Описание некоторых каталогов файловой системы GNU Linux {#tbl:std-dir}

| Имя каталога | Описание каталога                                                                                                          |
|--------------|----------------------------------------------------------------------------------------------------------------------------|
| `/`          | Корневая директория, содержащая всю файловую                                                                               |
| `/bin `      | Основные системные утилиты, необходимые как в однопользовательском режиме, так и при обычной работе всем пользователям     |
| `/etc`       | Общесистемные конфигурационные файлы и файлы конфигурации установленных программ                                           |
| `/home`      | Содержит домашние директории пользователей, которые, в свою очередь, содержат персональные настройки и данные пользователя |
| `/media`     | Точки монтирования для сменных носителей                                                                                   |
| `/root`      | Домашняя директория пользователя  `root`                                                                                   |
| `/tmp`       | Временные файлы                                                                                                            |
| `/usr`       | Вторичная иерархия для данных пользователя                                                                                 |

Более подробно про Unix см. в [@tanenbaum_book_modern-os_ru; @robbins_book_bash_en; @zarrelli_book_mastering-bash_en; @newham_book_learning-bash_en].

# Выполнение лабораторной работы
Пункт 2.4.2 включает в себя выполнение конфигурации git

![git](image/git.png){#fig:001 width=70%}

Пункты 2.4.3-2.4.4 включают в себя создание SSH ключа и рабочего
пространства

![SSH](image/SSH.png){#fig:002 width=70%}

![Создание публичного ключа](image/pub.png){#fig:003 width=70%}

![Создание каталога для предмета](image/catalog.png){#fig:004 width=70%}

Пункты 2.4.5-2.4.6 включают в себя создание репозитория курса и настройку
каталога курса

![Клонирование репозитория](image/clone.png){#fig:005 width=70%}

![Удаление лишнего файла](image/del.png){#fig:006 width=70%}

![Использование команды make](image/make.png){#fig:007 width=70%}

Пункт 2.5 включает в себя выполнение заданий самостоятельной работы:

1) Создание отчета по выполнению лабораторной работы в соответствующем
каталоге рабочего пространства

2) Копирование отчетов по выполнению предыдущих лабораторных работ в соответствующие каталоги созданного рабочего пространства

3) Загрузка файлов на гитхаб

![Загрузка файлов на гитхаб](image/gith.png){#fig:008 width=70%}




# Выводы

В процессе выполнения лабораторной работы я ознакомилась с работой системы git, изучила ряд команд, подготовила рабочее пространство


