#ifndef AWSABSTRACTCREDENTIALS_H
#define AWSABSTRACTCREDENTIALS_H

#include "qtawsglobal.h"

#include <QDateTime>
#include <QObject>

QTAWS_BEGIN_NAMESPACE

class QTAWS_EXPORT AwsAbstractCredentials : public QObject {
    Q_OBJECT

public:
    virtual QString accessKeyId() const = 0;
    virtual QString secretKey() const = 0;
    virtual QString token() const = 0;

    // Support for refreshable credentials.  Note, we could use meta-data inspection
    // here, such as QObject::inherits and QObject::qobject_cast, but isRefreshable()
    // is likely to be called before every service call, so performance is especially
    // important here
    virtual QDateTime expiration() const;
    virtual bool isExpired() const;
    virtual bool isRefreshable() const;

public slots:
    virtual bool refresh();

signals:
    void changed();

};

QTAWS_END_NAMESPACE

#endif
