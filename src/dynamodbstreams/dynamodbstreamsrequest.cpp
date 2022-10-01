/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "dynamodbstreamsrequest.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::DynamoDbStreamsRequest
 * \brief The DynamoDbStreamsRequest class provides an interface for DynamoDbStreams requests.
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * \enum DynamoDbStreamsRequest::Action
 *
 * This enum describes the actions that can be performed as DynamoDbStreams
 * requests.
 *
 * \value DescribeStreamAction DynamoDbStreams DescribeStream action.
 * \value GetRecordsAction DynamoDbStreams GetRecords action.
 * \value GetShardIteratorAction DynamoDbStreams GetShardIterator action.
 * \value ListStreamsAction DynamoDbStreams ListStreams action.
 */

/*!
 * Constructs a DynamoDbStreamsRequest object for DynamoDbStreams \a action.
 */
DynamoDbStreamsRequest::DynamoDbStreamsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DynamoDbStreamsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DynamoDbStreamsRequest::DynamoDbStreamsRequest(const DynamoDbStreamsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DynamoDbStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DynamoDbStreamsRequest object to be equal to \a other.
 */
DynamoDbStreamsRequest& DynamoDbStreamsRequest::operator=(const DynamoDbStreamsRequest &other)
{
    Q_D(DynamoDbStreamsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DynamoDbStreamsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DynamoDbStreamsRequestPrivate.
 */
DynamoDbStreamsRequest::DynamoDbStreamsRequest(DynamoDbStreamsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DynamoDbStreams action to be performed by this request.
 */
DynamoDbStreamsRequest::Action DynamoDbStreamsRequest::action() const
{
    Q_D(const DynamoDbStreamsRequest);
    return d->action;
}

/*!
 * Returns the name of the DynamoDbStreams action to be performed by this request.
 */
QString DynamoDbStreamsRequest::actionString() const
{
    return DynamoDbStreamsRequestPrivate::toString(action());
}

/*!
 * Returns the DynamoDbStreams API version implemented by this request.
 */
QString DynamoDbStreamsRequest::apiVersion() const
{
    Q_D(const DynamoDbStreamsRequest);
    return d->apiVersion;
}

/*!
 * Sets the DynamoDbStreams action to be performed by this request to \a action.
 */
void DynamoDbStreamsRequest::setAction(const Action action)
{
    Q_D(DynamoDbStreamsRequest);
    d->action = action;
}

/*!
 * Sets the DynamoDbStreams API version to include in this request to \a version.
 */
void DynamoDbStreamsRequest::setApiVersion(const QString &version)
{
    Q_D(DynamoDbStreamsRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool DynamoDbStreamsRequest::operator==(const DynamoDbStreamsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DynamoDbStreams queue name.
 *
 * @par From DynamoDbStreams FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DynamoDbStreams queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DynamoDbStreamsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DynamoDbStreamsRequest::clearParameter(const QString &name)
{
    Q_D(DynamoDbStreamsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DynamoDbStreamsRequest::clearParameters()
{
    Q_D(DynamoDbStreamsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DynamoDbStreamsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DynamoDbStreamsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DynamoDbStreamsRequest::parameters() const
{
    Q_D(const DynamoDbStreamsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DynamoDbStreamsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DynamoDbStreamsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DynamoDbStreamsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DynamoDbStreamsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DynamoDbStreams request using the given
 * \a endpoint.
 *
 * This DynamoDbStreams implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DynamoDbStreamsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DynamoDbStreamsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DynamoDbStreams::DynamoDbStreamsRequestPrivate
 * \brief The DynamoDbStreamsRequestPrivate class provides private implementation for DynamoDbStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a DynamoDbStreamsRequestPrivate object for DynamoDbStreams \a action,
 * with public implementation \a q.
 */
DynamoDbStreamsRequestPrivate::DynamoDbStreamsRequestPrivate(const DynamoDbStreamsRequest::Action action, DynamoDbStreamsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-08-10"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DynamoDbStreamsRequest class's copy constructor.
 */
DynamoDbStreamsRequestPrivate::DynamoDbStreamsRequestPrivate(const DynamoDbStreamsRequestPrivate &other,
                                     DynamoDbStreamsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DynamoDbStreamsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DynamoDbStreams service's Action
 * query parameters.
 */
QString DynamoDbStreamsRequestPrivate::toString(const DynamoDbStreamsRequest::Action &action)
{
    #define ActionToString(action) \
        case DynamoDbStreamsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(DescribeStream);
        ActionToString(GetRecords);
        ActionToString(GetShardIterator);
        ActionToString(ListStreams);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DynamoDbStreams
} // namespace QtAws
