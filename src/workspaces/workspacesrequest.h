// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKSPACESREQUEST_H
#define QTAWS_WORKSPACESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsworkspacesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesRequestPrivate;

class QTAWSWORKSPACES_EXPORT WorkSpacesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WorkSpaces.
    enum Action {
        AssociateConnectionAliasAction,
        AssociateIpGroupsAction,
        AuthorizeIpRulesAction,
        CopyWorkspaceImageAction,
        CreateConnectClientAddInAction,
        CreateConnectionAliasAction,
        CreateIpGroupAction,
        CreateTagsAction,
        CreateUpdatedWorkspaceImageAction,
        CreateWorkspaceBundleAction,
        CreateWorkspaceImageAction,
        CreateWorkspacesAction,
        DeleteClientBrandingAction,
        DeleteConnectClientAddInAction,
        DeleteConnectionAliasAction,
        DeleteIpGroupAction,
        DeleteTagsAction,
        DeleteWorkspaceBundleAction,
        DeleteWorkspaceImageAction,
        DeregisterWorkspaceDirectoryAction,
        DescribeAccountAction,
        DescribeAccountModificationsAction,
        DescribeClientBrandingAction,
        DescribeClientPropertiesAction,
        DescribeConnectClientAddInsAction,
        DescribeConnectionAliasPermissionsAction,
        DescribeConnectionAliasesAction,
        DescribeIpGroupsAction,
        DescribeTagsAction,
        DescribeWorkspaceBundlesAction,
        DescribeWorkspaceDirectoriesAction,
        DescribeWorkspaceImagePermissionsAction,
        DescribeWorkspaceImagesAction,
        DescribeWorkspaceSnapshotsAction,
        DescribeWorkspacesAction,
        DescribeWorkspacesConnectionStatusAction,
        DisassociateConnectionAliasAction,
        DisassociateIpGroupsAction,
        ImportClientBrandingAction,
        ImportWorkspaceImageAction,
        ListAvailableManagementCidrRangesAction,
        MigrateWorkspaceAction,
        ModifyAccountAction,
        ModifyClientPropertiesAction,
        ModifySamlPropertiesAction,
        ModifySelfservicePermissionsAction,
        ModifyWorkspaceAccessPropertiesAction,
        ModifyWorkspaceCreationPropertiesAction,
        ModifyWorkspacePropertiesAction,
        ModifyWorkspaceStateAction,
        RebootWorkspacesAction,
        RebuildWorkspacesAction,
        RegisterWorkspaceDirectoryAction,
        RestoreWorkspaceAction,
        RevokeIpRulesAction,
        StartWorkspacesAction,
        StopWorkspacesAction,
        TerminateWorkspacesAction,
        UpdateConnectClientAddInAction,
        UpdateConnectionAliasPermissionAction,
        UpdateRulesOfIpGroupAction,
        UpdateWorkspaceBundleAction,
        UpdateWorkspaceImagePermissionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WorkSpacesRequest(const Action action);
    WorkSpacesRequest(const WorkSpacesRequest &other);
    WorkSpacesRequest &operator=(const WorkSpacesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WorkSpacesRequest &other) const;


protected:
    /// @cond internal
    explicit WorkSpacesRequest(WorkSpacesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkSpacesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
