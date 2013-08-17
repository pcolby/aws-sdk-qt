#ifndef ABSTRACTCREDENTIALS_H
#define ABSTRACTCREDENTIALS_H

#include <QObject>

#if defined QTAWS_LIBRARY
#define QTAWS_EXPORT Q_DECL_EXPORT
#else
#define QTAWS_EXPORT Q_DECL_IMPORT
#endif

//namespace aws {
//namespace core {

class QTAWS_EXPORT AbstractCredentials : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString accessKeyId READ accessKeyId WRITE setAccessKeyId NOTIFY accessKeyIdChanged)
    Q_PROPERTY(QString secretKey   READ secretKey   WRITE setSecretKey   NOTIFY secretKeyChanged)

public:
    virtual QString accessKeyId() = 0;
    virtual QString secretKey() = 0;
    virtual void setAccessKeyId(const QString &accessKeyId) = 0;
    virtual void setSecretKey(const QString &setSecretKey) = 0;

signals:
    void accessKeyIdChanged(const QString &accessKeyId);
    void secretKeyChanged(const QString &secretKey);
};

//} }

#endif
