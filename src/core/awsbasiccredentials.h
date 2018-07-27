/*
    Copyright 2013-2018 Paul Colby

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

#ifndef AWSBASICCREDENTIALS_H
#define AWSBASICCREDENTIALS_H

#include "awsabstractcredentials.h"

namespace QtAws {
namespace Core {

class AwsBasicCredentialsPrivate;

class QTAWS_EXPORT AwsBasicCredentials : public AwsAbstractCredentials {
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
