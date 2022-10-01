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

#include "imagebuilderrequest.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImageBuilderRequest
 * \brief The ImageBuilderRequest class provides an interface for ImageBuilder requests.
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * \enum ImageBuilderRequest::Action
 *
 * This enum describes the actions that can be performed as ImageBuilder
 * requests.
 *
 * \value CancelImageCreationAction ImageBuilder CancelImageCreation action.
 * \value CreateComponentAction ImageBuilder CreateComponent action.
 * \value CreateContainerRecipeAction ImageBuilder CreateContainerRecipe action.
 * \value CreateDistributionConfigurationAction ImageBuilder CreateDistributionConfiguration action.
 * \value CreateImageAction ImageBuilder CreateImage action.
 * \value CreateImagePipelineAction ImageBuilder CreateImagePipeline action.
 * \value CreateImageRecipeAction ImageBuilder CreateImageRecipe action.
 * \value CreateInfrastructureConfigurationAction ImageBuilder CreateInfrastructureConfiguration action.
 * \value DeleteComponentAction ImageBuilder DeleteComponent action.
 * \value DeleteContainerRecipeAction ImageBuilder DeleteContainerRecipe action.
 * \value DeleteDistributionConfigurationAction ImageBuilder DeleteDistributionConfiguration action.
 * \value DeleteImageAction ImageBuilder DeleteImage action.
 * \value DeleteImagePipelineAction ImageBuilder DeleteImagePipeline action.
 * \value DeleteImageRecipeAction ImageBuilder DeleteImageRecipe action.
 * \value DeleteInfrastructureConfigurationAction ImageBuilder DeleteInfrastructureConfiguration action.
 * \value GetComponentAction ImageBuilder GetComponent action.
 * \value GetComponentPolicyAction ImageBuilder GetComponentPolicy action.
 * \value GetContainerRecipeAction ImageBuilder GetContainerRecipe action.
 * \value GetContainerRecipePolicyAction ImageBuilder GetContainerRecipePolicy action.
 * \value GetDistributionConfigurationAction ImageBuilder GetDistributionConfiguration action.
 * \value GetImageAction ImageBuilder GetImage action.
 * \value GetImagePipelineAction ImageBuilder GetImagePipeline action.
 * \value GetImagePolicyAction ImageBuilder GetImagePolicy action.
 * \value GetImageRecipeAction ImageBuilder GetImageRecipe action.
 * \value GetImageRecipePolicyAction ImageBuilder GetImageRecipePolicy action.
 * \value GetInfrastructureConfigurationAction ImageBuilder GetInfrastructureConfiguration action.
 * \value ImportComponentAction ImageBuilder ImportComponent action.
 * \value ImportVmImageAction ImageBuilder ImportVmImage action.
 * \value ListComponentBuildVersionsAction ImageBuilder ListComponentBuildVersions action.
 * \value ListComponentsAction ImageBuilder ListComponents action.
 * \value ListContainerRecipesAction ImageBuilder ListContainerRecipes action.
 * \value ListDistributionConfigurationsAction ImageBuilder ListDistributionConfigurations action.
 * \value ListImageBuildVersionsAction ImageBuilder ListImageBuildVersions action.
 * \value ListImagePackagesAction ImageBuilder ListImagePackages action.
 * \value ListImagePipelineImagesAction ImageBuilder ListImagePipelineImages action.
 * \value ListImagePipelinesAction ImageBuilder ListImagePipelines action.
 * \value ListImageRecipesAction ImageBuilder ListImageRecipes action.
 * \value ListImagesAction ImageBuilder ListImages action.
 * \value ListInfrastructureConfigurationsAction ImageBuilder ListInfrastructureConfigurations action.
 * \value ListTagsForResourceAction ImageBuilder ListTagsForResource action.
 * \value PutComponentPolicyAction ImageBuilder PutComponentPolicy action.
 * \value PutContainerRecipePolicyAction ImageBuilder PutContainerRecipePolicy action.
 * \value PutImagePolicyAction ImageBuilder PutImagePolicy action.
 * \value PutImageRecipePolicyAction ImageBuilder PutImageRecipePolicy action.
 * \value StartImagePipelineExecutionAction ImageBuilder StartImagePipelineExecution action.
 * \value TagResourceAction ImageBuilder TagResource action.
 * \value UntagResourceAction ImageBuilder UntagResource action.
 * \value UpdateDistributionConfigurationAction ImageBuilder UpdateDistributionConfiguration action.
 * \value UpdateImagePipelineAction ImageBuilder UpdateImagePipeline action.
 * \value UpdateInfrastructureConfigurationAction ImageBuilder UpdateInfrastructureConfiguration action.
 */

/*!
 * Constructs a ImageBuilderRequest object for ImageBuilder \a action.
 */
