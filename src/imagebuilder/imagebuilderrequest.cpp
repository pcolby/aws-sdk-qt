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
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::imagebuilderRequest
 * \brief The imagebuilderRequest class provides an interface for imagebuilder requests.
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * \enum imagebuilderRequest::Action
 *
 * This enum describes the actions that can be performed as imagebuilder
 * requests.
 *
 * \value CancelImageCreationAction imagebuilder CancelImageCreation action.
 * \value CreateComponentAction imagebuilder CreateComponent action.
 * \value CreateContainerRecipeAction imagebuilder CreateContainerRecipe action.
 * \value CreateDistributionConfigurationAction imagebuilder CreateDistributionConfiguration action.
 * \value CreateImageAction imagebuilder CreateImage action.
 * \value CreateImagePipelineAction imagebuilder CreateImagePipeline action.
 * \value CreateImageRecipeAction imagebuilder CreateImageRecipe action.
 * \value CreateInfrastructureConfigurationAction imagebuilder CreateInfrastructureConfiguration action.
 * \value DeleteComponentAction imagebuilder DeleteComponent action.
 * \value DeleteContainerRecipeAction imagebuilder DeleteContainerRecipe action.
 * \value DeleteDistributionConfigurationAction imagebuilder DeleteDistributionConfiguration action.
 * \value DeleteImageAction imagebuilder DeleteImage action.
 * \value DeleteImagePipelineAction imagebuilder DeleteImagePipeline action.
 * \value DeleteImageRecipeAction imagebuilder DeleteImageRecipe action.
 * \value DeleteInfrastructureConfigurationAction imagebuilder DeleteInfrastructureConfiguration action.
 * \value GetComponentAction imagebuilder GetComponent action.
 * \value GetComponentPolicyAction imagebuilder GetComponentPolicy action.
 * \value GetContainerRecipeAction imagebuilder GetContainerRecipe action.
 * \value GetContainerRecipePolicyAction imagebuilder GetContainerRecipePolicy action.
 * \value GetDistributionConfigurationAction imagebuilder GetDistributionConfiguration action.
 * \value GetImageAction imagebuilder GetImage action.
 * \value GetImagePipelineAction imagebuilder GetImagePipeline action.
 * \value GetImagePolicyAction imagebuilder GetImagePolicy action.
 * \value GetImageRecipeAction imagebuilder GetImageRecipe action.
 * \value GetImageRecipePolicyAction imagebuilder GetImageRecipePolicy action.
 * \value GetInfrastructureConfigurationAction imagebuilder GetInfrastructureConfiguration action.
 * \value ImportComponentAction imagebuilder ImportComponent action.
 * \value ListComponentBuildVersionsAction imagebuilder ListComponentBuildVersions action.
 * \value ListComponentsAction imagebuilder ListComponents action.
 * \value ListContainerRecipesAction imagebuilder ListContainerRecipes action.
 * \value ListDistributionConfigurationsAction imagebuilder ListDistributionConfigurations action.
 * \value ListImageBuildVersionsAction imagebuilder ListImageBuildVersions action.
 * \value ListImagePackagesAction imagebuilder ListImagePackages action.
 * \value ListImagePipelineImagesAction imagebuilder ListImagePipelineImages action.
 * \value ListImagePipelinesAction imagebuilder ListImagePipelines action.
 * \value ListImageRecipesAction imagebuilder ListImageRecipes action.
 * \value ListImagesAction imagebuilder ListImages action.
 * \value ListInfrastructureConfigurationsAction imagebuilder ListInfrastructureConfigurations action.
 * \value ListTagsForResourceAction imagebuilder ListTagsForResource action.
 * \value PutComponentPolicyAction imagebuilder PutComponentPolicy action.
 * \value PutContainerRecipePolicyAction imagebuilder PutContainerRecipePolicy action.
 * \value PutImagePolicyAction imagebuilder PutImagePolicy action.
 * \value PutImageRecipePolicyAction imagebuilder PutImageRecipePolicy action.
 * \value StartImagePipelineExecutionAction imagebuilder StartImagePipelineExecution action.
 * \value TagResourceAction imagebuilder TagResource action.
 * \value UntagResourceAction imagebuilder UntagResource action.
 * \value UpdateDistributionConfigurationAction imagebuilder UpdateDistributionConfiguration action.
 * \value UpdateImagePipelineAction imagebuilder UpdateImagePipeline action.
 * \value UpdateInfrastructureConfigurationAction imagebuilder UpdateInfrastructureConfiguration action.
 */

/*!
 * Constructs a imagebuilderRequest object for imagebuilder \a action.
 */
imagebuilderRequest::imagebuilderRequest(const Action action)
    : QtAws::Core::AwsAbstractRequest(new imagebuilderRequestPrivate(action, this))
{

}

/*!
 * Constructs a copy of \a other.
 */
