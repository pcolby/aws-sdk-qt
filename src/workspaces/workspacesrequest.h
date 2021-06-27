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

#ifndef QTAWS_WORKSPACESREQUEST_H
#define QTAWS_WORKSPACESREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WorkSpaces {

class WorkSpacesRequestPrivate;

class QTAWS_EXPORT WorkSpacesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WorkSpaces.
    enum Action {
        AssociateConnectionAliasAction,
        AssociateIpGroupsAction,
        AuthorizeIpRulesAction,
        CopyWorkspaceImageAction,
        CreateConnectionAliasAction,
        CreateIpGroupAction,
        CreateTagsAction,
        CreateWorkspaceBundleAction,
        CreateWorkspacesAction,
        DeleteConnectionAliasAction,
        DeleteIpGroupAction,
        DeleteTagsAction,
        DeleteWorkspaceBundleAction,
        DeleteWorkspaceImageAction,
        DeregisterWorkspaceDirectoryAction,
        DescribeAccountAction,
        DescribeAccountModificationsAction,
        DescribeClientPropertiesAction,
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
        ImportWorkspaceImageAction,
        ListAvailableManagementCidrRangesAction,
        MigrateWorkspaceAction,
        ModifyAccountAction,
        ModifyClientPropertiesAction,
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
    WorkSpacesRequestPrivate * const d_ptr; ///< Internal d-pointer.
    WorkSpacesRequest(WorkSpacesRequestPrivate * const d);
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
