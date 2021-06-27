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
namespace SESV2 {

/*!
 * \class QtAws::SESV2::Sesv2Request
 * \brief The Sesv2Request class provides an interface for SESV2 requests.
 *
 * \inmodule QtAwsSESV2
 */

/*!
 * \enum Sesv2Request::Action
 *
 * This enum describes the actions that can be performed as SESV2
 * requests.
 *
 * \value CreateConfigurationSetAction SESV2 CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction SESV2 CreateConfigurationSetEventDestination action.
 * \value CreateContactAction SESV2 CreateContact action.
 * \value CreateContactListAction SESV2 CreateContactList action.
 * \value CreateCustomVerificationEmailTemplateAction SESV2 CreateCustomVerificationEmailTemplate action.
 * \value CreateDedicatedIpPoolAction SESV2 CreateDedicatedIpPool action.
 * \value CreateDeliverabilityTestReportAction SESV2 CreateDeliverabilityTestReport action.
 * \value CreateEmailIdentityAction SESV2 CreateEmailIdentity action.
 * \value CreateEmailIdentityPolicyAction SESV2 CreateEmailIdentityPolicy action.
 * \value CreateEmailTemplateAction SESV2 CreateEmailTemplate action.
 * \value CreateImportJobAction SESV2 CreateImportJob action.
 * \value DeleteConfigurationSetAction SESV2 DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction SESV2 DeleteConfigurationSetEventDestination action.
 * \value DeleteContactAction SESV2 DeleteContact action.
 * \value DeleteContactListAction SESV2 DeleteContactList action.
 * \value DeleteCustomVerificationEmailTemplateAction SESV2 DeleteCustomVerificationEmailTemplate action.
 * \value DeleteDedicatedIpPoolAction SESV2 DeleteDedicatedIpPool action.
 * \value DeleteEmailIdentityAction SESV2 DeleteEmailIdentity action.
 * \value DeleteEmailIdentityPolicyAction SESV2 DeleteEmailIdentityPolicy action.
 * \value DeleteEmailTemplateAction SESV2 DeleteEmailTemplate action.
 * \value DeleteSuppressedDestinationAction SESV2 DeleteSuppressedDestination action.
 * \value GetAccountAction SESV2 GetAccount action.
 * \value GetBlacklistReportsAction SESV2 GetBlacklistReports action.
 * \value GetConfigurationSetAction SESV2 GetConfigurationSet action.
 * \value GetConfigurationSetEventDestinationsAction SESV2 GetConfigurationSetEventDestinations action.
 * \value GetContactAction SESV2 GetContact action.
 * \value GetContactListAction SESV2 GetContactList action.
 * \value GetCustomVerificationEmailTemplateAction SESV2 GetCustomVerificationEmailTemplate action.
 * \value GetDedicatedIpAction SESV2 GetDedicatedIp action.
 * \value GetDedicatedIpsAction SESV2 GetDedicatedIps action.
 * \value GetDeliverabilityDashboardOptionsAction SESV2 GetDeliverabilityDashboardOptions action.
 * \value GetDeliverabilityTestReportAction SESV2 GetDeliverabilityTestReport action.
 * \value GetDomainDeliverabilityCampaignAction SESV2 GetDomainDeliverabilityCampaign action.
 * \value GetDomainStatisticsReportAction SESV2 GetDomainStatisticsReport action.
 * \value GetEmailIdentityAction SESV2 GetEmailIdentity action.
 * \value GetEmailIdentityPoliciesAction SESV2 GetEmailIdentityPolicies action.
 * \value GetEmailTemplateAction SESV2 GetEmailTemplate action.
 * \value GetImportJobAction SESV2 GetImportJob action.
 * \value GetSuppressedDestinationAction SESV2 GetSuppressedDestination action.
 * \value ListConfigurationSetsAction SESV2 ListConfigurationSets action.
 * \value ListContactListsAction SESV2 ListContactLists action.
 * \value ListContactsAction SESV2 ListContacts action.
 * \value ListCustomVerificationEmailTemplatesAction SESV2 ListCustomVerificationEmailTemplates action.
 * \value ListDedicatedIpPoolsAction SESV2 ListDedicatedIpPools action.
 * \value ListDeliverabilityTestReportsAction SESV2 ListDeliverabilityTestReports action.
 * \value ListDomainDeliverabilityCampaignsAction SESV2 ListDomainDeliverabilityCampaigns action.
 * \value ListEmailIdentitiesAction SESV2 ListEmailIdentities action.
 * \value ListEmailTemplatesAction SESV2 ListEmailTemplates action.
 * \value ListImportJobsAction SESV2 ListImportJobs action.
 * \value ListSuppressedDestinationsAction SESV2 ListSuppressedDestinations action.
 * \value ListTagsForResourceAction SESV2 ListTagsForResource action.
 * \value PutAccountDedicatedIpWarmupAttributesAction SESV2 PutAccountDedicatedIpWarmupAttributes action.
 * \value PutAccountDetailsAction SESV2 PutAccountDetails action.
 * \value PutAccountSendingAttributesAction SESV2 PutAccountSendingAttributes action.
 * \value PutAccountSuppressionAttributesAction SESV2 PutAccountSuppressionAttributes action.
 * \value PutConfigurationSetDeliveryOptionsAction SESV2 PutConfigurationSetDeliveryOptions action.
 * \value PutConfigurationSetReputationOptionsAction SESV2 PutConfigurationSetReputationOptions action.
 * \value PutConfigurationSetSendingOptionsAction SESV2 PutConfigurationSetSendingOptions action.
 * \value PutConfigurationSetSuppressionOptionsAction SESV2 PutConfigurationSetSuppressionOptions action.
 * \value PutConfigurationSetTrackingOptionsAction SESV2 PutConfigurationSetTrackingOptions action.
 * \value PutDedicatedIpInPoolAction SESV2 PutDedicatedIpInPool action.
 * \value PutDedicatedIpWarmupAttributesAction SESV2 PutDedicatedIpWarmupAttributes action.
 * \value PutDeliverabilityDashboardOptionAction SESV2 PutDeliverabilityDashboardOption action.
 * \value PutEmailIdentityConfigurationSetAttributesAction SESV2 PutEmailIdentityConfigurationSetAttributes action.
 * \value PutEmailIdentityDkimAttributesAction SESV2 PutEmailIdentityDkimAttributes action.
 * \value PutEmailIdentityDkimSigningAttributesAction SESV2 PutEmailIdentityDkimSigningAttributes action.
 * \value PutEmailIdentityFeedbackAttributesAction SESV2 PutEmailIdentityFeedbackAttributes action.
 * \value PutEmailIdentityMailFromAttributesAction SESV2 PutEmailIdentityMailFromAttributes action.
 * \value PutSuppressedDestinationAction SESV2 PutSuppressedDestination action.
 * \value SendBulkEmailAction SESV2 SendBulkEmail action.
 * \value SendCustomVerificationEmailAction SESV2 SendCustomVerificationEmail action.
 * \value SendEmailAction SESV2 SendEmail action.
 * \value TagResourceAction SESV2 TagResource action.
 * \value TestRenderEmailTemplateAction SESV2 TestRenderEmailTemplate action.
 * \value UntagResourceAction SESV2 UntagResource action.
 * \value UpdateConfigurationSetEventDestinationAction SESV2 UpdateConfigurationSetEventDestination action.
 * \value UpdateContactAction SESV2 UpdateContact action.
 * \value UpdateContactListAction SESV2 UpdateContactList action.
 * \value UpdateCustomVerificationEmailTemplateAction SESV2 UpdateCustomVerificationEmailTemplate action.
 * \value UpdateEmailIdentityPolicyAction SESV2 UpdateEmailIdentityPolicy action.
 * \value UpdateEmailTemplateAction SESV2 UpdateEmailTemplate action.
 */

/*!
 * Constructs a Sesv2Request object for SESV2 \a action.
 */
Sesv2Request::Sesv2Request(const Action action)
    : d_ptr(new Sesv2RequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
Sesv2Request::Sesv2Request(const Sesv2Request &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new Sesv2RequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the Sesv2Request object to be equal to \a other.
 */
Sesv2Request& Sesv2Request::operator=(const Sesv2Request &other)
{
    Q_D(Sesv2Request);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa Sesv2Request object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from Sesv2RequestPrivate.
 */
Sesv2Request::Sesv2Request(Sesv2RequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the SESV2 action to be performed by this request.
 */
Sesv2Request::Action Sesv2Request::action() const
{
    Q_D(const Sesv2Request);
    return d->action;
}

/*!
 * Returns the name of the SESV2 action to be performed by this request.
 */
QString Sesv2Request::actionString() const
{
    return Sesv2RequestPrivate::toString(action());
}

/*!
 * Returns the SESV2 API version implemented by this request.
 */
QString Sesv2Request::apiVersion() const
{
    Q_D(const Sesv2Request);
    return d->apiVersion;
}

/*!
 * Sets the SESV2 action to be performed by this request to \a action.
 */
void Sesv2Request::setAction(const Action action)
{
    Q_D(Sesv2Request);
    d->action = action;
}

/*!
 * Sets the SESV2 API version to include in this request to \a version.
 */
void Sesv2Request::setApiVersion(const QString &version)
{
    Q_D(Sesv2Request);
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
bool Sesv2Request::operator==(const Sesv2Request &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid SESV2 queue name.
 *
 * @par From SESV2 FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid SESV2 queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool Sesv2Request::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int Sesv2Request::clearParameter(const QString &name)
{
    Q_D(Sesv2Request);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void Sesv2Request::clearParameters()
{
    Q_D(Sesv2Request);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant Sesv2Request::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const Sesv2Request);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &Sesv2Request::parameters() const
{
    Q_D(const Sesv2Request);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void Sesv2Request::setParameter(const QString &name, const QVariant &value)
{
    Q_D(Sesv2Request);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void Sesv2Request::setParameters(const QVariantMap &parameters)
{
    Q_D(Sesv2Request);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the SESV2 request using the given
 * \a endpoint.
 *
 * This SESV2 implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest Sesv2Request::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const Sesv2Request);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::SESV2::Sesv2RequestPrivate
 * \brief The Sesv2RequestPrivate class provides private implementation for Sesv2Request.
 * \internal
 *
 * \inmodule QtAwsSESV2
 */

/*!
 * Constructs a Sesv2RequestPrivate object for SESV2 \a action,
 * with public implementation \a q.
 */
Sesv2RequestPrivate::Sesv2RequestPrivate(const Sesv2Request::Action action, Sesv2Request * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the Sesv2Request class's copy constructor.
 */
Sesv2RequestPrivate::Sesv2RequestPrivate(const Sesv2RequestPrivate &other,
                                     Sesv2Request * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts Sesv2Request::Action enumerator values to their respective
 * string representations, appropriate for use with the SESV2 service's Action
 * query parameters.
 */
QString Sesv2RequestPrivate::toString(const Sesv2Request::Action &action)
{
    #define ActionToString(action) \
        case Sesv2Request::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace SESV2
} // namespace QtAws
