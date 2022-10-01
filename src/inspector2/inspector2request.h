// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INSPECTOR2REQUEST_H
#define QTAWS_INSPECTOR2REQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsinspector2global.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Inspector2 {

class Inspector2RequestPrivate;

class QTAWSINSPECTOR2_EXPORT Inspector2Request : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Inspector2.
    enum Action {
        AssociateMemberAction,
        BatchGetAccountStatusAction,
        BatchGetFreeTrialInfoAction,
        CancelFindingsReportAction,
        CreateFilterAction,
        CreateFindingsReportAction,
        DeleteFilterAction,
        DescribeOrganizationConfigurationAction,
        DisableAction,
        DisableDelegatedAdminAccountAction,
        DisassociateMemberAction,
        EnableAction,
        EnableDelegatedAdminAccountAction,
        GetConfigurationAction,
        GetDelegatedAdminAccountAction,
        GetFindingsReportStatusAction,
        GetMemberAction,
        ListAccountPermissionsAction,
        ListCoverageAction,
        ListCoverageStatisticsAction,
        ListDelegatedAdminAccountsAction,
        ListFiltersAction,
        ListFindingAggregationsAction,
        ListFindingsAction,
        ListMembersAction,
        ListTagsForResourceAction,
        ListUsageTotalsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateConfigurationAction,
        UpdateFilterAction,
        UpdateOrganizationConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Inspector2Request(const Action action);
    Inspector2Request(const Inspector2Request &other);
    Inspector2Request &operator=(const Inspector2Request &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Inspector2Request &other) const;


protected:
    /// @cond internal
    explicit Inspector2Request(Inspector2RequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Inspector2Request)

};

} // namespace Inspector2
} // namespace QtAws

#endif
