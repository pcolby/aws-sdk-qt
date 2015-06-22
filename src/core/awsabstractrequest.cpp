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

QNetworkReply::NetworkError AwsAbstractRequest::error() const
{
    Q_D(const AwsAbstractRequest);
    return (d->reply) ? d->reply->error() : d->error;
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

QNetworkReply * AwsAbstractRequest::reply()
{
    Q_D(const AwsAbstractRequest);
    return d->reply;
}

const AwsAbstractResponse * AwsAbstractRequest::response() const
{
    Q_D(const AwsAbstractRequest);
    return d->response;
}

// Note, the reply will be owned by manager. Caller's may deleteLater the reply
// at some appropriate time, and/or set their own parent if they wish.
void AwsAbstractRequest::send(QNetworkAccessManager &manager,
                              const QUrl &endpoint,
                              const AwsAbstractSignature &signature,
                              const AwsAbstractCredentials &credentials)
{
    Q_ASSERT(reply() == NULL);
    const QNetworkRequest request(networkRequest(endpoint, signature, credentials));
    switch (operation()) {
        case QNetworkAccessManager::DeleteOperation:
            setReply(manager.deleteResource(request));
            break;
        case QNetworkAccessManager::HeadOperation:
            setReply(manager.head(request));
            break;
        case QNetworkAccessManager::GetOperation:
            setReply(manager.get(request));
            break;
        case QNetworkAccessManager::PostOperation:
            setReply(manager.post(request, data()));
            break;
        case QNetworkAccessManager::PutOperation:
            setReply(manager.put(request, data()));
            break;
        case QNetworkAccessManager::CustomOperation: // Fall through.
        default:
            // Catch this in debug mode for easier development / debugging.
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid operation");
    }
}

void AwsAbstractRequest::abort()
{
    Q_D(AwsAbstractRequest);
    if (d->reply) {
        d->reply->abort();
    } else {
        d->error = QNetworkReply::OperationCanceledError;
        emit finished();
    }
}

/// @todo Doc virtual QNetworkReqeust unsignedRequest() = 0;

AwsAbstractResponse * parseErrorResponse(QNetworkReply &reply)
{
    Q_UNUSED(reply)
    return NULL;
}

AwsAbstractResponse * AwsAbstractRequest::parseResponse(QNetworkReply &reply)
{
    return ((reply.attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt() / 100) == 2)
            ? parseSuccessResponse(reply) : parseErrorResponse(reply);
}

AwsAbstractResponse * parseSuccessResponse(QNetworkReply &reply)
{
    Q_UNUSED(reply)
    return NULL;
}

void AwsAbstractRequest::replyDestroyed(QObject * reply)
{
    if (!reply) {
        reply = sender();
    }

    Q_D(AwsAbstractRequest);
    if (d->reply == reply) {
        d->reply = NULL;
    }
}

void AwsAbstractRequest::replyFinished()
{
    Q_D(AwsAbstractRequest);
    Q_ASSERT(d->reply);
    if (error() == QNetworkReply::NoError) {
        d->response = parseResponse(*d->reply);
    }
    emit finished();
}

void AwsAbstractRequest::setReply(QNetworkReply * const reply)
{
    Q_D(AwsAbstractRequest);
    Q_ASSERT(!d->reply);
    d->reply = reply;
    if (reply->parent() == 0)
    connect(reply, SIGNAL(destroyed(QObject*)), SLOT(replyDestroyed(QObject*const)));
    connect(reply, SIGNAL(finished()), this, SLOT(replyFinished()));
    emit replyChanged(reply);
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
    : error(QNetworkReply::NoError), operation(QNetworkAccessManager::GetOperation),
      reply(NULL), response(NULL), q_ptr(q)
{

}

AwsAbstractRequestPrivate::~AwsAbstractRequestPrivate()
{

}

QTAWS_END_NAMESPACE
