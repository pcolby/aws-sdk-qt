/*
    Copyright 2013-2019 Paul Colby

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

#include "mediastoreclient.h"
#include "mediastoreclient_p.h"

#include "core/awssignaturev4.h"
#include "createcontainerrequest.h"
#include "createcontainerresponse.h"
#include "deletecontainerrequest.h"
#include "deletecontainerresponse.h"
#include "deletecontainerpolicyrequest.h"
#include "deletecontainerpolicyresponse.h"
#include "deletecorspolicyrequest.h"
#include "deletecorspolicyresponse.h"
#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyresponse.h"
#include "describecontainerrequest.h"
#include "describecontainerresponse.h"
#include "getcontainerpolicyrequest.h"
#include "getcontainerpolicyresponse.h"
#include "getcorspolicyrequest.h"
#include "getcorspolicyresponse.h"
#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyresponse.h"
#include "listcontainersrequest.h"
#include "listcontainersresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putcontainerpolicyrequest.h"
#include "putcontainerpolicyresponse.h"
#include "putcorspolicyrequest.h"
#include "putcorspolicyresponse.h"
#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyresponse.h"
#include "startaccessloggingrequest.h"
#include "startaccessloggingresponse.h"
#include "stopaccessloggingrequest.h"
#include "stopaccessloggingresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MediaStore
 * \brief Contains classess for accessing AWS Elemental MediaStore.
 *
 * \inmodule QtAwsMediaStore
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MediaStore {

/*!
 * \class QtAws::MediaStore::MediaStoreClient
 * \brief The MediaStoreClient class provides access to the AWS Elemental MediaStore service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaStore
 *
 *  An AWS Elemental MediaStore container is a namespace that holds folders and objects. You use a container endpoint to
 *  create, read, and delete objects.
 */

/*!
 * \brief Constructs a MediaStoreClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MediaStoreClient::MediaStoreClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaStoreClientPrivate(this), parent)
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

/*!
 * \overload MediaStoreClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MediaStoreClient::MediaStoreClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MediaStoreClientPrivate(this), parent)
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

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * CreateContainerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a storage container to hold objects. A container is similar to a bucket in the Amazon S3
 */
