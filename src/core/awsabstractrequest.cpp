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

#include "awsabstractrequest.h"
#include "awsabstractrequest_p.h"

#include "awsabstractcredentials.h"
#include "awsabstractsignature.h"

#include <QDebug>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsAbstractRequest
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsAbstractRequest object.
 *
 * @param parent       This object's parent.
 */
AwsAbstractRequest::AwsAbstractRequest(
        QObject * const parent)
    : QObject(parent), d_ptr(new AwsAbstractRequestPrivate(this))
{

}

AwsAbstractRequest::AwsAbstractRequest(AwsAbstractRequestPrivate * const d,
                                       QObject * const parent)
    : QObject(parent), d_ptr(d)
{

}

AwsAbstractRequest::~AwsAbstractRequest()
{
    delete d_ptr;
}

QByteArray AwsAbstractRequest::data() const
{
    Q_D(const AwsAbstractRequest);
    return d->data;
}

// Overrides should sign, only if relevant.

QNetworkRequest AwsAbstractRequest::networkRequest(
    const QUrl &endpoint,
    const AwsAbstractSignature &signature,
    const AwsAbstractCredentials &credentials) const
{
    QNetworkRequest request(unsignedRequest(endpoint));
    signature.sign(credentials, operation(), request, data());
    return request;
}

QNetworkAccessManager::Operation AwsAbstractRequest::operation() const
{
    Q_D(const AwsAbstractRequest);
    return d->operation;
}

AwsAbstractResponse * AwsAbstractRequest::send(QNetworkAccessManager &manager,
                                               const QUrl &endpoint,
                                               const AwsAbstractSignature &signature,
                                               const AwsAbstractCredentials &credentials) const
{
    Q_ASSERT(isValid());
    Q_D(const AwsAbstractRequest);
    const QNetworkRequest request(networkRequest(endpoint, signature, credentials));
    qDebug() << "Request URL:" << request.url().toString();
    if (request.hasRawHeader("Authorization")) {
        qDebug() << "Authorization:" << request.rawHeader("Authorization");
    }
    switch (operation()) {
        case QNetworkAccessManager::DeleteOperation:
            return response(manager.deleteResource(request));
        case QNetworkAccessManager::HeadOperation:
            return response(manager.head(request));
        case QNetworkAccessManager::GetOperation:
            return response(manager.get(request));
        case QNetworkAccessManager::PostOperation:
            return response(d->post(manager, request));
        case QNetworkAccessManager::PutOperation:
            return response(d->put(manager, request));
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid operation");
    }
    return NULL;
}

void AwsAbstractRequest::setData(const QByteArray &data)
{
    Q_D(AwsAbstractRequest);
    d->data = data;
}

void AwsAbstractRequest::setOperation(const QNetworkAccessManager::Operation operation)
{
    Q_D(AwsAbstractRequest);
    d->operation = operation;
}

/// @todo Doc virtual QNetworkReqeust unsignedRequest() = 0;

/**
 * @internal
 *
 * @class  AwsAbstractRequestPrivate
 *
 * @brief  Private implementation for AwsAbstractRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsAbstractRequestPrivate object.
 *
 * @param  q  Pointer to this object's public AwsAbstractRequest instance.
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(AwsAbstractRequest * const q)
    : operation(QNetworkAccessManager::GetOperation), q_ptr(q)
{

}

/**
 * @internal
 *
 * @brief  AwsAbstractRequestPrivate destructor.
 *
 * This virtual destructor does nothing (yet) - its here to allow for safe
 * polymorphic destruction.
 */
AwsAbstractRequestPrivate::~AwsAbstractRequestPrivate()
{

}

QNetworkReply *AwsAbstractRequestPrivate::post(QNetworkAccessManager &manager,
                                               const QNetworkRequest &request) const
{
    Q_Q(const AwsAbstractRequest);
    return manager.post(request, q->data());
}

QNetworkReply *AwsAbstractRequestPrivate::put(QNetworkAccessManager &manager,
                                              const QNetworkRequest &request) const
{
    Q_Q(const AwsAbstractRequest);
    return manager.put(request, q->data());
}

QTAWS_END_NAMESPACE
