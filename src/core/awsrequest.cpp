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

#include "awsrequest.h"
#include "awsrequest_p.h"

#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AwsRequest
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new AwsRequest object.
 *
 * @param parent       This object's parent.
 */
AwsRequest::AwsRequest(
        QObject * const parent)
    : QObject(parent), d_ptr(new AwsRequestPrivate(this))
{
    //Q_D(AwsRequest);
}

AwsRequest::~AwsRequest()
{
    delete d_ptr;
}

void AwsRequest::abort()
{
    Q_D(AwsRequest);
    if (d->reply) {
        d->reply->abort();
    } else {
        emit error(QNetworkReply::Aborted);
    }
}

void AwsRequest::send(AwsRequest &request)
{
    Q_D(AwsRequest);
    sign(request);
    d->networkAccessManager->createRequest(rquest.op, rq.rq, rq.data);
}

void AwsRequest::sign(AwsRequest &request)
{

}

void AwsRequest::credentialsChanged()
{
    // sign and send all pending.
}

/**
 * @internal
 *
 * @class  AwsRequestPrivate
 *
 * @brief  Private implementation for AwsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AwsRequestPrivate object.
 *
 * @param  q  Pointer to this object's public AwsRequest instance.
 */
AwsRequestPrivate::AwsRequestPrivate(AwsRequest * const q)
    : q_ptr(q)
{

}

QTAWS_END_NAMESPACE
