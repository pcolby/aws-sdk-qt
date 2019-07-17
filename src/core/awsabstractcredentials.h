/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTCREDENTIALS_H
#define AWSABSTRACTCREDENTIALS_H

#include "qtawsglobal.h"

#include <QDateTime>
#include <QObject>

namespace QtAws {
namespace Core {

class AwsAbstractCredentialsPrivate;

class QTAWS_EXPORT AwsAbstractCredentials : public QObject {
    Q_OBJECT

public:
    AwsAbstractCredentials(QObject * const parent = 0);

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
