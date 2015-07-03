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
 * @brief  Interface class for providing SQS requests
 */

/**
 * @brief  Constructs a new SqsRequest object.
 *
 * @param  action  The SQS action to request.
 * @param  parent  This object's parent.
 */
SqsRequest::SqsRequest(const SqsAction action)
    : AwsAbstractRequest(new SqsRequestPrivate(action, this))
{
    setApiVersion(QLatin1String("2012-11-05"));
}

SqsRequest::SqsRequest(const SqsRequest &other)
    : AwsAbstractRequest(new SqsRequestPrivate(*other.d_func(), this))
{

}

SqsRequest& SqsRequest::operator=(const SqsRequest &other)
{
    Q_D(SqsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/**
 * @internal
 *
 * @brief  Constructs a new SqsRequest object.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SqsRequestPrivate.
 *
 * @param  d       Pointer to private data (aka D-Pointer).
 */
SqsRequest::SqsRequest(SqsRequestPrivate * const d)
    : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the SQS action to be performed by this request.
 *
 * @return The SQS action to be performed by this request.
 */
SqsRequest::SqsAction SqsRequest::action() const
{
    Q_D(const SqsRequest);
    return d->action;
}

/**
 * @brief Get the name of the SQS action to be performed by this request.
 *
 * @return The name of the SQS action to be performed by this request.
 */
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

/**
 * @brief  Get the SQS API version implemented by this request.
 *
 * @return The SQS API version implmented by this request.
 */
QString SqsRequest::apiVersion() const
{
    Q_D(const SqsRequest);
    return d->apiVersion;
}

/**
 * @brief  Set the SQS action to be performed by this request.
 *
 * @param  action  The action to be performed by this request.
 */
void SqsRequest::setAction(const SqsAction action)
{
    Q_D(SqsRequest);
    d->action = action;
}

/**
 * @brief  Set the SQS API version to include in this request.
 *
 * @param  version  The SQS API version to include in this request.
 */
void SqsRequest::setApiVersion(const QString &version)
{
    Q_D(SqsRequest);
    d->apiVersion = version;
}

/**
 * @brief  Remove a parameter from the parameters to be included with this request.
 *
 * @param  name  Name of the parameter to remove.
 *
 * @return Count of parameters removed (should be 0 or 1).
 */
int SqsRequest::clearParameter(const QString &name)
{
    Q_D(SqsRequest);
    return d->parameters.remove(name);
}

/**
 * @brief  Get the value of a parameter included with this SQS request.
 *
 * @param name          Name of the parameter to get the value of.
 * @param defaultValue  Default value to return if no such parameter has been set.
 *
 * @return The value of the specified parameter, or \a defaultValue of not set.
 */
QVariant SqsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SqsRequest);
    return d->parameters.value(name, defaultValue);
}

/**
 * @brief  Set a parameter to include with this SQS request.
 *
 * @param  name   Name of the parameter to include.
 * @param  value  Value of the parameter to include.
 */
void SqsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SqsRequest);
    d->parameters.insert(name, value);
}

/**
 * @brief  Build a network request object for this SQS request.
 *
 * This SQS implementation builds request URLs by combining the common query
 * parameters (such as Action and Version), with any that have been added (via
 * setParameter) by child classes.
 *
 * @param  endpoint  AWS endpoint to build this request for.
 *
 * @return A network request for this SQS request using the given \a endpoint.
 */
QNetworkRequest SqsRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SqsRequest);
    QUrlQuery query;
    query.addQueryItem(QLatin1String("Action"), actionString());
    query.addQueryItem(QLatin1String("Version"), apiVersion());
    for (QVariantMap::const_iterator iter = d->parameters.cbegin(); iter != d->parameters.cend(); ++iter) {
        const QString parameterName = iter.key();
        const QVariant parameterValue = iter.value();
        if (parameterValue.type() == QVariant::Map) {
            const QVariantMap map = parameterValue.toMap();
            int index = 1;
            for (QVariantMap::const_iterator iter = map.cbegin(); iter != map.cend(); ++iter, ++index) {
                query.addQueryItem(parameterName.arg(index).arg(QLatin1String("Name")), iter.key());
                query.addQueryItem(parameterName.arg(index).arg(QLatin1String("Value")), iter.value().toString());
            }
        } else {
            query.addQueryItem(parameterName, parameterValue.toString());
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
 * @param  action  SQS action being performed by the \a q request.
 * @param  q       Pointer to this object's public SqsRequest instance.
 */
SqsRequestPrivate::SqsRequestPrivate(const SqsRequest::SqsAction action, SqsRequest * const q)
    : AwsAbstractRequestPrivate(q), action(action)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SqsRequestPrivate object from an existing one.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SqsRequest class's copy and assignment
 * constructors only.
 *
 * @param  action  SQS action being performed by the \a q request.
 * @param  q       Pointer to this object's public SqsRequest instance.
 */
SqsRequestPrivate::SqsRequestPrivate(const SqsRequestPrivate &other,
                                     SqsRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

QTAWS_END_NAMESPACE
