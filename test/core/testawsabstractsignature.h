#include <QtTest/QtTest>

class TestAwsAbstractSignature : public QObject {
    Q_OBJECT

private slots:
    void construct();

    void canonicalQuery_data();
    void canonicalQuery();
};
