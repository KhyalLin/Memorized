QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    homedialog.cpp \
    logindialog.cpp \
    main.cpp \
    querydialog.cpp \
    quitdialog.cpp \
    registerdialog.cpp \
    userlist.cpp \
    userwordlist.cpp \
    worddialog.cpp \
    wordlist.cpp

HEADERS += \
    homedialog.h \
    logindialog.h \
    querydialog.h \
    quitdialog.h \
    registerdialog.h \
    userlist.h \
    userwordlist.h \
    worddialog.h \
    wordlist.h

FORMS += \
    homedialog.ui \
    logindialog.ui \
    querydialog.ui \
    quitdialog.ui \
    registerdialog.ui \
    worddialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
