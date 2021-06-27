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

#include "firehoserequest.h"
#include "firehoserequest_p.h"

namespace QtAws {
namespace Firehose {

/*!
 * \class QtAws::Firehose::FirehoseRequest
 * \brief The FirehoseRequest class provides an interface for Firehose requests.
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * \enum FirehoseRequest::Action
 *
 * This enum describes the actions that can be performed as Firehose
 * requests.
 *
 * \value CreateDeliveryStreamAction Firehose CreateDeliveryStream action.
 * \value DeleteDeliveryStreamAction Firehose DeleteDeliveryStream action.
 * \value DescribeDeliveryStreamAction Firehose DescribeDeliveryStream action.
 * \value ListDeliveryStreamsAction Firehose ListDeliveryStreams action.
 * \value ListTagsForDeliveryStreamAction Firehose ListTagsForDeliveryStream action.
 * \value PutRecordAction Firehose PutRecord action.
 * \value PutRecordBatchAction Firehose PutRecordBatch action.
 * \value StartDeliveryStreamEncryptionAction Firehose StartDeliveryStreamEncryption action.
 * \value StopDeliveryStreamEncryptionAction Firehose StopDeliveryStreamEncryption action.
 * \value TagDeliveryStreamAction Firehose TagDeliveryStream action.
 * \value UntagDeliveryStreamAction Firehose UntagDeliveryStream action.
 * \value UpdateDestinationAction Firehose UpdateDestination action.
 */

/*!
 * Constructs a FirehoseRequest object for Firehose \a action.
 */
FirehoseRequest::FirehoseRequest(const Action action)
    : d_ptr(new FirehoseRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
FirehoseRequest::FirehoseRequest(const FirehoseRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new FirehoseRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the FirehoseRequest object to be equal to \a other.
 */
FirehoseRequest& FirehoseRequest::operator=(const FirehoseRequest &other)
{
    Q_D(FirehoseRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa FirehoseRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from FirehoseRequestPrivate.
 */
FirehoseRequest::FirehoseRequest(FirehoseRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Firehose action to be performed by this request.
 */
FirehoseRequest::Action FirehoseRequest::action() const
{
    Q_D(const FirehoseRequest);
    return d->action;
}

/*!
 * Returns the name of the Firehose action to be performed by this request.
 */
QString FirehoseRequest::actionString() const
{
    return FirehoseRequestPrivate::toString(action());
}

/*!
 * Returns the Firehose API version implemented by this request.
 */
QString FirehoseRequest::apiVersion() const
{
    Q_D(const FirehoseRequest);
    return d->apiVersion;
}

/*!
 * Sets the Firehose action to be performed by this request to \a action.
 */
void FirehoseRequest::setAction(const Action action)
{
    Q_D(FirehoseRequest);
    d->action = action;
}

/*!
 * Sets the Firehose API version to include in this request to \a version.
 */
void FirehoseRequest::setApiVersion(const QString &version)
{
    Q_D(FirehoseRequest);
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
bool FirehoseRequest::operator==(const FirehoseRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Firehose queue name.
 *
 * @par From Firehose FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Firehose queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool FirehoseRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int FirehoseRequest::clearParameter(const QString &name)
{
    Q_D(FirehoseRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void FirehoseRequest::clearParameters()
{
    Q_D(FirehoseRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant FirehoseRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const FirehoseRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &FirehoseRequest::parameters() const
{
    Q_D(const FirehoseRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void FirehoseRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(FirehoseRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void FirehoseRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(FirehoseRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Firehose request using the given
 * \a endpoint.
 *
 * This Firehose implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest FirehoseRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const FirehoseRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Firehose::FirehoseRequestPrivate
 * \brief The FirehoseRequestPrivate class provides private implementation for FirehoseRequest.
 * \internal
 *
 * \inmodule QtAwsFirehose
 */

/*!
 * Constructs a FirehoseRequestPrivate object for Firehose \a action,
 * with public implementation \a q.
 */
FirehoseRequestPrivate::FirehoseRequestPrivate(const FirehoseRequest::Action action, FirehoseRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the FirehoseRequest class's copy constructor.
 */
FirehoseRequestPrivate::FirehoseRequestPrivate(const FirehoseRequestPrivate &other,
                                     FirehoseRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts FirehoseRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Firehose service's Action
 * query parameters.
 */
QString FirehoseRequestPrivate::toString(const FirehoseRequest::Action &action)
{
    #define ActionToString(action) \
        case FirehoseRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Firehose
} // namespace QtAws
