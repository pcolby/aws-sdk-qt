/*
    Copyright 2013-2015 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef AWSABSTRACTCREDENTIALS_H
#define AWSABSTRACTCREDENTIALS_H

#include "qtawsglobal.h"

#include <QDateTime>
#include <QObject>

QTAWS_BEGIN_NAMESPACE

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

public slots:
    virtual bool refresh();

private:
    Q_DISABLE_COPY(AwsAbstractCredentials)

signals:
    void changed();

};

QTAWS_END_NAMESPACE

#endif
