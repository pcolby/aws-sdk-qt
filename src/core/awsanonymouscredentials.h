#ifndef AWSANONYMOUSCREDENTIALS_H
#define AWSANONYMOUSCREDENTIALS_H

#include "awsabstractcredentials.h"

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAnonymousCredentials : public AwsAbstractCredentials {
    Q_OBJECT

public:
    AwsAnonymousCredentials(QObject * const parent = 0);

    virtual QString accessKeyId() const;
    virtual QString secretKey() const;
    virtual QString token() const;
};

QTAWS_END_NAMESPACE

#endif