ImageBuilderRequest::ImageBuilderRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new ImageBuilderRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
ImageBuilderRequest::ImageBuilderRequest(const ImageBuilderRequest &other)
    : QtAws::Core::AwsAbstractRequest(new ImageBuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the ImageBuilderRequest object to be equal to \a other.
 */
ImageBuilderRequest& ImageBuilderRequest::operator=(const ImageBuilderRequest &other)
{
    Q_D(ImageBuilderRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa ImageBuilderRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ImageBuilderRequestPrivate.
 */
ImageBuilderRequest::ImageBuilderRequest(ImageBuilderRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the ImageBuilder action to be performed by this request.
 */
ImageBuilderRequest::Action ImageBuilderRequest::action() const
{
    Q_D(const ImageBuilderRequest);
    return d->action;
}

/*!
 * Returns the name of the ImageBuilder action to be performed by this request.
 */
QString ImageBuilderRequest::actionString() const
{
    return ImageBuilderRequestPrivate::toString(action());
}

/*!
 * Returns the ImageBuilder API version implemented by this request.
 */
QString ImageBuilderRequest::apiVersion() const
{
    Q_D(const ImageBuilderRequest);
    return d->apiVersion;
}

/*!
 * Sets the ImageBuilder action to be performed by this request to \a action.
 */
void ImageBuilderRequest::setAction(const Action action)
{
    Q_D(ImageBuilderRequest);
    d->action = action;
}

/*!
 * Sets the ImageBuilder API version to include in this request to \a version.
 */
void ImageBuilderRequest::setApiVersion(const QString &version)
{
    Q_D(ImageBuilderRequest);
    d->apiVersion = version;
}

/*!
 * Returns \c true if this request is equal to \a other; \c false otherwise.
 *
 * Note, most derived *Request classes do not need to provider their own
 * implementations of this function, since most such request classes rely on
 * this class' parameters functionality for all request parameters, and that
 * parameters map is already checked via this implementation.
 */
bool ImageBuilderRequest::operator==(const ImageBuilderRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid ImageBuilder queue name.
 *
 * @par From ImageBuilder FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid ImageBuilder queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool ImageBuilderRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int ImageBuilderRequest::clearParameter(const QString &name)
{
    Q_D(ImageBuilderRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void ImageBuilderRequest::clearParameters()
{
    Q_D(ImageBuilderRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant ImageBuilderRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const ImageBuilderRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &ImageBuilderRequest::parameters() const
{
    Q_D(const ImageBuilderRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void ImageBuilderRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(ImageBuilderRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void ImageBuilderRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(ImageBuilderRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the ImageBuilder request using the given
 * \a endpoint.
 *
 * This ImageBuilder implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest ImageBuilderRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const ImageBuilderRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::ImageBuilder::ImageBuilderRequestPrivate
 * \brief The ImageBuilderRequestPrivate class provides private implementation for ImageBuilderRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImageBuilderRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
ImageBuilderRequestPrivate::ImageBuilderRequestPrivate(const ImageBuilderRequest::Action action, ImageBuilderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2019-12-02"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the ImageBuilderRequest class's copy constructor.
 */
ImageBuilderRequestPrivate::ImageBuilderRequestPrivate(const ImageBuilderRequestPrivate &other,
                                     ImageBuilderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts ImageBuilderRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the ImageBuilder service's Action
 * query parameters.
 */
QString ImageBuilderRequestPrivate::toString(const ImageBuilderRequest::Action &action)
{
    #define ActionToString(action) \
        case ImageBuilderRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        ActionToString(CancelImageCreation);
        ActionToString(CreateComponent);
        ActionToString(CreateContainerRecipe);
        ActionToString(CreateDistributionConfiguration);
        ActionToString(CreateImage);
        ActionToString(CreateImagePipeline);
        ActionToString(CreateImageRecipe);
        ActionToString(CreateInfrastructureConfiguration);
        ActionToString(DeleteComponent);
        ActionToString(DeleteContainerRecipe);
        ActionToString(DeleteDistributionConfiguration);
        ActionToString(DeleteImage);
        ActionToString(DeleteImagePipeline);
        ActionToString(DeleteImageRecipe);
        ActionToString(DeleteInfrastructureConfiguration);
        ActionToString(GetComponent);
        ActionToString(GetComponentPolicy);
        ActionToString(GetContainerRecipe);
        ActionToString(GetContainerRecipePolicy);
        ActionToString(GetDistributionConfiguration);
        ActionToString(GetImage);
        ActionToString(GetImagePipeline);
        ActionToString(GetImagePolicy);
        ActionToString(GetImageRecipe);
        ActionToString(GetImageRecipePolicy);
        ActionToString(GetInfrastructureConfiguration);
        ActionToString(ImportComponent);
        ActionToString(ImportVmImage);
        ActionToString(ListComponentBuildVersions);
        ActionToString(ListComponents);
        ActionToString(ListContainerRecipes);
        ActionToString(ListDistributionConfigurations);
        ActionToString(ListImageBuildVersions);
        ActionToString(ListImagePackages);
        ActionToString(ListImagePipelineImages);
        ActionToString(ListImagePipelines);
        ActionToString(ListImageRecipes);
        ActionToString(ListImages);
        ActionToString(ListInfrastructureConfigurations);
        ActionToString(ListTagsForResource);
        ActionToString(PutComponentPolicy);
        ActionToString(PutContainerRecipePolicy);
        ActionToString(PutImagePolicy);
        ActionToString(PutImageRecipePolicy);
        ActionToString(StartImagePipelineExecution);
        ActionToString(TagResource);
        ActionToString(UntagResource);
        ActionToString(UpdateDistributionConfiguration);
        ActionToString(UpdateImagePipeline);
        ActionToString(UpdateInfrastructureConfiguration);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace ImageBuilder
} // namespace QtAws
