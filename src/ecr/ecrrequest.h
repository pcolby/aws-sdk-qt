// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ECRREQUEST_H
#define QTAWS_ECRREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsecrglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Ecr {

class EcrRequestPrivate;

class QTAWSECR_EXPORT EcrRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Ecr.
    enum Action {
        BatchCheckLayerAvailabilityAction,
        BatchDeleteImageAction,
        BatchGetImageAction,
        BatchGetRepositoryScanningConfigurationAction,
        CompleteLayerUploadAction,
        CreatePullThroughCacheRuleAction,
        CreateRepositoryAction,
        DeleteLifecyclePolicyAction,
        DeletePullThroughCacheRuleAction,
        DeleteRegistryPolicyAction,
        DeleteRepositoryAction,
        DeleteRepositoryPolicyAction,
        DescribeImageReplicationStatusAction,
        DescribeImageScanFindingsAction,
        DescribeImagesAction,
        DescribePullThroughCacheRulesAction,
        DescribeRegistryAction,
        DescribeRepositoriesAction,
        GetAuthorizationTokenAction,
        GetDownloadUrlForLayerAction,
        GetLifecyclePolicyAction,
        GetLifecyclePolicyPreviewAction,
        GetRegistryPolicyAction,
        GetRegistryScanningConfigurationAction,
        GetRepositoryPolicyAction,
        InitiateLayerUploadAction,
        ListImagesAction,
        ListTagsForResourceAction,
        PutImageAction,
        PutImageScanningConfigurationAction,
        PutImageTagMutabilityAction,
        PutLifecyclePolicyAction,
        PutRegistryPolicyAction,
        PutRegistryScanningConfigurationAction,
        PutReplicationConfigurationAction,
        SetRepositoryPolicyAction,
        StartImageScanAction,
        StartLifecyclePolicyPreviewAction,
        TagResourceAction,
        UntagResourceAction,
        UploadLayerPartAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    EcrRequest(const Action action);
    EcrRequest(const EcrRequest &other);
    EcrRequest &operator=(const EcrRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const EcrRequest &other) const;


protected:
    /// @cond internal
    explicit EcrRequest(EcrRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EcrRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
