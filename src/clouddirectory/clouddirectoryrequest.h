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
    CloudDirectoryRequest(CloudDirectoryRequestPrivate * const d);
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
