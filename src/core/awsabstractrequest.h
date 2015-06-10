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

#ifndef AWSABSTRACTREQUEST_H
#define AWSABSTRACTREQUEST_H

#include "qtawsglobal.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QObject>

class QNetworkReply;
class QNetworkRequest;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractCredentials;
class AwsAbstractRequestPrivate;
class AwsAbstractSignature;

class QTAWS_EXPORT AwsAbstractRequest : public QObject {
    Q_OBJECT

public:
    AwsAbstractRequest(QObject * const parent = 0);

    virtual ~AwsAbstractRequest();

    QByteArray data() const; ///< @todo Support other data types?

    QNetworkReply::NetworkError error() const;

    virtual bool isValid() const = 0;

    virtual QNetworkRequest networkRequest(const AwsAbstractSignature &signature,
                                           const AwsAbstractCredentials &credentials) const;

    virtual QNetworkAccessManager::Operation operation() const;

    virtual QNetworkReply * reply(); // 0 if not set.

    virtual void send(QNetworkAccessManager * const manager,
                      const AwsAbstractSignature &signature,
                      const AwsAbstractCredentials &credentials);

public slots:
    void abort();

protected:
    virtual QNetworkRequest unsignedRequest() const = 0;

protected slots:
    void replyDestroyed(QObject * reply = NULL);
    void replyFinished();
    void setReply(QNetworkReply * const reply);

private:
    Q_DECLARE_PRIVATE(AwsAbstractRequest)
    AwsAbstractRequestPrivate * const d_ptr; ///< Internal d-pointer.

signals:
    void finished();
    void replyChanged(QNetworkReply * reply);

};

QTAWS_END_NAMESPACE

#endif
