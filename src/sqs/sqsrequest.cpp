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

#include "sqserror.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QUrlQuery>
#include <QXmlStreamReader>

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
    : AwsAbstractRequest(new SqsRequestPrivate(action, this), parent)
{
    setApiVersion(QLatin1String("2012-11-05"));
}

SqsRequest::SqsRequest(SqsRequestPrivate * const d, QObject * const parent)
    : AwsAbstractRequest(d, parent)
{

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

QString SqsRequest::actionString() const
{
    #define SqsActionToString(action) \
        case SqsRequest::action##SqsAction: return QLatin1String(#action)
    switch (action()) {
        SqsActionToString(AddPermission);
        SqsActionToString(ChangeMessageVisibility);
        SqsActionToString(ChangeMessageVisibilityBatch);
        SqsActionToString(CreateQueue);
        SqsActionToString(DeleteMessage);
        SqsActionToString(DeleteMessageBatch);
        SqsActionToString(DeleteQueue);
        SqsActionToString(GetQueueAttributes);
        SqsActionToString(GetQueueUrl);
        SqsActionToString(ListDeadLetterSourceQueues);
        SqsActionToString(ListQueues);
        SqsActionToString(PurgeQueue);
        SqsActionToString(ReceiveMessage);
        SqsActionToString(RemovePermission);
        SqsActionToString(SendMessage);
        SqsActionToString(SendMessageBatch);
        SqsActionToString(SetQueueAttributes);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef SqsActionToString
    return QString();
}

QString SqsRequest::apiVersion() const
{
    Q_D(const SqsRequest);
    return d->apiVersion;
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

int SqsRequest::clearParameter(const QString &name)
{
    Q_D(SqsRequest);
    return d->parameters.remove(name);
}

QVariant SqsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SqsRequest);
    return d->parameters.value(name, defaultValue);
}

void SqsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SqsRequest);
    d->parameters.insert(name, value);
}

QNetworkRequest SqsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SqsRequest);
    QUrlQuery query;
    query.addQueryItem(QLatin1String("Action"), actionString());
    query.addQueryItem(QLatin1String("Version"), apiVersion());
    for (QVariantMap::const_iterator iter = d->parameters.cbegin(); iter != d->parameters.cend(); ++iter) {
        const QString name = iter.key();
        //const QVariant value = iter.value();
        if (iter.value().type() == QVariant::Map) {
            const QVariantMap map = iter.value().toMap();
            int index = 1;
            for (QVariantMap::const_iterator iter = map.cbegin(); iter != d->parameters.cend(); ++iter, ++index) {
                query.addQueryItem(name.arg(index).arg(QLatin1String("Name")), iter.key());
                query.addQueryItem(name.arg(index).arg(QLatin1String("Value")), iter.value().toString());
            }
        } else {
            query.addQueryItem(iter.key(), iter.value().toString());
        }
    }

    QUrl url(endpoint);
    url.setQuery(query);
    return QNetworkRequest(url);
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
SqsRequestPrivate::SqsRequestPrivate(const SqsRequest::SqsAction action, SqsRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action)
{

}

QTAWS_END_NAMESPACE
