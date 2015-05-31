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

#ifndef SQSCLIENT_H
#define SQSCLIENT_H

#include "awsabstractclient.h"
#include "qtawsglobal.h"

#include <QObject>

class QNetworkRequest;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class SqsRequestPrivate;

class QTAWS_EXPORT SqsRequest : QObject {
    Q_OBJECT

public:
    SqsRequest(QObject * const parent = 0);

    ~SqsRequest();

    QString action() const;
    /// @todo  auth params.
    QString apiVersion() const;
    QNetworkRequest request() const;

    bool isValid() const;

    void setAction(const QString &action);
    void setApiVersion(const QString &version);

private:
    Q_DECLARE_PRIVATE(SqsRequest)
    SqsRequestPrivate * const d_ptr; ///< Internal d-pointer.

};

QTAWS_END_NAMESPACE

#endif
