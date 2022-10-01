// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEARTIFACTREQUEST_H
#define QTAWS_CODEARTIFACTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodeartifactglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeArtifact {

class CodeArtifactRequestPrivate;

class QTAWSCODEARTIFACT_EXPORT CodeArtifactRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeArtifact.
    enum Action {
        AssociateExternalConnectionAction,
        CopyPackageVersionsAction,
        CreateDomainAction,
        CreateRepositoryAction,
        DeleteDomainAction,
        DeleteDomainPermissionsPolicyAction,
        DeletePackageVersionsAction,
        DeleteRepositoryAction,
        DeleteRepositoryPermissionsPolicyAction,
        DescribeDomainAction,
        DescribePackageAction,
        DescribePackageVersionAction,
        DescribeRepositoryAction,
        DisassociateExternalConnectionAction,
        DisposePackageVersionsAction,
        GetAuthorizationTokenAction,
        GetDomainPermissionsPolicyAction,
        GetPackageVersionAssetAction,
        GetPackageVersionReadmeAction,
        GetRepositoryEndpointAction,
        GetRepositoryPermissionsPolicyAction,
        ListDomainsAction,
        ListPackageVersionAssetsAction,
        ListPackageVersionDependenciesAction,
        ListPackageVersionsAction,
        ListPackagesAction,
        ListRepositoriesAction,
        ListRepositoriesInDomainAction,
        ListTagsForResourceAction,
        PutDomainPermissionsPolicyAction,
        PutPackageOriginConfigurationAction,
        PutRepositoryPermissionsPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdatePackageVersionsStatusAction,
        UpdateRepositoryAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeArtifactRequest(const Action action);
    CodeArtifactRequest(const CodeArtifactRequest &other);
    CodeArtifactRequest &operator=(const CodeArtifactRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeArtifactRequest &other) const;


protected:
    /// @cond internal
    explicit CodeArtifactRequest(CodeArtifactRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeArtifactRequest)

};

} // namespace CodeArtifact
} // namespace QtAws

#endif
