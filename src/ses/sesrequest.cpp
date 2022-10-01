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

#include "sesrequest.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SesRequest
 * \brief The SesRequest class provides an interface for Ses requests.
 *
 * \inmodule QtAwsSes
 */

/*!
 * \enum SesRequest::Action
 *
 * This enum describes the actions that can be performed as Ses
 * requests.
 *
 * \value CloneReceiptRuleSetAction Ses CloneReceiptRuleSet action.
 * \value CreateConfigurationSetAction Ses CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction Ses CreateConfigurationSetEventDestination action.
 * \value CreateConfigurationSetTrackingOptionsAction Ses CreateConfigurationSetTrackingOptions action.
 * \value CreateCustomVerificationEmailTemplateAction Ses CreateCustomVerificationEmailTemplate action.
 * \value CreateReceiptFilterAction Ses CreateReceiptFilter action.
 * \value CreateReceiptRuleAction Ses CreateReceiptRule action.
 * \value CreateReceiptRuleSetAction Ses CreateReceiptRuleSet action.
 * \value CreateTemplateAction Ses CreateTemplate action.
 * \value DeleteConfigurationSetAction Ses DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction Ses DeleteConfigurationSetEventDestination action.
 * \value DeleteConfigurationSetTrackingOptionsAction Ses DeleteConfigurationSetTrackingOptions action.
 * \value DeleteCustomVerificationEmailTemplateAction Ses DeleteCustomVerificationEmailTemplate action.
 * \value DeleteIdentityAction Ses DeleteIdentity action.
 * \value DeleteIdentityPolicyAction Ses DeleteIdentityPolicy action.
 * \value DeleteReceiptFilterAction Ses DeleteReceiptFilter action.
 * \value DeleteReceiptRuleAction Ses DeleteReceiptRule action.
 * \value DeleteReceiptRuleSetAction Ses DeleteReceiptRuleSet action.
 * \value DeleteTemplateAction Ses DeleteTemplate action.
 * \value DeleteVerifiedEmailAddressAction Ses DeleteVerifiedEmailAddress action.
 * \value DescribeActiveReceiptRuleSetAction Ses DescribeActiveReceiptRuleSet action.
 * \value DescribeConfigurationSetAction Ses DescribeConfigurationSet action.
 * \value DescribeReceiptRuleAction Ses DescribeReceiptRule action.
 * \value DescribeReceiptRuleSetAction Ses DescribeReceiptRuleSet action.
 * \value GetAccountSendingEnabledAction Ses GetAccountSendingEnabled action.
 * \value GetCustomVerificationEmailTemplateAction Ses GetCustomVerificationEmailTemplate action.
 * \value GetIdentityDkimAttributesAction Ses GetIdentityDkimAttributes action.
 * \value GetIdentityMailFromDomainAttributesAction Ses GetIdentityMailFromDomainAttributes action.
 * \value GetIdentityNotificationAttributesAction Ses GetIdentityNotificationAttributes action.
 * \value GetIdentityPoliciesAction Ses GetIdentityPolicies action.
 * \value GetIdentityVerificationAttributesAction Ses GetIdentityVerificationAttributes action.
 * \value GetSendQuotaAction Ses GetSendQuota action.
 * \value GetSendStatisticsAction Ses GetSendStatistics action.
 * \value GetTemplateAction Ses GetTemplate action.
 * \value ListConfigurationSetsAction Ses ListConfigurationSets action.
 * \value ListCustomVerificationEmailTemplatesAction Ses ListCustomVerificationEmailTemplates action.
 * \value ListIdentitiesAction Ses ListIdentities action.
 * \value ListIdentityPoliciesAction Ses ListIdentityPolicies action.
 * \value ListReceiptFiltersAction Ses ListReceiptFilters action.
 * \value ListReceiptRuleSetsAction Ses ListReceiptRuleSets action.
 * \value ListTemplatesAction Ses ListTemplates action.
 * \value ListVerifiedEmailAddressesAction Ses ListVerifiedEmailAddresses action.
 * \value PutConfigurationSetDeliveryOptionsAction Ses PutConfigurationSetDeliveryOptions action.
 * \value PutIdentityPolicyAction Ses PutIdentityPolicy action.
 * \value ReorderReceiptRuleSetAction Ses ReorderReceiptRuleSet action.
 * \value SendBounceAction Ses SendBounce action.
 * \value SendBulkTemplatedEmailAction Ses SendBulkTemplatedEmail action.
 * \value SendCustomVerificationEmailAction Ses SendCustomVerificationEmail action.
 * \value SendEmailAction Ses SendEmail action.
 * \value SendRawEmailAction Ses SendRawEmail action.
 * \value SendTemplatedEmailAction Ses SendTemplatedEmail action.
 * \value SetActiveReceiptRuleSetAction Ses SetActiveReceiptRuleSet action.
 * \value SetIdentityDkimEnabledAction Ses SetIdentityDkimEnabled action.
 * \value SetIdentityFeedbackForwardingEnabledAction Ses SetIdentityFeedbackForwardingEnabled action.
 * \value SetIdentityHeadersInNotificationsEnabledAction Ses SetIdentityHeadersInNotificationsEnabled action.
 * \value SetIdentityMailFromDomainAction Ses SetIdentityMailFromDomain action.
 * \value SetIdentityNotificationTopicAction Ses SetIdentityNotificationTopic action.
 * \value SetReceiptRulePositionAction Ses SetReceiptRulePosition action.
 * \value TestRenderTemplateAction Ses TestRenderTemplate action.
 * \value UpdateAccountSendingEnabledAction Ses UpdateAccountSendingEnabled action.
 * \value UpdateConfigurationSetEventDestinationAction Ses UpdateConfigurationSetEventDestination action.
 * \value UpdateConfigurationSetReputationMetricsEnabledAction Ses UpdateConfigurationSetReputationMetricsEnabled action.
 * \value UpdateConfigurationSetSendingEnabledAction Ses UpdateConfigurationSetSendingEnabled action.
 * \value UpdateConfigurationSetTrackingOptionsAction Ses UpdateConfigurationSetTrackingOptions action.
 * \value UpdateCustomVerificationEmailTemplateAction Ses UpdateCustomVerificationEmailTemplate action.
 * \value UpdateReceiptRuleAction Ses UpdateReceiptRule action.
 * \value UpdateTemplateAction Ses UpdateTemplate action.
 * \value VerifyDomainDkimAction Ses VerifyDomainDkim action.
 * \value VerifyDomainIdentityAction Ses VerifyDomainIdentity action.
 * \value VerifyEmailAddressAction Ses VerifyEmailAddress action.
 * \value VerifyEmailIdentityAction Ses VerifyEmailIdentity action.
 */

