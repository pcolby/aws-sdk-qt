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

#ifndef QTAWS_QUICKSIGHTREQUEST_H
#define QTAWS_QUICKSIGHTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsquicksightglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace QuickSight {

class QuickSightRequestPrivate;

class QTAWSQUICKSIGHT_EXPORT QuickSightRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by QuickSight.
    enum Action {
        CancelIngestionAction,
        CreateAccountCustomizationAction,
        CreateAnalysisAction,
        CreateDashboardAction,
        CreateDataSetAction,
        CreateDataSourceAction,
        CreateGroupAction,
        CreateGroupMembershipAction,
        CreateIAMPolicyAssignmentAction,
        CreateIngestionAction,
        CreateNamespaceAction,
        CreateTemplateAction,
        CreateTemplateAliasAction,
        CreateThemeAction,
        CreateThemeAliasAction,
        DeleteAccountCustomizationAction,
        DeleteAnalysisAction,
        DeleteDashboardAction,
        DeleteDataSetAction,
        DeleteDataSourceAction,
        DeleteGroupAction,
        DeleteGroupMembershipAction,
        DeleteIAMPolicyAssignmentAction,
        DeleteNamespaceAction,
        DeleteTemplateAction,
        DeleteTemplateAliasAction,
        DeleteThemeAction,
        DeleteThemeAliasAction,
        DeleteUserAction,
        DeleteUserByPrincipalIdAction,
        DescribeAccountCustomizationAction,
        DescribeAccountSettingsAction,
        DescribeAnalysisAction,
        DescribeAnalysisPermissionsAction,
        DescribeDashboardAction,
        DescribeDashboardPermissionsAction,
        DescribeDataSetAction,
        DescribeDataSetPermissionsAction,
        DescribeDataSourceAction,
        DescribeDataSourcePermissionsAction,
        DescribeGroupAction,
        DescribeIAMPolicyAssignmentAction,
        DescribeIngestionAction,
        DescribeNamespaceAction,
        DescribeTemplateAction,
        DescribeTemplateAliasAction,
        DescribeTemplatePermissionsAction,
        DescribeThemeAction,
        DescribeThemeAliasAction,
        DescribeThemePermissionsAction,
        DescribeUserAction,
        GetDashboardEmbedUrlAction,
        GetSessionEmbedUrlAction,
        ListAnalysesAction,
        ListDashboardVersionsAction,
        ListDashboardsAction,
        ListDataSetsAction,
        ListDataSourcesAction,
        ListGroupMembershipsAction,
        ListGroupsAction,
        ListIAMPolicyAssignmentsAction,
        ListIAMPolicyAssignmentsForUserAction,
        ListIngestionsAction,
        ListNamespacesAction,
        ListTagsForResourceAction,
        ListTemplateAliasesAction,
        ListTemplateVersionsAction,
        ListTemplatesAction,
        ListThemeAliasesAction,
        ListThemeVersionsAction,
        ListThemesAction,
        ListUserGroupsAction,
        ListUsersAction,
        RegisterUserAction,
        RestoreAnalysisAction,
        SearchAnalysesAction,
        SearchDashboardsAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAccountCustomizationAction,
        UpdateAccountSettingsAction,
        UpdateAnalysisAction,
        UpdateAnalysisPermissionsAction,
        UpdateDashboardAction,
        UpdateDashboardPermissionsAction,
        UpdateDashboardPublishedVersionAction,
        UpdateDataSetAction,
        UpdateDataSetPermissionsAction,
        UpdateDataSourceAction,
        UpdateDataSourcePermissionsAction,
        UpdateGroupAction,
        UpdateIAMPolicyAssignmentAction,
        UpdateTemplateAction,
        UpdateTemplateAliasAction,
        UpdateTemplatePermissionsAction,
        UpdateThemeAction,
        UpdateThemeAliasAction,
        UpdateThemePermissionsAction,
        UpdateUserAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    QuickSightRequest(const Action action);
    QuickSightRequest(const QuickSightRequest &other);
    QuickSightRequest &operator=(const QuickSightRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const QuickSightRequest &other) const;


protected:
    /// @cond internal
    QuickSightRequestPrivate * const d_ptr; ///< Internal d-pointer.
    QuickSightRequest(QuickSightRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QuickSightRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
