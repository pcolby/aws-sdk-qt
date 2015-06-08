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
    //Q_D(AwsAbstractRequest);
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
    const AwsAbstractSignature &signature,
    const AwsAbstractCredentials &credentials) const
{
    QNetworkRequest request(unsignedRequest());
    signature.sign(credentials, operation(), request, data());
    return request;
}

QNetworkAccessManager::Operation AwsAbstractRequest::operation() const
{
    Q_D(const AwsAbstractRequest);
    return d->operation;
}

QNetworkReply * AwsAbstractRequest::send(
    QNetworkAccessManager * const manager,
    const AwsAbstractSignature &signature,
    const AwsAbstractCredentials &credentials) const
{
    const QNetworkRequest request(networkRequest(signature, credentials));
    switch (operation()) {
        case QNetworkAccessManager::DeleteOperation:
            return manager->deleteResource(request);
        case QNetworkAccessManager::HeadOperation:
            return manager->head(request);
        case QNetworkAccessManager::GetOperation:
            return manager->get(request);
        case QNetworkAccessManager::PostOperation:
            return manager->post(request, data());
        case QNetworkAccessManager::PutOperation:
            return manager->put(request, data());
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid operation");
    }
    return NULL; // Operation was invalid / unsupported.
}

// @doc virtual QNetwrorkReqeust unsignedRequest() = 0;

void AwsAbstractRequest::abort()
{
    Q_D(AwsAbstractRequest);
    if (d->reply) {
        d->reply->abort();
    } else {
        //emit error(QNetworkReply::Aborted);
    }
}

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
    : operation(QNetworkAccessManager::GetOperation), reply(NULL), q_ptr(q)
{

}

AwsAbstractRequestPrivate::~AwsAbstractRequestPrivate()
{

}

QTAWS_END_NAMESPACE
