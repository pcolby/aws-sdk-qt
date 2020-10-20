/*
    Copyright 2013-2020 Paul Colby

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
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::DynamoDBStreamsRequest
 * \brief The DynamoDBStreamsRequest class provides an interface for DynamoDBStreams requests.
 *
 * \inmodule QtAwsDynamoDBStreams
 */

/*!
 * \enum DynamoDBStreamsRequest::Action
 *
 * This enum describes the actions that can be performed as DynamoDBStreams
 * requests.
 *
 * \value DescribeStreamAction DynamoDBStreams DescribeStream action.
 * \value GetRecordsAction DynamoDBStreams GetRecords action.
 * \value GetShardIteratorAction DynamoDBStreams GetShardIterator action.
 * \value ListStreamsAction DynamoDBStreams ListStreams action.
 */

/*!
 * Constructs a DynamoDBStreamsRequest object for DynamoDBStreams \a action.
 */
DynamoDBStreamsRequest::DynamoDBStreamsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new DynamoDBStreamsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
DynamoDBStreamsRequest::DynamoDBStreamsRequest(const DynamoDBStreamsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new DynamoDBStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the DynamoDBStreamsRequest object to be equal to \a other.
 */
DynamoDBStreamsRequest& DynamoDBStreamsRequest::operator=(const DynamoDBStreamsRequest &other)
{
    Q_D(DynamoDBStreamsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa DynamoDBStreamsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from DynamoDBStreamsRequestPrivate.
 */
DynamoDBStreamsRequest::DynamoDBStreamsRequest(DynamoDBStreamsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the DynamoDBStreams action to be performed by this request.
 */
DynamoDBStreamsRequest::Action DynamoDBStreamsRequest::action() const
{
    Q_D(const DynamoDBStreamsRequest);
    return d->action;
}

/*!
 * Returns the name of the DynamoDBStreams action to be performed by this request.
 */
QString DynamoDBStreamsRequest::actionString() const
{
    return DynamoDBStreamsRequestPrivate::toString(action());
}

/*!
 * Returns the DynamoDBStreams API version implemented by this request.
 */
QString DynamoDBStreamsRequest::apiVersion() const
{
    Q_D(const DynamoDBStreamsRequest);
    return d->apiVersion;
}

/*!
 * Sets the DynamoDBStreams action to be performed by this request to \a action.
 */
void DynamoDBStreamsRequest::setAction(const Action action)
{
    Q_D(DynamoDBStreamsRequest);
    d->action = action;
}

/*!
 * Sets the DynamoDBStreams API version to include in this request to \a version.
 */
void DynamoDBStreamsRequest::setApiVersion(const QString &version)
{
    Q_D(DynamoDBStreamsRequest);
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
bool DynamoDBStreamsRequest::operator==(const DynamoDBStreamsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid DynamoDBStreams queue name.
 *
 * @par From DynamoDBStreams FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid DynamoDBStreams queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool DynamoDBStreamsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int DynamoDBStreamsRequest::clearParameter(const QString &name)
{
    Q_D(DynamoDBStreamsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void DynamoDBStreamsRequest::clearParameters()
{
    Q_D(DynamoDBStreamsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant DynamoDBStreamsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const DynamoDBStreamsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &DynamoDBStreamsRequest::parameters() const
{
    Q_D(const DynamoDBStreamsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void DynamoDBStreamsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(DynamoDBStreamsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void DynamoDBStreamsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(DynamoDBStreamsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the DynamoDBStreams request using the given
 * \a endpoint.
 *
 * This DynamoDBStreams implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest DynamoDBStreamsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const DynamoDBStreamsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::DynamoDBStreams::DynamoDBStreamsRequestPrivate
 * \brief The DynamoDBStreamsRequestPrivate class provides private implementation for DynamoDBStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDBStreams
 */

/*!
 * Constructs a DynamoDBStreamsRequestPrivate object for DynamoDBStreams \a action,
 * with public implementation \a q.
 */
DynamoDBStreamsRequestPrivate::DynamoDBStreamsRequestPrivate(const DynamoDBStreamsRequest::Action action, DynamoDBStreamsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the DynamoDBStreamsRequest class's copy constructor.
 */
DynamoDBStreamsRequestPrivate::DynamoDBStreamsRequestPrivate(const DynamoDBStreamsRequestPrivate &other,
                                     DynamoDBStreamsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts DynamoDBStreamsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the DynamoDBStreams service's Action
 * query parameters.
 */
QString DynamoDBStreamsRequestPrivate::toString(const DynamoDBStreamsRequest::Action &action)
{
    #define ActionToString(action) \
        case DynamoDBStreamsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace DynamoDBStreams
} // namespace QtAws
