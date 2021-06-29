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
        DescribeOrganizationConfigurationAction,
        DescribePublishingDestinationAction,
        DisableOrganizationAdminAccountAction,
        DisassociateFromMasterAccountAction,
        DisassociateMembersAction,
        EnableOrganizationAdminAccountAction,
        GetDetectorAction,
        GetFilterAction,
        GetFindingsAction,
        GetFindingsStatisticsAction,
        GetIPSetAction,
        GetInvitationsCountAction,
        GetMasterAccountAction,
        GetMemberDetectorsAction,
        GetMembersAction,
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
    GuardDutyRequestPrivate * const d_ptr; ///< Internal d-pointer.
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
