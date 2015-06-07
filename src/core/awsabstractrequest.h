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

#ifndef AWSREQUEST_H
#define AWSREQUEST_H

#include "qtawsglobal.h"

#include <QObject>

class QNetworkAccessManager;

QTAWS_BEGIN_NAMESPACE

class AwsRequestPrivate;

class QTAWS_EXPORT AwsRequest : public QObject {
    Q_OBJECT

public:
    AwsRequest(QObject * const parent = 0);

    ~AwsRequest();

    QByteArray * data();
    virtual QNetworkAccessManager::Operation operation() = 0;
    QNetworkReply * reply();
    virtual QNetworkRequest * request() = 0;

public slots:
    void abort();

private:
    Q_DECLARE_PRIVATE(AwsRequest)
    AwsRequestPrivate * const d_ptr; ///< Internal d-pointer.

signals:
    void error(QNetworkReply::NetworkError code);
    void finished(QNetworkReply * reply);
    void started(QNetworkReply * reply);

};

QTAWS_END_NAMESPACE

#endif
