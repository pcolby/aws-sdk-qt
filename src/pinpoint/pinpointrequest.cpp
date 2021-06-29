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

#include "pinpointrequest.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::PinpointRequest
 * \brief The PinpointRequest class provides an interface for Pinpoint requests.
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * \enum PinpointRequest::Action
 *
 * This enum describes the actions that can be performed as Pinpoint
 * requests.
 *
 * \value CreateAppAction Pinpoint CreateApp action.
 * \value CreateCampaignAction Pinpoint CreateCampaign action.
 * \value CreateEmailTemplateAction Pinpoint CreateEmailTemplate action.
 * \value CreateExportJobAction Pinpoint CreateExportJob action.
 * \value CreateImportJobAction Pinpoint CreateImportJob action.
 * \value CreateJourneyAction Pinpoint CreateJourney action.
 * \value CreatePushTemplateAction Pinpoint CreatePushTemplate action.
 * \value CreateRecommenderConfigurationAction Pinpoint CreateRecommenderConfiguration action.
 * \value CreateSegmentAction Pinpoint CreateSegment action.
 * \value CreateSmsTemplateAction Pinpoint CreateSmsTemplate action.
 * \value CreateVoiceTemplateAction Pinpoint CreateVoiceTemplate action.
 * \value DeleteAdmChannelAction Pinpoint DeleteAdmChannel action.
 * \value DeleteApnsChannelAction Pinpoint DeleteApnsChannel action.
 * \value DeleteApnsSandboxChannelAction Pinpoint DeleteApnsSandboxChannel action.
 * \value DeleteApnsVoipChannelAction Pinpoint DeleteApnsVoipChannel action.
 * \value DeleteApnsVoipSandboxChannelAction Pinpoint DeleteApnsVoipSandboxChannel action.
 * \value DeleteAppAction Pinpoint DeleteApp action.
 * \value DeleteBaiduChannelAction Pinpoint DeleteBaiduChannel action.
 * \value DeleteCampaignAction Pinpoint DeleteCampaign action.
 * \value DeleteEmailChannelAction Pinpoint DeleteEmailChannel action.
 * \value DeleteEmailTemplateAction Pinpoint DeleteEmailTemplate action.
 * \value DeleteEndpointAction Pinpoint DeleteEndpoint action.
 * \value DeleteEventStreamAction Pinpoint DeleteEventStream action.
 * \value DeleteGcmChannelAction Pinpoint DeleteGcmChannel action.
 * \value DeleteJourneyAction Pinpoint DeleteJourney action.
 * \value DeletePushTemplateAction Pinpoint DeletePushTemplate action.
 * \value DeleteRecommenderConfigurationAction Pinpoint DeleteRecommenderConfiguration action.
 * \value DeleteSegmentAction Pinpoint DeleteSegment action.
 * \value DeleteSmsChannelAction Pinpoint DeleteSmsChannel action.
 * \value DeleteSmsTemplateAction Pinpoint DeleteSmsTemplate action.
 * \value DeleteUserEndpointsAction Pinpoint DeleteUserEndpoints action.
 * \value DeleteVoiceChannelAction Pinpoint DeleteVoiceChannel action.
 * \value DeleteVoiceTemplateAction Pinpoint DeleteVoiceTemplate action.
 * \value GetAdmChannelAction Pinpoint GetAdmChannel action.
 * \value GetApnsChannelAction Pinpoint GetApnsChannel action.
 * \value GetApnsSandboxChannelAction Pinpoint GetApnsSandboxChannel action.
 * \value GetApnsVoipChannelAction Pinpoint GetApnsVoipChannel action.
 * \value GetApnsVoipSandboxChannelAction Pinpoint GetApnsVoipSandboxChannel action.
 * \value GetAppAction Pinpoint GetApp action.
 * \value GetApplicationDateRangeKpiAction Pinpoint GetApplicationDateRangeKpi action.
 * \value GetApplicationSettingsAction Pinpoint GetApplicationSettings action.
 * \value GetAppsAction Pinpoint GetApps action.
 * \value GetBaiduChannelAction Pinpoint GetBaiduChannel action.
 * \value GetCampaignAction Pinpoint GetCampaign action.
 * \value GetCampaignActivitiesAction Pinpoint GetCampaignActivities action.
 * \value GetCampaignDateRangeKpiAction Pinpoint GetCampaignDateRangeKpi action.
 * \value GetCampaignVersionAction Pinpoint GetCampaignVersion action.
 * \value GetCampaignVersionsAction Pinpoint GetCampaignVersions action.
 * \value GetCampaignsAction Pinpoint GetCampaigns action.
 * \value GetChannelsAction Pinpoint GetChannels action.
 * \value GetEmailChannelAction Pinpoint GetEmailChannel action.
 * \value GetEmailTemplateAction Pinpoint GetEmailTemplate action.
 * \value GetEndpointAction Pinpoint GetEndpoint action.
 * \value GetEventStreamAction Pinpoint GetEventStream action.
 * \value GetExportJobAction Pinpoint GetExportJob action.
 * \value GetExportJobsAction Pinpoint GetExportJobs action.
 * \value GetGcmChannelAction Pinpoint GetGcmChannel action.
 * \value GetImportJobAction Pinpoint GetImportJob action.
 * \value GetImportJobsAction Pinpoint GetImportJobs action.
 * \value GetJourneyAction Pinpoint GetJourney action.
 * \value GetJourneyDateRangeKpiAction Pinpoint GetJourneyDateRangeKpi action.
 * \value GetJourneyExecutionActivityMetricsAction Pinpoint GetJourneyExecutionActivityMetrics action.
 * \value GetJourneyExecutionMetricsAction Pinpoint GetJourneyExecutionMetrics action.
 * \value GetPushTemplateAction Pinpoint GetPushTemplate action.
 * \value GetRecommenderConfigurationAction Pinpoint GetRecommenderConfiguration action.
 * \value GetRecommenderConfigurationsAction Pinpoint GetRecommenderConfigurations action.
 * \value GetSegmentAction Pinpoint GetSegment action.
 * \value GetSegmentExportJobsAction Pinpoint GetSegmentExportJobs action.
 * \value GetSegmentImportJobsAction Pinpoint GetSegmentImportJobs action.
 * \value GetSegmentVersionAction Pinpoint GetSegmentVersion action.
 * \value GetSegmentVersionsAction Pinpoint GetSegmentVersions action.
 * \value GetSegmentsAction Pinpoint GetSegments action.
 * \value GetSmsChannelAction Pinpoint GetSmsChannel action.
 * \value GetSmsTemplateAction Pinpoint GetSmsTemplate action.
 * \value GetUserEndpointsAction Pinpoint GetUserEndpoints action.
 * \value GetVoiceChannelAction Pinpoint GetVoiceChannel action.
 * \value GetVoiceTemplateAction Pinpoint GetVoiceTemplate action.
 * \value ListJourneysAction Pinpoint ListJourneys action.
 * \value ListTagsForResourceAction Pinpoint ListTagsForResource action.
 * \value ListTemplateVersionsAction Pinpoint ListTemplateVersions action.
 * \value ListTemplatesAction Pinpoint ListTemplates action.
 * \value PhoneNumberValidateAction Pinpoint PhoneNumberValidate action.
 * \value PutEventStreamAction Pinpoint PutEventStream action.
 * \value PutEventsAction Pinpoint PutEvents action.
 * \value RemoveAttributesAction Pinpoint RemoveAttributes action.
 * \value SendMessagesAction Pinpoint SendMessages action.
 * \value SendUsersMessagesAction Pinpoint SendUsersMessages action.
 * \value TagResourceAction Pinpoint TagResource action.
 * \value UntagResourceAction Pinpoint UntagResource action.
 * \value UpdateAdmChannelAction Pinpoint UpdateAdmChannel action.
 * \value UpdateApnsChannelAction Pinpoint UpdateApnsChannel action.
 * \value UpdateApnsSandboxChannelAction Pinpoint UpdateApnsSandboxChannel action.
 * \value UpdateApnsVoipChannelAction Pinpoint UpdateApnsVoipChannel action.
 * \value UpdateApnsVoipSandboxChannelAction Pinpoint UpdateApnsVoipSandboxChannel action.
 * \value UpdateApplicationSettingsAction Pinpoint UpdateApplicationSettings action.
 * \value UpdateBaiduChannelAction Pinpoint UpdateBaiduChannel action.
 * \value UpdateCampaignAction Pinpoint UpdateCampaign action.
 * \value UpdateEmailChannelAction Pinpoint UpdateEmailChannel action.
 * \value UpdateEmailTemplateAction Pinpoint UpdateEmailTemplate action.
 * \value UpdateEndpointAction Pinpoint UpdateEndpoint action.
 * \value UpdateEndpointsBatchAction Pinpoint UpdateEndpointsBatch action.
 * \value UpdateGcmChannelAction Pinpoint UpdateGcmChannel action.
 * \value UpdateJourneyAction Pinpoint UpdateJourney action.
 * \value UpdateJourneyStateAction Pinpoint UpdateJourneyState action.
 * \value UpdatePushTemplateAction Pinpoint UpdatePushTemplate action.
 * \value UpdateRecommenderConfigurationAction Pinpoint UpdateRecommenderConfiguration action.
 * \value UpdateSegmentAction Pinpoint UpdateSegment action.
 * \value UpdateSmsChannelAction Pinpoint UpdateSmsChannel action.
 * \value UpdateSmsTemplateAction Pinpoint UpdateSmsTemplate action.
 * \value UpdateTemplateActiveVersionAction Pinpoint UpdateTemplateActiveVersion action.
 * \value UpdateVoiceChannelAction Pinpoint UpdateVoiceChannel action.
 * \value UpdateVoiceTemplateAction Pinpoint UpdateVoiceTemplate action.
 */

