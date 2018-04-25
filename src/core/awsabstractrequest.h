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

#ifndef AWSABSTRACTREQUEST_H
#define AWSABSTRACTREQUEST_H

#include "qtawsglobal.h"

#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QObject>

class QNetworkReply;
class QNetworkRequest;

namespace QtAws {
namespace Core {

class AwsAbstractCredentials;
class AwsAbstractRequestPrivate;
class AwsAbstractResponse;
class AwsAbstractSignature;

class QTAWS_EXPORT AwsAbstractRequest {

public:
    AwsAbstractRequest();
    AwsAbstractRequest(const AwsAbstractRequest &other);
    AwsAbstractRequest &operator=(const AwsAbstractRequest &other);

    virtual ~AwsAbstractRequest();

    virtual QByteArray data() const;

    virtual bool isValid() const = 0;

    virtual QNetworkRequest networkRequest(const QUrl &endpoint,
                                           const AwsAbstractSignature &signature,
                                           const AwsAbstractCredentials &credentials) const;

    virtual QNetworkAccessManager::Operation operation() const;

    virtual AwsAbstractResponse * send(QNetworkAccessManager &manager,
                                       const QUrl &endpoint,
                                       const AwsAbstractSignature &signature,
                                       const AwsAbstractCredentials &credentials) const;

    virtual bool operator==(const AwsAbstractRequest &other) const;

protected:
    /// @cond internal
    AwsAbstractRequestPrivate * const d_ptr; ///< Internal d-pointer.
    AwsAbstractRequest(AwsAbstractRequestPrivate * const d);
    /// @endcond

    void setData(const QByteArray &data);
    void setOperation(const QNetworkAccessManager::Operation operation);

    virtual AwsAbstractResponse * response(QNetworkReply * const reply) const = 0;
    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const = 0;

private:
    Q_DECLARE_PRIVATE(AwsAbstractRequest)
    friend class TestAwsAbstractRequest;
};

} // namespace Core
} // namespace QtAws

#endif
