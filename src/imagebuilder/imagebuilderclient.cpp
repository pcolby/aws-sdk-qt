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

#include "imagebuilderclient.h"
#include "imagebuilderclient_p.h"

#include "core/awssignaturev4.h"
#include "cancelimagecreationrequest.h"
#include "cancelimagecreationresponse.h"
#include "createcomponentrequest.h"
#include "createcomponentresponse.h"
#include "createcontainerreciperequest.h"
#include "createcontainerreciperesponse.h"
#include "createdistributionconfigurationrequest.h"
#include "createdistributionconfigurationresponse.h"
#include "createimagerequest.h"
#include "createimageresponse.h"
#include "createimagepipelinerequest.h"
#include "createimagepipelineresponse.h"
#include "createimagereciperequest.h"
#include "createimagereciperesponse.h"
#include "createinfrastructureconfigurationrequest.h"
#include "createinfrastructureconfigurationresponse.h"
#include "deletecomponentrequest.h"
#include "deletecomponentresponse.h"
#include "deletecontainerreciperequest.h"
#include "deletecontainerreciperesponse.h"
#include "deletedistributionconfigurationrequest.h"
#include "deletedistributionconfigurationresponse.h"
#include "deleteimagerequest.h"
#include "deleteimageresponse.h"
#include "deleteimagepipelinerequest.h"
#include "deleteimagepipelineresponse.h"
#include "deleteimagereciperequest.h"
#include "deleteimagereciperesponse.h"
#include "deleteinfrastructureconfigurationrequest.h"
#include "deleteinfrastructureconfigurationresponse.h"
#include "getcomponentrequest.h"
#include "getcomponentresponse.h"
#include "getcomponentpolicyrequest.h"
#include "getcomponentpolicyresponse.h"
#include "getcontainerreciperequest.h"
#include "getcontainerreciperesponse.h"
#include "getcontainerrecipepolicyrequest.h"
#include "getcontainerrecipepolicyresponse.h"
#include "getdistributionconfigurationrequest.h"
#include "getdistributionconfigurationresponse.h"
#include "getimagerequest.h"
#include "getimageresponse.h"
#include "getimagepipelinerequest.h"
#include "getimagepipelineresponse.h"
#include "getimagepolicyrequest.h"
#include "getimagepolicyresponse.h"
#include "getimagereciperequest.h"
#include "getimagereciperesponse.h"
#include "getimagerecipepolicyrequest.h"
#include "getimagerecipepolicyresponse.h"
#include "getinfrastructureconfigurationrequest.h"
#include "getinfrastructureconfigurationresponse.h"
#include "importcomponentrequest.h"
#include "importcomponentresponse.h"
#include "listcomponentbuildversionsrequest.h"
#include "listcomponentbuildversionsresponse.h"
#include "listcomponentsrequest.h"
#include "listcomponentsresponse.h"
#include "listcontainerrecipesrequest.h"
#include "listcontainerrecipesresponse.h"
#include "listdistributionconfigurationsrequest.h"
#include "listdistributionconfigurationsresponse.h"
#include "listimagebuildversionsrequest.h"
#include "listimagebuildversionsresponse.h"
#include "listimagepackagesrequest.h"
#include "listimagepackagesresponse.h"
#include "listimagepipelineimagesrequest.h"
#include "listimagepipelineimagesresponse.h"
#include "listimagepipelinesrequest.h"
#include "listimagepipelinesresponse.h"
#include "listimagerecipesrequest.h"
#include "listimagerecipesresponse.h"
#include "listimagesrequest.h"
#include "listimagesresponse.h"
#include "listinfrastructureconfigurationsrequest.h"
#include "listinfrastructureconfigurationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putcomponentpolicyrequest.h"
#include "putcomponentpolicyresponse.h"
#include "putcontainerrecipepolicyrequest.h"
#include "putcontainerrecipepolicyresponse.h"
#include "putimagepolicyrequest.h"
#include "putimagepolicyresponse.h"
#include "putimagerecipepolicyrequest.h"
#include "putimagerecipepolicyresponse.h"
#include "startimagepipelineexecutionrequest.h"
#include "startimagepipelineexecutionresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedistributionconfigurationrequest.h"
#include "updatedistributionconfigurationresponse.h"
#include "updateimagepipelinerequest.h"
#include "updateimagepipelineresponse.h"
#include "updateinfrastructureconfigurationrequest.h"
#include "updateinfrastructureconfigurationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::imagebuilder
 * \brief Contains classess for accessing EC2 Image Builder (imagebuilder).
 *
 * \inmodule QtAwsimagebuilder
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::imagebuilderClient
 * \brief The imagebuilderClient class provides access to the EC2 Image Builder (imagebuilder) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 */

