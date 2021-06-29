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
        CreateClassificationJobAction,
        CreateCustomDataIdentifierAction,
        CreateFindingsFilterAction,
        CreateInvitationsAction,
        CreateMemberAction,
        CreateSampleFindingsAction,
        DeclineInvitationsAction,
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
        GetUsageStatisticsAction,
        GetUsageTotalsAction,
        ListClassificationJobsAction,
        ListCustomDataIdentifiersAction,
        ListFindingsAction,
        ListFindingsFiltersAction,
        ListInvitationsAction,
        ListMembersAction,
        ListOrganizationAdminAccountsAction,
        ListTagsForResourceAction,
        PutClassificationExportConfigurationAction,
        PutFindingsPublicationConfigurationAction,
        SearchResourcesAction,
        TagResourceAction,
        TestCustomDataIdentifierAction,
        UntagResourceAction,
        UpdateClassificationJobAction,
        UpdateFindingsFilterAction,
        UpdateMacieSessionAction,
        UpdateMemberSessionAction,
        UpdateOrganizationConfigurationAction,
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
    Macie2RequestPrivate * const d_ptr; ///< Internal d-pointer.
    Macie2Request(Macie2RequestPrivate * const d);
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
