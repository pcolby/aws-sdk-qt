/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "mediastoreclient.h"
#include "mediastoreclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace MediaStore {

/**
 * @class  MediaStoreClient
 *
 * @brief  Client for AWS Elemental MediaStore
 *
 * An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 * create, read, and delete objects.
 */

/**
 * @brief  Constructs a new MediaStoreClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
MediaStoreClient::MediaStoreClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaStoreClientPrivate(this), parent)
{
    Q_D(MediaStoreClient);
    d->apiVersion = QStringLiteral("2017-09-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("mediastore");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaStore");
    d->serviceName = QStringLiteral("mediastore");
}

/**
 * @brief  Constructs a new MediaStoreClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
MediaStoreClient::MediaStoreClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new MediaStoreClientPrivate(this), parent)
{
    Q_D(MediaStoreClient);
    d->apiVersion = QStringLiteral("2017-09-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("mediastore");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Elemental MediaStore");
    d->serviceName = QStringLiteral("mediastore");
}

/**
 * Creates a storage container to hold objects. A container is similar to a bucket in the Amazon S3
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateContainerResponse * MediaStoreClient::createContainer(const CreateContainerRequest &request)
{
    return qobject_cast<CreateContainerResponse *>(send(request));
}

/**
 * Deletes the specified container. Before you make a <code>DeleteContainer</code> request, delete any objects in the
 * container or in any folders in the container. You can delete only empty containers.
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteContainerResponse * MediaStoreClient::deleteContainer(const DeleteContainerRequest &request)
{
    return qobject_cast<DeleteContainerResponse *>(send(request));
}

/**
 * Deletes the access policy that is associated with the specified
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteContainerPolicyResponse * MediaStoreClient::deleteContainerPolicy(const DeleteContainerPolicyRequest &request)
{
    return qobject_cast<DeleteContainerPolicyResponse *>(send(request));
}

/**
 * Deletes the cross-origin resource sharing (CORS) configuration information that is set for the
 *
 * container>
 *
 * To use this operation, you must have permission to perform the <code>MediaStore:DeleteCorsPolicy</code> action. The
 * container owner has this permission by default and can grant this permission to
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteCorsPolicyResponse * MediaStoreClient::deleteCorsPolicy(const DeleteCorsPolicyRequest &request)
{
    return qobject_cast<DeleteCorsPolicyResponse *>(send(request));
}

/**
 * Retrieves the properties of the requested container. This request is commonly used to retrieve the endpoint of a
 * container. An endpoint is a value assigned by the service when a new container is created. A container's endpoint does
 * not change after it has been assigned. The <code>DescribeContainer</code> request returns a single
 * <code>Container</code> object based on <code>ContainerName</code>. To return all <code>Container</code> objects that are
 * associated with a specified AWS account, use
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeContainerResponse * MediaStoreClient::describeContainer(const DescribeContainerRequest &request)
{
    return qobject_cast<DescribeContainerResponse *>(send(request));
}

/**
 * Retrieves the access policy for the specified container. For information about the data that is included in an access
 * policy, see the <a href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access Management User
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetContainerPolicyResponse * MediaStoreClient::getContainerPolicy(const GetContainerPolicyRequest &request)
{
    return qobject_cast<GetContainerPolicyResponse *>(send(request));
}

/**
 * Returns the cross-origin resource sharing (CORS) configuration information that is set for the
 *
 * container>
 *
 * To use this operation, you must have permission to perform the <code>MediaStore:GetCorsPolicy</code> action. By default,
 * the container owner has this permission and can grant it to
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCorsPolicyResponse * MediaStoreClient::getCorsPolicy(const GetCorsPolicyRequest &request)
{
    return qobject_cast<GetCorsPolicyResponse *>(send(request));
}

/**
 * Lists the properties of all containers in AWS Elemental MediaStore.
 *
 * </p
 *
 * You can query to receive all the containers in one response. Or you can include the <code>MaxResults</code> parameter to
 * receive a limited number of containers in each response. In this case, the response includes a token. To get the next
 * set of containers, send the command again, this time with the <code>NextToken</code> parameter (with the returned token
 * as its value). The next set of responses appears, with a token if there are still more containers to receive.
 *
 * </p
 *
 * See also <a>DescribeContainer</a>, which gets the properties of one container.
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListContainersResponse * MediaStoreClient::listContainers(const ListContainersRequest &request)
{
    return qobject_cast<ListContainersResponse *>(send(request));
}

/**
 * Creates an access policy for the specified container to restrict the users and clients that can access it. For
 * information about the data that is included in an access policy, see the <a
 * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access Management User
 *
 * Guide</a>>
 *
 * For this release of the REST API, you can create only one policy for a container. If you enter
 * <code>PutContainerPolicy</code> twice, the second command modifies the existing policy.
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutContainerPolicyResponse * MediaStoreClient::putContainerPolicy(const PutContainerPolicyRequest &request)
{
    return qobject_cast<PutContainerPolicyResponse *>(send(request));
}

/**
 * Sets the cross-origin resource sharing (CORS) configuration on a container so that the container can service
 * cross-origin requests. For example, you might want to enable a request whose origin is http://www.example.com to access
 * your AWS Elemental MediaStore container at my.example.container.com by using the browser's XMLHttpRequest
 *
 * capability>
 *
 * To enable CORS on a container, you attach a CORS policy to the container. In the CORS policy, you configure rules that
 * identify origins and the HTTP methods that can be executed on your container. The policy can contain up to 398,000
 * characters. You can add up to 100 rules to a CORS policy. If more than one rule applies, the service uses the first
 * applicable rule
 *
 * @param  request Request to send to AWS Elemental MediaStore.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutCorsPolicyResponse * MediaStoreClient::putCorsPolicy(const PutCorsPolicyRequest &request)
{
    return qobject_cast<PutCorsPolicyResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  MediaStoreClientPrivate
 *
 * @brief  Private implementation for MediaStoreClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MediaStoreClientPrivate object.
 *
 * @param  q  Pointer to this object's public MediaStoreClient instance.
 */
MediaStoreClientPrivate::MediaStoreClientPrivate(MediaStoreClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace MediaStore
} // namespace AWS
