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

#include "AwsAbstractRequest.h"
#include "AwsAbstractRequest_p.h"

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

void AwsAbstractRequest::abort()
{
    Q_D(AwsAbstractRequest);
    if (d->reply) {
        d->reply->abort();
    } else {
        emit error(QNetworkReply::Aborted);
    }
}

void AwsAbstractRequest::send(AwsAbstractRequest &request)
{
    Q_D(AwsAbstractRequest);
    sign(request);
    d->networkAccessManager->createRequest(rquest.op, rq.rq, rq.data);
}

void AwsAbstractRequest::sign(AwsAbstractRequest &request)
{

}

void AwsAbstractRequest::credentialsChanged()
{
    // sign and send all pending.
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
 */
AwsAbstractRequestPrivate::AwsAbstractRequestPrivate(AwsAbstractRequest * const q)
    : q_ptr(q)
{

}

QTAWS_END_NAMESPACE
