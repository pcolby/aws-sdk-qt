#include <QtTest/QtTest>

class TestAwsAbstractSignature : public QObject {
    Q_OBJECT

private slots:
    void construct();

    void canonicalPath_data();
    void canonicalPath();

    void canonicalQuery_data();
    void canonicalQuery();
};
