// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "chimerequest.h"
#include "chimerequest_p.h"

namespace QtAws {
namespace Chime {

/*!
 * \class QtAws::Chime::ChimeRequest
 * \brief The ChimeRequest class provides an interface for Chime requests.
 *
 * \inmodule QtAwsChime
 */

/*!
 * \enum ChimeRequest::Action
 *
 * This enum describes the actions that can be performed as Chime
 * requests.
 *
 * \value AssociatePhoneNumberWithUserAction Chime AssociatePhoneNumberWithUser action.
 * \value AssociatePhoneNumbersWithVoiceConnectorAction Chime AssociatePhoneNumbersWithVoiceConnector action.
 * \value AssociatePhoneNumbersWithVoiceConnectorGroupAction Chime AssociatePhoneNumbersWithVoiceConnectorGroup action.
 * \value AssociateSigninDelegateGroupsWithAccountAction Chime AssociateSigninDelegateGroupsWithAccount action.
 * \value BatchCreateAttendeeAction Chime BatchCreateAttendee action.
 * \value BatchCreateChannelMembershipAction Chime BatchCreateChannelMembership action.
 * \value BatchCreateRoomMembershipAction Chime BatchCreateRoomMembership action.
 * \value BatchDeletePhoneNumberAction Chime BatchDeletePhoneNumber action.
 * \value BatchSuspendUserAction Chime BatchSuspendUser action.
 * \value BatchUnsuspendUserAction Chime BatchUnsuspendUser action.
 * \value BatchUpdatePhoneNumberAction Chime BatchUpdatePhoneNumber action.
 * \value BatchUpdateUserAction Chime BatchUpdateUser action.
 * \value CreateAccountAction Chime CreateAccount action.
 * \value CreateAppInstanceAction Chime CreateAppInstance action.
 * \value CreateAppInstanceAdminAction Chime CreateAppInstanceAdmin action.
 * \value CreateAppInstanceUserAction Chime CreateAppInstanceUser action.
 * \value CreateAttendeeAction Chime CreateAttendee action.
 * \value CreateBotAction Chime CreateBot action.
 * \value CreateChannelAction Chime CreateChannel action.
 * \value CreateChannelBanAction Chime CreateChannelBan action.
 * \value CreateChannelMembershipAction Chime CreateChannelMembership action.
 * \value CreateChannelModeratorAction Chime CreateChannelModerator action.
 * \value CreateMediaCapturePipelineAction Chime CreateMediaCapturePipeline action.
 * \value CreateMeetingAction Chime CreateMeeting action.
 * \value CreateMeetingDialOutAction Chime CreateMeetingDialOut action.
 * \value CreateMeetingWithAttendeesAction Chime CreateMeetingWithAttendees action.
 * \value CreatePhoneNumberOrderAction Chime CreatePhoneNumberOrder action.
 * \value CreateProxySessionAction Chime CreateProxySession action.
 * \value CreateRoomAction Chime CreateRoom action.
 * \value CreateRoomMembershipAction Chime CreateRoomMembership action.
 * \value CreateSipMediaApplicationAction Chime CreateSipMediaApplication action.
 * \value CreateSipMediaApplicationCallAction Chime CreateSipMediaApplicationCall action.
 * \value CreateSipRuleAction Chime CreateSipRule action.
 * \value CreateUserAction Chime CreateUser action.
 * \value CreateVoiceConnectorAction Chime CreateVoiceConnector action.
 * \value CreateVoiceConnectorGroupAction Chime CreateVoiceConnectorGroup action.
 * \value DeleteAccountAction Chime DeleteAccount action.
 * \value DeleteAppInstanceAction Chime DeleteAppInstance action.
 * \value DeleteAppInstanceAdminAction Chime DeleteAppInstanceAdmin action.
 * \value DeleteAppInstanceStreamingConfigurationsAction Chime DeleteAppInstanceStreamingConfigurations action.
 * \value DeleteAppInstanceUserAction Chime DeleteAppInstanceUser action.
 * \value DeleteAttendeeAction Chime DeleteAttendee action.
 * \value DeleteChannelAction Chime DeleteChannel action.
 * \value DeleteChannelBanAction Chime DeleteChannelBan action.
 * \value DeleteChannelMembershipAction Chime DeleteChannelMembership action.
 * \value DeleteChannelMessageAction Chime DeleteChannelMessage action.
 * \value DeleteChannelModeratorAction Chime DeleteChannelModerator action.
 * \value DeleteEventsConfigurationAction Chime DeleteEventsConfiguration action.
 * \value DeleteMediaCapturePipelineAction Chime DeleteMediaCapturePipeline action.
 * \value DeleteMeetingAction Chime DeleteMeeting action.
 * \value DeletePhoneNumberAction Chime DeletePhoneNumber action.
 * \value DeleteProxySessionAction Chime DeleteProxySession action.
 * \value DeleteRoomAction Chime DeleteRoom action.
 * \value DeleteRoomMembershipAction Chime DeleteRoomMembership action.
 * \value DeleteSipMediaApplicationAction Chime DeleteSipMediaApplication action.
 * \value DeleteSipRuleAction Chime DeleteSipRule action.
 * \value DeleteVoiceConnectorAction Chime DeleteVoiceConnector action.
 * \value DeleteVoiceConnectorEmergencyCallingConfigurationAction Chime DeleteVoiceConnectorEmergencyCallingConfiguration action.
 * \value DeleteVoiceConnectorGroupAction Chime DeleteVoiceConnectorGroup action.
 * \value DeleteVoiceConnectorOriginationAction Chime DeleteVoiceConnectorOrigination action.
 * \value DeleteVoiceConnectorProxyAction Chime DeleteVoiceConnectorProxy action.
 * \value DeleteVoiceConnectorStreamingConfigurationAction Chime DeleteVoiceConnectorStreamingConfiguration action.
 * \value DeleteVoiceConnectorTerminationAction Chime DeleteVoiceConnectorTermination action.
 * \value DeleteVoiceConnectorTerminationCredentialsAction Chime DeleteVoiceConnectorTerminationCredentials action.
 * \value DescribeAppInstanceAction Chime DescribeAppInstance action.
 * \value DescribeAppInstanceAdminAction Chime DescribeAppInstanceAdmin action.
 * \value DescribeAppInstanceUserAction Chime DescribeAppInstanceUser action.
 * \value DescribeChannelAction Chime DescribeChannel action.
 * \value DescribeChannelBanAction Chime DescribeChannelBan action.
 * \value DescribeChannelMembershipAction Chime DescribeChannelMembership action.
 * \value DescribeChannelMembershipForAppInstanceUserAction Chime DescribeChannelMembershipForAppInstanceUser action.
 * \value DescribeChannelModeratedByAppInstanceUserAction Chime DescribeChannelModeratedByAppInstanceUser action.
 * \value DescribeChannelModeratorAction Chime DescribeChannelModerator action.
 * \value DisassociatePhoneNumberFromUserAction Chime DisassociatePhoneNumberFromUser action.
 * \value DisassociatePhoneNumbersFromVoiceConnectorAction Chime DisassociatePhoneNumbersFromVoiceConnector action.
 * \value DisassociatePhoneNumbersFromVoiceConnectorGroupAction Chime DisassociatePhoneNumbersFromVoiceConnectorGroup action.
 * \value DisassociateSigninDelegateGroupsFromAccountAction Chime DisassociateSigninDelegateGroupsFromAccount action.
 * \value GetAccountAction Chime GetAccount action.
 * \value GetAccountSettingsAction Chime GetAccountSettings action.
 * \value GetAppInstanceRetentionSettingsAction Chime GetAppInstanceRetentionSettings action.
 * \value GetAppInstanceStreamingConfigurationsAction Chime GetAppInstanceStreamingConfigurations action.
 * \value GetAttendeeAction Chime GetAttendee action.
 * \value GetBotAction Chime GetBot action.
 * \value GetChannelMessageAction Chime GetChannelMessage action.
 * \value GetEventsConfigurationAction Chime GetEventsConfiguration action.
 * \value GetGlobalSettingsAction Chime GetGlobalSettings action.
 * \value GetMediaCapturePipelineAction Chime GetMediaCapturePipeline action.
 * \value GetMeetingAction Chime GetMeeting action.
 * \value GetMessagingSessionEndpointAction Chime GetMessagingSessionEndpoint action.
 * \value GetPhoneNumberAction Chime GetPhoneNumber action.
 * \value GetPhoneNumberOrderAction Chime GetPhoneNumberOrder action.
 * \value GetPhoneNumberSettingsAction Chime GetPhoneNumberSettings action.
 * \value GetProxySessionAction Chime GetProxySession action.
 * \value GetRetentionSettingsAction Chime GetRetentionSettings action.
 * \value GetRoomAction Chime GetRoom action.
 * \value GetSipMediaApplicationAction Chime GetSipMediaApplication action.
 * \value GetSipMediaApplicationLoggingConfigurationAction Chime GetSipMediaApplicationLoggingConfiguration action.
 * \value GetSipRuleAction Chime GetSipRule action.
 * \value GetUserAction Chime GetUser action.
 * \value GetUserSettingsAction Chime GetUserSettings action.
 * \value GetVoiceConnectorAction Chime GetVoiceConnector action.
 * \value GetVoiceConnectorEmergencyCallingConfigurationAction Chime GetVoiceConnectorEmergencyCallingConfiguration action.
 * \value GetVoiceConnectorGroupAction Chime GetVoiceConnectorGroup action.
 * \value GetVoiceConnectorLoggingConfigurationAction Chime GetVoiceConnectorLoggingConfiguration action.
 * \value GetVoiceConnectorOriginationAction Chime GetVoiceConnectorOrigination action.
 * \value GetVoiceConnectorProxyAction Chime GetVoiceConnectorProxy action.
 * \value GetVoiceConnectorStreamingConfigurationAction Chime GetVoiceConnectorStreamingConfiguration action.
 * \value GetVoiceConnectorTerminationAction Chime GetVoiceConnectorTermination action.
 * \value GetVoiceConnectorTerminationHealthAction Chime GetVoiceConnectorTerminationHealth action.
 * \value InviteUsersAction Chime InviteUsers action.
 * \value ListAccountsAction Chime ListAccounts action.
 * \value ListAppInstanceAdminsAction Chime ListAppInstanceAdmins action.
 * \value ListAppInstanceUsersAction Chime ListAppInstanceUsers action.
 * \value ListAppInstancesAction Chime ListAppInstances action.
 * \value ListAttendeeTagsAction Chime ListAttendeeTags action.
 * \value ListAttendeesAction Chime ListAttendees action.
 * \value ListBotsAction Chime ListBots action.
 * \value ListChannelBansAction Chime ListChannelBans action.
 * \value ListChannelMembershipsAction Chime ListChannelMemberships action.
 * \value ListChannelMembershipsForAppInstanceUserAction Chime ListChannelMembershipsForAppInstanceUser action.
 * \value ListChannelMessagesAction Chime ListChannelMessages action.
 * \value ListChannelModeratorsAction Chime ListChannelModerators action.
 * \value ListChannelsAction Chime ListChannels action.
 * \value ListChannelsModeratedByAppInstanceUserAction Chime ListChannelsModeratedByAppInstanceUser action.
 * \value ListMediaCapturePipelinesAction Chime ListMediaCapturePipelines action.
 * \value ListMeetingTagsAction Chime ListMeetingTags action.
 * \value ListMeetingsAction Chime ListMeetings action.
 * \value ListPhoneNumberOrdersAction Chime ListPhoneNumberOrders action.
 * \value ListPhoneNumbersAction Chime ListPhoneNumbers action.
 * \value ListProxySessionsAction Chime ListProxySessions action.
 * \value ListRoomMembershipsAction Chime ListRoomMemberships action.
 * \value ListRoomsAction Chime ListRooms action.
 * \value ListSipMediaApplicationsAction Chime ListSipMediaApplications action.
 * \value ListSipRulesAction Chime ListSipRules action.
 * \value ListSupportedPhoneNumberCountriesAction Chime ListSupportedPhoneNumberCountries action.
 * \value ListTagsForResourceAction Chime ListTagsForResource action.
 * \value ListUsersAction Chime ListUsers action.
 * \value ListVoiceConnectorGroupsAction Chime ListVoiceConnectorGroups action.
 * \value ListVoiceConnectorTerminationCredentialsAction Chime ListVoiceConnectorTerminationCredentials action.
 * \value ListVoiceConnectorsAction Chime ListVoiceConnectors action.
 * \value LogoutUserAction Chime LogoutUser action.
 * \value PutAppInstanceRetentionSettingsAction Chime PutAppInstanceRetentionSettings action.
 * \value PutAppInstanceStreamingConfigurationsAction Chime PutAppInstanceStreamingConfigurations action.
 * \value PutEventsConfigurationAction Chime PutEventsConfiguration action.
 * \value PutRetentionSettingsAction Chime PutRetentionSettings action.
 * \value PutSipMediaApplicationLoggingConfigurationAction Chime PutSipMediaApplicationLoggingConfiguration action.
 * \value PutVoiceConnectorEmergencyCallingConfigurationAction Chime PutVoiceConnectorEmergencyCallingConfiguration action.
 * \value PutVoiceConnectorLoggingConfigurationAction Chime PutVoiceConnectorLoggingConfiguration action.
 * \value PutVoiceConnectorOriginationAction Chime PutVoiceConnectorOrigination action.
 * \value PutVoiceConnectorProxyAction Chime PutVoiceConnectorProxy action.
 * \value PutVoiceConnectorStreamingConfigurationAction Chime PutVoiceConnectorStreamingConfiguration action.
 * \value PutVoiceConnectorTerminationAction Chime PutVoiceConnectorTermination action.
 * \value PutVoiceConnectorTerminationCredentialsAction Chime PutVoiceConnectorTerminationCredentials action.
 * \value RedactChannelMessageAction Chime RedactChannelMessage action.
 * \value RedactConversationMessageAction Chime RedactConversationMessage action.
 * \value RedactRoomMessageAction Chime RedactRoomMessage action.
 * \value RegenerateSecurityTokenAction Chime RegenerateSecurityToken action.
 * \value ResetPersonalPINAction Chime ResetPersonalPIN action.
 * \value RestorePhoneNumberAction Chime RestorePhoneNumber action.
 * \value SearchAvailablePhoneNumbersAction Chime SearchAvailablePhoneNumbers action.
 * \value SendChannelMessageAction Chime SendChannelMessage action.
 * \value StartMeetingTranscriptionAction Chime StartMeetingTranscription action.
 * \value StopMeetingTranscriptionAction Chime StopMeetingTranscription action.
 * \value TagAttendeeAction Chime TagAttendee action.
 * \value TagMeetingAction Chime TagMeeting action.
 * \value TagResourceAction Chime TagResource action.
 * \value UntagAttendeeAction Chime UntagAttendee action.
 * \value UntagMeetingAction Chime UntagMeeting action.
 * \value UntagResourceAction Chime UntagResource action.
 * \value UpdateAccountAction Chime UpdateAccount action.
 * \value UpdateAccountSettingsAction Chime UpdateAccountSettings action.
 * \value UpdateAppInstanceAction Chime UpdateAppInstance action.
 * \value UpdateAppInstanceUserAction Chime UpdateAppInstanceUser action.
 * \value UpdateBotAction Chime UpdateBot action.
 * \value UpdateChannelAction Chime UpdateChannel action.
 * \value UpdateChannelMessageAction Chime UpdateChannelMessage action.
 * \value UpdateChannelReadMarkerAction Chime UpdateChannelReadMarker action.
 * \value UpdateGlobalSettingsAction Chime UpdateGlobalSettings action.
 * \value UpdatePhoneNumberAction Chime UpdatePhoneNumber action.
 * \value UpdatePhoneNumberSettingsAction Chime UpdatePhoneNumberSettings action.
 * \value UpdateProxySessionAction Chime UpdateProxySession action.
 * \value UpdateRoomAction Chime UpdateRoom action.
 * \value UpdateRoomMembershipAction Chime UpdateRoomMembership action.
 * \value UpdateSipMediaApplicationAction Chime UpdateSipMediaApplication action.
 * \value UpdateSipMediaApplicationCallAction Chime UpdateSipMediaApplicationCall action.
 * \value UpdateSipRuleAction Chime UpdateSipRule action.
 * \value UpdateUserAction Chime UpdateUser action.
 * \value UpdateUserSettingsAction Chime UpdateUserSettings action.
 * \value UpdateVoiceConnectorAction Chime UpdateVoiceConnector action.
 * \value UpdateVoiceConnectorGroupAction Chime UpdateVoiceConnectorGroup action.
 * \value ValidateE911AddressAction Chime ValidateE911Address action.
 */

/*!
 * Constructs a ChimeRequest object for Chime \a action.
 */
ChimeRequest::ChimeRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ChimeRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ChimeRequest::ChimeRequest(const ChimeRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ChimeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ChimeRequest object to be equal to \a other.
 */
ChimeRequest& ChimeRequest::operator=(const ChimeRequest &other)
{
    Q_D(ChimeRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ChimeRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ChimeRequestPrivate.
 */
ChimeRequest::ChimeRequest(ChimeRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the Chime action to be performed by this request.
 */
ChimeRequest::Action ChimeRequest::action() const
{
    Q_D(const ChimeRequest);
    return d->action;
}

/*!
 * Returns the name of the Chime action to be performed by this request.
 */
QString ChimeRequest::actionString() const
{
    return ChimeRequestPrivate::toString(action());
}

/*!
 * Returns the Chime API version implemented by this request.
 */
QString ChimeRequest::apiVersion() const
{
    Q_D(const ChimeRequest);
    return d->apiVersion;
}

/*!
 * Sets the Chime action to be performed by this request to \a action.
 */
void ChimeRequest::setAction(const Action action)
{
    Q_D(ChimeRequest);
    d->action = action;
}

/*!
 * Sets the Chime API version to include in this request to \a version.
 */
void ChimeRequest::setApiVersion(const QString &version)
{
    Q_D(ChimeRequest);
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
bool ChimeRequest::operator==(const ChimeRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid Chime queue name.
 *
 * @par From Chime FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid Chime queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ChimeRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ChimeRequest::clearParameter(const QString &name)
{
    Q_D(ChimeRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ChimeRequest::clearParameters()
{
    Q_D(ChimeRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ChimeRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ChimeRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ChimeRequest::parameters() const
{
    Q_D(const ChimeRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ChimeRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ChimeRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ChimeRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ChimeRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the Chime request using the given
 * \a endpoint.
 *
 * This Chime implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ChimeRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ChimeRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::Chime::ChimeRequestPrivate
 * \brief The ChimeRequestPrivate class provides private implementation for ChimeRequest.
 * \internal
 *
 * \inmodule QtAwsChime
 */

/*!
 * Constructs a ChimeRequestPrivate object for Chime \a action,
 * with public implementation \a q.
 */
ChimeRequestPrivate::ChimeRequestPrivate(const ChimeRequest::Action action, ChimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2018-05-01"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ChimeRequest class's copy constructor.
 */
ChimeRequestPrivate::ChimeRequestPrivate(const ChimeRequestPrivate &other,
                                     ChimeRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ChimeRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the Chime service's Action
 * query parameters.
 */
QString ChimeRequestPrivate::toString(const ChimeRequest::Action &action)
{
    #define ActionToString(action) \
        case ChimeRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(AssociatePhoneNumberWithUser);
        ActionToString(AssociatePhoneNumbersWithVoiceConnector);
        ActionToString(AssociatePhoneNumbersWithVoiceConnectorGroup);
        ActionToString(AssociateSigninDelegateGroupsWithAccount);
        ActionToString(BatchCreateAttendee);
        ActionToString(BatchCreateChannelMembership);
        ActionToString(BatchCreateRoomMembership);
        ActionToString(BatchDeletePhoneNumber);
        ActionToString(BatchSuspendUser);
        ActionToString(BatchUnsuspendUser);
        ActionToString(BatchUpdatePhoneNumber);
        ActionToString(BatchUpdateUser);
        ActionToString(CreateAccount);
        ActionToString(CreateAppInstance);
        ActionToString(CreateAppInstanceAdmin);
        ActionToString(CreateAppInstanceUser);
        ActionToString(CreateAttendee);
        ActionToString(CreateBot);
        ActionToString(CreateChannel);
        ActionToString(CreateChannelBan);
        ActionToString(CreateChannelMembership);
        ActionToString(CreateChannelModerator);
        ActionToString(CreateMediaCapturePipeline);
        ActionToString(CreateMeeting);
        ActionToString(CreateMeetingDialOut);
        ActionToString(CreateMeetingWithAttendees);
        ActionToString(CreatePhoneNumberOrder);
        ActionToString(CreateProxySession);
        ActionToString(CreateRoom);
        ActionToString(CreateRoomMembership);
        ActionToString(CreateSipMediaApplication);
        ActionToString(CreateSipMediaApplicationCall);
        ActionToString(CreateSipRule);
        ActionToString(CreateUser);
        ActionToString(CreateVoiceConnector);
        ActionToString(CreateVoiceConnectorGroup);
        ActionToString(DeleteAccount);
        ActionToString(DeleteAppInstance);
        ActionToString(DeleteAppInstanceAdmin);
        ActionToString(DeleteAppInstanceStreamingConfigurations);
        ActionToString(DeleteAppInstanceUser);
        ActionToString(DeleteAttendee);
        ActionToString(DeleteChannel);
        ActionToString(DeleteChannelBan);
        ActionToString(DeleteChannelMembership);
        ActionToString(DeleteChannelMessage);
        ActionToString(DeleteChannelModerator);
        ActionToString(DeleteEventsConfiguration);
        ActionToString(DeleteMediaCapturePipeline);
        ActionToString(DeleteMeeting);
        ActionToString(DeletePhoneNumber);
        ActionToString(DeleteProxySession);
        ActionToString(DeleteRoom);
        ActionToString(DeleteRoomMembership);
        ActionToString(DeleteSipMediaApplication);
        ActionToString(DeleteSipRule);
        ActionToString(DeleteVoiceConnector);
        ActionToString(DeleteVoiceConnectorEmergencyCallingConfiguration);
        ActionToString(DeleteVoiceConnectorGroup);
        ActionToString(DeleteVoiceConnectorOrigination);
        ActionToString(DeleteVoiceConnectorProxy);
        ActionToString(DeleteVoiceConnectorStreamingConfiguration);
        ActionToString(DeleteVoiceConnectorTermination);
        ActionToString(DeleteVoiceConnectorTerminationCredentials);
        ActionToString(DescribeAppInstance);
        ActionToString(DescribeAppInstanceAdmin);
        ActionToString(DescribeAppInstanceUser);
        ActionToString(DescribeChannel);
        ActionToString(DescribeChannelBan);
        ActionToString(DescribeChannelMembership);
        ActionToString(DescribeChannelMembershipForAppInstanceUser);
        ActionToString(DescribeChannelModeratedByAppInstanceUser);
        ActionToString(DescribeChannelModerator);
        ActionToString(DisassociatePhoneNumberFromUser);
        ActionToString(DisassociatePhoneNumbersFromVoiceConnector);
        ActionToString(DisassociatePhoneNumbersFromVoiceConnectorGroup);
        ActionToString(DisassociateSigninDelegateGroupsFromAccount);
        ActionToString(GetAccount);
        ActionToString(GetAccountSettings);
        ActionToString(GetAppInstanceRetentionSettings);
        ActionToString(GetAppInstanceStreamingConfigurations);
        ActionToString(GetAttendee);
        ActionToString(GetBot);
        ActionToString(GetChannelMessage);
        ActionToString(GetEventsConfiguration);
        ActionToString(GetGlobalSettings);
        ActionToString(GetMediaCapturePipeline);
        ActionToString(GetMeeting);
        ActionToString(GetMessagingSessionEndpoint);
        ActionToString(GetPhoneNumber);
        ActionToString(GetPhoneNumberOrder);
        ActionToString(GetPhoneNumberSettings);
        ActionToString(GetProxySession);
        ActionToString(GetRetentionSettings);
        ActionToString(GetRoom);
        ActionToString(GetSipMediaApplication);
        ActionToString(GetSipMediaApplicationLoggingConfiguration);
        ActionToString(GetSipRule);
        ActionToString(GetUser);
        ActionToString(GetUserSettings);
        ActionToString(GetVoiceConnector);
        ActionToString(GetVoiceConnectorEmergencyCallingConfiguration);
        ActionToString(GetVoiceConnectorGroup);
        ActionToString(GetVoiceConnectorLoggingConfiguration);
        ActionToString(GetVoiceConnectorOrigination);
        ActionToString(GetVoiceConnectorProxy);
        ActionToString(GetVoiceConnectorStreamingConfiguration);
        ActionToString(GetVoiceConnectorTermination);
        ActionToString(GetVoiceConnectorTerminationHealth);
        ActionToString(InviteUsers);
        ActionToString(ListAccounts);
        ActionToString(ListAppInstanceAdmins);
        ActionToString(ListAppInstanceUsers);
        ActionToString(ListAppInstances);
        ActionToString(ListAttendeeTags);
        ActionToString(ListAttendees);
        ActionToString(ListBots);
        ActionToString(ListChannelBans);
        ActionToString(ListChannelMemberships);
        ActionToString(ListChannelMembershipsForAppInstanceUser);
        ActionToString(ListChannelMessages);
        ActionToString(ListChannelModerators);
        ActionToString(ListChannels);
        ActionToString(ListChannelsModeratedByAppInstanceUser);
        ActionToString(ListMediaCapturePipelines);
        ActionToString(ListMeetingTags);
        ActionToString(ListMeetings);
        ActionToString(ListPhoneNumberOrders);
        ActionToString(ListPhoneNumbers);
        ActionToString(ListProxySessions);
        ActionToString(ListRoomMemberships);
        ActionToString(ListRooms);
        ActionToString(ListSipMediaApplications);
        ActionToString(ListSipRules);
        ActionToString(ListSupportedPhoneNumberCountries);
        ActionToString(ListTagsForResource);
        ActionToString(ListUsers);
        ActionToString(ListVoiceConnectorGroups);
        ActionToString(ListVoiceConnectorTerminationCredentials);
        ActionToString(ListVoiceConnectors);
        ActionToString(LogoutUser);
        ActionToString(PutAppInstanceRetentionSettings);
        ActionToString(PutAppInstanceStreamingConfigurations);
        ActionToString(PutEventsConfiguration);
        ActionToString(PutRetentionSettings);
        ActionToString(PutSipMediaApplicationLoggingConfiguration);
        ActionToString(PutVoiceConnectorEmergencyCallingConfiguration);
        ActionToString(PutVoiceConnectorLoggingConfiguration);
        ActionToString(PutVoiceConnectorOrigination);
        ActionToString(PutVoiceConnectorProxy);
        ActionToString(PutVoiceConnectorStreamingConfiguration);
        ActionToString(PutVoiceConnectorTermination);
        ActionToString(PutVoiceConnectorTerminationCredentials);
        ActionToString(RedactChannelMessage);
        ActionToString(RedactConversationMessage);
        ActionToString(RedactRoomMessage);
        ActionToString(RegenerateSecurityToken);
        ActionToString(ResetPersonalPIN);
        ActionToString(RestorePhoneNumber);
        ActionToString(SearchAvailablePhoneNumbers);
        ActionToString(SendChannelMessage);
        ActionToString(StartMeetingTranscription);
        ActionToString(StopMeetingTranscription);
        ActionToString(TagAttendee);
        ActionToString(TagMeeting);
        ActionToString(TagResource);
        ActionToString(UntagAttendee);
        ActionToString(UntagMeeting);
        ActionToString(UntagResource);
        ActionToString(UpdateAccount);
        ActionToString(UpdateAccountSettings);
        ActionToString(UpdateAppInstance);
        ActionToString(UpdateAppInstanceUser);
        ActionToString(UpdateBot);
        ActionToString(UpdateChannel);
        ActionToString(UpdateChannelMessage);
        ActionToString(UpdateChannelReadMarker);
        ActionToString(UpdateGlobalSettings);
        ActionToString(UpdatePhoneNumber);
        ActionToString(UpdatePhoneNumberSettings);
        ActionToString(UpdateProxySession);
        ActionToString(UpdateRoom);
        ActionToString(UpdateRoomMembership);
        ActionToString(UpdateSipMediaApplication);
        ActionToString(UpdateSipMediaApplicationCall);
        ActionToString(UpdateSipRule);
        ActionToString(UpdateUser);
        ActionToString(UpdateUserSettings);
        ActionToString(UpdateVoiceConnector);
        ActionToString(UpdateVoiceConnectorGroup);
        ActionToString(ValidateE911Address);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace Chime
} // namespace QtAws
