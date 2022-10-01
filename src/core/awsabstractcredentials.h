// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTCREDENTIALS_H
#define AWSABSTRACTCREDENTIALS_H

#include "qtawscoreglobal.h"

#include <QDateTime>
#include <QObject>

namespace QtAws {
namespace Core {

class AwsAbstractCredentialsPrivate;

class QTAWSCORE_EXPORT AwsAbstractCredentials : public QObject {
    Q_OBJECT

public:
    explicit AwsAbstractCredentials(QObject * const parent = 0);

    virtual ~AwsAbstractCredentials();

    virtual QString accessKeyId() const = 0;
    virtual QString secretKey() const = 0;
    virtual QString token() const = 0;

    virtual QDateTime expiration() const;
    virtual bool isExpired() const;
    virtual bool isRefreshable() const;

public Q_SLOTS:
    virtual bool refresh();

Q_SIGNALS:
    void changed();

protected:
    /// @cond internal
    AwsAbstractCredentialsPrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractCredentials(AwsAbstractCredentialsPrivate * const d, QObject * const parent);
    /// @endcond

private:
    Q_DISABLE_COPY(AwsAbstractCredentials)
    Q_DECLARE_PRIVATE(AwsAbstractCredentials)

};

} // namespace Core
} // namespace QtAws

#endif
