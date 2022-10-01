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
