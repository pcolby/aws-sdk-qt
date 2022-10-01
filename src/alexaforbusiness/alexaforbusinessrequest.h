// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALEXAFORBUSINESSREQUEST_H
#define QTAWS_ALEXAFORBUSINESSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsalexaforbusinessglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessRequestPrivate;

class QTAWSALEXAFORBUSINESS_EXPORT AlexaForBusinessRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AlexaForBusiness.
    enum Action {
        ApproveSkillAction,
        AssociateContactWithAddressBookAction,
        AssociateDeviceWithNetworkProfileAction,
        AssociateDeviceWithRoomAction,
        AssociateSkillGroupWithRoomAction,
        AssociateSkillWithSkillGroupAction,
        AssociateSkillWithUsersAction,
        CreateAddressBookAction,
        CreateBusinessReportScheduleAction,
        CreateConferenceProviderAction,
        CreateContactAction,
        CreateGatewayGroupAction,
        CreateNetworkProfileAction,
        CreateProfileAction,
        CreateRoomAction,
        CreateSkillGroupAction,
        CreateUserAction,
        DeleteAddressBookAction,
        DeleteBusinessReportScheduleAction,
        DeleteConferenceProviderAction,
        DeleteContactAction,
        DeleteDeviceAction,
        DeleteDeviceUsageDataAction,
        DeleteGatewayGroupAction,
        DeleteNetworkProfileAction,
        DeleteProfileAction,
        DeleteRoomAction,
        DeleteRoomSkillParameterAction,
        DeleteSkillAuthorizationAction,
        DeleteSkillGroupAction,
        DeleteUserAction,
        DisassociateContactFromAddressBookAction,
        DisassociateDeviceFromRoomAction,
        DisassociateSkillFromSkillGroupAction,
        DisassociateSkillFromUsersAction,
        DisassociateSkillGroupFromRoomAction,
        ForgetSmartHomeAppliancesAction,
        GetAddressBookAction,
        GetConferencePreferenceAction,
        GetConferenceProviderAction,
        GetContactAction,
        GetDeviceAction,
        GetGatewayAction,
        GetGatewayGroupAction,
        GetInvitationConfigurationAction,
        GetNetworkProfileAction,
        GetProfileAction,
        GetRoomAction,
        GetRoomSkillParameterAction,
        GetSkillGroupAction,
        ListBusinessReportSchedulesAction,
        ListConferenceProvidersAction,
        ListDeviceEventsAction,
        ListGatewayGroupsAction,
        ListGatewaysAction,
        ListSkillsAction,
        ListSkillsStoreCategoriesAction,
        ListSkillsStoreSkillsByCategoryAction,
        ListSmartHomeAppliancesAction,
        ListTagsAction,
        PutConferencePreferenceAction,
        PutInvitationConfigurationAction,
        PutRoomSkillParameterAction,
        PutSkillAuthorizationAction,
        RegisterAVSDeviceAction,
        RejectSkillAction,
        ResolveRoomAction,
        RevokeInvitationAction,
        SearchAddressBooksAction,
        SearchContactsAction,
        SearchDevicesAction,
        SearchNetworkProfilesAction,
        SearchProfilesAction,
        SearchRoomsAction,
        SearchSkillGroupsAction,
        SearchUsersAction,
        SendAnnouncementAction,
        SendInvitationAction,
        StartDeviceSyncAction,
        StartSmartHomeApplianceDiscoveryAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAddressBookAction,
        UpdateBusinessReportScheduleAction,
        UpdateConferenceProviderAction,
        UpdateContactAction,
        UpdateDeviceAction,
        UpdateGatewayAction,
        UpdateGatewayGroupAction,
        UpdateNetworkProfileAction,
        UpdateProfileAction,
        UpdateRoomAction,
        UpdateSkillGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AlexaForBusinessRequest(const Action action);
    AlexaForBusinessRequest(const AlexaForBusinessRequest &other);
    AlexaForBusinessRequest &operator=(const AlexaForBusinessRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AlexaForBusinessRequest &other) const;


protected:
    /// @cond internal
    explicit AlexaForBusinessRequest(AlexaForBusinessRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AlexaForBusinessRequest)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
