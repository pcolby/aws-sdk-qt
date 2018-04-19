/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sqsrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace SQS {

/*!
 * \class QtAws::SQS::SQSRequest
 * \brief The SQSRequest class provides an interface for SQS requests.
 *
 * \inmodule QtAwsSQS
 */

/*!
 * \enum SQSRequest::Action
 *
 * This enum describes the actions that can be performed as SQS
 * requests.
 *
 * \value AddPermissionAction SQS AddPermission action.
 * \value ChangeMessageVisibilityAction SQS ChangeMessageVisibility action.
 * \value ChangeMessageVisibilityBatchAction SQS ChangeMessageVisibilityBatch action.
 * \value CreateQueueAction SQS CreateQueue action.
 * \value DeleteMessageAction SQS DeleteMessage action.
 * \value DeleteMessageBatchAction SQS DeleteMessageBatch action.
 * \value DeleteQueueAction SQS DeleteQueue action.
 * \value GetQueueAttributesAction SQS GetQueueAttributes action.
 * \value GetQueueUrlAction SQS GetQueueUrl action.
 * \value ListDeadLetterSourceQueuesAction SQS ListDeadLetterSourceQueues action.
 * \value ListQueueTagsAction SQS ListQueueTags action.
 * \value ListQueuesAction SQS ListQueues action.
 * \value PurgeQueueAction SQS PurgeQueue action.
 * \value ReceiveMessageAction SQS ReceiveMessage action.
 * \value RemovePermissionAction SQS RemovePermission action.
 * \value SendMessageAction SQS SendMessage action.
 * \value SendMessageBatchAction SQS SendMessageBatch action.
 * \value SetQueueAttributesAction SQS SetQueueAttributes action.
 * \value TagQueueAction SQS TagQueue action.
 * \value UntagQueueAction SQS UntagQueue action.
 */

/*!
 * Constructs a SQSRequest object for SQS \a action.
 */
SQSRequest::SQSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SQSRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SQSRequest::SQSRequest(const SQSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SQSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SQSRequest object to be equal to \a other.
 */
SQSRequest& SQSRequest::operator=(const SQSRequest &other)
{
    Q_D(SQSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SQSRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SQSRequestPrivate.
 */
SQSRequest::SQSRequest(SQSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SQS action to be performed by this request.
 */
SQSRequest::Action SQSRequest::action() const
{
    Q_D(const SQSRequest);
    return d->action;
}

/*!
 * Returns the name of the SQS action to be performed by this request.
 */
QString SQSRequest::actionString() const
{
    return SQSRequestPrivate::toString(action());
}

/*!
 * Returns the SQS API version implemented by this request.
 */
QString SQSRequest::apiVersion() const
{
    Q_D(const SQSRequest);
    return d->apiVersion;
}

/*!
 * Sets the SQS action to be performed by this request to \a action.
 */
void SQSRequest::setAction(const Action action)
{
    Q_D(SQSRequest);
    d->action = action;
}

/*!
 * Sets the SQS API version to include in this request to \a version.
 */
void SQSRequest::setApiVersion(const QString &version)
{
    Q_D(SQSRequest);
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
bool SQSRequest::operator==(const SQSRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SQS queue name.
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
/*bool SQSRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SQSRequest::clearParameter(const QString &name)
{
    Q_D(SQSRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SQSRequest::clearParameters()
{
    Q_D(SQSRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SQSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SQSRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SQSRequest::parameters() const
{
    Q_D(const SQSRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SQSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SQSRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SQSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SQSRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SQS request using the given
 * \a endpoint.
 *
 * This SQS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SQSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SQSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SQS::SQSRequestPrivate
 * \brief The SQSRequestPrivate class provides private implementation for SQSRequest.
 * \internal
 *
 * \inmodule QtAwsSQS
 */

/*!
 * Constructs a SQSRequestPrivate object for SQS \a action,
 * with public implementation \a q.
 */
SQSRequestPrivate::SQSRequestPrivate(const SQSRequest::Action action, SQSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SQSRequest class's copy constructor.
 */
SQSRequestPrivate::SQSRequestPrivate(const SQSRequestPrivate &other,
                                     SQSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SQSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SQS service's Action
 * query parameters.
 */
QString SQSRequestPrivate::toString(const SQSRequest::Action &action)
{
    #define ActionToString(action) \
        case SQSRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SQS
} // namespace QtAws