/*!
 * Constructs a SesRequest object for Ses \a action.
 */
SesRequest::SesRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SesRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SesRequest::SesRequest(const SesRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SesRequest object to be equal to \a other.
 */
SesRequest& SesRequest::operator=(const SesRequest &other)
{
    Q_D(SesRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SesRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SesRequestPrivate.
 */
SesRequest::SesRequest(SesRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Ses action to be performed by this request.
 */
SesRequest::Action SesRequest::action() const
{
    Q_D(const SesRequest);
    return d->action;
}

/*!
 * Returns the name of the Ses action to be performed by this request.
 */
QString SesRequest::actionString() const
{
    return SesRequestPrivate::toString(action());
}

/*!
 * Returns the Ses API version implemented by this request.
 */
QString SesRequest::apiVersion() const
{
    Q_D(const SesRequest);
    return d->apiVersion;
}

/*!
 * Sets the Ses action to be performed by this request to \a action.
 */
void SesRequest::setAction(const Action action)
{
    Q_D(SesRequest);
    d->action = action;
}

/*!
 * Sets the Ses API version to include in this request to \a version.
 */
void SesRequest::setApiVersion(const QString &version)
{
    Q_D(SesRequest);
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
bool SesRequest::operator==(const SesRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Ses queue name.
 *
 * @par From Ses FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Ses queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SesRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SesRequest::clearParameter(const QString &name)
{
    Q_D(SesRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SesRequest::clearParameters()
{
    Q_D(SesRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SesRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SesRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SesRequest::parameters() const
{
    Q_D(const SesRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SesRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SesRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SesRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SesRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Ses request using the given
 * \a endpoint.
 *
 * This Ses implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SesRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SesRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Ses::SesRequestPrivate
 * \brief The SesRequestPrivate class provides private implementation for SesRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SesRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SesRequestPrivate::SesRequestPrivate(const SesRequest::Action action, SesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2010-12-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SesRequest class's copy constructor.
 */
SesRequestPrivate::SesRequestPrivate(const SesRequestPrivate &other,
                                     SesRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SesRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Ses service's Action
 * query parameters.
 */
QString SesRequestPrivate::toString(const SesRequest::Action &action)
{
    #define ActionToString(action) \
        case SesRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CloneReceiptRuleSet);
        ActionToString(CreateConfigurationSet);
        ActionToString(CreateConfigurationSetEventDestination);
        ActionToString(CreateConfigurationSetTrackingOptions);
        ActionToString(CreateCustomVerificationEmailTemplate);
        ActionToString(CreateReceiptFilter);
        ActionToString(CreateReceiptRule);
        ActionToString(CreateReceiptRuleSet);
        ActionToString(CreateTemplate);
        ActionToString(DeleteConfigurationSet);
        ActionToString(DeleteConfigurationSetEventDestination);
        ActionToString(DeleteConfigurationSetTrackingOptions);
        ActionToString(DeleteCustomVerificationEmailTemplate);
        ActionToString(DeleteIdentity);
        ActionToString(DeleteIdentityPolicy);
        ActionToString(DeleteReceiptFilter);
        ActionToString(DeleteReceiptRule);
        ActionToString(DeleteReceiptRuleSet);
        ActionToString(DeleteTemplate);
        ActionToString(DeleteVerifiedEmailAddress);
        ActionToString(DescribeActiveReceiptRuleSet);
        ActionToString(DescribeConfigurationSet);
        ActionToString(DescribeReceiptRule);
        ActionToString(DescribeReceiptRuleSet);
        ActionToString(GetAccountSendingEnabled);
        ActionToString(GetCustomVerificationEmailTemplate);
        ActionToString(GetIdentityDkimAttributes);
        ActionToString(GetIdentityMailFromDomainAttributes);
        ActionToString(GetIdentityNotificationAttributes);
        ActionToString(GetIdentityPolicies);
        ActionToString(GetIdentityVerificationAttributes);
        ActionToString(GetSendQuota);
        ActionToString(GetSendStatistics);
        ActionToString(GetTemplate);
        ActionToString(ListConfigurationSets);
        ActionToString(ListCustomVerificationEmailTemplates);
        ActionToString(ListIdentities);
        ActionToString(ListIdentityPolicies);
        ActionToString(ListReceiptFilters);
        ActionToString(ListReceiptRuleSets);
        ActionToString(ListTemplates);
        ActionToString(ListVerifiedEmailAddresses);
        ActionToString(PutConfigurationSetDeliveryOptions);
        ActionToString(PutIdentityPolicy);
        ActionToString(ReorderReceiptRuleSet);
        ActionToString(SendBounce);
        ActionToString(SendBulkTemplatedEmail);
        ActionToString(SendCustomVerificationEmail);
        ActionToString(SendEmail);
        ActionToString(SendRawEmail);
        ActionToString(SendTemplatedEmail);
        ActionToString(SetActiveReceiptRuleSet);
        ActionToString(SetIdentityDkimEnabled);
        ActionToString(SetIdentityFeedbackForwardingEnabled);
        ActionToString(SetIdentityHeadersInNotificationsEnabled);
        ActionToString(SetIdentityMailFromDomain);
        ActionToString(SetIdentityNotificationTopic);
        ActionToString(SetReceiptRulePosition);
        ActionToString(TestRenderTemplate);
        ActionToString(UpdateAccountSendingEnabled);
        ActionToString(UpdateConfigurationSetEventDestination);
        ActionToString(UpdateConfigurationSetReputationMetricsEnabled);
        ActionToString(UpdateConfigurationSetSendingEnabled);
        ActionToString(UpdateConfigurationSetTrackingOptions);
        ActionToString(UpdateCustomVerificationEmailTemplate);
        ActionToString(UpdateReceiptRule);
        ActionToString(UpdateTemplate);
        ActionToString(VerifyDomainDkim);
        ActionToString(VerifyDomainIdentity);
        ActionToString(VerifyEmailAddress);
        ActionToString(VerifyEmailIdentity);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Ses
} // namespace QtAws
