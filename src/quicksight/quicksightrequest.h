// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
        CreateAccountSubscriptionAction,
        CreateAnalysisAction,
        CreateDashboardAction,
        CreateDataSetAction,
        CreateDataSourceAction,
        CreateFolderAction,
        CreateFolderMembershipAction,
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
        DeleteFolderAction,
        DeleteFolderMembershipAction,
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
        DescribeAccountSubscriptionAction,
        DescribeAnalysisAction,
        DescribeAnalysisPermissionsAction,
        DescribeDashboardAction,
        DescribeDashboardPermissionsAction,
        DescribeDataSetAction,
        DescribeDataSetPermissionsAction,
        DescribeDataSourceAction,
        DescribeDataSourcePermissionsAction,
        DescribeFolderAction,
        DescribeFolderPermissionsAction,
        DescribeFolderResolvedPermissionsAction,
        DescribeGroupAction,
        DescribeGroupMembershipAction,
        DescribeIAMPolicyAssignmentAction,
        DescribeIngestionAction,
        DescribeIpRestrictionAction,
        DescribeNamespaceAction,
        DescribeTemplateAction,
        DescribeTemplateAliasAction,
        DescribeTemplatePermissionsAction,
        DescribeThemeAction,
        DescribeThemeAliasAction,
        DescribeThemePermissionsAction,
        DescribeUserAction,
        GenerateEmbedUrlForAnonymousUserAction,
        GenerateEmbedUrlForRegisteredUserAction,
        GetDashboardEmbedUrlAction,
        GetSessionEmbedUrlAction,
        ListAnalysesAction,
        ListDashboardVersionsAction,
        ListDashboardsAction,
        ListDataSetsAction,
        ListDataSourcesAction,
        ListFolderMembersAction,
        ListFoldersAction,
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
        SearchFoldersAction,
        SearchGroupsAction,
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
        UpdateFolderAction,
        UpdateFolderPermissionsAction,
        UpdateGroupAction,
        UpdateIAMPolicyAssignmentAction,
        UpdateIpRestrictionAction,
        UpdatePublicSharingSettingsAction,
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
    explicit QuickSightRequest(QuickSightRequestPrivate * const d);
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