CreateContainerResponse * MediaStoreClient::createContainer(const CreateContainerRequest &request)
{
    return qobject_cast<CreateContainerResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * DeleteContainerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified container. Before you make a <code>DeleteContainer</code> request, delete any objects in the
 * container or in any folders in the container. You can delete only empty containers.
 */
DeleteContainerResponse * MediaStoreClient::deleteContainer(const DeleteContainerRequest &request)
{
    return qobject_cast<DeleteContainerResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * DeleteContainerPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the access policy that is associated with the specified
 */
DeleteContainerPolicyResponse * MediaStoreClient::deleteContainerPolicy(const DeleteContainerPolicyRequest &request)
{
    return qobject_cast<DeleteContainerPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * DeleteCorsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the cross-origin resource sharing (CORS) configuration information that is set for the
 *
 * container>
 *
 * To use this operation, you must have permission to perform the <code>MediaStore:DeleteCorsPolicy</code> action. The
 * container owner has this permission by default and can grant this permission to
 */
DeleteCorsPolicyResponse * MediaStoreClient::deleteCorsPolicy(const DeleteCorsPolicyRequest &request)
{
    return qobject_cast<DeleteCorsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * DeleteLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an object lifecycle policy from a container. It takes up to 20 minutes for the change to take
 */
DeleteLifecyclePolicyResponse * MediaStoreClient::deleteLifecyclePolicy(const DeleteLifecyclePolicyRequest &request)
{
    return qobject_cast<DeleteLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * DescribeContainerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the properties of the requested container. This request is commonly used to retrieve the endpoint of a
 * container. An endpoint is a value assigned by the service when a new container is created. A container's endpoint does
 * not change after it has been assigned. The <code>DescribeContainer</code> request returns a single
 * <code>Container</code> object based on <code>ContainerName</code>. To return all <code>Container</code> objects that are
 * associated with a specified AWS account, use
 */
DescribeContainerResponse * MediaStoreClient::describeContainer(const DescribeContainerRequest &request)
{
    return qobject_cast<DescribeContainerResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * GetContainerPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the access policy for the specified container. For information about the data that is included in an access
 * policy, see the <a href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access Management User
 */
GetContainerPolicyResponse * MediaStoreClient::getContainerPolicy(const GetContainerPolicyRequest &request)
{
    return qobject_cast<GetContainerPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * GetCorsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the cross-origin resource sharing (CORS) configuration information that is set for the
 *
 * container>
 *
 * To use this operation, you must have permission to perform the <code>MediaStore:GetCorsPolicy</code> action. By default,
 * the container owner has this permission and can grant it to
 */
GetCorsPolicyResponse * MediaStoreClient::getCorsPolicy(const GetCorsPolicyRequest &request)
{
    return qobject_cast<GetCorsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * GetLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the object lifecycle policy that is assigned to a
 */
GetLifecyclePolicyResponse * MediaStoreClient::getLifecyclePolicy(const GetLifecyclePolicyRequest &request)
{
    return qobject_cast<GetLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * ListContainersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
ListContainersResponse * MediaStoreClient::listContainers(const ListContainersRequest &request)
{
    return qobject_cast<ListContainersResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the tags assigned to the specified container.
 */
ListTagsForResourceResponse * MediaStoreClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * PutContainerPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an access policy for the specified container to restrict the users and clients that can access it. For
 * information about the data that is included in an access policy, see the <a
 * href="https://aws.amazon.com/documentation/iam/">AWS Identity and Access Management User
 *
 * Guide</a>>
 *
 * For this release of the REST API, you can create only one policy for a container. If you enter
 * <code>PutContainerPolicy</code> twice, the second command modifies the existing policy.
 */
PutContainerPolicyResponse * MediaStoreClient::putContainerPolicy(const PutContainerPolicyRequest &request)
{
    return qobject_cast<PutContainerPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * PutCorsPolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 * listed>
 *
 * To learn more about CORS, see <a href="https://docs.aws.amazon.com/mediastore/latest/ug/cors-policy.html">Cross-Origin
 * Resource Sharing (CORS) in AWS Elemental
 */
PutCorsPolicyResponse * MediaStoreClient::putCorsPolicy(const PutCorsPolicyRequest &request)
{
    return qobject_cast<PutCorsPolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * PutLifecyclePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Writes an object lifecycle policy to a container. If the container already has an object lifecycle policy, the service
 * replaces the existing policy with the new policy. It takes up to 20 minutes for the change to take
 *
 * effect>
 *
 * For information about how to construct an object lifecycle policy, see <a
 * href="https://docs.aws.amazon.com/mediastore/latest/ug/policies-object-lifecycle-components.html">Components of an
 * Object Lifecycle
 */
PutLifecyclePolicyResponse * MediaStoreClient::putLifecyclePolicy(const PutLifecyclePolicyRequest &request)
{
    return qobject_cast<PutLifecyclePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * StartAccessLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts access logging on the specified container. When you enable access logging on a container, MediaStore delivers
 * access logs for objects stored in that container to Amazon CloudWatch
 */
StartAccessLoggingResponse * MediaStoreClient::startAccessLogging(const StartAccessLoggingRequest &request)
{
    return qobject_cast<StartAccessLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * StopAccessLoggingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops access logging on the specified container. When you stop access logging on a container, MediaStore stops sending
 * access logs to Amazon CloudWatch Logs. These access logs are not saved and are not
 */
StopAccessLoggingResponse * MediaStoreClient::stopAccessLogging(const StopAccessLoggingRequest &request)
{
    return qobject_cast<StopAccessLoggingResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds tags to the specified AWS Elemental MediaStore container. Tags are key:value pairs that you can associate with AWS
 * resources. For example, the tag key might be "customer" and the tag value might be "companyA." You can specify one or
 * more tags to add to each container. You can add up to 50 tags to each container. For more information about tagging,
 * including naming and usage conventions, see <a href="https://aws.amazon.com/documentation/mediastore/tagging">Tagging
 * Resources in
 */
TagResourceResponse * MediaStoreClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the MediaStoreClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes tags from the specified container. You can specify one or more tags to remove.
 */
UntagResourceResponse * MediaStoreClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * \class QtAws::MediaStore::MediaStoreClientPrivate
 * \brief The MediaStoreClientPrivate class provides private implementation for MediaStoreClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMediaStore
 */

/*!
 * Constructs a MediaStoreClientPrivate object with public implementation \a q.
 */
MediaStoreClientPrivate::MediaStoreClientPrivate(MediaStoreClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MediaStore
} // namespace QtAws
