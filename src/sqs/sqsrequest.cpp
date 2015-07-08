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
 */
SqsRequest::SqsRequest(const Action action)
    : AwsAbstractRequest(new SqsRequestPrivate(action, this))
{
    setApiVersion(QLatin1String("2012-11-05"));
}

/**
 * @brief  Constructs a new SqsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SqsRequest::SqsRequest(const SqsRequest &other)
    : AwsAbstractRequest(new SqsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Assignment operator.
 *
 * Assigns \a other to \c this.
 *
 * @param  other  Instance to copy.
 *
 * @return  A reference to \c this.
 */
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
 * @param  d  Pointer to private data (aka D-Pointer).
 */
SqsRequest::SqsRequest(SqsRequestPrivate * const d) : AwsAbstractRequest(d)
{

}

/**
 * @brief  Get the SQS action to be performed by this request.
 *
 * @return The SQS action to be performed by this request.
 */
SqsRequest::Action SqsRequest::action() const
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
    Q_D(const SqsRequest);
    return d->toString(action());
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
void SqsRequest::setAction(const Action action)
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
 * @brief  Equality operator.
 *
 * Note, most derived Sqs*Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 *
 * @param  other  Instance to compare \c this to.
 *
 * @return \c true if \c this and \a other are considered equal.
 */
bool SqsRequest::operator==(const SqsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (AwsAbstractRequest::operator ==(other)));
}

/**
 * @brief  Check if \a queueName is a valid SQS queue name.
 *
 * @par From SQS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SQS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
bool SqsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
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
 * @brief  Clear all parameters that were to be included with this request.
 */
void SqsRequest::clearParameters()
{
    Q_D(SqsRequest);
    d->parameters.clear();
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
 * @brief  Get all parameters included with this SQS request.
 *
 * @return A map of parameters included with this request.
 */
const QVariantMap &SqsRequest::parameters() const
{
    Q_D(const SqsRequest);
    return d->parameters;
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
 * @brief  Set all parameters to include with this SQS request.
 *
 * Any request parameters set previously will be discarded.
 *
 * @param  parameters  New request parameters to inclued with this request.
 */
void SqsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SqsRequest);
    d->parameters = parameters;
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
    QUrl url(endpoint);
    url.setQuery(d->urlQuery());
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
SqsRequestPrivate::SqsRequestPrivate(const SqsRequest::Action action, SqsRequest * const q)
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
 * This is required to support the SqsRequest class's copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SqsRequest instance.
 */
SqsRequestPrivate::SqsRequestPrivate(const SqsRequestPrivate &other,
                                     SqsRequest * const q)
    : AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

QUrlQuery SqsRequestPrivate::urlQuery() const
{
    Q_Q(const SqsRequest);
    QUrlQuery query;
    query.addQueryItem(QLatin1String("Action"), q->actionString());
    query.addQueryItem(QLatin1String("Version"), q->apiVersion());
    for (QVariantMap::const_iterator iter = parameters.cbegin(); iter != parameters.cend(); ++iter) {
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
    return query;
}

QString SqsRequestPrivate::toString(const SqsRequest::Action &action)
{
    #define ActionToString(action) \
        case SqsRequest::action##Action: return QLatin1String(#action)
    switch (action) {
        ActionToString(AddPermission);
        ActionToString(ChangeMessageVisibility);
        ActionToString(ChangeMessageVisibilityBatch);
        ActionToString(CreateQueue);
        ActionToString(DeleteMessage);
        ActionToString(DeleteMessageBatch);
        ActionToString(DeleteQueue);
        ActionToString(GetQueueAttributes);
        ActionToString(GetQueueUrl);
        ActionToString(ListDeadLetterSourceQueues);
        ActionToString(ListQueues);
        ActionToString(PurgeQueue);
        ActionToString(ReceiveMessage);
        ActionToString(RemovePermission);
        ActionToString(SendMessage);
        ActionToString(SendMessageBatch);
        ActionToString(SetQueueAttributes);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

QTAWS_END_NAMESPACE
