/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
#include "deleterepositoryrequest.h"
#include "deleterepositoryresponse.h"
#include "deleterepositorypolicyrequest.h"
#include "deleterepositorypolicyresponse.h"
#include "describeimagesrequest.h"
#include "describeimagesresponse.h"
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
#include "getrepositorypolicyrequest.h"
#include "getrepositorypolicyresponse.h"
#include "initiatelayeruploadrequest.h"
#include "initiatelayeruploadresponse.h"
#include "listimagesrequest.h"
#include "listimagesresponse.h"
#include "putimagerequest.h"
#include "putimageresponse.h"
#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyresponse.h"
#include "setrepositorypolicyrequest.h"
#include "setrepositorypolicyresponse.h"
#include "startlifecyclepolicypreviewrequest.h"
#include "startlifecyclepolicypreviewresponse.h"
#include "uploadlayerpartrequest.h"
#include "uploadlayerpartresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ECR
 * \brief The QtAws::ECR contains stuff...
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
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
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
: QtAws::Core::AwsAbstractClient(new EcrClientPrivate(this), parent)
{
    Q_D(EcrClient);
    d->apiVersion = QStringLiteral("2015-09-21");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ecr");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon EC2 Container Registry");
    d->serviceName = QStringLiteral("ecr");
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
 * \a  AwsEndpoint::getEndpoint()
 */
EcrClient::EcrClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new EcrClientPrivate(this), parent)
{
    Q_D(EcrClient);
    d->apiVersion = QStringLiteral("2015-09-21");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ecr");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon EC2 Container Registry");
    d->serviceName = QStringLiteral("ecr");
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * BatchCheckLayerAvailabilityResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Check the availability of multiple image layers in a specified registry and
 *
 * repository> <note>
 *
 * This operation is used by the Amazon ECR proxy, and it is not intended for general use by customers for pulling and
 * pushing images. In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
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
 * Deletes a list of specified images within a specified repository. Images are specified with either <code>imageTag</code>
 * or
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
 * Gets detailed information for specified images within a specified repository. Images are specified with either
 * <code>imageTag</code> or
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
 * purposes> <note>
 *
 * This operation is used by the Amazon ECR proxy, and it is not intended for general use by customers for pulling and
 * pushing images. In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
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
 * Creates an image
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
 * Deletes the specified lifecycle
 */
DeleteLifecyclePolicyResponse * EcrClient::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request)
{
    return qobject_cast<DeleteLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DeleteRepositoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing image repository. If a repository contains images, you must use the <code>force</code> option to
 * delete
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
 * Deletes the repository policy from a specified
 */
DeleteRepositoryPolicyResponse * EcrClient::deleteRepositoryPolicy(const DeleteRepositoryPolicyRequest &request)
{
    return qobject_cast<DeleteRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * DescribeImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns metadata about the images in a repository, including image size, image tags, and creation
 *
 * date> <note>
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
 * Retrieves a token that is valid for a specified registry for 12 hours. This command allows you to use the
 * <code>docker</code> CLI to push and pull images with Amazon ECR. If you do not specify a registry, the default registry
 * is
 *
 * assumed>
 *
 * The <code>authorizationToken</code> returned for each registry specified is a base64 encoded string that can be decoded
 * and used in a <code>docker login</code> command to authenticate to a registry. The AWS CLI offers an <code>aws ecr
 * get-login</code> command that simplifies the login
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
 * image> <note>
 *
 * This operation is used by the Amazon ECR proxy, and it is not intended for general use by customers for pulling and
 * pushing images. In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
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
 * Retrieves the specified lifecycle
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
 * Retrieves the results of the specified lifecycle policy preview
 */
GetLifecyclePolicyPreviewResponse * EcrClient::getLifecyclePolicyPreview(const GetLifecyclePolicyPreviewRequest &request)
{
    return qobject_cast<GetLifecyclePolicyPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * GetRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the repository policy for a specified
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
 * Notify Amazon ECR that you intend to upload an image
 *
 * layer> <note>
 *
 * This operation is used by the Amazon ECR proxy, and it is not intended for general use by customers for pulling and
 * pushing images. In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
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
 * Lists all the image IDs for a given
 *
 * repository>
 *
 * You can filter images based on whether or not they are tagged by setting the <code>tagStatus</code> parameter to
 * <code>TAGGED</code> or <code>UNTAGGED</code>. For example, you can filter your results to return only
 * <code>UNTAGGED</code> images and then pipe that result to a <a>BatchDeleteImage</a> operation to delete them. Or, you
 * can filter your results to return only <code>TAGGED</code> images to list all of the tags in your
 */
ListImagesResponse * EcrClient::listImages(const ListImagesRequest &request)
{
    return qobject_cast<ListImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates the image manifest and tags associated with an
 *
 * image> <note>
 *
 * This operation is used by the Amazon ECR proxy, and it is not intended for general use by customers for pulling and
 * pushing images. In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
 */
PutImageResponse * EcrClient::putImage(const PutImageRequest &request)
{
    return qobject_cast<PutImageResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * PutLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates or updates a lifecycle policy. For information about lifecycle policy syntax, see <a
 * href="http://docs.aws.amazon.com/AmazonECR/latest/userguide/LifecyclePolicies.html">Lifecycle Policy
 */
PutLifecyclePolicyResponse * EcrClient::putLifecyclePolicy(const PutLifecyclePolicyRequest &request)
{
    return qobject_cast<PutLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * SetRepositoryPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies a repository policy on a specified repository to control access
 */
SetRepositoryPolicyResponse * EcrClient::setRepositoryPolicy(const SetRepositoryPolicyRequest &request)
{
    return qobject_cast<SetRepositoryPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * StartLifecyclePolicyPreviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a preview of the specified lifecycle policy. This allows you to see the results before creating the lifecycle
 */
StartLifecyclePolicyPreviewResponse * EcrClient::startLifecyclePolicyPreview(const StartLifecyclePolicyPreviewRequest &request)
{
    return qobject_cast<StartLifecyclePolicyPreviewResponse *>(send(request));
}

/*!
 * Sends \a request to the EcrClient service, and returns a pointer to an
 * UploadLayerPartResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Uploads an image layer part to Amazon
 *
 * ECR> <note>
 *
 * This operation is used by the Amazon ECR proxy, and it is not intended for general use by customers for pulling and
 * pushing images. In most cases, you should use the <code>docker</code> CLI to pull, tag, and push
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
EcrClientPrivate::EcrClientPrivate(EcrClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ECR
} // namespace QtAws
