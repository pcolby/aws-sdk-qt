#include "testawsabstractsignature.h"

#include "../../src/core/awsabstractsignature.h"
#include "../../src/core/awsbasiccredentials.h"

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>

Q_DECLARE_METATYPE(QNetworkAccessManager::Operation)

// Bare minimum concrete mock class.
class MockSignature : public AwsAbstractSignature {
public:
    MockSignature(QObject * const parent = 0) : AwsAbstractSignature(parent) { }

    virtual void sign(const QNetworkAccessManager::Operation operation,
                      QNetworkRequest &request,
                      const AwsAbstractCredentials &credentials,
                      const QByteArray &data) const
    {
        Q_UNUSED(operation)
        Q_UNUSED(request)
        Q_UNUSED(credentials)
        Q_UNUSED(data)
    }

};

void TestAwsAbstractSignature::construct() {
    QBENCHMARK {
        MockSignature signature;
    }
}
