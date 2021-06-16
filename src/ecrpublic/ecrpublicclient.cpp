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

#include "ecrpublicclient.h"
#include "ecrpublicclient_p.h"

#include "core/awssignaturev4.h"
#include "batchchecklayeravailabilityrequest.h"
#include "batchchecklayeravailabilityresponse.h"
#include "batchdeleteimagerequest.h"
#include "batchdeleteimageresponse.h"
#include "completelayeruploadrequest.h"
#include "completelayeruploadresponse.h"
#include "createrepositoryrequest.h"
#include "createrepositoryresponse.h"
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "deleterepositorypolicyrequest.h"
#include "deleterepositorypolicyresponse.h"
#include "describeimagetagsrequest.h"
#include "describeimagetagsresponse.h"
#include "describeimagesrequest.h"
#include "describeimagesresponse.h"
#include "describeregistriesrequest.h"
#include "describeregistriesresponse.h"
#include "describerepositoriesrequest.h"
#include "describerepositoriesresponse.h"
#include "getauthorizationtokenrequest.h"
#include "getauthorizationtokenresponse.h"
#include "getregistrycatalogdatarequest.h"
#include "getregistrycatalogdataresponse.h"
#include "getrepositorycatalogdatarequest.h"
#include "getrepositorycatalogdataresponse.h"
#include "getrepositorypolicyrequest.h"
#include "getrepositorypolicyresponse.h"
#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putimagerequest.h"
#include "putimageresponse.h"
#include "putregistrycatalogdatarequest.h"
#include "putregistrycatalogdataresponse.h"
#include "putrepositorycatalogdatarequest.h"
#include "putrepositorycatalogdataresponse.h"
#include "setrepositorypolicyrequest.h"
#include "setrepositorypolicyresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "uploadlayerpartrequest.h"
#include "uploadlayerpartresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ECRPublic
 * \brief Contains classess for accessing Amazon Elastic Container Registry Public ( ECR Public).
 *
 * \inmodule QtAwsECRPublic
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::ECRPublicClient
 * \brief The ECRPublicClient class provides access to the Amazon Elastic Container Registry Public ( ECR Public) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsECRPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 */

/*!
 * \brief Constructs a ECRPublicClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ECRPublicClient::ECRPublicClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ECRPublicClientPrivate(this), parent)
{
    Q_D(ECRPublicClient);
    d->apiVersion = QStringLiteral("2020-10-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("api.ecr-public");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Elastic Container Registry Public");
    d->serviceName = QStringLiteral("ecr-public");
}

/*!
 * \overload ECRPublicClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ECRPublicClient::ECRPublicClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ECRPublicClientPrivate(this), parent)
{
    Q_D(ECRPublicClient);
    d->apiVersion = QStringLiteral("2020-10-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("api.ecr-public");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Elastic Container Registry Public");
    d->serviceName = QStringLiteral("ecr-public");
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * BatchCheckLayerAvailabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Checks the availability of one or more image layers within a repository in a public registry. When an image is pushed to
 * a repository, each image layer is checked to verify if it has been uploaded before. If it has been uploaded, then the
 * image layer is
 *
 * skipped> <note>
 *
 * This operation is used by the Amazon ECR proxy and is not generally used by customers for pulling and pushing images. In
 * most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
BatchCheckLayerAvailabilityResponse * ECRPublicClient::batchCheckLayerAvailability(const BatchCheckLayerAvailabilityRequest &request)
{
    return qobject_cast<BatchCheckLayerAvailabilityResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * BatchDeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a list of specified images within a repository in a public registry. Images are specified with either an
 * <code>imageTag</code> or
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
BatchDeleteImageResponse * ECRPublicClient::batchDeleteImage(const BatchDeleteImageRequest &request)
{
    return qobject_cast<BatchDeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * CompleteLayerUploadResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Informs Amazon ECR that the image layer upload has completed for a specified public registry, repository name, and
 * upload ID. You can optionally provide a <code>sha256</code> digest of the image layer for data validation
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
CompleteLayerUploadResponse * ECRPublicClient::completeLayerUpload(const CompleteLayerUploadRequest &request)
{
    return qobject_cast<CompleteLayerUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * CreateRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a repository in a public registry. For more information, see <a
 * href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/Repositories.html">Amazon ECR repositories</a> in the
 * <i>Amazon Elastic Container Registry User
 */
