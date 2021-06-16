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

#ifndef QTAWS_CHIMEREQUEST_H
#define QTAWS_CHIMEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Chime {

class ChimeRequestPrivate;

class QTAWS_EXPORT ChimeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Chime.
    enum Action {
        AssociatePhoneNumberWithUserAction,
        AssociatePhoneNumbersWithVoiceConnectorAction,
        AssociatePhoneNumbersWithVoiceConnectorGroupAction,
        AssociateSigninDelegateGroupsWithAccountAction,
        BatchCreateAttendeeAction,
        BatchCreateChannelMembershipAction,
        BatchCreateRoomMembershipAction,
        BatchDeletePhoneNumberAction,
        BatchSuspendUserAction,
        BatchUnsuspendUserAction,
        BatchUpdatePhoneNumberAction,
        BatchUpdateUserAction,
        CreateAccountAction,
        CreateAppInstanceAction,
        CreateAppInstanceAdminAction,
        CreateAppInstanceUserAction,
        CreateAttendeeAction,
        CreateBotAction,
        CreateChannelAction,
        CreateChannelBanAction,
        CreateChannelMembershipAction,
        CreateChannelModeratorAction,
        CreateMeetingAction,
        CreateMeetingDialOutAction,
        CreateMeetingWithAttendeesAction,
        CreatePhoneNumberOrderAction,
        CreateProxySessionAction,
        CreateRoomAction,
        CreateRoomMembershipAction,
        CreateSipMediaApplicationAction,
        CreateSipMediaApplicationCallAction,
        CreateSipRuleAction,
        CreateUserAction,
        CreateVoiceConnectorAction,
        CreateVoiceConnectorGroupAction,
        DeleteAccountAction,
        DeleteAppInstanceAction,
        DeleteAppInstanceAdminAction,
        DeleteAppInstanceStreamingConfigurationsAction,
        DeleteAppInstanceUserAction,
        DeleteAttendeeAction,
        DeleteChannelAction,
        DeleteChannelBanAction,
        DeleteChannelMembershipAction,
        DeleteChannelMessageAction,
        DeleteChannelModeratorAction,
        DeleteEventsConfigurationAction,
        DeleteMeetingAction,
        DeletePhoneNumberAction,
        DeleteProxySessionAction,
        DeleteRoomAction,
        DeleteRoomMembershipAction,
        DeleteSipMediaApplicationAction,
        DeleteSipRuleAction,
        DeleteVoiceConnectorAction,
        DeleteVoiceConnectorEmergencyCallingConfigurationAction,
        DeleteVoiceConnectorGroupAction,
        DeleteVoiceConnectorOriginationAction,
        DeleteVoiceConnectorProxyAction,
        DeleteVoiceConnectorStreamingConfigurationAction,
        DeleteVoiceConnectorTerminationAction,
        DeleteVoiceConnectorTerminationCredentialsAction,
        DescribeAppInstanceAction,
        DescribeAppInstanceAdminAction,
        DescribeAppInstanceUserAction,
        DescribeChannelAction,
        DescribeChannelBanAction,
        DescribeChannelMembershipAction,
        DescribeChannelMembershipForAppInstanceUserAction,
        DescribeChannelModeratedByAppInstanceUserAction,
        DescribeChannelModeratorAction,
        DisassociatePhoneNumberFromUserAction,
        DisassociatePhoneNumbersFromVoiceConnectorAction,
        DisassociatePhoneNumbersFromVoiceConnectorGroupAction,
        DisassociateSigninDelegateGroupsFromAccountAction,
        GetAccountAction,
        GetAccountSettingsAction,
        GetAppInstanceRetentionSettingsAction,
        GetAppInstanceStreamingConfigurationsAction,
        GetAttendeeAction,
        GetBotAction,
        GetChannelMessageAction,
        GetEventsConfigurationAction,
        GetGlobalSettingsAction,
        GetMeetingAction,
        GetMessagingSessionEndpointAction,
        GetPhoneNumberAction,
        GetPhoneNumberOrderAction,
        GetPhoneNumberSettingsAction,
        GetProxySessionAction,
        GetRetentionSettingsAction,
        GetRoomAction,
        GetSipMediaApplicationAction,
        GetSipMediaApplicationLoggingConfigurationAction,
        GetSipRuleAction,
        GetUserAction,
        GetUserSettingsAction,
        GetVoiceConnectorAction,
        GetVoiceConnectorEmergencyCallingConfigurationAction,
        GetVoiceConnectorGroupAction,
        GetVoiceConnectorLoggingConfigurationAction,
        GetVoiceConnectorOriginationAction,
        GetVoiceConnectorProxyAction,
        GetVoiceConnectorStreamingConfigurationAction,
        GetVoiceConnectorTerminationAction,
        GetVoiceConnectorTerminationHealthAction,
        InviteUsersAction,
        ListAccountsAction,
        ListAppInstanceAdminsAction,
        ListAppInstanceUsersAction,
        ListAppInstancesAction,
        ListAttendeeTagsAction,
        ListAttendeesAction,
        ListBotsAction,
        ListChannelBansAction,
        ListChannelMembershipsAction,
        ListChannelMembershipsForAppInstanceUserAction,
        ListChannelMessagesAction,
        ListChannelModeratorsAction,
        ListChannelsAction,
        ListChannelsModeratedByAppInstanceUserAction,
        ListMeetingTagsAction,
        ListMeetingsAction,
        ListPhoneNumberOrdersAction,
        ListPhoneNumbersAction,
        ListProxySessionsAction,
        ListRoomMembershipsAction,
        ListRoomsAction,
        ListSipMediaApplicationsAction,
        ListSipRulesAction,
        ListSupportedPhoneNumberCountriesAction,
        ListTagsForResourceAction,
        ListUsersAction,
        ListVoiceConnectorGroupsAction,
        ListVoiceConnectorTerminationCredentialsAction,
        ListVoiceConnectorsAction,
        LogoutUserAction,
        PutAppInstanceRetentionSettingsAction,
        PutAppInstanceStreamingConfigurationsAction,
        PutEventsConfigurationAction,
        PutRetentionSettingsAction,
        PutSipMediaApplicationLoggingConfigurationAction,
        PutVoiceConnectorEmergencyCallingConfigurationAction,
        PutVoiceConnectorLoggingConfigurationAction,
        PutVoiceConnectorOriginationAction,
        PutVoiceConnectorProxyAction,
        PutVoiceConnectorStreamingConfigurationAction,
        PutVoiceConnectorTerminationAction,
        PutVoiceConnectorTerminationCredentialsAction,
        RedactChannelMessageAction,
        RedactConversationMessageAction,
        RedactRoomMessageAction,
        RegenerateSecurityTokenAction,
        ResetPersonalPINAction,
        RestorePhoneNumberAction,
        SearchAvailablePhoneNumbersAction,
        SendChannelMessageAction,
        TagAttendeeAction,
        TagMeetingAction,
        TagResourceAction,
        UntagAttendeeAction,
        UntagMeetingAction,
        UntagResourceAction,
        UpdateAccountAction,
        UpdateAccountSettingsAction,
        UpdateAppInstanceAction,
        UpdateAppInstanceUserAction,
        UpdateBotAction,
        UpdateChannelAction,
        UpdateChannelMessageAction,
        UpdateChannelReadMarkerAction,
        UpdateGlobalSettingsAction,
        UpdatePhoneNumberAction,
        UpdatePhoneNumberSettingsAction,
        UpdateProxySessionAction,
        UpdateRoomAction,
        UpdateRoomMembershipAction,
        UpdateSipMediaApplicationAction,
        UpdateSipRuleAction,
        UpdateUserAction,
        UpdateUserSettingsAction,
        UpdateVoiceConnectorAction,
        UpdateVoiceConnectorGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ChimeRequest(const Action action);
    ChimeRequest(const ChimeRequest &other);
    ChimeRequest &operator=(const ChimeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ChimeRequest &other) const;


protected:
    /// @cond internal
    ChimeRequest(ChimeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ChimeRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
