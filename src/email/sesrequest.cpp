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

#include "sesrequest.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SESRequest
 * \brief The SESRequest class provides an interface for SES requests.
 *
 * \inmodule QtAwsSES
 */

/*!
 * \enum SESRequest::Action
 *
 * This enum describes the actions that can be performed as SES
 * requests.
 *
 * \value CloneReceiptRuleSetAction SES CloneReceiptRuleSet action.
 * \value CreateConfigurationSetAction SES CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction SES CreateConfigurationSetEventDestination action.
 * \value CreateConfigurationSetTrackingOptionsAction SES CreateConfigurationSetTrackingOptions action.
 * \value CreateCustomVerificationEmailTemplateAction SES CreateCustomVerificationEmailTemplate action.
 * \value CreateReceiptFilterAction SES CreateReceiptFilter action.
 * \value CreateReceiptRuleAction SES CreateReceiptRule action.
 * \value CreateReceiptRuleSetAction SES CreateReceiptRuleSet action.
 * \value CreateTemplateAction SES CreateTemplate action.
 * \value DeleteConfigurationSetAction SES DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction SES DeleteConfigurationSetEventDestination action.
 * \value DeleteConfigurationSetTrackingOptionsAction SES DeleteConfigurationSetTrackingOptions action.
 * \value DeleteCustomVerificationEmailTemplateAction SES DeleteCustomVerificationEmailTemplate action.
 * \value DeleteIdentityAction SES DeleteIdentity action.
 * \value DeleteIdentityPolicyAction SES DeleteIdentityPolicy action.
 * \value DeleteReceiptFilterAction SES DeleteReceiptFilter action.
 * \value DeleteReceiptRuleAction SES DeleteReceiptRule action.
 * \value DeleteReceiptRuleSetAction SES DeleteReceiptRuleSet action.
 * \value DeleteTemplateAction SES DeleteTemplate action.
 * \value DeleteVerifiedEmailAddressAction SES DeleteVerifiedEmailAddress action.
 * \value DescribeActiveReceiptRuleSetAction SES DescribeActiveReceiptRuleSet action.
 * \value DescribeConfigurationSetAction SES DescribeConfigurationSet action.
 * \value DescribeReceiptRuleAction SES DescribeReceiptRule action.
 * \value DescribeReceiptRuleSetAction SES DescribeReceiptRuleSet action.
 * \value GetAccountSendingEnabledAction SES GetAccountSendingEnabled action.
 * \value GetCustomVerificationEmailTemplateAction SES GetCustomVerificationEmailTemplate action.
 * \value GetIdentityDkimAttributesAction SES GetIdentityDkimAttributes action.
 * \value GetIdentityMailFromDomainAttributesAction SES GetIdentityMailFromDomainAttributes action.
 * \value GetIdentityNotificationAttributesAction SES GetIdentityNotificationAttributes action.
 * \value GetIdentityPoliciesAction SES GetIdentityPolicies action.
 * \value GetIdentityVerificationAttributesAction SES GetIdentityVerificationAttributes action.
 * \value GetSendQuotaAction SES GetSendQuota action.
 * \value GetSendStatisticsAction SES GetSendStatistics action.
 * \value GetTemplateAction SES GetTemplate action.
 * \value ListConfigurationSetsAction SES ListConfigurationSets action.
 * \value ListCustomVerificationEmailTemplatesAction SES ListCustomVerificationEmailTemplates action.
 * \value ListIdentitiesAction SES ListIdentities action.
 * \value ListIdentityPoliciesAction SES ListIdentityPolicies action.
 * \value ListReceiptFiltersAction SES ListReceiptFilters action.
 * \value ListReceiptRuleSetsAction SES ListReceiptRuleSets action.
 * \value ListTemplatesAction SES ListTemplates action.
 * \value ListVerifiedEmailAddressesAction SES ListVerifiedEmailAddresses action.
 * \value PutIdentityPolicyAction SES PutIdentityPolicy action.
 * \value ReorderReceiptRuleSetAction SES ReorderReceiptRuleSet action.
 * \value SendBounceAction SES SendBounce action.
 * \value SendBulkTemplatedEmailAction SES SendBulkTemplatedEmail action.
 * \value SendCustomVerificationEmailAction SES SendCustomVerificationEmail action.
 * \value SendEmailAction SES SendEmail action.
 * \value SendRawEmailAction SES SendRawEmail action.
 * \value SendTemplatedEmailAction SES SendTemplatedEmail action.
 * \value SetActiveReceiptRuleSetAction SES SetActiveReceiptRuleSet action.
 * \value SetIdentityDkimEnabledAction SES SetIdentityDkimEnabled action.
 * \value SetIdentityFeedbackForwardingEnabledAction SES SetIdentityFeedbackForwardingEnabled action.
 * \value SetIdentityHeadersInNotificationsEnabledAction SES SetIdentityHeadersInNotificationsEnabled action.
 * \value SetIdentityMailFromDomainAction SES SetIdentityMailFromDomain action.
 * \value SetIdentityNotificationTopicAction SES SetIdentityNotificationTopic action.
 * \value SetReceiptRulePositionAction SES SetReceiptRulePosition action.
 * \value TestRenderTemplateAction SES TestRenderTemplate action.
 * \value UpdateAccountSendingEnabledAction SES UpdateAccountSendingEnabled action.
 * \value UpdateConfigurationSetEventDestinationAction SES UpdateConfigurationSetEventDestination action.
 * \value UpdateConfigurationSetReputationMetricsEnabledAction SES UpdateConfigurationSetReputationMetricsEnabled action.
 * \value UpdateConfigurationSetSendingEnabledAction SES UpdateConfigurationSetSendingEnabled action.
 * \value UpdateConfigurationSetTrackingOptionsAction SES UpdateConfigurationSetTrackingOptions action.
 * \value UpdateCustomVerificationEmailTemplateAction SES UpdateCustomVerificationEmailTemplate action.
 * \value UpdateReceiptRuleAction SES UpdateReceiptRule action.
 * \value UpdateTemplateAction SES UpdateTemplate action.
 * \value VerifyDomainDkimAction SES VerifyDomainDkim action.
 * \value VerifyDomainIdentityAction SES VerifyDomainIdentity action.
 * \value VerifyEmailAddressAction SES VerifyEmailAddress action.
 * \value VerifyEmailIdentityAction SES VerifyEmailIdentity action.
 */

