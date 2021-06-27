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

#include "ecrclient.h"
#include "ecrclient_p.h"

#include "core/awssignaturev4.h"
#include "batchchecklayeravailabilityrequest.h"
#include "batchchecklayeravailabilityresponse.h"
#include "batchdeleteimagerequest.h"
#include "batchdeleteimageresponse.h"
#include "batchgetimagerequest.h"
#include "batchgetimageresponse.h"
#include "completelayeruploadrequest.h"
#include "completelayeruploadresponse.h"
#include "createrepositoryrequest.h"
#include "createrepositoryresponse.h"
#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyresponse.h"
#include "deleteregistrypolicyrequest.h"
#include "deleteregistrypolicyresponse.h"
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "deleterepositorypolicyrequest.h"
#include "deleterepositorypolicyresponse.h"
#include "describeimagescanfindingsrequest.h"
#include "describeimagescanfindingsresponse.h"
#include "describeimagesrequest.h"
#include "describeimagesresponse.h"
#include "describeregistryrequest.h"
#include "describeregistryresponse.h"
#include "describerepositoriesrequest.h"
#include "describerepositoriesresponse.h"
#include "getauthorizationtokenrequest.h"
#include "getauthorizationtokenresponse.h"
#include "getdownloadurlforlayerrequest.h"
#include "getdownloadurlforlayerresponse.h"
#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyresponse.h"
#include "getlifecyclepolicypreviewrequest.h"
#include "getlifecyclepolicypreviewresponse.h"
#include "getregistrypolicyrequest.h"
#include "getregistrypolicyresponse.h"
#include "getrepositorypolicyrequest.h"
#include "getrepositorypolicyresponse.h"
#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadresponse.h"
#include "listimagesrequest.h"
#include "listimagesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putimagerequest.h"
#include "putimageresponse.h"
#include "putimagescanningconfigurationrequest.h"
#include "putimagescanningconfigurationresponse.h"
#include "putimagetagmutabilityrequest.h"
#include "putimagetagmutabilityresponse.h"
#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyresponse.h"
#include "putregistrypolicyrequest.h"
#include "putregistrypolicyresponse.h"
#include "putreplicationconfigurationrequest.h"
#include "putreplicationconfigurationresponse.h"
#include "setrepositorypolicyrequest.h"
#include "setrepositorypolicyresponse.h"
#include "startimagescanrequest.h"
#include "startimagescanresponse.h"
#include "startlifecyclepolicypreviewrequest.h"
#include "startlifecyclepolicypreviewresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "uploadlayerpartrequest.h"
#include "uploadlayerpartresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ECR
 * \brief Contains classess for accessing Amazon EC2 Container Registry ( ECR).
 *
 * \inmodule QtAwsEcr
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::EcrClient
 * \brief The EcrClient class provides access to the Amazon EC2 Container Registry ( ECR) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 */

/*!
 * \brief Constructs a EcrClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
EcrClient::EcrClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-09-21"),
    QStringLiteral("api.ecr"),
    QStringLiteral("Amazon EC2 Container Registry"),
    QStringLiteral("ecr"),
    parent), d_ptr(new EcrClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload EcrClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
EcrClient::EcrClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2015-09-21"),
    QStringLiteral("api.ecr"),
    QStringLiteral("Amazon EC2 Container Registry"),
    QStringLiteral("ecr"),
    parent), d_ptr(new EcrClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * BatchCheckLayerAvailabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the availability of one or more image layers in a
 *
 * repository>
 *
 * When an image is pushed to a repository, each image layer is checked to verify if it has been uploaded before. If it has
 * been uploaded, then the image layer is
 *
 * skipped> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
BatchCheckLayerAvailabilityResponse * EcrClient::batchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest &request)
{
    return qobject_cast<BatchCheckLayerAvailabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * BatchDeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a list of specified images within a repository. Images are specified with either an <code>imageTag</code> or
 *
 * <code>imageDigest</code>>
 *
 * You can remove a tag from an image by specifying the image's tag in your request. When you remove the last tag from an
 * image, the image is deleted from your
 *
 * repository>
 *
 * You can completely delete an image (and all of its tags) by specifying the image's digest in your
 */
