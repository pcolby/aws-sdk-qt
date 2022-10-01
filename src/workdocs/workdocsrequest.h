// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_WORKDOCSREQUEST_H
#define QTAWS_WORKDOCSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsworkdocsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace WorkDocs {

class WorkDocsRequestPrivate;

class QTAWSWORKDOCS_EXPORT WorkDocsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by WorkDocs.
    enum Action {
        AbortDocumentVersionUploadAction,
        ActivateUserAction,
        AddResourcePermissionsAction,
        CreateCommentAction,
        CreateCustomMetadataAction,
        CreateFolderAction,
        CreateLabelsAction,
        CreateNotificationSubscriptionAction,
        CreateUserAction,
        DeactivateUserAction,
        DeleteCommentAction,
        DeleteCustomMetadataAction,
        DeleteDocumentAction,
        DeleteFolderAction,
        DeleteFolderContentsAction,
        DeleteLabelsAction,
        DeleteNotificationSubscriptionAction,
        DeleteUserAction,
        DescribeActivitiesAction,
        DescribeCommentsAction,
        DescribeDocumentVersionsAction,
        DescribeFolderContentsAction,
        DescribeGroupsAction,
        DescribeNotificationSubscriptionsAction,
        DescribeResourcePermissionsAction,
        DescribeRootFoldersAction,
        DescribeUsersAction,
        GetCurrentUserAction,
        GetDocumentAction,
        GetDocumentPathAction,
        GetDocumentVersionAction,
        GetFolderAction,
        GetFolderPathAction,
        GetResourcesAction,
        InitiateDocumentVersionUploadAction,
        RemoveAllResourcePermissionsAction,
        RemoveResourcePermissionAction,
        UpdateDocumentAction,
        UpdateDocumentVersionAction,
        UpdateFolderAction,
        UpdateUserAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    WorkDocsRequest(const Action action);
    WorkDocsRequest(const WorkDocsRequest &other);
    WorkDocsRequest &operator=(const WorkDocsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const WorkDocsRequest &other) const;


protected:
    /// @cond internal
    explicit WorkDocsRequest(WorkDocsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(WorkDocsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
