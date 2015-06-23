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
    const QNetworkRequest request(networkRequest(endpoint, signature, credentials));
    switch (operation()) {
        case QNetworkAccessManager::DeleteOperation:
            return response(manager.deleteResource(request));
        case QNetworkAccessManager::HeadOperation:
            return response(manager.head(request));
        case QNetworkAccessManager::GetOperation:
            return response(manager.get(request));
        case QNetworkAccessManager::PostOperation:
            return response(manager.post(request, data()));
        case QNetworkAccessManager::PutOperation:
            return response(manager.put(request, data()));
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid operation");
    }
    return NULL;
}

/// @todo Doc virtual QNetworkReqeust unsignedRequest() = 0;

/*AwsAbstractResponse * AwsAbstractRequest::parseResponse(QNetworkReply &reply)
{
    return ((reply.attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() / 100) == 2)
            ? parseSuccessResponse(reply) : parseErrorResponse(reply);
}*/

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
 *
 * @todo   Add operation parameter instead of defaulting to Get?
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(AwsAbstractRequest * const q)
    : operation(QNetworkAccessManager::GetOperation), q_ptr(q)
{

}

AwsAbstractRequestPrivate::~AwsAbstractRequestPrivate()
{

}

QTAWS_END_NAMESPACE