BatchDeleteImageResponse * EcrClient::batchDeleteImage(const BatchDeleteImageRequest &request)
{
    return qobject_cast<BatchDeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * BatchGetImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets detailed information for an image. Images are specified with either an <code>imageTag</code> or
 *
 * <code>imageDigest</code>>
 *
 * When an image is pulled, the BatchGetImage API is called once to retrieve the image
 */
BatchGetImageResponse * EcrClient::batchGetImage(const BatchGetImageRequest &request)
{
    return qobject_cast<BatchGetImageResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * CompleteLayerUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Informs Amazon ECR that the image layer upload has completed for a specified registry, repository name, and upload ID.
 * You can optionally provide a <code>sha256</code> digest of the image layer for data validation
 *
 * purposes>
 *
 * When an image is pushed, the CompleteLayerUpload API is called once per each new image layer to verify that the upload
 * has
 *
 * completed> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
CompleteLayerUploadResponse * EcrClient::completeLayerUpload(const CompleteLayerUploadRequest &request)
{
    return qobject_cast<CompleteLayerUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * CreateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a repository. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Repositories.html">Amazon ECR Repositories</a> in the
 * <i>Amazon Elastic Container Registry User
 */
CreateRepositoryResponse * EcrClient::createRepository(const CreateRepositoryRequest &request)
{
    return qobject_cast<CreateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DeleteLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the lifecycle policy associated with the specified
 */
DeleteLifecyclePolicyResponse * EcrClient::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request)
{
    return qobject_cast<DeleteLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DeleteRegistryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the registry permissions
 */
DeleteRegistryPolicyResponse * EcrClient::deleteRegistryPolicy(const DeleteRegistryPolicyRequest &request)
{
    return qobject_cast<DeleteRegistryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DeleteRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a repository. If the repository contains images, you must either delete all images in the repository or use the
 * <code>force</code> option to delete the
 */
DeleteRepositoryResponse * EcrClient::deleteRepository(const DeleteRepositoryRequest &request)
{
    return qobject_cast<DeleteRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DeleteRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the repository policy associated with the specified
 */
DeleteRepositoryPolicyResponse * EcrClient::deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request)
{
    return qobject_cast<DeleteRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DescribeImageScanFindingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the scan findings for the specified
 */
DescribeImageScanFindingsResponse * EcrClient::describeImageScanFindings(const DescribeImageScanFindingsRequest &request)
{
    return qobject_cast<DescribeImageScanFindingsResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DescribeImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about the images in a
 *
 * repository> <note>
 *
 * Beginning with Docker version 1.9, the Docker client compresses image layers before pushing them to a V2 Docker
 * registry. The output of the <code>docker images</code> command shows the uncompressed image size, so it may return a
 * larger image size than the image sizes returned by
 */
DescribeImagesResponse * EcrClient::describeImages(const DescribeImagesRequest &request)
{
    return qobject_cast<DescribeImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DescribeRegistryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the settings for a registry. The replication configuration for a repository can be created or updated with the
 * <a>PutReplicationConfiguration</a> API
 */
DescribeRegistryResponse * EcrClient::describeRegistry(const DescribeRegistryRequest &request)
{
    return qobject_cast<DescribeRegistryResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DescribeRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes image repositories in a
 */
DescribeRepositoriesResponse * EcrClient::describeRepositories(const DescribeRepositoriesRequest &request)
{
    return qobject_cast<DescribeRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetAuthorizationTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an authorization token. An authorization token represents your IAM authentication credentials and can be used
 * to access any Amazon ECR registry that your IAM principal has access to. The authorization token is valid for 12
 *
 * hours>
 *
 * The <code>authorizationToken</code> returned is a base64 encoded string that can be decoded and used in a <code>docker
 * login</code> command to authenticate to a registry. The AWS CLI offers an <code>get-login-password</code> command that
 * simplifies the login process. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Registries.html#registry_auth">Registry Authentication</a>
 * in the <i>Amazon Elastic Container Registry User
 */
GetAuthorizationTokenResponse * EcrClient::getAuthorizationToken(const GetAuthorizationTokenRequest &request)
{
    return qobject_cast<GetAuthorizationTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetDownloadUrlForLayerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the pre-signed Amazon S3 download URL corresponding to an image layer. You can only get URLs for image layers
 * that are referenced in an
 *
 * image>
 *
 * When an image is pulled, the GetDownloadUrlForLayer API is called once per image layer that is not already
 *
 * cached> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
GetDownloadUrlForLayerResponse * EcrClient::getDownloadUrlForLayer(const GetDownloadUrlForLayerRequest &request)
{
    return qobject_cast<GetDownloadUrlForLayerResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the lifecycle policy for the specified
 */
GetLifecyclePolicyResponse * EcrClient::getLifecyclePolicy(const GetLifecyclePolicyRequest &request)
{
    return qobject_cast<GetLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetLifecyclePolicyPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the results of the lifecycle policy preview request for the specified
 */
GetLifecyclePolicyPreviewResponse * EcrClient::getLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest &request)
{
    return qobject_cast<GetLifecyclePolicyPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetRegistryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the permissions policy for a
 */
GetRegistryPolicyResponse * EcrClient::getRegistryPolicy(const GetRegistryPolicyRequest &request)
{
    return qobject_cast<GetRegistryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the repository policy for the specified
 */
GetRepositoryPolicyResponse * EcrClient::getRepositoryPolicy(const GetRepositoryPolicyRequest &request)
{
    return qobject_cast<GetRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * InitiateLayerUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Notifies Amazon ECR that you intend to upload an image
 *
 * layer>
 *
 * When an image is pushed, the InitiateLayerUpload API is called once per image layer that has not already been uploaded.
 * Whether or not an image layer has been uploaded is determined by the BatchCheckLayerAvailability API
 *
 * action> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
InitiateLayerUploadResponse * EcrClient::initiateLayerUpload(const InitiateLayerUploadRequest &request)
{
    return qobject_cast<InitiateLayerUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * ListImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the image IDs for the specified
 *
 * repository>
 *
 * You can filter images based on whether or not they are tagged by using the <code>tagStatus</code> filter and specifying
 * either <code>TAGGED</code>, <code>UNTAGGED</code> or <code>ANY</code>. For example, you can filter your results to
 * return only <code>UNTAGGED</code> images and then pipe that result to a <a>BatchDeleteImage</a> operation to delete
 * them. Or, you can filter your results to return only <code>TAGGED</code> images to list all of the tags in your
 */
ListImagesResponse * EcrClient::listImages(const ListImagesRequest &request)
{
    return qobject_cast<ListImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tags for an Amazon ECR
 */
ListTagsForResourceResponse * EcrClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the image manifest and tags associated with an
 *
 * image>
 *
 * When an image is pushed and all new image layers have been uploaded, the PutImage API is called once to create or update
 * the image manifest and the tags associated with the
 *
 * image> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
PutImageResponse * EcrClient::putImage(const PutImageRequest &request)
{
    return qobject_cast<PutImageResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutImageScanningConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the image scanning configuration for the specified
 */
PutImageScanningConfigurationResponse * EcrClient::putImageScanningConfiguration(const PutImageScanningConfigurationRequest &request)
{
    return qobject_cast<PutImageScanningConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutImageTagMutabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the image tag mutability settings for the specified repository. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/image-tag-mutability.html">Image Tag Mutability</a> in the
 * <i>Amazon Elastic Container Registry User
 */
PutImageTagMutabilityResponse * EcrClient::putImageTagMutability(const PutImageTagMutabilityRequest &request)
{
    return qobject_cast<PutImageTagMutabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the lifecycle policy for the specified repository. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle Policy
 */
PutLifecyclePolicyResponse * EcrClient::putLifecyclePolicy(const PutLifecyclePolicyRequest &request)
{
    return qobject_cast<PutLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutRegistryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the permissions policy for your
 *
 * registry>
 *
 * A registry policy is used to specify permissions for another AWS account and is used when configuring cross-account
 * replication. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/registry-permissions.html">Registry permissions</a> in the
 * <i>Amazon Elastic Container Registry User
 */
PutRegistryPolicyResponse * EcrClient::putRegistryPolicy(const PutRegistryPolicyRequest &request)
{
    return qobject_cast<PutRegistryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutReplicationConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the replication configuration for a registry. The existing replication configuration for a repository
 * can be retrieved with the <a>DescribeRegistry</a> API action. The first time the PutReplicationConfiguration API is
 * called, a service-linked IAM role is created in your account for the replication process. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/using-service-linked-roles.html">Using Service-Linked Roles
 * for Amazon ECR</a> in the <i>Amazon Elastic Container Registry User
 *
 * Guide</i>> <note>
 *
 * When configuring cross-account replication, the destination account must grant the source account permission to
 * replicate. This permission is controlled using a registry permissions policy. For more information, see
 */
PutReplicationConfigurationResponse * EcrClient::putReplicationConfiguration(const PutReplicationConfigurationRequest &request)
{
    return qobject_cast<PutReplicationConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * SetRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a repository policy to the specified repository to control access permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policies.html">Amazon ECR Repository
 * Policies</a> in the <i>Amazon Elastic Container Registry User
 */
SetRepositoryPolicyResponse * EcrClient::setRepositoryPolicy(const SetRepositoryPolicyRequest &request)
{
    return qobject_cast<SetRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * StartImageScanResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an image vulnerability scan. An image scan can only be started once per day on an individual image. This limit
 * includes if an image was scanned on initial push. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/image-scanning.html">Image Scanning</a> in the <i>Amazon
 * Elastic Container Registry User
 */
StartImageScanResponse * EcrClient::startImageScan(const StartImageScanRequest &request)
{
    return qobject_cast<StartImageScanResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * StartLifecyclePolicyPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a preview of a lifecycle policy for the specified repository. This allows you to see the results before
 * associating the lifecycle policy with the
 */
StartLifecyclePolicyPreviewResponse * EcrClient::startLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest &request)
{
    return qobject_cast<StartLifecyclePolicyPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds specified tags to a resource with the specified ARN. Existing tags on a resource are not changed if they are not
 * specified in the request
 */
TagResourceResponse * EcrClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a
 */
UntagResourceResponse * EcrClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * UploadLayerPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads an image layer part to Amazon
 *
 * ECR>
 *
 * When an image is pushed, each new image layer is uploaded in parts. The maximum size of each image layer part can be
 * 20971520 bytes (or about 20MB). The UploadLayerPart API is called once per each new image layer
 *
 * part> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
UploadLayerPartResponse * EcrClient::uploadLayerPart(const UploadLayerPartRequest &request)
{
    return qobject_cast<UploadLayerPartResponse *>(send(request));
}

/*!
 * \class QtAws::ECR::EcrClientPrivate
 * \brief The EcrClientPrivate class provides private implementation for EcrClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a EcrClientPrivate object with public implementation \a q.
 */
EcrClientPrivate::EcrClientPrivate(EcrClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace ECR
} // namespace QtAws
