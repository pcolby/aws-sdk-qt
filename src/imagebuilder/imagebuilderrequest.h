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

#ifndef QTAWS_IMAGEBUILDERREQUEST_H
#define QTAWS_IMAGEBUILDERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsimagebuilderglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace imagebuilder {

class imagebuilderRequestPrivate;

class QTAWSIMAGEBUILDER_EXPORT imagebuilderRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by imagebuilder.
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

    imagebuilderRequest(const Action action);
    imagebuilderRequest(const imagebuilderRequest &other);
    imagebuilderRequest &operator=(const imagebuilderRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const imagebuilderRequest &other) const;


protected:
    /// @cond internal
    imagebuilderRequestPrivate * const d_ptr; ///< Internal d-pointer.
    explicit imagebuilderRequest(imagebuilderRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(imagebuilderRequest)

};

} // namespace imagebuilder
} // namespace QtAws

#endif
