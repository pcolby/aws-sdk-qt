// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef AWSABSTRACTREQUEST_H
#define AWSABSTRACTREQUEST_H

#include "qtawscoreglobal.h"

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

class QTAWSCORE_EXPORT AwsAbstractRequest {

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
    explicit AwsAbstractRequest(AwsAbstractRequestPrivate * const d);
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
