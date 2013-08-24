#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsSignatureV4 : public QObject {
    Q_OBJECT

private slots:

    void stringToSign_data();
    void stringToSign();
};
