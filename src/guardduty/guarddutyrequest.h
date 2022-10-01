// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GUARDDUTYREQUEST_H
#define QTAWS_GUARDDUTYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsguarddutyglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace GuardDuty {

class GuardDutyRequestPrivate;

class QTAWSGUARDDUTY_EXPORT GuardDutyRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by GuardDuty.
    enum Action {
        AcceptAdministratorInvitationAction,
        AcceptInvitationAction,
        ArchiveFindingsAction,
        CreateDetectorAction,
        CreateFilterAction,
        CreateIPSetAction,
        CreateMembersAction,
        CreatePublishingDestinationAction,
        CreateSampleFindingsAction,
        CreateThreatIntelSetAction,
        DeclineInvitationsAction,
        DeleteDetectorAction,
        DeleteFilterAction,
        DeleteIPSetAction,
        DeleteInvitationsAction,
        DeleteMembersAction,
        DeletePublishingDestinationAction,
        DeleteThreatIntelSetAction,
        DescribeMalwareScansAction,
        DescribeOrganizationConfigurationAction,
        DescribePublishingDestinationAction,
        DisableOrganizationAdminAccountAction,
        DisassociateFromAdministratorAccountAction,
        DisassociateFromMasterAccountAction,
        DisassociateMembersAction,
        EnableOrganizationAdminAccountAction,
        GetAdministratorAccountAction,
        GetDetectorAction,
        GetFilterAction,
        GetFindingsAction,
        GetFindingsStatisticsAction,
        GetIPSetAction,
        GetInvitationsCountAction,
        GetMalwareScanSettingsAction,
        GetMasterAccountAction,
        GetMemberDetectorsAction,
        GetMembersAction,
        GetRemainingFreeTrialDaysAction,
        GetThreatIntelSetAction,
        GetUsageStatisticsAction,
        InviteMembersAction,
        ListDetectorsAction,
        ListFiltersAction,
        ListFindingsAction,
        ListIPSetsAction,
        ListInvitationsAction,
        ListMembersAction,
        ListOrganizationAdminAccountsAction,
        ListPublishingDestinationsAction,
        ListTagsForResourceAction,
        ListThreatIntelSetsAction,
        StartMonitoringMembersAction,
        StopMonitoringMembersAction,
        TagResourceAction,
        UnarchiveFindingsAction,
        UntagResourceAction,
        UpdateDetectorAction,
        UpdateFilterAction,
        UpdateFindingsFeedbackAction,
        UpdateIPSetAction,
        UpdateMalwareScanSettingsAction,
        UpdateMemberDetectorsAction,
        UpdateOrganizationConfigurationAction,
        UpdatePublishingDestinationAction,
        UpdateThreatIntelSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GuardDutyRequest(const Action action);
    GuardDutyRequest(const GuardDutyRequest &other);
    GuardDutyRequest &operator=(const GuardDutyRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GuardDutyRequest &other) const;


protected:
    /// @cond internal
    explicit GuardDutyRequest(GuardDutyRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GuardDutyRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
