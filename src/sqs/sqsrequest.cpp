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
SqsRequest::SqsRequest(const SqsAction action, QObject * const parent)
    : AwsAbstractRequest(parent), d_ptr(new SqsRequestPrivate(this))
{
    Q_D(SqsRequest);
    setApiVersion(QLatin1String("2012-11-05"));
    d->action = action;
}

SqsRequest::~SqsRequest()
{
    delete d_ptr;
}


SqsRequest::SqsAction SqsRequest::action() const
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
    //QNetworkRequest request(d->url());

    QUrlQuery query;
    query.addQueryItem(QLatin1String("action"), actionString());
    query.addQueryItem(QLatin1String("version"), apiVersion());
    for (QVariantMap::const_iterator iter = d->additionalParameters.cbegin();
         iter != d->additionalParameters.cend(); ++iter) {
        // if List ..
        // else
        query.addQueryItem(iter.key(), iter.value().asString());
    }

    QUrl url; /// @todo Endpoint.
    url.setQuery(urlQuery);
    /// @todo Add action, apiVersiol
    return request;
}

void SqsRequest::setAction(const SqsAction action)
{
    Q_D(SqsRequest);
    d->action = action;
}

void SqsRequest::setApiVersion(const QString &version)
{
    Q_D(SqsRequest);
    d->apiVersion = version;
}

QNetworkRequest SqsRequest::unsignedRequest() const
{
    return QNetworkRequest(); ///< @todo Not yet implemented.
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
    : AwsAbstractRequestPrivate(q), q_ptr(q)
{

}

QUrlQuery SqsRequestPrivate::query() const
{
    QUrlQuery query;
  //query.addQueryItem(QLatin1String("action"),  action-to-string); ///< @todo
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
