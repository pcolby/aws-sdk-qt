// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MACIE2REQUEST_H
#define QTAWS_MACIE2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmacie2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Macie2 {

class Macie2RequestPrivate;

class QTAWSMACIE2_EXPORT Macie2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Macie2.
    enum Action {
        AcceptInvitationAction,
        BatchGetCustomDataIdentifiersAction,
        CreateAllowListAction,
        CreateClassificationJobAction,
        CreateCustomDataIdentifierAction,
        CreateFindingsFilterAction,
        CreateInvitationsAction,
        CreateMemberAction,
        CreateSampleFindingsAction,
        DeclineInvitationsAction,
        DeleteAllowListAction,
        DeleteCustomDataIdentifierAction,
        DeleteFindingsFilterAction,
        DeleteInvitationsAction,
        DeleteMemberAction,
        DescribeBucketsAction,
        DescribeClassificationJobAction,
        DescribeOrganizationConfigurationAction,
        DisableMacieAction,
        DisableOrganizationAdminAccountAction,
        DisassociateFromAdministratorAccountAction,
        DisassociateFromMasterAccountAction,
        DisassociateMemberAction,
        EnableMacieAction,
        EnableOrganizationAdminAccountAction,
        GetAdministratorAccountAction,
        GetAllowListAction,
        GetBucketStatisticsAction,
        GetClassificationExportConfigurationAction,
        GetCustomDataIdentifierAction,
        GetFindingStatisticsAction,
        GetFindingsAction,
        GetFindingsFilterAction,
        GetFindingsPublicationConfigurationAction,
        GetInvitationsCountAction,
        GetMacieSessionAction,
        GetMasterAccountAction,
        GetMemberAction,
        GetRevealConfigurationAction,
        GetSensitiveDataOccurrencesAction,
        GetSensitiveDataOccurrencesAvailabilityAction,
        GetUsageStatisticsAction,
        GetUsageTotalsAction,
        ListAllowListsAction,
        ListClassificationJobsAction,
        ListCustomDataIdentifiersAction,
        ListFindingsAction,
        ListFindingsFiltersAction,
        ListInvitationsAction,
        ListManagedDataIdentifiersAction,
        ListMembersAction,
        ListOrganizationAdminAccountsAction,
        ListTagsForResourceAction,
        PutClassificationExportConfigurationAction,
        PutFindingsPublicationConfigurationAction,
        SearchResourcesAction,
        TagResourceAction,
        TestCustomDataIdentifierAction,
        UntagResourceAction,
        UpdateAllowListAction,
        UpdateClassificationJobAction,
        UpdateFindingsFilterAction,
        UpdateMacieSessionAction,
        UpdateMemberSessionAction,
        UpdateOrganizationConfigurationAction,
        UpdateRevealConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Macie2Request(const Action action);
    Macie2Request(const Macie2Request &other);
    Macie2Request &operator=(const Macie2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Macie2Request &other) const;


protected:
    /// @cond internal
    explicit Macie2Request(Macie2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Macie2Request)

};

} // namespace Macie2
} // namespace QtAws

#endif
