#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsSignatureV2 : public QObject {
    Q_OBJECT

private slots:
    void sign_data();
    void sign();

    void canonicalRequest_data();
    void canonicalRequest();
};