/*!
 * Constructs a PinpointRequest object for Pinpoint \a action.
 */
PinpointRequest::PinpointRequest(const Action action)
    : d_ptr(new PinpointRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
PinpointRequest::PinpointRequest(const PinpointRequest &other)
    : QtAws::Core::AwsAbstractRequest(*this),
      d_ptr(new PinpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the PinpointRequest object to be equal to \a other.
 */
PinpointRequest& PinpointRequest::operator=(const PinpointRequest &other)
{
    Q_D(PinpointRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa PinpointRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PinpointRequestPrivate.
 */
PinpointRequest::PinpointRequest(PinpointRequestPrivate * const d) : d_ptr(d)
{

}

/*!
 * Returns the Pinpoint action to be performed by this request.
 */
PinpointRequest::Action PinpointRequest::action() const
{
    Q_D(const PinpointRequest);
    return d->action;
}

/*!
 * Returns the name of the Pinpoint action to be performed by this request.
 */
QString PinpointRequest::actionString() const
{
    return PinpointRequestPrivate::toString(action());
}

/*!
 * Returns the Pinpoint API version implemented by this request.
 */
QString PinpointRequest::apiVersion() const
{
    Q_D(const PinpointRequest);
    return d->apiVersion;
}

/*!
 * Sets the Pinpoint action to be performed by this request to \a action.
 */
void PinpointRequest::setAction(const Action action)
{
    Q_D(PinpointRequest);
    d->action = action;
}

/*!
 * Sets the Pinpoint API version to include in this request to \a version.
 */
void PinpointRequest::setApiVersion(const QString &version)
{
    Q_D(PinpointRequest);
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
bool PinpointRequest::operator==(const PinpointRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Pinpoint queue name.
 *
 * @par From Pinpoint FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Pinpoint queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool PinpointRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int PinpointRequest::clearParameter(const QString &name)
{
    Q_D(PinpointRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void PinpointRequest::clearParameters()
{
    Q_D(PinpointRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant PinpointRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const PinpointRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &PinpointRequest::parameters() const
{
    Q_D(const PinpointRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void PinpointRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(PinpointRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void PinpointRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(PinpointRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Pinpoint request using the given
 * \a endpoint.
 *
 * This Pinpoint implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest PinpointRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const PinpointRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Pinpoint::PinpointRequestPrivate
 * \brief The PinpointRequestPrivate class provides private implementation for PinpointRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a PinpointRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
PinpointRequestPrivate::PinpointRequestPrivate(const PinpointRequest::Action action, PinpointRequest * const q)
    : action(action), apiVersion(QLatin1String("2012-11-05")), q_ptr(q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the PinpointRequest class's copy constructor.
 */
PinpointRequestPrivate::PinpointRequestPrivate(const PinpointRequestPrivate &other,
                                     PinpointRequest * const q)
    : action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters), q_ptr(q)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts PinpointRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Pinpoint service's Action
 * query parameters.
 */
QString PinpointRequestPrivate::toString(const PinpointRequest::Action &action)
{
    #define ActionToString(action) \
        case PinpointRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CreateApp);
        ActionToString(CreateCampaign);
        ActionToString(CreateEmailTemplate);
        ActionToString(CreateExportJob);
        ActionToString(CreateImportJob);
        ActionToString(CreateJourney);
        ActionToString(CreatePushTemplate);
        ActionToString(CreateRecommenderConfiguration);
        ActionToString(CreateSegment);
        ActionToString(CreateSmsTemplate);
        ActionToString(CreateVoiceTemplate);
        ActionToString(DeleteAdmChannel);
        ActionToString(DeleteApnsChannel);
        ActionToString(DeleteApnsSandboxChannel);
        ActionToString(DeleteApnsVoipChannel);
        ActionToString(DeleteApnsVoipSandboxChannel);
        ActionToString(DeleteApp);
        ActionToString(DeleteBaiduChannel);
        ActionToString(DeleteCampaign);
        ActionToString(DeleteEmailChannel);
        ActionToString(DeleteEmailTemplate);
        ActionToString(DeleteEndpoint);
        ActionToString(DeleteEventStream);
        ActionToString(DeleteGcmChannel);
        ActionToString(DeleteJourney);
        ActionToString(DeletePushTemplate);
        ActionToString(DeleteRecommenderConfiguration);
        ActionToString(DeleteSegment);
        ActionToString(DeleteSmsChannel);
        ActionToString(DeleteSmsTemplate);
        ActionToString(DeleteUserEndpoints);
        ActionToString(DeleteVoiceChannel);
        ActionToString(DeleteVoiceTemplate);
        ActionToString(GetAdmChannel);
        ActionToString(GetApnsChannel);
        ActionToString(GetApnsSandboxChannel);
        ActionToString(GetApnsVoipChannel);
        ActionToString(GetApnsVoipSandboxChannel);
        ActionToString(GetApp);
        ActionToString(GetApplicationDateRangeKpi);
        ActionToString(GetApplicationSettings);
        ActionToString(GetApps);
        ActionToString(GetBaiduChannel);
        ActionToString(GetCampaign);
        ActionToString(GetCampaignActivities);
        ActionToString(GetCampaignDateRangeKpi);
        ActionToString(GetCampaignVersion);
        ActionToString(GetCampaignVersions);
        ActionToString(GetCampaigns);
        ActionToString(GetChannels);
        ActionToString(GetEmailChannel);
        ActionToString(GetEmailTemplate);
        ActionToString(GetEndpoint);
        ActionToString(GetEventStream);
        ActionToString(GetExportJob);
        ActionToString(GetExportJobs);
        ActionToString(GetGcmChannel);
        ActionToString(GetImportJob);
        ActionToString(GetImportJobs);
        ActionToString(GetJourney);
        ActionToString(GetJourneyDateRangeKpi);
        ActionToString(GetJourneyExecutionActivityMetrics);
        ActionToString(GetJourneyExecutionMetrics);
        ActionToString(GetPushTemplate);
        ActionToString(GetRecommenderConfiguration);
        ActionToString(GetRecommenderConfigurations);
        ActionToString(GetSegment);
        ActionToString(GetSegmentExportJobs);
        ActionToString(GetSegmentImportJobs);
        ActionToString(GetSegmentVersion);
        ActionToString(GetSegmentVersions);
        ActionToString(GetSegments);
        ActionToString(GetSmsChannel);
        ActionToString(GetSmsTemplate);
        ActionToString(GetUserEndpoints);
        ActionToString(GetVoiceChannel);
        ActionToString(GetVoiceTemplate);
        ActionToString(ListJourneys);
        ActionToString(ListTagsForResource);
        ActionToString(ListTemplateVersions);
        ActionToString(ListTemplates);
        ActionToString(PhoneNumberValidate);
        ActionToString(PutEventStream);
        ActionToString(PutEvents);
        ActionToString(RemoveAttributes);
        ActionToString(SendMessages);
        ActionToString(SendUsersMessages);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateAdmChannel);
        ActionToString(UpdateApnsChannel);
        ActionToString(UpdateApnsSandboxChannel);
        ActionToString(UpdateApnsVoipChannel);
        ActionToString(UpdateApnsVoipSandboxChannel);
        ActionToString(UpdateApplicationSettings);
        ActionToString(UpdateBaiduChannel);
        ActionToString(UpdateCampaign);
        ActionToString(UpdateEmailChannel);
        ActionToString(UpdateEmailTemplate);
        ActionToString(UpdateEndpoint);
        ActionToString(UpdateEndpointsBatch);
        ActionToString(UpdateGcmChannel);
        ActionToString(UpdateJourney);
        ActionToString(UpdateJourneyState);
        ActionToString(UpdatePushTemplate);
        ActionToString(UpdateRecommenderConfiguration);
        ActionToString(UpdateSegment);
        ActionToString(UpdateSmsChannel);
        ActionToString(UpdateSmsTemplate);
        ActionToString(UpdateTemplateActiveVersion);
        ActionToString(UpdateVoiceChannel);
        ActionToString(UpdateVoiceTemplate);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Pinpoint
} // namespace QtAws
