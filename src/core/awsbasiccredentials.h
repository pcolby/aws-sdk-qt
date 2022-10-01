// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSBASICCREDENTIALS_H
#define AWSBASICCREDENTIALS_H

#include "awsabstractcredentials.h"

namespace QtAws {
namespace Core {

class AwsBasicCredentialsPrivate;

class QTAWSCORE_EXPORT AwsBasicCredentials : public AwsAbstractCredentials {
    Q_OBJECT

public:
    AwsBasicCredentials(const QString &accessKeyid,
                        const QString &secretKey,
                        const QString &token,
                        QObject * const parent = 0);

    AwsBasicCredentials(const QString &accessKeyid,
                        const QString &secretKey,
                        QObject * const parent = 0);

    virtual QString accessKeyId() const Q_DECL_OVERRIDE;
    virtual QString secretKey() const Q_DECL_OVERRIDE;
    virtual QString token() const Q_DECL_OVERRIDE;

public Q_SLOTS:
    virtual void setAccessKeyId(const QString &accessKeyId);
    virtual void setSecretKey(const QString &secretKey);
    virtual void setToken(const QString &token);

private:
    Q_DECLARE_PRIVATE(AwsBasicCredentials)
    Q_DISABLE_COPY(AwsBasicCredentials)

};

} // namespace Core
} // namespace QtAws

#endif
