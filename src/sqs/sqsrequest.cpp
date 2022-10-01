// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sqsrequest.h"
#include "sqsrequest_p.h"

namespace QtAws {
namespace Sqs {

/*!
 * \class QtAws::Sqs::SqsRequest
 * \brief The SqsRequest class provides an interface for Sqs requests.
 *
 * \inmodule QtAwsSqs
 */

/*!
 * \enum SqsRequest::Action
 *
 * This enum describes the actions that can be performed as Sqs
 * requests.
 *
 * \value AddPermissionAction Sqs AddPermission action.
 * \value ChangeMessageVisibilityAction Sqs ChangeMessageVisibility action.
 * \value ChangeMessageVisibilityBatchAction Sqs ChangeMessageVisibilityBatch action.
 * \value CreateQueueAction Sqs CreateQueue action.
 * \value DeleteMessageAction Sqs DeleteMessage action.
 * \value DeleteMessageBatchAction Sqs DeleteMessageBatch action.
 * \value DeleteQueueAction Sqs DeleteQueue action.
 * \value GetQueueAttributesAction Sqs GetQueueAttributes action.
 * \value GetQueueUrlAction Sqs GetQueueUrl action.
 * \value ListDeadLetterSourceQueuesAction Sqs ListDeadLetterSourceQueues action.
 * \value ListQueueTagsAction Sqs ListQueueTags action.
 * \value ListQueuesAction Sqs ListQueues action.
 * \value PurgeQueueAction Sqs PurgeQueue action.
 * \value ReceiveMessageAction Sqs ReceiveMessage action.
 * \value RemovePermissionAction Sqs RemovePermission action.
 * \value SendMessageAction Sqs SendMessage action.
 * \value SendMessageBatchAction Sqs SendMessageBatch action.
 * \value SetQueueAttributesAction Sqs SetQueueAttributes action.
 * \value TagQueueAction Sqs TagQueue action.
 * \value UntagQueueAction Sqs UntagQueue action.
 */

/*!
 * Constructs a SqsRequest object for Sqs \a action.
 */
SqsRequest::SqsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SqsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SqsRequest::SqsRequest(const SqsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SqsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SqsRequest object to be equal to \a other.
 */
SqsRequest& SqsRequest::operator=(const SqsRequest &other)
{
    Q_D(SqsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SqsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SqsRequestPrivate.
 */
SqsRequest::SqsRequest(SqsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Sqs action to be performed by this request.
 */
SqsRequest::Action SqsRequest::action() const
{
    Q_D(const SqsRequest);
    return d->action;
}

/*!
 * Returns the name of the Sqs action to be performed by this request.
 */
QString SqsRequest::actionString() const
{
    return SqsRequestPrivate::toString(action());
}

/*!
 * Returns the Sqs API version implemented by this request.
 */
QString SqsRequest::apiVersion() const
{
    Q_D(const SqsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Sqs action to be performed by this request to \a action.
 */
void SqsRequest::setAction(const Action action)
{
    Q_D(SqsRequest);
    d->action = action;
}

/*!
 * Sets the Sqs API version to include in this request to \a version.
 */
void SqsRequest::setApiVersion(const QString &version)
{
    Q_D(SqsRequest);
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
bool SqsRequest::operator==(const SqsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Sqs queue name.
 *
 * @par From Sqs FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Sqs queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SqsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SqsRequest::clearParameter(const QString &name)
{
    Q_D(SqsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SqsRequest::clearParameters()
{
    Q_D(SqsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SqsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SqsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SqsRequest::parameters() const
{
    Q_D(const SqsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SqsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SqsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SqsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SqsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Sqs request using the given
 * \a endpoint.
 *
 * This Sqs implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SqsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SqsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Sqs::SqsRequestPrivate
 * \brief The SqsRequestPrivate class provides private implementation for SqsRequest.
 * \internal
 *
 * \inmodule QtAwsSqs
 */

/*!
 * Constructs a SqsRequestPrivate object for Sqs \a action,
 * with public implementation \a q.
 */
SqsRequestPrivate::SqsRequestPrivate(const SqsRequest::Action action, SqsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SqsRequest class's copy constructor.
 */
SqsRequestPrivate::SqsRequestPrivate(const SqsRequestPrivate &other,
                                     SqsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SqsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Sqs service's Action
 * query parameters.
 */
QString SqsRequestPrivate::toString(const SqsRequest::Action &action)
{
    #define ActionToString(action) \
        case SqsRequest::action##Action: return QStringLiteral(#action)
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
        ActionToString(ListQueueTags);
        ActionToString(ListQueues);
        ActionToString(PurgeQueue);
        ActionToString(ReceiveMessage);
        ActionToString(RemovePermission);
        ActionToString(SendMessage);
        ActionToString(SendMessageBatch);
        ActionToString(SetQueueAttributes);
        ActionToString(TagQueue);
        ActionToString(UntagQueue);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Sqs
} // namespace QtAws
