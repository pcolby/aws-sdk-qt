// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "snsrequest.h"
#include "snsrequest_p.h"

namespace QtAws {
namespace Sns {

/*!
 * \class QtAws::Sns::SnsRequest
 * \brief The SnsRequest class provides an interface for Sns requests.
 *
 * \inmodule QtAwsSns
 */

/*!
 * \enum SnsRequest::Action
 *
 * This enum describes the actions that can be performed as Sns
 * requests.
 *
 * \value AddPermissionAction Sns AddPermission action.
 * \value CheckIfPhoneNumberIsOptedOutAction Sns CheckIfPhoneNumberIsOptedOut action.
 * \value ConfirmSubscriptionAction Sns ConfirmSubscription action.
 * \value CreatePlatformApplicationAction Sns CreatePlatformApplication action.
 * \value CreatePlatformEndpointAction Sns CreatePlatformEndpoint action.
 * \value CreateSMSSandboxPhoneNumberAction Sns CreateSMSSandboxPhoneNumber action.
 * \value CreateTopicAction Sns CreateTopic action.
 * \value DeleteEndpointAction Sns DeleteEndpoint action.
 * \value DeletePlatformApplicationAction Sns DeletePlatformApplication action.
 * \value DeleteSMSSandboxPhoneNumberAction Sns DeleteSMSSandboxPhoneNumber action.
 * \value DeleteTopicAction Sns DeleteTopic action.
 * \value GetDataProtectionPolicyAction Sns GetDataProtectionPolicy action.
 * \value GetEndpointAttributesAction Sns GetEndpointAttributes action.
 * \value GetPlatformApplicationAttributesAction Sns GetPlatformApplicationAttributes action.
 * \value GetSMSAttributesAction Sns GetSMSAttributes action.
 * \value GetSMSSandboxAccountStatusAction Sns GetSMSSandboxAccountStatus action.
 * \value GetSubscriptionAttributesAction Sns GetSubscriptionAttributes action.
 * \value GetTopicAttributesAction Sns GetTopicAttributes action.
 * \value ListEndpointsByPlatformApplicationAction Sns ListEndpointsByPlatformApplication action.
 * \value ListOriginationNumbersAction Sns ListOriginationNumbers action.
 * \value ListPhoneNumbersOptedOutAction Sns ListPhoneNumbersOptedOut action.
 * \value ListPlatformApplicationsAction Sns ListPlatformApplications action.
 * \value ListSMSSandboxPhoneNumbersAction Sns ListSMSSandboxPhoneNumbers action.
 * \value ListSubscriptionsAction Sns ListSubscriptions action.
 * \value ListSubscriptionsByTopicAction Sns ListSubscriptionsByTopic action.
 * \value ListTagsForResourceAction Sns ListTagsForResource action.
 * \value ListTopicsAction Sns ListTopics action.
 * \value OptInPhoneNumberAction Sns OptInPhoneNumber action.
 * \value PublishAction Sns Publish action.
 * \value PublishBatchAction Sns PublishBatch action.
 * \value PutDataProtectionPolicyAction Sns PutDataProtectionPolicy action.
 * \value RemovePermissionAction Sns RemovePermission action.
 * \value SetEndpointAttributesAction Sns SetEndpointAttributes action.
 * \value SetPlatformApplicationAttributesAction Sns SetPlatformApplicationAttributes action.
 * \value SetSMSAttributesAction Sns SetSMSAttributes action.
 * \value SetSubscriptionAttributesAction Sns SetSubscriptionAttributes action.
 * \value SetTopicAttributesAction Sns SetTopicAttributes action.
 * \value SubscribeAction Sns Subscribe action.
 * \value TagResourceAction Sns TagResource action.
 * \value UnsubscribeAction Sns Unsubscribe action.
 * \value UntagResourceAction Sns UntagResource action.
 * \value VerifySMSSandboxPhoneNumberAction Sns VerifySMSSandboxPhoneNumber action.
 */

/*!
 * Constructs a SnsRequest object for Sns \a action.
 */
SnsRequest::SnsRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SnsRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SnsRequest::SnsRequest(const SnsRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SnsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SnsRequest object to be equal to \a other.
 */
SnsRequest& SnsRequest::operator=(const SnsRequest &other)
{
    Q_D(SnsRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SnsRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SnsRequestPrivate.
 */
SnsRequest::SnsRequest(SnsRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Sns action to be performed by this request.
 */
SnsRequest::Action SnsRequest::action() const
{
    Q_D(const SnsRequest);
    return d->action;
}

/*!
 * Returns the name of the Sns action to be performed by this request.
 */
QString SnsRequest::actionString() const
{
    return SnsRequestPrivate::toString(action());
}

/*!
 * Returns the Sns API version implemented by this request.
 */
QString SnsRequest::apiVersion() const
{
    Q_D(const SnsRequest);
    return d->apiVersion;
}

/*!
 * Sets the Sns action to be performed by this request to \a action.
 */
void SnsRequest::setAction(const Action action)
{
    Q_D(SnsRequest);
    d->action = action;
}

/*!
 * Sets the Sns API version to include in this request to \a version.
 */
void SnsRequest::setApiVersion(const QString &version)
{
    Q_D(SnsRequest);
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
bool SnsRequest::operator==(const SnsRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Sns queue name.
 *
 * @par From Sns FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Sns queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SnsRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SnsRequest::clearParameter(const QString &name)
{
    Q_D(SnsRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SnsRequest::clearParameters()
{
    Q_D(SnsRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SnsRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SnsRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SnsRequest::parameters() const
{
    Q_D(const SnsRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SnsRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SnsRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SnsRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SnsRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Sns request using the given
 * \a endpoint.
 *
 * This Sns implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SnsRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SnsRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Sns::SnsRequestPrivate
 * \brief The SnsRequestPrivate class provides private implementation for SnsRequest.
 * \internal
 *
 * \inmodule QtAwsSns
 */

/*!
 * Constructs a SnsRequestPrivate object for Sns \a action,
 * with public implementation \a q.
 */
SnsRequestPrivate::SnsRequestPrivate(const SnsRequest::Action action, SnsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2010-03-31"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SnsRequest class's copy constructor.
 */
SnsRequestPrivate::SnsRequestPrivate(const SnsRequestPrivate &other,
                                     SnsRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SnsRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Sns service's Action
 * query parameters.
 */
QString SnsRequestPrivate::toString(const SnsRequest::Action &action)
{
    #define ActionToString(action) \
        case SnsRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AddPermission);
        ActionToString(CheckIfPhoneNumberIsOptedOut);
        ActionToString(ConfirmSubscription);
        ActionToString(CreatePlatformApplication);
        ActionToString(CreatePlatformEndpoint);
        ActionToString(CreateSMSSandboxPhoneNumber);
        ActionToString(CreateTopic);
        ActionToString(DeleteEndpoint);
        ActionToString(DeletePlatformApplication);
        ActionToString(DeleteSMSSandboxPhoneNumber);
        ActionToString(DeleteTopic);
        ActionToString(GetDataProtectionPolicy);
        ActionToString(GetEndpointAttributes);
        ActionToString(GetPlatformApplicationAttributes);
        ActionToString(GetSMSAttributes);
        ActionToString(GetSMSSandboxAccountStatus);
        ActionToString(GetSubscriptionAttributes);
        ActionToString(GetTopicAttributes);
        ActionToString(ListEndpointsByPlatformApplication);
        ActionToString(ListOriginationNumbers);
        ActionToString(ListPhoneNumbersOptedOut);
        ActionToString(ListPlatformApplications);
        ActionToString(ListSMSSandboxPhoneNumbers);
        ActionToString(ListSubscriptions);
        ActionToString(ListSubscriptionsByTopic);
        ActionToString(ListTagsForResource);
        ActionToString(ListTopics);
        ActionToString(OptInPhoneNumber);
        ActionToString(Publish);
        ActionToString(PublishBatch);
        ActionToString(PutDataProtectionPolicy);
        ActionToString(RemovePermission);
        ActionToString(SetEndpointAttributes);
        ActionToString(SetPlatformApplicationAttributes);
        ActionToString(SetSMSAttributes);
        ActionToString(SetSubscriptionAttributes);
        ActionToString(SetTopicAttributes);
        ActionToString(Subscribe);
        ActionToString(TagResource);
        ActionToString(Unsubscribe);
        ActionToString(UntagResource);
        ActionToString(VerifySMSSandboxPhoneNumber);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Sns
} // namespace QtAws
