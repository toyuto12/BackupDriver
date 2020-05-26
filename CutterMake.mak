# 定義
CC			= gcc
OBJTARGET	= source
TESTTARGET	= TestCutter
TDDIR		= test
OBJDIR		= obj
SOURCEDIR	= src

# フォルダ規定
TDDINCLIBS		= $(shell pkg-config --libs --cflags cutter)
HEADERPATH		= -I./$(SOURCEDIR)
TDDTYPEH		= -I./$(TDDIR)/type
OBJTYPEH		= -I.src/type

# ソースオブジェクトリスト
FILELIST		= $(shell ls $(SOURCEDIR)/*.c)
OBJLIST			= $(patsubst $(SOURCEDIR)/%,$(OBJDIR)/%,$(FILELIST:.c=.o))
TDDSRCOBJLIST	= $(patsubst $(SOURCEDIR)/%,$(SOURCEDIR)/$(OBJDIR)/%,$(FILELIST:.c=.co))

# TDD用オブジェクトリスト
TDDFILELIST		= $(shell ls $(TDDIR)/*.c)
TDDOBJLIST		= $(patsubst $(TDDIR)/%,$(TDDIR)/$(OBJDIR)/%,$(TDDFILELIST:.c=.co))

#マクロ	$< は条件一致のファイル名に変換
#		$@ はターゲット名に変換される

.SUFFIXES:	.co

all: callPath tddbuild

targetBuild: $(OBJDIR) $(SOURCEDIR)/$(OBJDIR) $(OBJDIR)/$(OBJTARGET).obj

tddbuild: $(OBJDIR) $(SOURCEDIR)/$(OBJDIR) $(TDDIR) $(TDDIR)/$(OBJDIR) $(TDDIR)/$(OBJDIR)/$(TESTTARGET).dll

# TDDIR以下の生成規則部
$(TDDIR)/$(OBJDIR)/$(TESTTARGET).dll: $(TDDOBJLIST) $(TDDSRCOBJLIST)
	$(CC) -shared $^ -o $@ $(TDDINCLIBS) $(TDDTYPEH) $(HEADERPATH)

$(TDDIR)/$(OBJDIR)/%.co : $(TDDIR)/%.c
	$(CC) -fpic -c $< -o $@ $(TDDINCLIBS) $(TDDTYPEH) $(HEADERPATH)

$(SOURCEDIR)/$(OBJDIR)/%.co : $(SOURCEDIR)/%.c
	$(CC) -fpic -c $< -o $@ $(TDDTYPEH) $(HEADERPATH)

# 生成規則部
$(OBJDIR)/$(OBJTARGET).obj: $(OBJLIST)
	$(CC) -shared $^ -o $@ $(INCLIBS)

$(OBJDIR)/%.o : $(SOURCEDIR)/%.c
	$(CC) -fpic -c $^ -o $@ $(INCLIBS)

# 雑多部
$(TDDIR):
	mkdir $(TDDIR)

$(TDDIR)/$(OBJDIR):
	mkdir $(TDDIR)/$(OBJDIR)

$(OBJDIR):
	mkdir $@

$(SOURCEDIR)/$(OBJDIR):
	mkdir $@

callPath:
	@echo $(shell pwd);

tdd:
	cutter . --notify=no

rebuild: clean all

clean:
	rm -r $(OBJDIR)
	rm -r $(TDDIR)/$(OBJDIR)

