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
#include "importvmimagerequest.h"
#include "importvmimageresponse.h"
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
 * \namespace QtAws::ImageBuilder
 * \brief Contains classess for accessing EC2 Image Builder.
 *
 * \inmodule QtAwsImageBuilder
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::ImageBuilderClient
 * \brief The ImageBuilderClient class provides access to the EC2 Image Builder service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 */

/*!
 * \brief Constructs a ImageBuilderClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ImageBuilderClient::ImageBuilderClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ImageBuilderClientPrivate(this), parent)
{
    Q_D(ImageBuilderClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("imagebuilder");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("EC2 Image Builder");
    d->serviceName = QStringLiteral("imagebuilder");
}

/*!
 * \overload ImageBuilderClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ImageBuilderClient::ImageBuilderClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ImageBuilderClientPrivate(this), parent)
{
    Q_D(ImageBuilderClient);
    d->apiVersion = QStringLiteral("2019-12-02");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("imagebuilder");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("EC2 Image Builder");
    d->serviceName = QStringLiteral("imagebuilder");
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CancelImageCreationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * CancelImageCreation cancels the creation of Image. This operation can only be used on images in a non-terminal
 */
CancelImageCreationResponse * ImageBuilderClient::cancelImageCreation(const CancelImageCreationRequest &request)
{
    return qobject_cast<CancelImageCreationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new component that can be used to build, validate, test, and assess your image. The component is based on a
 * YAML document that you specify using exactly one of the following
 *
 * methods> <ul> <li>
 *
 * Inline, using the <code>data</code> property in the request
 *
 * body> </li> <li>
 *
 * A URL that points to a YAML document file stored in Amazon S3, using the <code>uri</code> property in the request
 */
CreateComponentResponse * ImageBuilderClient::createComponent(const CreateComponentRequest &request)
{
    return qobject_cast<CreateComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateContainerRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new container recipe. Container recipes define how images are configured, tested, and
 */
CreateContainerRecipeResponse * ImageBuilderClient::createContainerRecipe(const CreateContainerRecipeRequest &request)
{
    return qobject_cast<CreateContainerRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new distribution configuration. Distribution configurations define and configure the outputs of your
 */
CreateDistributionConfigurationResponse * ImageBuilderClient::createDistributionConfiguration(const CreateDistributionConfigurationRequest &request)
{
    return qobject_cast<CreateDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image. This request will create a new image along with all of the configured output resources defined in
 * the distribution configuration. You must specify exactly one recipe for your image, using either a ContainerRecipeArn or
 * an
 */
CreateImageResponse * ImageBuilderClient::createImage(const CreateImageRequest &request)
{
    return qobject_cast<CreateImageResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image pipeline. Image pipelines enable you to automate the creation and distribution of
 */
CreateImagePipelineResponse * ImageBuilderClient::createImagePipeline(const CreateImagePipelineRequest &request)
{
    return qobject_cast<CreateImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateImageRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image recipe. Image recipes define how images are configured, tested, and
 */
CreateImageRecipeResponse * ImageBuilderClient::createImageRecipe(const CreateImageRecipeRequest &request)
{
    return qobject_cast<CreateImageRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * CreateInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new infrastructure configuration. An infrastructure configuration defines the environment in which your image
 * will be built and
 */
CreateInfrastructureConfigurationResponse * ImageBuilderClient::createInfrastructureConfiguration(const CreateInfrastructureConfigurationRequest &request)
{
    return qobject_cast<CreateInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a component build
 */
DeleteComponentResponse * ImageBuilderClient::deleteComponent(const DeleteComponentRequest &request)
{
    return qobject_cast<DeleteComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteContainerRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a container
 */
DeleteContainerRecipeResponse * ImageBuilderClient::deleteContainerRecipe(const DeleteContainerRecipeRequest &request)
{
    return qobject_cast<DeleteContainerRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a distribution
 */
DeleteDistributionConfigurationResponse * ImageBuilderClient::deleteDistributionConfiguration(const DeleteDistributionConfigurationRequest &request)
{
    return qobject_cast<DeleteDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an Image Builder image resource. This does not delete any EC2 AMIs or ECR container images that are created
 * during the image build process. You must clean those up separately, using the appropriate Amazon EC2 or Amazon ECR
 * console actions, or API or CLI
 *
 * commands> <ul> <li>
 *
 * To deregister an EC2 Linux AMI, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/deregister-ami.html">Deregister your Linux AMI</a> in the <i>
 * <i>Amazon EC2 User Guide</i>
 *
 * </i>> </li> <li>
 *
 * To deregister an EC2 Windows AMI, see <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/WindowsGuide/deregister-ami.html">Deregister your Windows AMI</a> in the
 * <i> <i>Amazon EC2 Windows Guide</i>
 *
 * </i>> </li> <li>
 *
 * To delete a container image from Amazon ECR, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/delete_image.html">Deleting an image</a> in the <i>Amazon
 * ECR User
 */
DeleteImageResponse * ImageBuilderClient::deleteImage(const DeleteImageRequest &request)
{
    return qobject_cast<DeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an image
 */
DeleteImagePipelineResponse * ImageBuilderClient::deleteImagePipeline(const DeleteImagePipelineRequest &request)
{
    return qobject_cast<DeleteImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteImageRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an image
 */
DeleteImageRecipeResponse * ImageBuilderClient::deleteImageRecipe(const DeleteImageRecipeRequest &request)
{
    return qobject_cast<DeleteImageRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * DeleteInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an infrastructure
 */
DeleteInfrastructureConfigurationResponse * ImageBuilderClient::deleteInfrastructureConfiguration(const DeleteInfrastructureConfigurationRequest &request)
{
    return qobject_cast<DeleteInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a component
 */
GetComponentResponse * ImageBuilderClient::getComponent(const GetComponentRequest &request)
{
    return qobject_cast<GetComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetComponentPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a component
 */
GetComponentPolicyResponse * ImageBuilderClient::getComponentPolicy(const GetComponentPolicyRequest &request)
{
    return qobject_cast<GetComponentPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetContainerRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a container
 */
GetContainerRecipeResponse * ImageBuilderClient::getContainerRecipe(const GetContainerRecipeRequest &request)
{
    return qobject_cast<GetContainerRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetContainerRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the policy for a container
 */
GetContainerRecipePolicyResponse * ImageBuilderClient::getContainerRecipePolicy(const GetContainerRecipePolicyRequest &request)
{
    return qobject_cast<GetContainerRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a distribution
 */
GetDistributionConfigurationResponse * ImageBuilderClient::getDistributionConfiguration(const GetDistributionConfigurationRequest &request)
{
    return qobject_cast<GetDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an
 */
GetImageResponse * ImageBuilderClient::getImage(const GetImageRequest &request)
{
    return qobject_cast<GetImageResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetImagePipelineResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image
 */
GetImagePipelineResponse * ImageBuilderClient::getImagePipeline(const GetImagePipelineRequest &request)
{
    return qobject_cast<GetImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetImagePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image
 */
GetImagePolicyResponse * ImageBuilderClient::getImagePolicy(const GetImagePolicyRequest &request)
{
    return qobject_cast<GetImagePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetImageRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image
 */
GetImageRecipeResponse * ImageBuilderClient::getImageRecipe(const GetImageRecipeRequest &request)
{
    return qobject_cast<GetImageRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetImageRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an image recipe
 */
GetImageRecipePolicyResponse * ImageBuilderClient::getImageRecipePolicy(const GetImageRecipePolicyRequest &request)
{
    return qobject_cast<GetImageRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * GetInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets an infrastructure
 */
GetInfrastructureConfigurationResponse * ImageBuilderClient::getInfrastructureConfiguration(const GetInfrastructureConfigurationRequest &request)
{
    return qobject_cast<GetInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ImportComponentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports a component and transforms its data into a component
 */
ImportComponentResponse * ImageBuilderClient::importComponent(const ImportComponentRequest &request)
{
    return qobject_cast<ImportComponentResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ImportVmImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * When you export your virtual machine (VM) from its virtualization environment, that process creates a set of one or more
 * disk container files that act as snapshots of your VM’s environment, settings, and data. The Amazon EC2 API <a
 * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_ImportImage.html">ImportImage</a> action uses those
 * files to import your VM and create an AMI. To import using the CLI command, see <a
 * href="https://docs.aws.amazon.com/cli/latest/reference/ec2/import-image.html">import-image</a>
 *
 * </p
 *
 * You can reference the task ID from the VM import to pull in the AMI that the import created as the base image for your
 * Image Builder
 */
ImportVmImageResponse * ImageBuilderClient::importVmImage(const ImportVmImageRequest &request)
{
    return qobject_cast<ImportVmImageResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListComponentBuildVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of component build versions for the specified semantic
 *
 * version> <note>
 *
 * The semantic version has four nodes: <major>.<minor>.<patch>/<build>. You can assign values for the first three, and can
 * filter on all of
 *
 * them>
 *
 * <b>Filtering:</b> With semantic versioning, you have the flexibility to use wildcards (x) to specify the most recent
 * versions or nodes when selecting the base image or components for your recipe. When you use a wildcard in any node, all
 * nodes to the right of the first wildcard must also be
 */
ListComponentBuildVersionsResponse * ImageBuilderClient::listComponentBuildVersions(const ListComponentBuildVersionsRequest &request)
{
    return qobject_cast<ListComponentBuildVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListComponentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of component build versions for the specified semantic
 *
 * version> <note>
 *
 * The semantic version has four nodes: <major>.<minor>.<patch>/<build>. You can assign values for the first three, and can
 * filter on all of
 *
 * them>
 *
 * <b>Filtering:</b> With semantic versioning, you have the flexibility to use wildcards (x) to specify the most recent
 * versions or nodes when selecting the base image or components for your recipe. When you use a wildcard in any node, all
 * nodes to the right of the first wildcard must also be
 */
ListComponentsResponse * ImageBuilderClient::listComponents(const ListComponentsRequest &request)
{
    return qobject_cast<ListComponentsResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListContainerRecipesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of container
 */
ListContainerRecipesResponse * ImageBuilderClient::listContainerRecipes(const ListContainerRecipesRequest &request)
{
    return qobject_cast<ListContainerRecipesResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListDistributionConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of distribution
 */
ListDistributionConfigurationsResponse * ImageBuilderClient::listDistributionConfigurations(const ListDistributionConfigurationsRequest &request)
{
    return qobject_cast<ListDistributionConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListImageBuildVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of image build
 */
ListImageBuildVersionsResponse * ImageBuilderClient::listImageBuildVersions(const ListImageBuildVersionsRequest &request)
{
    return qobject_cast<ListImageBuildVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListImagePackagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the Packages that are associated with an Image Build Version, as determined by Amazon Web Services Systems Manager
 * Inventory at build
 */
ListImagePackagesResponse * ImageBuilderClient::listImagePackages(const ListImagePackagesRequest &request)
{
    return qobject_cast<ListImagePackagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListImagePipelineImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of images created by the specified
 */
ListImagePipelineImagesResponse * ImageBuilderClient::listImagePipelineImages(const ListImagePipelineImagesRequest &request)
{
    return qobject_cast<ListImagePipelineImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListImagePipelinesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of image
 */
ListImagePipelinesResponse * ImageBuilderClient::listImagePipelines(const ListImagePipelinesRequest &request)
{
    return qobject_cast<ListImagePipelinesResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListImageRecipesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of image
 */
ListImageRecipesResponse * ImageBuilderClient::listImageRecipes(const ListImageRecipesRequest &request)
{
    return qobject_cast<ListImageRecipesResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of images that you have access
 */
ListImagesResponse * ImageBuilderClient::listImages(const ListImagesRequest &request)
{
    return qobject_cast<ListImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListInfrastructureConfigurationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of infrastructure
 */
ListInfrastructureConfigurationsResponse * ImageBuilderClient::listInfrastructureConfigurations(const ListInfrastructureConfigurationsRequest &request)
{
    return qobject_cast<ListInfrastructureConfigurationsResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of tags for the specified
 */
ListTagsForResourceResponse * ImageBuilderClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
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
PutComponentPolicyResponse * ImageBuilderClient::putComponentPolicy(const PutComponentPolicyRequest &request)
{
    return qobject_cast<PutComponentPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * PutContainerRecipePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a policy to a container image. We recommend that you call the RAM API CreateResourceShare
 * (https://docs.aws.amazon.com//ram/latest/APIReference/API_CreateResourceShare.html) to share resources. If you call the
 * Image Builder API <code>PutContainerImagePolicy</code>, you must also call the RAM API
 * PromoteResourceShareCreatedFromPolicy
 * (https://docs.aws.amazon.com//ram/latest/APIReference/API_PromoteResourceShareCreatedFromPolicy.html) in order for the
 * resource to be visible to all principals with whom the resource is
 */
PutContainerRecipePolicyResponse * ImageBuilderClient::putContainerRecipePolicy(const PutContainerRecipePolicyRequest &request)
{
    return qobject_cast<PutContainerRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
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
PutImagePolicyResponse * ImageBuilderClient::putImagePolicy(const PutImagePolicyRequest &request)
{
    return qobject_cast<PutImagePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
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
PutImageRecipePolicyResponse * ImageBuilderClient::putImageRecipePolicy(const PutImageRecipePolicyRequest &request)
{
    return qobject_cast<PutImageRecipePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * StartImagePipelineExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Manually triggers a pipeline to create an
 */
StartImagePipelineExecutionResponse * ImageBuilderClient::startImagePipelineExecution(const StartImagePipelineExecutionRequest &request)
{
    return qobject_cast<StartImagePipelineExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a tag to a
 */
TagResourceResponse * ImageBuilderClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a tag from a
 */
UntagResourceResponse * ImageBuilderClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * UpdateDistributionConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a new distribution configuration. Distribution configurations define and configure the outputs of your
 */
UpdateDistributionConfigurationResponse * ImageBuilderClient::updateDistributionConfiguration(const UpdateDistributionConfigurationRequest &request)
{
    return qobject_cast<UpdateDistributionConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
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
UpdateImagePipelineResponse * ImageBuilderClient::updateImagePipeline(const UpdateImagePipelineRequest &request)
{
    return qobject_cast<UpdateImagePipelineResponse *>(send(request));
}

/*!
 * Sends \a request to the ImageBuilderClient service, and returns a pointer to an
 * UpdateInfrastructureConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a new infrastructure configuration. An infrastructure configuration defines the environment in which your image
 * will be built and
 */
UpdateInfrastructureConfigurationResponse * ImageBuilderClient::updateInfrastructureConfiguration(const UpdateInfrastructureConfigurationRequest &request)
{
    return qobject_cast<UpdateInfrastructureConfigurationResponse *>(send(request));
}

/*!
 * \class QtAws::ImageBuilder::ImageBuilderClientPrivate
 * \brief The ImageBuilderClientPrivate class provides private implementation for ImageBuilderClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a ImageBuilderClientPrivate object with public implementation \a q.
 */
ImageBuilderClientPrivate::ImageBuilderClientPrivate(ImageBuilderClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ImageBuilder
} // namespace QtAws
