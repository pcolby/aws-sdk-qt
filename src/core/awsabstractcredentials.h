#ifndef AWSABSTRACTCREDENTIALS_H
#define AWSABSTRACTCREDENTIALS_H

#include "qtawsglobal.h"

#include <QObject>

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAbstractCredentials : public QObject {
    Q_OBJECT

public:
    virtual QString accessKeyId() const = 0;
    virtual QString secretKey() const = 0;
    virtual QString token() const = 0;

    QDateTime expiration() const;
    virtual bool isRefreshable() const = 0;
    virtual bool isExpired() const = 0;

public slots:
    virtual bool refresh() = 0;

signals:
    void changed();

};

QTAWS_END_NAMESPACE

#endif
