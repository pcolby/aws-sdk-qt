#include <QtTest/QtTest>
#include "../../src/core/qtawsglobal.h"

class TestAwsSignatureV4 : public QObject {
    Q_OBJECT

private slots:

    void algorithmDesignation_data();
    void algorithmDesignation();

    //void authorizationHeaderValue_data();
    //void authorizationHeaderValue();

    void canonicalHeader_data();
    void canonicalHeader();

    void canonicalHeaders_data();
    void canonicalHeaders();

    //void canonicalQuery_data();
    //void canonicalQuery();

    //void canonicalRequest_data();
    //void canonicalRequest();

    //void canonicalUri(); ///< @todo  Move to [Test]AwsAbstractSignature?

    void credentialScope_data();
    void credentialScope();

    //void signingKey_data();
    //void signingKey();

    void stringToSign_data();
    void stringToSign();
};