imagebuilderRequest::imagebuilderRequest(const imagebuilderRequest &other)
    : QtAws::Core::AwsAbstractRequest(new imagebuilderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Sets the imagebuilderRequest object to be equal to \a other.
 */
imagebuilderRequest& imagebuilderRequest::operator=(const imagebuilderRequest &other)
{
    Q_D(imagebuilderRequest);
    d->action = other.d_func()->action;
    d->apiVersion = other.d_func()->apiVersion;
    d->parameters = other.d_func()->parameters;
    return *this;
}

/*!
 * Constructs aa imagebuilderRequest object with private implementation \a d.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from imagebuilderRequestPrivate.
 */
imagebuilderRequest::imagebuilderRequest(imagebuilderRequestPrivate * const d) : QtAws::Core::AwsAbstractRequest(d)
{

}

/*!
 * Returns the imagebuilder action to be performed by this request.
 */
imagebuilderRequest::Action imagebuilderRequest::action() const
{
    Q_D(const imagebuilderRequest);
    return d->action;
}

/*!
 * Returns the name of the imagebuilder action to be performed by this request.
 */
QString imagebuilderRequest::actionString() const
{
    return imagebuilderRequestPrivate::toString(action());
}

/*!
 * Returns the imagebuilder API version implemented by this request.
 */
QString imagebuilderRequest::apiVersion() const
{
    Q_D(const imagebuilderRequest);
    return d->apiVersion;
}

/*!
 * Sets the imagebuilder action to be performed by this request to \a action.
 */
void imagebuilderRequest::setAction(const Action action)
{
    Q_D(imagebuilderRequest);
    d->action = action;
}

/*!
 * Sets the imagebuilder API version to include in this request to \a version.
 */
void imagebuilderRequest::setApiVersion(const QString &version)
{
    Q_D(imagebuilderRequest);
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
bool imagebuilderRequest::operator==(const imagebuilderRequest &other) const
{
    return ((action() == other.action()) &&
            (apiVersion() == other.apiVersion()) &&
            (parameters() == other.parameters()) &&
            (QtAws::Core::AwsAbstractRequest::operator ==(other)));
}

/*
 * Returns \c tue if \a queueName is a valid imagebuilder queue name.
 *
 * @par From imagebuilder FAQs:
 *      Queue names are limited to 80 characters. Alphanumeric characters plus
 *      hyphens (-) and underscores (_) are allowed.
 *
 * @param  queueName  Name to check for validity.
 *
 * @return \c true if \a queueName is a valid imagebuilder queue name, \c false otherwise.
 *
 * @see    http://aws.amazon.com/sqs/faqs/
 */
/*bool imagebuilderRequest::isValidQueueName(const QString &queueName)
{
    const QRegExp pattern(QLatin1String("[a-zA-Z0-9-_]{1,80}"));
    return pattern.exactMatch(queueName);
}*/

/*!
 * Removes the a \a name parameter from the request, then returns the number of
 * paramters removed (typically \c 0 or \c 1).
 */
int imagebuilderRequest::clearParameter(const QString &name)
{
    Q_D(imagebuilderRequest);
    return d->parameters.remove(name);
}

/*!
 * Removes all parameters from the request.
 */
void imagebuilderRequest::clearParameters()
{
    Q_D(imagebuilderRequest);
    d->parameters.clear();
}

/*!
 * Returns the value of the \a name pararemter if set; \a defaultValue otherwise.
 */
QVariant imagebuilderRequest::parameter(const QString &name, const QVariant &defaultValue) const
{
    Q_D(const imagebuilderRequest);
    return d->parameters.value(name, defaultValue);
}

/*!
 * Returns the parameters included in this request.
 */
const QVariantMap &imagebuilderRequest::parameters() const
{
    Q_D(const imagebuilderRequest);
    return d->parameters;
}

/*!
 * Sets the \a name parameter to \a value.
 */
void imagebuilderRequest::setParameter(const QString &name, const QVariant &value)
{
    Q_D(imagebuilderRequest);
    d->parameters.insert(name, value);
}

/*!
 * Sets the paramters for this request to \a parameters. Any request parameters
 * set previously will be discarded.
 */
void imagebuilderRequest::setParameters(const QVariantMap &parameters)
{
    Q_D(imagebuilderRequest);
    d->parameters = parameters;
}

/*!
 * Returns a network request for the imagebuilder request using the given
 * \a endpoint.
 *
 * This imagebuilder implementation builds request URLs by combining the
 * common query parameters (such as Action and Version), with any that have
 * been added (via setParameter) by child classes.
 */
QNetworkRequest imagebuilderRequest::unsignedRequest(const QUrl &endpoint) const
{
    //Q_D(const imagebuilderRequest);
    QUrl url(endpoint);
    /// @todo url.setQuery(d->urlQuery());
    return QNetworkRequest(url);
}

/*!
 * \class QtAws::imagebuilder::imagebuilderRequestPrivate
 * \brief The imagebuilderRequestPrivate class provides private implementation for imagebuilderRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a imagebuilderRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
imagebuilderRequestPrivate::imagebuilderRequestPrivate(const imagebuilderRequest::Action action, imagebuilderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(action), apiVersion(QLatin1String("2012-11-05"))
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor copies everything from \a other, except for the
 * the object's pointer to its public instance - for that, \a q is used instead.
 *
 * This is required to support the imagebuilderRequest class's copy constructor.
 */
imagebuilderRequestPrivate::imagebuilderRequestPrivate(const imagebuilderRequestPrivate &other,
                                     imagebuilderRequest * const q)
    : QtAws::Core::AwsAbstractRequestPrivate(q), action(other.action),
      apiVersion(other.apiVersion), parameters(other.parameters)
{

}

/*!
 * Returns a string represention of \a action, or a null string if \a action is
 * invalid.
 *
 * This function converts imagebuilderRequest::Action enumerator values to their respective
 * string representations, appropriate for use with the imagebuilder service's Action
 * query parameters.
 */
QString imagebuilderRequestPrivate::toString(const imagebuilderRequest::Action &action)
{
    #define ActionToString(action) \
        case imagebuilderRequest::action##Action: return QStringLiteral(#action)
    switch (action) {
        //ActionToString(/*todo*/);
        default:
            Q_ASSERT_X(false, Q_FUNC_INFO, "invalid action");
    }
    #undef ActionToString
    return QString();
}

} // namespace imagebuilder
} // namespace QtAws
