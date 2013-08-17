#ifndef AWSABSTRACTCREDENTIALS_H
#define AWSABSTRACTCREDENTIALS_H

#include <QObject>

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

class QTAWS_EXPORT AwsAbstractCredentials : public QObject {
    Q_OBJECT

public:
    virtual QString accessKeyId() const = 0;
    virtual QString secretKey() const = 0;

signals:
    void changed();

};

#endif
