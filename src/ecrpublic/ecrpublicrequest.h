// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRPUBLICREQUEST_H
#define QTAWS_ECRPUBLICREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsecrpublicglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace EcrPublic {

class EcrPublicRequestPrivate;

class QTAWSECRPUBLIC_EXPORT EcrPublicRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by EcrPublic.
    enum Action {
        BatchCheckLayerAvailabilityAction,
        BatchDeleteImageAction,
        CompleteLayerUploadAction,
        CreateRepositoryAction,
        DeleteRepositoryAction,
        DeleteRepositoryPolicyAction,
        DescribeImageTagsAction,
        DescribeImagesAction,
        DescribeRegistriesAction,
        DescribeRepositoriesAction,
        GetAuthorizationTokenAction,
        GetRegistryCatalogDataAction,
        GetRepositoryCatalogDataAction,
        GetRepositoryPolicyAction,
        InitiateLayerUploadAction,
        ListTagsForResourceAction,
        PutImageAction,
        PutRegistryCatalogDataAction,
        PutRepositoryCatalogDataAction,
        SetRepositoryPolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UploadLayerPartAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EcrPublicRequest(const Action action);
    EcrPublicRequest(const EcrPublicRequest &other);
    EcrPublicRequest &operator=(const EcrPublicRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EcrPublicRequest &other) const;


protected:
    /// @cond internal
    explicit EcrPublicRequest(EcrPublicRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcrPublicRequest)

};

} // namespace EcrPublic
} // namespace QtAws

#endif
