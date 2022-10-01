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

#include "sesv2request.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::SESv2Request
 * \brief The SESv2Request class provides an interface for SESv2 requests.
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * \enum SESv2Request::Action
 *
 * This enum describes the actions that can be performed as SESv2
 * requests.
 *
 * \value CreateConfigurationSetAction SESv2 CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction SESv2 CreateConfigurationSetEventDestination action.
 * \value CreateContactAction SESv2 CreateContact action.
 * \value CreateContactListAction SESv2 CreateContactList action.
 * \value CreateCustomVerificationEmailTemplateAction SESv2 CreateCustomVerificationEmailTemplate action.
 * \value CreateDedicatedIpPoolAction SESv2 CreateDedicatedIpPool action.
 * \value CreateDeliverabilityTestReportAction SESv2 CreateDeliverabilityTestReport action.
 * \value CreateEmailIdentityAction SESv2 CreateEmailIdentity action.
 * \value CreateEmailIdentityPolicyAction SESv2 CreateEmailIdentityPolicy action.
 * \value CreateEmailTemplateAction SESv2 CreateEmailTemplate action.
 * \value CreateImportJobAction SESv2 CreateImportJob action.
 * \value DeleteConfigurationSetAction SESv2 DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction SESv2 DeleteConfigurationSetEventDestination action.
 * \value DeleteContactAction SESv2 DeleteContact action.
 * \value DeleteContactListAction SESv2 DeleteContactList action.
 * \value DeleteCustomVerificationEmailTemplateAction SESv2 DeleteCustomVerificationEmailTemplate action.
 * \value DeleteDedicatedIpPoolAction SESv2 DeleteDedicatedIpPool action.
 * \value DeleteEmailIdentityAction SESv2 DeleteEmailIdentity action.
 * \value DeleteEmailIdentityPolicyAction SESv2 DeleteEmailIdentityPolicy action.
 * \value DeleteEmailTemplateAction SESv2 DeleteEmailTemplate action.
 * \value DeleteSuppressedDestinationAction SESv2 DeleteSuppressedDestination action.
 * \value GetAccountAction SESv2 GetAccount action.
 * \value GetBlacklistReportsAction SESv2 GetBlacklistReports action.
 * \value GetConfigurationSetAction SESv2 GetConfigurationSet action.
 * \value GetConfigurationSetEventDestinationsAction SESv2 GetConfigurationSetEventDestinations action.
 * \value GetContactAction SESv2 GetContact action.
 * \value GetContactListAction SESv2 GetContactList action.
 * \value GetCustomVerificationEmailTemplateAction SESv2 GetCustomVerificationEmailTemplate action.
 * \value GetDedicatedIpAction SESv2 GetDedicatedIp action.
 * \value GetDedicatedIpsAction SESv2 GetDedicatedIps action.
 * \value GetDeliverabilityDashboardOptionsAction SESv2 GetDeliverabilityDashboardOptions action.
 * \value GetDeliverabilityTestReportAction SESv2 GetDeliverabilityTestReport action.
 * \value GetDomainDeliverabilityCampaignAction SESv2 GetDomainDeliverabilityCampaign action.
 * \value GetDomainStatisticsReportAction SESv2 GetDomainStatisticsReport action.
 * \value GetEmailIdentityAction SESv2 GetEmailIdentity action.
 * \value GetEmailIdentityPoliciesAction SESv2 GetEmailIdentityPolicies action.
 * \value GetEmailTemplateAction SESv2 GetEmailTemplate action.
 * \value GetImportJobAction SESv2 GetImportJob action.
 * \value GetSuppressedDestinationAction SESv2 GetSuppressedDestination action.
 * \value ListConfigurationSetsAction SESv2 ListConfigurationSets action.
 * \value ListContactListsAction SESv2 ListContactLists action.
 * \value ListContactsAction SESv2 ListContacts action.
 * \value ListCustomVerificationEmailTemplatesAction SESv2 ListCustomVerificationEmailTemplates action.
 * \value ListDedicatedIpPoolsAction SESv2 ListDedicatedIpPools action.
 * \value ListDeliverabilityTestReportsAction SESv2 ListDeliverabilityTestReports action.
 * \value ListDomainDeliverabilityCampaignsAction SESv2 ListDomainDeliverabilityCampaigns action.
 * \value ListEmailIdentitiesAction SESv2 ListEmailIdentities action.
 * \value ListEmailTemplatesAction SESv2 ListEmailTemplates action.
 * \value ListImportJobsAction SESv2 ListImportJobs action.
 * \value ListSuppressedDestinationsAction SESv2 ListSuppressedDestinations action.
 * \value ListTagsForResourceAction SESv2 ListTagsForResource action.
 * \value PutAccountDedicatedIpWarmupAttributesAction SESv2 PutAccountDedicatedIpWarmupAttributes action.
 * \value PutAccountDetailsAction SESv2 PutAccountDetails action.
 * \value PutAccountSendingAttributesAction SESv2 PutAccountSendingAttributes action.
 * \value PutAccountSuppressionAttributesAction SESv2 PutAccountSuppressionAttributes action.
 * \value PutConfigurationSetDeliveryOptionsAction SESv2 PutConfigurationSetDeliveryOptions action.
 * \value PutConfigurationSetReputationOptionsAction SESv2 PutConfigurationSetReputationOptions action.
 * \value PutConfigurationSetSendingOptionsAction SESv2 PutConfigurationSetSendingOptions action.
 * \value PutConfigurationSetSuppressionOptionsAction SESv2 PutConfigurationSetSuppressionOptions action.
 * \value PutConfigurationSetTrackingOptionsAction SESv2 PutConfigurationSetTrackingOptions action.
 * \value PutDedicatedIpInPoolAction SESv2 PutDedicatedIpInPool action.
 * \value PutDedicatedIpWarmupAttributesAction SESv2 PutDedicatedIpWarmupAttributes action.
 * \value PutDeliverabilityDashboardOptionAction SESv2 PutDeliverabilityDashboardOption action.
 * \value PutEmailIdentityConfigurationSetAttributesAction SESv2 PutEmailIdentityConfigurationSetAttributes action.
 * \value PutEmailIdentityDkimAttributesAction SESv2 PutEmailIdentityDkimAttributes action.
 * \value PutEmailIdentityDkimSigningAttributesAction SESv2 PutEmailIdentityDkimSigningAttributes action.
 * \value PutEmailIdentityFeedbackAttributesAction SESv2 PutEmailIdentityFeedbackAttributes action.
 * \value PutEmailIdentityMailFromAttributesAction SESv2 PutEmailIdentityMailFromAttributes action.
 * \value PutSuppressedDestinationAction SESv2 PutSuppressedDestination action.
 * \value SendBulkEmailAction SESv2 SendBulkEmail action.
 * \value SendCustomVerificationEmailAction SESv2 SendCustomVerificationEmail action.
 * \value SendEmailAction SESv2 SendEmail action.
 * \value TagResourceAction SESv2 TagResource action.
 * \value TestRenderEmailTemplateAction SESv2 TestRenderEmailTemplate action.
 * \value UntagResourceAction SESv2 UntagResource action.
 * \value UpdateConfigurationSetEventDestinationAction SESv2 UpdateConfigurationSetEventDestination action.
 * \value UpdateContactAction SESv2 UpdateContact action.
 * \value UpdateContactListAction SESv2 UpdateContactList action.
 * \value UpdateCustomVerificationEmailTemplateAction SESv2 UpdateCustomVerificationEmailTemplate action.
 * \value UpdateEmailIdentityPolicyAction SESv2 UpdateEmailIdentityPolicy action.
 * \value UpdateEmailTemplateAction SESv2 UpdateEmailTemplate action.
 */