/*!
 * Constructs a[n] SESRequest object for SES \a action.
 */
SESRequest::SESRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SESRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SESRequest::SESRequest(const SESRequest &other)
    : QtAws::Core::AwsAbstractRequest(new SESRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SESRequest object to be equal to \a other.
 */
SESRequest& SESRequest::operator=(const SESRequest &other)
{
    Q_D(SESRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SESRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SESRequestPrivate.
 */
SESRequest::SESRequest(SESRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SES action to be performed by this request.
 */
SESRequest::Action SESRequest::action() const
{
    Q_D(const SESRequest);
    return d->action;
}

/*!
 * Returns the name of the SES action to be performed by this request.
 */
QString SESRequest::actionString() const
{
    return SESRequestPrivate::toString(action());
}

/*!
 * Returns the SES API version implemented by this request.
 */
QString SESRequest::apiVersion() const
{
    Q_D(const SESRequest);
    return d->apiVersion;
}

/*!
 * Sets the SES action to be performed by this request to \a action.
 */
void SESRequest::setAction(const Action action)
{
    Q_D(SESRequest);
    d->action = action;
}

/*!
 * Sets the SES API version to include in this request to \a version.
 */
void SESRequest::setApiVersion(const QString &version)
{
    Q_D(SESRequest);
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
bool SESRequest::operator==(const SESRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SES queue name.
 *
 * @par From SES FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SES queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SESRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SESRequest::clearParameter(const QString &name)
{
    Q_D(SESRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SESRequest::clearParameters()
{
    Q_D(SESRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SESRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SESRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SESRequest::parameters() const
{
    Q_D(const SESRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SESRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SESRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SESRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(SESRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SES request using the given
 * \a endpoint.
 *
 * This SES implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SESRequest::unsignedRequest(const QUrl &endpoint) const
{
    Q_D(const SESRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SES::SESRequestPrivate
 * \brief The SESRequestPrivate class provides private implementation for SESRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a SESRequestPrivate object for SES \a action with,
 * public implementation \a q.
 */
SESRequestPrivate::SESRequestPrivate(const SESRequest::Action action, SESRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SESRequest class's copy constructor.
 */
SESRequestPrivate::SESRequestPrivate(const SESRequestPrivate &other,
                                     SESRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SESRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the SES service's Action
 * query parameters.
 */
QString SESRequestPrivate::toString(const SESRequest::Action &action)
{
    #define ActionToString(action) \
        case SESRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SES
} // namespace QtAws
