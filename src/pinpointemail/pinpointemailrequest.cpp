// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "pinpointemailrequest.h"
#include "pinpointemailrequest_p.h"

namespace QtAws {
namespace PinpointEmail {

/*!
 * \class QtAws::PinpointEmail::PinpointEmailRequest
 * \brief The PinpointEmailRequest class provides an interface for PinpointEmail requests.
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * \enum PinpointEmailRequest::Action
 *
 * This enum describes the actions that can be performed as PinpointEmail
 * requests.
 *
 * \value CreateConfigurationSetAction PinpointEmail CreateConfigurationSet action.
 * \value CreateConfigurationSetEventDestinationAction PinpointEmail CreateConfigurationSetEventDestination action.
 * \value CreateDedicatedIpPoolAction PinpointEmail CreateDedicatedIpPool action.
 * \value CreateDeliverabilityTestReportAction PinpointEmail CreateDeliverabilityTestReport action.
 * \value CreateEmailIdentityAction PinpointEmail CreateEmailIdentity action.
 * \value DeleteConfigurationSetAction PinpointEmail DeleteConfigurationSet action.
 * \value DeleteConfigurationSetEventDestinationAction PinpointEmail DeleteConfigurationSetEventDestination action.
 * \value DeleteDedicatedIpPoolAction PinpointEmail DeleteDedicatedIpPool action.
 * \value DeleteEmailIdentityAction PinpointEmail DeleteEmailIdentity action.
 * \value GetAccountAction PinpointEmail GetAccount action.
 * \value GetBlacklistReportsAction PinpointEmail GetBlacklistReports action.
 * \value GetConfigurationSetAction PinpointEmail GetConfigurationSet action.
 * \value GetConfigurationSetEventDestinationsAction PinpointEmail GetConfigurationSetEventDestinations action.
 * \value GetDedicatedIpAction PinpointEmail GetDedicatedIp action.
 * \value GetDedicatedIpsAction PinpointEmail GetDedicatedIps action.
 * \value GetDeliverabilityDashboardOptionsAction PinpointEmail GetDeliverabilityDashboardOptions action.
 * \value GetDeliverabilityTestReportAction PinpointEmail GetDeliverabilityTestReport action.
 * \value GetDomainDeliverabilityCampaignAction PinpointEmail GetDomainDeliverabilityCampaign action.
 * \value GetDomainStatisticsReportAction PinpointEmail GetDomainStatisticsReport action.
 * \value GetEmailIdentityAction PinpointEmail GetEmailIdentity action.
 * \value ListConfigurationSetsAction PinpointEmail ListConfigurationSets action.
 * \value ListDedicatedIpPoolsAction PinpointEmail ListDedicatedIpPools action.
 * \value ListDeliverabilityTestReportsAction PinpointEmail ListDeliverabilityTestReports action.
 * \value ListDomainDeliverabilityCampaignsAction PinpointEmail ListDomainDeliverabilityCampaigns action.
 * \value ListEmailIdentitiesAction PinpointEmail ListEmailIdentities action.
 * \value ListTagsForResourceAction PinpointEmail ListTagsForResource action.
 * \value PutAccountDedicatedIpWarmupAttributesAction PinpointEmail PutAccountDedicatedIpWarmupAttributes action.
 * \value PutAccountSendingAttributesAction PinpointEmail PutAccountSendingAttributes action.
 * \value PutConfigurationSetDeliveryOptionsAction PinpointEmail PutConfigurationSetDeliveryOptions action.
 * \value PutConfigurationSetReputationOptionsAction PinpointEmail PutConfigurationSetReputationOptions action.
 * \value PutConfigurationSetSendingOptionsAction PinpointEmail PutConfigurationSetSendingOptions action.
 * \value PutConfigurationSetTrackingOptionsAction PinpointEmail PutConfigurationSetTrackingOptions action.
 * \value PutDedicatedIpInPoolAction PinpointEmail PutDedicatedIpInPool action.
 * \value PutDedicatedIpWarmupAttributesAction PinpointEmail PutDedicatedIpWarmupAttributes action.
 * \value PutDeliverabilityDashboardOptionAction PinpointEmail PutDeliverabilityDashboardOption action.
 * \value PutEmailIdentityDkimAttributesAction PinpointEmail PutEmailIdentityDkimAttributes action.
 * \value PutEmailIdentityFeedbackAttributesAction PinpointEmail PutEmailIdentityFeedbackAttributes action.
 * \value PutEmailIdentityMailFromAttributesAction PinpointEmail PutEmailIdentityMailFromAttributes action.
 * \value SendEmailAction PinpointEmail SendEmail action.
 * \value TagResourceAction PinpointEmail TagResource action.
 * \value UntagResourceAction PinpointEmail UntagResource action.
 * \value UpdateConfigurationSetEventDestinationAction PinpointEmail UpdateConfigurationSetEventDestination action.
 */

/*!
 * Constructs a PinpointEmailRequest object for PinpointEmail \a action.
 */
PinpointEmailRequest::PinpointEmailRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new PinpointEmailRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PinpointEmailRequest::PinpointEmailRequest(const PinpointEmailRequest &other)
    : QtAws::Core::AwsAbstractRequest(new PinpointEmailRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PinpointEmailRequest object to be equal to \a other.
 */
PinpointEmailRequest& PinpointEmailRequest::operator=(const PinpointEmailRequest &other)
{
    Q_D(PinpointEmailRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PinpointEmailRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointEmailRequestPrivate.
 */
PinpointEmailRequest::PinpointEmailRequest(PinpointEmailRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the PinpointEmail action to be performed by this request.
 */
PinpointEmailRequest::Action PinpointEmailRequest::action() const
{
    Q_D(const PinpointEmailRequest);
    return d->action;
}

/*!
 * Returns the name of the PinpointEmail action to be performed by this request.
 */
QString PinpointEmailRequest::actionString() const
{
    return PinpointEmailRequestPrivate::toString(action());
}

/*!
 * Returns the PinpointEmail API version implemented by this request.
 */
QString PinpointEmailRequest::apiVersion() const
{
    Q_D(const PinpointEmailRequest);
    return d->apiVersion;
}

/*!
 * Sets the PinpointEmail action to be performed by this request to \a action.
 */
void PinpointEmailRequest::setAction(const Action action)
{
    Q_D(PinpointEmailRequest);
    d->action = action;
}

/*!
 * Sets the PinpointEmail API version to include in this request to \a version.
 */
void PinpointEmailRequest::setApiVersion(const QString &version)
{
    Q_D(PinpointEmailRequest);
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
bool PinpointEmailRequest::operator==(const PinpointEmailRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid PinpointEmail queue name.
 *
 * @par From PinpointEmail FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid PinpointEmail queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PinpointEmailRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PinpointEmailRequest::clearParameter(const QString &name)
{
    Q_D(PinpointEmailRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PinpointEmailRequest::clearParameters()
{
    Q_D(PinpointEmailRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PinpointEmailRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PinpointEmailRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PinpointEmailRequest::parameters() const
{
    Q_D(const PinpointEmailRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PinpointEmailRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PinpointEmailRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PinpointEmailRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PinpointEmailRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the PinpointEmail request using the given
 * \a endpoint.
 *
 * This PinpointEmail implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PinpointEmailRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PinpointEmailRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::PinpointEmail::PinpointEmailRequestPrivate
 * \brief The PinpointEmailRequestPrivate class provides private implementation for PinpointEmailRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointEmail
 */

/*!
 * Constructs a PinpointEmailRequestPrivate object for PinpointEmail \a action,
 * with public implementation \a q.
 */
PinpointEmailRequestPrivate::PinpointEmailRequestPrivate(const PinpointEmailRequest::Action action, PinpointEmailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-07-26"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PinpointEmailRequest class's copy constructor.
 */
PinpointEmailRequestPrivate::PinpointEmailRequestPrivate(const PinpointEmailRequestPrivate &other,
                                     PinpointEmailRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PinpointEmailRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the PinpointEmail service's Action
 * query parameters.
 */
QString PinpointEmailRequestPrivate::toString(const PinpointEmailRequest::Action &action)
{
    #define ActionToString(action) \
        case PinpointEmailRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateConfigurationSet);
        ActionToString(CreateConfigurationSetEventDestination);
        ActionToString(CreateDedicatedIpPool);
        ActionToString(CreateDeliverabilityTestReport);
        ActionToString(CreateEmailIdentity);
        ActionToString(DeleteConfigurationSet);
        ActionToString(DeleteConfigurationSetEventDestination);
        ActionToString(DeleteDedicatedIpPool);
        ActionToString(DeleteEmailIdentity);
        ActionToString(GetAccount);
        ActionToString(GetBlacklistReports);
        ActionToString(GetConfigurationSet);
        ActionToString(GetConfigurationSetEventDestinations);
        ActionToString(GetDedicatedIp);
        ActionToString(GetDedicatedIps);
        ActionToString(GetDeliverabilityDashboardOptions);
        ActionToString(GetDeliverabilityTestReport);
        ActionToString(GetDomainDeliverabilityCampaign);
        ActionToString(GetDomainStatisticsReport);
        ActionToString(GetEmailIdentity);
        ActionToString(ListConfigurationSets);
        ActionToString(ListDedicatedIpPools);
        ActionToString(ListDeliverabilityTestReports);
        ActionToString(ListDomainDeliverabilityCampaigns);
        ActionToString(ListEmailIdentities);
        ActionToString(ListTagsForResource);
        ActionToString(PutAccountDedicatedIpWarmupAttributes);
        ActionToString(PutAccountSendingAttributes);
        ActionToString(PutConfigurationSetDeliveryOptions);
        ActionToString(PutConfigurationSetReputationOptions);
        ActionToString(PutConfigurationSetSendingOptions);
        ActionToString(PutConfigurationSetTrackingOptions);
        ActionToString(PutDedicatedIpInPool);
        ActionToString(PutDedicatedIpWarmupAttributes);
        ActionToString(PutDeliverabilityDashboardOption);
        ActionToString(PutEmailIdentityDkimAttributes);
        ActionToString(PutEmailIdentityFeedbackAttributes);
        ActionToString(PutEmailIdentityMailFromAttributes);
        ActionToString(SendEmail);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateConfigurationSetEventDestination);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace PinpointEmail
} // namespace QtAws
