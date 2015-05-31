/*
    Copyright 2013 Paul Colby

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

#include "sqsrequest.h"
#include "sqsrequest_p.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrlQuery>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  SqsRequest
 *
 * @brief  @todo
 */

/**
 * @brief  Constructs a new SqsRequest object.
 *
 * @param parent       This object's parent.
 */
SqsRequest::SqsRequest(
        QObject * const parent)
    : QObject(parent), d_ptr(new SqsRequestPrivate(this))
{
    //Q_D(SqsRequest);
    setApiVersion(QLatin1String("2012-11-05"));
}

SqsRequest::~SqsRequest()
{
    delete d_ptr;
}


QString SqsRequest::action() const
{
    Q_D(const SqsRequest);
    return d->action;
}

QString SqsRequest::apiVersion() const
{
    Q_D(const SqsRequest);
    return d->apiVersion;
}

QNetworkRequest SqsRequest::request() const
{
    Q_D(const SqsRequest);
    QNetworkRequest request(d->url());
    return request;
}

void SqsRequest::setAction(const QString &action)
{
    Q_D(SqsRequest);
    d->action = action;
}

void SqsRequest::setApiVersion(const QString &version)
{
    Q_D(SqsRequest);
    d->apiVersion = version;
}

/**
 * @internal
 *
 * @class  SqsRequestPrivate
 *
 * @brief  Private implementation for SqsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SqsRequestPrivate object.
 *
 * @param  q  Pointer to this object's public SqsRequest instance.
 */
SqsRequestPrivate::SqsRequestPrivate(SqsRequest * const q)
    : q_ptr(q)
{

}

QUrlQuery SqsRequestPrivate::query() const
{
    QUrlQuery query;
    query.addQueryItem(QLatin1String("action"),  action);
    query.addQueryItem(QLatin1String("version"), apiVersion);
    return query;
}

QUrl SqsRequestPrivate::url() const
{
    QUrl url;
    // need endpoint.
    url.setQuery(query());
    return url;
}

QTAWS_END_NAMESPACE
