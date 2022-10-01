// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECURITYHUBREQUEST_H
#define QTAWS_SECURITYHUBREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssecurityhubglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SecurityHub {

class SecurityHubRequestPrivate;

class QTAWSSECURITYHUB_EXPORT SecurityHubRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SecurityHub.
    enum Action {
        AcceptAdministratorInvitationAction,
        AcceptInvitationAction,
        BatchDisableStandardsAction,
        BatchEnableStandardsAction,
        BatchImportFindingsAction,
        BatchUpdateFindingsAction,
        CreateActionTargetAction,
        CreateFindingAggregatorAction,
        CreateInsightAction,
        CreateMembersAction,
        DeclineInvitationsAction,
        DeleteActionTargetAction,
        DeleteFindingAggregatorAction,
        DeleteInsightAction,
        DeleteInvitationsAction,
        DeleteMembersAction,
        DescribeActionTargetsAction,
        DescribeHubAction,
        DescribeOrganizationConfigurationAction,
        DescribeProductsAction,
        DescribeStandardsAction,
        DescribeStandardsControlsAction,
        DisableImportFindingsForProductAction,
        DisableOrganizationAdminAccountAction,
        DisableSecurityHubAction,
        DisassociateFromAdministratorAccountAction,
        DisassociateFromMasterAccountAction,
        DisassociateMembersAction,
        EnableImportFindingsForProductAction,
        EnableOrganizationAdminAccountAction,
        EnableSecurityHubAction,
        GetAdministratorAccountAction,
        GetEnabledStandardsAction,
        GetFindingAggregatorAction,
        GetFindingsAction,
        GetInsightResultsAction,
        GetInsightsAction,
        GetInvitationsCountAction,
        GetMasterAccountAction,
        GetMembersAction,
        InviteMembersAction,
        ListEnabledProductsForImportAction,
        ListFindingAggregatorsAction,
        ListInvitationsAction,
        ListMembersAction,
        ListOrganizationAdminAccountsAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateActionTargetAction,
        UpdateFindingAggregatorAction,
        UpdateFindingsAction,
        UpdateInsightAction,
        UpdateOrganizationConfigurationAction,
        UpdateSecurityHubConfigurationAction,
        UpdateStandardsControlAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SecurityHubRequest(const Action action);
    SecurityHubRequest(const SecurityHubRequest &other);
    SecurityHubRequest &operator=(const SecurityHubRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SecurityHubRequest &other) const;


protected:
    /// @cond internal
    explicit SecurityHubRequest(SecurityHubRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SecurityHubRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
