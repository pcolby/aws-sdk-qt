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

#include "snsrequest.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace SNS {

/*!
 * \class QtAws::SNS::SNSRequest
 * \brief The SNSRequest class provides an interface for SNS requests.
 *
 * \inmodule QtAwsSNS
 */

/*!
 * \enum SNSRequest::Action
 *
 * This enum describes the actions that can be performed as SNS
 * requests.
 *
 * \value AddPermissionAction SNS AddPermission action.
 * \value CheckIfPhoneNumberIsOptedOutAction SNS CheckIfPhoneNumberIsOptedOut action.
 * \value ConfirmSubscriptionAction SNS ConfirmSubscription action.
 * \value CreatePlatformApplicationAction SNS CreatePlatformApplication action.
 * \value CreatePlatformEndpointAction SNS CreatePlatformEndpoint action.
 * \value CreateTopicAction SNS CreateTopic action.
 * \value DeleteEndpointAction SNS DeleteEndpoint action.
 * \value DeletePlatformApplicationAction SNS DeletePlatformApplication action.
 * \value DeleteTopicAction SNS DeleteTopic action.
 * \value GetEndpointAttributesAction SNS GetEndpointAttributes action.
 * \value GetPlatformApplicationAttributesAction SNS GetPlatformApplicationAttributes action.
 * \value GetSMSAttributesAction SNS GetSMSAttributes action.
 * \value GetSubscriptionAttributesAction SNS GetSubscriptionAttributes action.
 * \value GetTopicAttributesAction SNS GetTopicAttributes action.
 * \value ListEndpointsByPlatformApplicationAction SNS ListEndpointsByPlatformApplication action.
 * \value ListPhoneNumbersOptedOutAction SNS ListPhoneNumbersOptedOut action.
 * \value ListPlatformApplicationsAction SNS ListPlatformApplications action.
 * \value ListSubscriptionsAction SNS ListSubscriptions action.
 * \value ListSubscriptionsByTopicAction SNS ListSubscriptionsByTopic action.
 * \value ListTopicsAction SNS ListTopics action.
 * \value OptInPhoneNumberAction SNS OptInPhoneNumber action.
 * \value PublishAction SNS Publish action.
 * \value RemovePermissionAction SNS RemovePermission action.
 * \value SetEndpointAttributesAction SNS SetEndpointAttributes action.
 * \value SetPlatformApplicationAttributesAction SNS SetPlatformApplicationAttributes action.
 * \value SetSMSAttributesAction SNS SetSMSAttributes action.
 * \value SetSubscriptionAttributesAction SNS SetSubscriptionAttributes action.
 * \value SetTopicAttributesAction SNS SetTopicAttributes action.
 * \value SubscribeAction SNS Subscribe action.
 * \value UnsubscribeAction SNS Unsubscribe action.
 */

/*!
 * Constructs a[n] SNSRequest object for SNS \a action.
 */
SNSRequest::SNSRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SNSRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SNSRequest::SNSRequest(const SNSRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SNSRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SNSRequest object to be equal to \a other.
 */
SNSRequest& SNSRequest::operator=(const SNSRequest &other)
{
    Q_D(SNSRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SNSRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SNSRequestPrivate.
 */
SNSRequest::SNSRequest(SNSRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SNS action to be performed by this request.
 */
SNSRequest::Action SNSRequest::action() const
{
    Q_D(const SNSRequest);
    return d->action;
}

/*!
 * Returns the name of the SNS action to be performed by this request.
 */
QString SNSRequest::actionString() const
{
    return SNSRequestPrivate::toString(action());
}

/*!
 * Returns the SNS API version implemented by this request.
 */
QString SNSRequest::apiVersion() const
{
    Q_D(const SNSRequest);
    return d->apiVersion;
}

/*!
 * Sets the SNS action to be performed by this request to \a action.
 */
void SNSRequest::setAction(const Action action)
{
    Q_D(SNSRequest);
    d->action = action;
}

/*!
 * Sets the SNS API version to include in this request to \a version.
 */
void SNSRequest::setApiVersion(const QString &version)
{
    Q_D(SNSRequest);
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
bool SNSRequest::operator==(const SNSRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SNS queue name.
 *
 * @par From SNS FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SNS queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SNSRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SNSRequest::clearParameter(const QString &name)
{
    Q_D(SNSRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SNSRequest::clearParameters()
{
    Q_D(SNSRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SNSRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SNSRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SNSRequest::parameters() const
{
    Q_D(const SNSRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SNSRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SNSRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SNSRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SNSRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SNS request using the given
 * \a endpoint.
 *
 * This SNS implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SNSRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SNSRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SNS::SNSRequestPrivate
 * \brief The SNSRequestPrivate class provides private implementation for SNSRequest.
 * \internal
 *
 * \inmodule QtAwsSNS
 */

/*!
 * Constructs a SNSRequestPrivate object for SNS \a action with,
 * public implementation \a q.
 */
SNSRequestPrivate::SNSRequestPrivate(const SNSRequest::Action action, SNSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SNSRequest class's copy constructor.
 */
SNSRequestPrivate::SNSRequestPrivate(const SNSRequestPrivate &other,
                                     SNSRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SNSRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SNS service's Action
 * query parameters.
 */
QString SNSRequestPrivate::toString(const SNSRequest::Action &action)
{
    #define ActionToString(action) \
        case SNSRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SNS
} // namespace QtAws