/*!
 * \brief Constructs a imagebuilderClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
imagebuilderClient::imagebuilderClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-02"),
    QStringLiteral("imagebuilder"),
    QStringLiteral("EC2 Image Builder"),
    QStringLiteral("imagebuilder"),
    parent), d_ptr(new imagebuilderClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload imagebuilderClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
imagebuilderClient::imagebuilderClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2019-12-02"),
    QStringLiteral("imagebuilder"),
    QStringLiteral("EC2 Image Builder"),
    QStringLiteral("imagebuilder"),
    parent), d_ptr(new imagebuilderClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CancelImageCreationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * CancelImageCreation cancels the creation of Image. This operation can only be used on images in a non-terminal
 */
CancelImageCreationResponse * imagebuilderClient::cancelImageCreation(const CancelImageCreationRequest &request)
{
    return qobject_cast<CancelImageCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new component that can be used to build, validate, test, and assess your
 */
CreateComponentResponse * imagebuilderClient::createComponent(const CreateComponentRequest &request)
{
    return qobject_cast<CreateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateContainerRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new container recipe. Container recipes define how images are configured, tested, and
 */
CreateContainerRecipeResponse * imagebuilderClient::createContainerRecipe(const CreateContainerRecipeRequest &request)
{
    return qobject_cast<CreateContainerRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new distribution configuration. Distribution configurations define and configure the outputs of your
 */
CreateDistributionConfigurationResponse * imagebuilderClient::createDistributionConfiguration(const CreateDistributionConfigurationRequest &request)
{
    return qobject_cast<CreateDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image. This request will create a new image along with all of the configured output resources defined in
 * the distribution configuration. You must specify exactly one recipe for your image, using either a ContainerRecipeArn or
 * an
 */
CreateImageResponse * imagebuilderClient::createImage(const CreateImageRequest &request)
{
    return qobject_cast<CreateImageResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image pipeline. Image pipelines enable you to automate the creation and distribution of
 */
CreateImagePipelineResponse * imagebuilderClient::createImagePipeline(const CreateImagePipelineRequest &request)
{
    return qobject_cast<CreateImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateImageRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image recipe. Image recipes define how images are configured, tested, and
 */
CreateImageRecipeResponse * imagebuilderClient::createImageRecipe(const CreateImageRecipeRequest &request)
{
    return qobject_cast<CreateImageRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * CreateInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new infrastructure configuration. An infrastructure configuration defines the environment in which your image
 * will be built and
 */
CreateInfrastructureConfigurationResponse * imagebuilderClient::createInfrastructureConfiguration(const CreateInfrastructureConfigurationRequest &request)
{
    return qobject_cast<CreateInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a component build
 */
DeleteComponentResponse * imagebuilderClient::deleteComponent(const DeleteComponentRequest &request)
{
    return qobject_cast<DeleteComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteContainerRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a container
 */
DeleteContainerRecipeResponse * imagebuilderClient::deleteContainerRecipe(const DeleteContainerRecipeRequest &request)
{
    return qobject_cast<DeleteContainerRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a distribution
 */
DeleteDistributionConfigurationResponse * imagebuilderClient::deleteDistributionConfiguration(const DeleteDistributionConfigurationRequest &request)
{
    return qobject_cast<DeleteDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteImageResponse * imagebuilderClient::deleteImage(const DeleteImageRequest &request)
{
    return qobject_cast<DeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an image
 */
DeleteImagePipelineResponse * imagebuilderClient::deleteImagePipeline(const DeleteImagePipelineRequest &request)
{
    return qobject_cast<DeleteImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteImageRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an image
 */
DeleteImageRecipeResponse * imagebuilderClient::deleteImageRecipe(const DeleteImageRecipeRequest &request)
{
    return qobject_cast<DeleteImageRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * DeleteInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an infrastructure
 */
DeleteInfrastructureConfigurationResponse * imagebuilderClient::deleteInfrastructureConfiguration(const DeleteInfrastructureConfigurationRequest &request)
{
    return qobject_cast<DeleteInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a component
 */
GetComponentResponse * imagebuilderClient::getComponent(const GetComponentRequest &request)
{
    return qobject_cast<GetComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetComponentPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a component
 */
GetComponentPolicyResponse * imagebuilderClient::getComponentPolicy(const GetComponentPolicyRequest &request)
{
    return qobject_cast<GetComponentPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetContainerRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a container
 */
GetContainerRecipeResponse * imagebuilderClient::getContainerRecipe(const GetContainerRecipeRequest &request)
{
    return qobject_cast<GetContainerRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetContainerRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the policy for a container
 */
GetContainerRecipePolicyResponse * imagebuilderClient::getContainerRecipePolicy(const GetContainerRecipePolicyRequest &request)
{
    return qobject_cast<GetContainerRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a distribution
 */
GetDistributionConfigurationResponse * imagebuilderClient::getDistributionConfiguration(const GetDistributionConfigurationRequest &request)
{
    return qobject_cast<GetDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an
 */
GetImageResponse * imagebuilderClient::getImage(const GetImageRequest &request)
{
    return qobject_cast<GetImageResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image
 */
GetImagePipelineResponse * imagebuilderClient::getImagePipeline(const GetImagePipelineRequest &request)
{
    return qobject_cast<GetImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetImagePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image
 */
GetImagePolicyResponse * imagebuilderClient::getImagePolicy(const GetImagePolicyRequest &request)
{
    return qobject_cast<GetImagePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetImageRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image
 */
GetImageRecipeResponse * imagebuilderClient::getImageRecipe(const GetImageRecipeRequest &request)
{
    return qobject_cast<GetImageRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetImageRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image recipe
 */
GetImageRecipePolicyResponse * imagebuilderClient::getImageRecipePolicy(const GetImageRecipePolicyRequest &request)
{
    return qobject_cast<GetImageRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * GetInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an infrastructure
 */
GetInfrastructureConfigurationResponse * imagebuilderClient::getInfrastructureConfiguration(const GetInfrastructureConfigurationRequest &request)
{
    return qobject_cast<GetInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ImportComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a component and transforms its data into a component
 */
ImportComponentResponse * imagebuilderClient::importComponent(const ImportComponentRequest &request)
{
    return qobject_cast<ImportComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListComponentBuildVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of component build versions for the specified semantic
 */
ListComponentBuildVersionsResponse * imagebuilderClient::listComponentBuildVersions(const ListComponentBuildVersionsRequest &request)
{
    return qobject_cast<ListComponentBuildVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of component build versions for the specified semantic
 */
ListComponentsResponse * imagebuilderClient::listComponents(const ListComponentsRequest &request)
{
    return qobject_cast<ListComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListContainerRecipesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of container
 */
ListContainerRecipesResponse * imagebuilderClient::listContainerRecipes(const ListContainerRecipesRequest &request)
{
    return qobject_cast<ListContainerRecipesResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListDistributionConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of distribution
 */
ListDistributionConfigurationsResponse * imagebuilderClient::listDistributionConfigurations(const ListDistributionConfigurationsRequest &request)
{
    return qobject_cast<ListDistributionConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListImageBuildVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of image build
 */
ListImageBuildVersionsResponse * imagebuilderClient::listImageBuildVersions(const ListImageBuildVersionsRequest &request)
{
    return qobject_cast<ListImageBuildVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListImagePackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the Packages that are associated with an Image Build Version, as determined by AWS Systems Manager Inventory at
 * build
 */
ListImagePackagesResponse * imagebuilderClient::listImagePackages(const ListImagePackagesRequest &request)
{
    return qobject_cast<ListImagePackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListImagePipelineImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of images created by the specified
 */
ListImagePipelineImagesResponse * imagebuilderClient::listImagePipelineImages(const ListImagePipelineImagesRequest &request)
{
    return qobject_cast<ListImagePipelineImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListImagePipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of image
 */
ListImagePipelinesResponse * imagebuilderClient::listImagePipelines(const ListImagePipelinesRequest &request)
{
    return qobject_cast<ListImagePipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListImageRecipesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of image
 */
ListImageRecipesResponse * imagebuilderClient::listImageRecipes(const ListImageRecipesRequest &request)
{
    return qobject_cast<ListImageRecipesResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of images that you have access
 */
ListImagesResponse * imagebuilderClient::listImages(const ListImagesRequest &request)
{
    return qobject_cast<ListImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListInfrastructureConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of infrastructure
 */
ListInfrastructureConfigurationsResponse * imagebuilderClient::listInfrastructureConfigurations(const ListInfrastructureConfigurationsRequest &request)
{
    return qobject_cast<ListInfrastructureConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of tags for the specified
 */
ListTagsForResourceResponse * imagebuilderClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * PutComponentPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a policy to a component. We recommend that you call the RAM API <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> to share
 * resources. If you call the Image Builder API <code>PutComponentPolicy</code>, you must also call the RAM API <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
 * in order for the resource to be visible to all principals with whom the resource is
 */
PutComponentPolicyResponse * imagebuilderClient::putComponentPolicy(const PutComponentPolicyRequest &request)
{
    return qobject_cast<PutComponentPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * PutContainerRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a policy to a container image. We recommend that you call the RAM API CreateResourceShare
 * (https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html) to share resources. If you call the
 * Image Builder API <code>PutContainerImagePolicy</code>, you must also call the RAM API
 * PromoteResourceShareCreatedFromPolicy
 * (https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html) in order for the
 * resource to be visible to all principals with whom the resource is
 */
PutContainerRecipePolicyResponse * imagebuilderClient::putContainerRecipePolicy(const PutContainerRecipePolicyRequest &request)
{
    return qobject_cast<PutContainerRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * PutImagePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a policy to an image. We recommend that you call the RAM API <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> to share
 * resources. If you call the Image Builder API <code>PutImagePolicy</code>, you must also call the RAM API <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
 * in order for the resource to be visible to all principals with whom the resource is
 */
PutImagePolicyResponse * imagebuilderClient::putImagePolicy(const PutImagePolicyRequest &request)
{
    return qobject_cast<PutImagePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * PutImageRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a policy to an image recipe. We recommend that you call the RAM API <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_CreateResourceShare.html">CreateResourceShare</a> to share
 * resources. If you call the Image Builder API <code>PutImageRecipePolicy</code>, you must also call the RAM API <a
 * href="https://docs.aws.amazon.com/ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html">PromoteResourceShareCreatedFromPolicy</a>
 * in order for the resource to be visible to all principals with whom the resource is
 */
PutImageRecipePolicyResponse * imagebuilderClient::putImageRecipePolicy(const PutImageRecipePolicyRequest &request)
{
    return qobject_cast<PutImageRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * StartImagePipelineExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Manually triggers a pipeline to create an
 */
StartImagePipelineExecutionResponse * imagebuilderClient::startImagePipelineExecution(const StartImagePipelineExecutionRequest &request)
{
    return qobject_cast<StartImagePipelineExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to a
 */
TagResourceResponse * imagebuilderClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * imagebuilderClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * UpdateDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a new distribution configuration. Distribution configurations define and configure the outputs of your
 */
UpdateDistributionConfigurationResponse * imagebuilderClient::updateDistributionConfiguration(const UpdateDistributionConfigurationRequest &request)
{
    return qobject_cast<UpdateDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * UpdateImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an image pipeline. Image pipelines enable you to automate the creation and distribution of
 *
 * images> <note>
 *
 * UpdateImagePipeline does not support selective updates for the pipeline. You must specify all of the required properties
 * in the update request, not just the properties that have
 */
UpdateImagePipelineResponse * imagebuilderClient::updateImagePipeline(const UpdateImagePipelineRequest &request)
{
    return qobject_cast<UpdateImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the imagebuilderClient service, and returns a pointer to an
 * UpdateInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a new infrastructure configuration. An infrastructure configuration defines the environment in which your image
 * will be built and
 */
UpdateInfrastructureConfigurationResponse * imagebuilderClient::updateInfrastructureConfiguration(const UpdateInfrastructureConfigurationRequest &request)
{
    return qobject_cast<UpdateInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::imagebuilder::imagebuilderClientPrivate
 * \brief The imagebuilderClientPrivate class provides private implementation for imagebuilderClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a imagebuilderClientPrivate object with public implementation \a q.
 */
imagebuilderClientPrivate::imagebuilderClientPrivate(imagebuilderClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace imagebuilder
} // namespace QtAws