CreateRepositoryResponse * ECRPublicClient::createRepository(const CreateRepositoryRequest &request)
{
    return qobject_cast<CreateRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * DeleteRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a repository in a public registry. If the repository contains images, you must either delete all images in the
 * repository or use the <code>force</code> option which deletes all images on your behalf before deleting the
 */
DeleteRepositoryResponse * ECRPublicClient::deleteRepository(const DeleteRepositoryRequest &request)
{
    return qobject_cast<DeleteRepositoryResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * DeleteRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the repository policy associated with the specified
 */
DeleteRepositoryPolicyResponse * ECRPublicClient::deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request)
{
    return qobject_cast<DeleteRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * DescribeImageTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the image tag details for a repository in a public
 */
DescribeImageTagsResponse * ECRPublicClient::describeImageTags(const DescribeImageTagsRequest &request)
{
    return qobject_cast<DescribeImageTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * DescribeImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about the images in a repository in a public
 *
 * registry> <note>
 *
 * Beginning with Docker version 1.9, the Docker client compresses image layers before pushing them to a V2 Docker
 * registry. The output of the <code>docker images</code> command shows the uncompressed image size, so it may return a
 * larger image size than the image sizes returned by
 */
DescribeImagesResponse * ECRPublicClient::describeImages(const DescribeImagesRequest &request)
{
    return qobject_cast<DescribeImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * DescribeRegistriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details for a public
 */
DescribeRegistriesResponse * ECRPublicClient::describeRegistries(const DescribeRegistriesRequest &request)
{
    return qobject_cast<DescribeRegistriesResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * DescribeRepositoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes repositories in a public
 */
DescribeRepositoriesResponse * ECRPublicClient::describeRepositories(const DescribeRepositoriesRequest &request)
{
    return qobject_cast<DescribeRepositoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * GetAuthorizationTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an authorization token. An authorization token represents your IAM authentication credentials and can be used
 * to access any Amazon ECR registry that your IAM principal has access to. The authorization token is valid for 12 hours.
 * This API requires the <code>ecr-public:GetAuthorizationToken</code> and <code>sts:GetServiceBearerToken</code>
 */
GetAuthorizationTokenResponse * ECRPublicClient::getAuthorizationToken(const GetAuthorizationTokenRequest &request)
{
    return qobject_cast<GetAuthorizationTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * GetRegistryCatalogDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves catalog metadata for a public
 */
GetRegistryCatalogDataResponse * ECRPublicClient::getRegistryCatalogData(const GetRegistryCatalogDataRequest &request)
{
    return qobject_cast<GetRegistryCatalogDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * GetRepositoryCatalogDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieve catalog metadata for a repository in a public registry. This metadata is displayed publicly in the Amazon ECR
 * Public
 */
GetRepositoryCatalogDataResponse * ECRPublicClient::getRepositoryCatalogData(const GetRepositoryCatalogDataRequest &request)
{
    return qobject_cast<GetRepositoryCatalogDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * GetRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the repository policy for the specified
 */
GetRepositoryPolicyResponse * ECRPublicClient::getRepositoryPolicy(const GetRepositoryPolicyRequest &request)
{
    return qobject_cast<GetRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
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
InitiateLayerUploadResponse * ECRPublicClient::initiateLayerUpload(const InitiateLayerUploadRequest &request)
{
    return qobject_cast<InitiateLayerUploadResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List the tags for an Amazon ECR Public
 */
ListTagsForResourceResponse * ECRPublicClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
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
PutImageResponse * ECRPublicClient::putImage(const PutImageRequest &request)
{
    return qobject_cast<PutImageResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * PutRegistryCatalogDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create or updates the catalog data for a public
 */
PutRegistryCatalogDataResponse * ECRPublicClient::putRegistryCatalogData(const PutRegistryCatalogDataRequest &request)
{
    return qobject_cast<PutRegistryCatalogDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * PutRepositoryCatalogDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the catalog data for a repository in a public
 */
PutRepositoryCatalogDataResponse * ECRPublicClient::putRepositoryCatalogData(const PutRepositoryCatalogDataRequest &request)
{
    return qobject_cast<PutRepositoryCatalogDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * SetRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a repository policy to the specified public repository to control access permissions. For more information, see
 * <a href="https://docs.aws.amazon.com/AmazonECR/latest/userguide/repository-policies.html">Amazon ECR Repository
 * Policies</a> in the <i>Amazon Elastic Container Registry User
 */
SetRepositoryPolicyResponse * ECRPublicClient::setRepositoryPolicy(const SetRepositoryPolicyRequest &request)
{
    return qobject_cast<SetRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified tags to a resource with the specified <code>resourceArn</code>. If existing tags on a resource
 * are not specified in the request parameters, they are not changed. When a resource is deleted, the tags associated with
 * that resource are deleted as
 */
TagResourceResponse * ECRPublicClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes specified tags from a
 */
UntagResourceResponse * ECRPublicClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ECRPublicClient service, and returns a pointer to an
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
UploadLayerPartResponse * ECRPublicClient::uploadLayerPart(const UploadLayerPartRequest &request)
{
    return qobject_cast<UploadLayerPartResponse *>(send(request));
}

/*!
 * \class QtAws::ECRPublic::ECRPublicClientPrivate
 * \brief The ECRPublicClientPrivate class provides private implementation for ECRPublicClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a ECRPublicClientPrivate object with public implementation \a q.
 */
ECRPublicClientPrivate::ECRPublicClientPrivate(ECRPublicClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ECRPublic
} // namespace QtAws