/*!
 * Constructs a SESv2Request object for SESv2 \a action.
 */
SESv2Request::SESv2Request(const Action action)
    : QtAws::Core::AwsAbstractRequest(new SESv2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
SESv2Request::SESv2Request(const SESv2Request &other)
    : QtAws::Core::AwsAbstractRequest(new SESv2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the SESv2Request object to be equal to \a other.
 */
SESv2Request& SESv2Request::operator=(const SESv2Request &other)
{
    Q_D(SESv2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa SESv2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from SESv2RequestPrivate.
 */
SESv2Request::SESv2Request(SESv2RequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the SESv2 action to be performed by this request.
 */
SESv2Request::Action SESv2Request::action() const
{
    Q_D(const SESv2Request);
    return d->action;
}

/*!
 * Returns the name of the SESv2 action to be performed by this request.
 */
QString SESv2Request::actionString() const
{
    return SESv2RequestPrivate::toString(action());
}

/*!
 * Returns the SESv2 API version implemented by this request.
 */
QString SESv2Request::apiVersion() const
{
    Q_D(const SESv2Request);
    return d->apiVersion;
}

/*!
 * Sets the SESv2 action to be performed by this request to \a action.
 */
void SESv2Request::setAction(const Action action)
{
    Q_D(SESv2Request);
    d->action = action;
}

/*!
 * Sets the SESv2 API version to include in this request to \a version.
 */
void SESv2Request::setApiVersion(const QString &version)
{
    Q_D(SESv2Request);
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
bool SESv2Request::operator==(const SESv2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SESv2 queue name.
 *
 * @par From SESv2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SESv2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool SESv2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int SESv2Request::clearParameter(const QString &name)
{
    Q_D(SESv2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void SESv2Request::clearParameters()
{
    Q_D(SESv2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant SESv2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const SESv2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &SESv2Request::parameters() const
{
    Q_D(const SESv2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void SESv2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(SESv2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void SESv2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(SESv2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SESv2 request using the given
 * \a endpoint.
 *
 * This SESv2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest SESv2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const SESv2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SESv2::SESv2RequestPrivate
 * \brief The SESv2RequestPrivate class provides private implementation for SESv2Request.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a SESv2RequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
SESv2RequestPrivate::SESv2RequestPrivate(const SESv2Request::Action action, SESv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-09-27"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the SESv2Request class's copy constructor.
 */
SESv2RequestPrivate::SESv2RequestPrivate(const SESv2RequestPrivate &other,
                                     SESv2Request * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts SESv2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the SESv2 service's Action
 * query parameters.
 */
QString SESv2RequestPrivate::toString(const SESv2Request::Action &action)
{
    #define ActionToString(action) \
        case SESv2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateConfigurationSet);
        ActionToString(CreateConfigurationSetEventDestination);
        ActionToString(CreateContact);
        ActionToString(CreateContactList);
        ActionToString(CreateCustomVerificationEmailTemplate);
        ActionToString(CreateDedicatedIpPool);
        ActionToString(CreateDeliverabilityTestReport);
        ActionToString(CreateEmailIdentity);
        ActionToString(CreateEmailIdentityPolicy);
        ActionToString(CreateEmailTemplate);
        ActionToString(CreateImportJob);
        ActionToString(DeleteConfigurationSet);
        ActionToString(DeleteConfigurationSetEventDestination);
        ActionToString(DeleteContact);
        ActionToString(DeleteContactList);
        ActionToString(DeleteCustomVerificationEmailTemplate);
        ActionToString(DeleteDedicatedIpPool);
        ActionToString(DeleteEmailIdentity);
        ActionToString(DeleteEmailIdentityPolicy);
        ActionToString(DeleteEmailTemplate);
        ActionToString(DeleteSuppressedDestination);
        ActionToString(GetAccount);
        ActionToString(GetBlacklistReports);
        ActionToString(GetConfigurationSet);
        ActionToString(GetConfigurationSetEventDestinations);
        ActionToString(GetContact);
        ActionToString(GetContactList);
        ActionToString(GetCustomVerificationEmailTemplate);
        ActionToString(GetDedicatedIp);
        ActionToString(GetDedicatedIps);
        ActionToString(GetDeliverabilityDashboardOptions);
        ActionToString(GetDeliverabilityTestReport);
        ActionToString(GetDomainDeliverabilityCampaign);
        ActionToString(GetDomainStatisticsReport);
        ActionToString(GetEmailIdentity);
        ActionToString(GetEmailIdentityPolicies);
        ActionToString(GetEmailTemplate);
        ActionToString(GetImportJob);
        ActionToString(GetSuppressedDestination);
        ActionToString(ListConfigurationSets);
        ActionToString(ListContactLists);
        ActionToString(ListContacts);
        ActionToString(ListCustomVerificationEmailTemplates);
        ActionToString(ListDedicatedIpPools);
        ActionToString(ListDeliverabilityTestReports);
        ActionToString(ListDomainDeliverabilityCampaigns);
        ActionToString(ListEmailIdentities);
        ActionToString(ListEmailTemplates);
        ActionToString(ListImportJobs);
        ActionToString(ListSuppressedDestinations);
        ActionToString(ListTagsForResource);
        ActionToString(PutAccountDedicatedIpWarmupAttributes);
        ActionToString(PutAccountDetails);
        ActionToString(PutAccountSendingAttributes);
        ActionToString(PutAccountSuppressionAttributes);
        ActionToString(PutConfigurationSetDeliveryOptions);
        ActionToString(PutConfigurationSetReputationOptions);
        ActionToString(PutConfigurationSetSendingOptions);
        ActionToString(PutConfigurationSetSuppressionOptions);
        ActionToString(PutConfigurationSetTrackingOptions);
        ActionToString(PutDedicatedIpInPool);
        ActionToString(PutDedicatedIpWarmupAttributes);
        ActionToString(PutDeliverabilityDashboardOption);
        ActionToString(PutEmailIdentityConfigurationSetAttributes);
        ActionToString(PutEmailIdentityDkimAttributes);
        ActionToString(PutEmailIdentityDkimSigningAttributes);
        ActionToString(PutEmailIdentityFeedbackAttributes);
        ActionToString(PutEmailIdentityMailFromAttributes);
        ActionToString(PutSuppressedDestination);
        ActionToString(SendBulkEmail);
        ActionToString(SendCustomVerificationEmail);
        ActionToString(SendEmail);
        ActionToString(TagResource);
        ActionToString(TestRenderEmailTemplate);
        ActionToString(UntagResource);
        ActionToString(UpdateConfigurationSetEventDestination);
        ActionToString(UpdateContact);
        ActionToString(UpdateContactList);
        ActionToString(UpdateCustomVerificationEmailTemplate);
        ActionToString(UpdateEmailIdentityPolicy);
        ActionToString(UpdateEmailTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SESv2
} // namespace QtAws
