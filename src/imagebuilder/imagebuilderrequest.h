// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMAGEBUILDERREQUEST_H
#define QTAWS_IMAGEBUILDERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsimagebuilderglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ImageBuilder {

class ImageBuilderRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT ImageBuilderRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ImageBuilder.
    enum Action {
        CancelImageCreationAction,
        CreateComponentAction,
        CreateContainerRecipeAction,
        CreateDistributionConfigurationAction,
        CreateImageAction,
        CreateImagePipelineAction,
        CreateImageRecipeAction,
        CreateInfrastructureConfigurationAction,
        DeleteComponentAction,
        DeleteContainerRecipeAction,
        DeleteDistributionConfigurationAction,
        DeleteImageAction,
        DeleteImagePipelineAction,
        DeleteImageRecipeAction,
        DeleteInfrastructureConfigurationAction,
        GetComponentAction,
        GetComponentPolicyAction,
        GetContainerRecipeAction,
        GetContainerRecipePolicyAction,
        GetDistributionConfigurationAction,
        GetImageAction,
        GetImagePipelineAction,
        GetImagePolicyAction,
        GetImageRecipeAction,
        GetImageRecipePolicyAction,
        GetInfrastructureConfigurationAction,
        ImportComponentAction,
        ImportVmImageAction,
        ListComponentBuildVersionsAction,
        ListComponentsAction,
        ListContainerRecipesAction,
        ListDistributionConfigurationsAction,
        ListImageBuildVersionsAction,
        ListImagePackagesAction,
        ListImagePipelineImagesAction,
        ListImagePipelinesAction,
        ListImageRecipesAction,
        ListImagesAction,
        ListInfrastructureConfigurationsAction,
        ListTagsForResourceAction,
        PutComponentPolicyAction,
        PutContainerRecipePolicyAction,
        PutImagePolicyAction,
        PutImageRecipePolicyAction,
        StartImagePipelineExecutionAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateDistributionConfigurationAction,
        UpdateImagePipelineAction,
        UpdateInfrastructureConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ImageBuilderRequest(const Action action);
    ImageBuilderRequest(const ImageBuilderRequest &other);
    ImageBuilderRequest &operator=(const ImageBuilderRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ImageBuilderRequest &other) const;


protected:
    /// @cond internal
    explicit ImageBuilderRequest(ImageBuilderRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImageBuilderRequest)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
