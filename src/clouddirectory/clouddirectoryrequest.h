// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDDIRECTORYREQUEST_H
#define QTAWS_CLOUDDIRECTORYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsclouddirectoryglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudDirectory {

class CloudDirectoryRequestPrivate;

class QTAWSCLOUDDIRECTORY_EXPORT CloudDirectoryRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudDirectory.
    enum Action {
        AddFacetToObjectAction,
        ApplySchemaAction,
        AttachObjectAction,
        AttachPolicyAction,
        AttachToIndexAction,
        AttachTypedLinkAction,
        BatchReadAction,
        BatchWriteAction,
        CreateDirectoryAction,
        CreateFacetAction,
        CreateIndexAction,
        CreateObjectAction,
        CreateSchemaAction,
        CreateTypedLinkFacetAction,
        DeleteDirectoryAction,
        DeleteFacetAction,
        DeleteObjectAction,
        DeleteSchemaAction,
        DeleteTypedLinkFacetAction,
        DetachFromIndexAction,
        DetachObjectAction,
        DetachPolicyAction,
        DetachTypedLinkAction,
        DisableDirectoryAction,
        EnableDirectoryAction,
        GetAppliedSchemaVersionAction,
        GetDirectoryAction,
        GetFacetAction,
        GetLinkAttributesAction,
        GetObjectAttributesAction,
        GetObjectInformationAction,
        GetSchemaAsJsonAction,
        GetTypedLinkFacetInformationAction,
        ListAppliedSchemaArnsAction,
        ListAttachedIndicesAction,
        ListDevelopmentSchemaArnsAction,
        ListDirectoriesAction,
        ListFacetAttributesAction,
        ListFacetNamesAction,
        ListIncomingTypedLinksAction,
        ListIndexAction,
        ListManagedSchemaArnsAction,
        ListObjectAttributesAction,
        ListObjectChildrenAction,
        ListObjectParentPathsAction,
        ListObjectParentsAction,
        ListObjectPoliciesAction,
        ListOutgoingTypedLinksAction,
        ListPolicyAttachmentsAction,
        ListPublishedSchemaArnsAction,
        ListTagsForResourceAction,
        ListTypedLinkFacetAttributesAction,
        ListTypedLinkFacetNamesAction,
        LookupPolicyAction,
        PublishSchemaAction,
        PutSchemaFromJsonAction,
        RemoveFacetFromObjectAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateFacetAction,
        UpdateLinkAttributesAction,
        UpdateObjectAttributesAction,
        UpdateSchemaAction,
        UpdateTypedLinkFacetAction,
        UpgradeAppliedSchemaAction,
        UpgradePublishedSchemaAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudDirectoryRequest(const Action action);
    CloudDirectoryRequest(const CloudDirectoryRequest &other);
    CloudDirectoryRequest &operator=(const CloudDirectoryRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudDirectoryRequest &other) const;


protected:
    /// @cond internal
    explicit CloudDirectoryRequest(CloudDirectoryRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudDirectoryRequest)

};

} // namespace CloudDirectory
} // namespace QtAws

#endif
