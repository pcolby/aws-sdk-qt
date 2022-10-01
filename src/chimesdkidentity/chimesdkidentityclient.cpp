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

#include "chimesdkidentityclient.h"
#include "chimesdkidentityclient_p.h"

#include "core/awssignaturev4.h"
#include "createappinstancerequest.h"
#include "createappinstanceresponse.h"
#include "createappinstanceadminrequest.h"
#include "createappinstanceadminresponse.h"
#include "createappinstanceuserrequest.h"
#include "createappinstanceuserresponse.h"
#include "deleteappinstancerequest.h"
#include "deleteappinstanceresponse.h"
#include "deleteappinstanceadminrequest.h"
#include "deleteappinstanceadminresponse.h"
#include "deleteappinstanceuserrequest.h"
#include "deleteappinstanceuserresponse.h"
#include "deregisterappinstanceuserendpointrequest.h"
#include "deregisterappinstanceuserendpointresponse.h"
#include "describeappinstancerequest.h"
#include "describeappinstanceresponse.h"
#include "describeappinstanceadminrequest.h"
#include "describeappinstanceadminresponse.h"
#include "describeappinstanceuserrequest.h"
#include "describeappinstanceuserresponse.h"
#include "describeappinstanceuserendpointrequest.h"
#include "describeappinstanceuserendpointresponse.h"
#include "getappinstanceretentionsettingsrequest.h"
#include "getappinstanceretentionsettingsresponse.h"
#include "listappinstanceadminsrequest.h"
#include "listappinstanceadminsresponse.h"
#include "listappinstanceuserendpointsrequest.h"
#include "listappinstanceuserendpointsresponse.h"
#include "listappinstanceusersrequest.h"
#include "listappinstanceusersresponse.h"
#include "listappinstancesrequest.h"
#include "listappinstancesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "putappinstanceretentionsettingsrequest.h"
#include "putappinstanceretentionsettingsresponse.h"
#include "registerappinstanceuserendpointrequest.h"
#include "registerappinstanceuserendpointresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateappinstancerequest.h"
#include "updateappinstanceresponse.h"
#include "updateappinstanceuserrequest.h"
#include "updateappinstanceuserresponse.h"
#include "updateappinstanceuserendpointrequest.h"
#include "updateappinstanceuserendpointresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::ChimeSdkIdentity
 * \brief Contains classess for accessing Amazon Chime SDK Identity.
 *
 * \inmodule QtAwsChimeSdkIdentity
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace ChimeSdkIdentity {

/*!
 * \class QtAws::ChimeSdkIdentity::ChimeSdkIdentityClient
 * \brief The ChimeSdkIdentityClient class provides access to the Amazon Chime SDK Identity service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkIdentity
 *
 *  The Amazon Chime SDK Identity APIs in this section allow software developers to create and manage unique instances of
 *  their messaging applications. These APIs provide the overarching framework for creating and sending messages. For more
 *  information about the identity APIs, refer to <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Identity.html">Amazon Chime
 *  SDK
 */

/*!
 * \brief Constructs a ChimeSdkIdentityClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ChimeSdkIdentityClient::ChimeSdkIdentityClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkIdentityClientPrivate(this), parent)
{
    Q_D(ChimeSdkIdentityClient);
    d->apiVersion = QStringLiteral("2021-04-20");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("identity-chime");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Identity");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * \overload ChimeSdkIdentityClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ChimeSdkIdentityClient::ChimeSdkIdentityClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ChimeSdkIdentityClientPrivate(this), parent)
{
    Q_D(ChimeSdkIdentityClient);
    d->apiVersion = QStringLiteral("2021-04-20");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("identity-chime");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Chime SDK Identity");
    d->serviceName = QStringLiteral("chime");
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * CreateAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon Chime SDK messaging <code>AppInstance</code> under an AWS account. Only SDK messaging customers use
 * this API. <code>CreateAppInstance</code> supports idempotency behavior as described in the AWS API
 *
 * Standard>
 */
CreateAppInstanceResponse * ChimeSdkIdentityClient::createAppInstance(const CreateAppInstanceRequest &request)
{
    return qobject_cast<CreateAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * CreateAppInstanceAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Promotes an <code>AppInstanceUser</code> to an <code>AppInstanceAdmin</code>. The promoted user can perform the
 * following actions.
 *
 * </p <ul> <li>
 *
 * <code>ChannelModerator</code> actions across all channels in the
 *
 * <code>AppInstance</code>> </li> <li>
 *
 * <code>DeleteChannelMessage</code>
 *
 * actions> </li> </ul>
 *
 * Only an <code>AppInstanceUser</code> can be promoted to an <code>AppInstanceAdmin</code>
 */
CreateAppInstanceAdminResponse * ChimeSdkIdentityClient::createAppInstanceAdmin(const CreateAppInstanceAdminRequest &request)
{
    return qobject_cast<CreateAppInstanceAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * CreateAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a user under an Amazon Chime <code>AppInstance</code>. The request consists of a unique
 * <code>appInstanceUserId</code> and <code>Name</code> for that
 */
CreateAppInstanceUserResponse * ChimeSdkIdentityClient::createAppInstanceUser(const CreateAppInstanceUserRequest &request)
{
    return qobject_cast<CreateAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DeleteAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an <code>AppInstance</code> and all associated data
 */
DeleteAppInstanceResponse * ChimeSdkIdentityClient::deleteAppInstance(const DeleteAppInstanceRequest &request)
{
    return qobject_cast<DeleteAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DeleteAppInstanceAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Demotes an <code>AppInstanceAdmin</code> to an <code>AppInstanceUser</code>. This action does not delete the
 */
DeleteAppInstanceAdminResponse * ChimeSdkIdentityClient::deleteAppInstanceAdmin(const DeleteAppInstanceAdminRequest &request)
{
    return qobject_cast<DeleteAppInstanceAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DeleteAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteAppInstanceUserResponse * ChimeSdkIdentityClient::deleteAppInstanceUser(const DeleteAppInstanceUserRequest &request)
{
    return qobject_cast<DeleteAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DeregisterAppInstanceUserEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deregisters an
 */
DeregisterAppInstanceUserEndpointResponse * ChimeSdkIdentityClient::deregisterAppInstanceUserEndpoint(const DeregisterAppInstanceUserEndpointRequest &request)
{
    return qobject_cast<DeregisterAppInstanceUserEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DescribeAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceResponse * ChimeSdkIdentityClient::describeAppInstance(const DescribeAppInstanceRequest &request)
{
    return qobject_cast<DescribeAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DescribeAppInstanceAdminResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceAdminResponse * ChimeSdkIdentityClient::describeAppInstanceAdmin(const DescribeAppInstanceAdminRequest &request)
{
    return qobject_cast<DescribeAppInstanceAdminResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DescribeAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceUserResponse * ChimeSdkIdentityClient::describeAppInstanceUser(const DescribeAppInstanceUserRequest &request)
{
    return qobject_cast<DescribeAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * DescribeAppInstanceUserEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the full details of an
 */
DescribeAppInstanceUserEndpointResponse * ChimeSdkIdentityClient::describeAppInstanceUserEndpoint(const DescribeAppInstanceUserEndpointRequest &request)
{
    return qobject_cast<DescribeAppInstanceUserEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * GetAppInstanceRetentionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the retention settings for an
 */
GetAppInstanceRetentionSettingsResponse * ChimeSdkIdentityClient::getAppInstanceRetentionSettings(const GetAppInstanceRetentionSettingsRequest &request)
{
    return qobject_cast<GetAppInstanceRetentionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * ListAppInstanceAdminsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the administrators in the
 */
ListAppInstanceAdminsResponse * ChimeSdkIdentityClient::listAppInstanceAdmins(const ListAppInstanceAdminsRequest &request)
{
    return qobject_cast<ListAppInstanceAdminsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * ListAppInstanceUserEndpointsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the <code>AppInstanceUserEndpoints</code> created under a single
 */
ListAppInstanceUserEndpointsResponse * ChimeSdkIdentityClient::listAppInstanceUserEndpoints(const ListAppInstanceUserEndpointsRequest &request)
{
    return qobject_cast<ListAppInstanceUserEndpointsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * ListAppInstanceUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * List all <code>AppInstanceUsers</code> created under a single
 */
ListAppInstanceUsersResponse * ChimeSdkIdentityClient::listAppInstanceUsers(const ListAppInstanceUsersRequest &request)
{
    return qobject_cast<ListAppInstanceUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * ListAppInstancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all Amazon Chime <code>AppInstance</code>s created under a single AWS
 */
ListAppInstancesResponse * ChimeSdkIdentityClient::listAppInstances(const ListAppInstancesRequest &request)
{
    return qobject_cast<ListAppInstancesResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags applied to an Amazon Chime SDK identity
 */
ListTagsForResourceResponse * ChimeSdkIdentityClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * PutAppInstanceRetentionSettingsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the amount of time in days that a given <code>AppInstance</code> retains
 */
PutAppInstanceRetentionSettingsResponse * ChimeSdkIdentityClient::putAppInstanceRetentionSettings(const PutAppInstanceRetentionSettingsRequest &request)
{
    return qobject_cast<PutAppInstanceRetentionSettingsResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * RegisterAppInstanceUserEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an endpoint under an Amazon Chime <code>AppInstanceUser</code>. The endpoint receives messages for a user. For
 * push notifications, the endpoint is a mobile device used to receive mobile push notifications for a
 */
RegisterAppInstanceUserEndpointResponse * ChimeSdkIdentityClient::registerAppInstanceUserEndpoint(const RegisterAppInstanceUserEndpointRequest &request)
{
    return qobject_cast<RegisterAppInstanceUserEndpointResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Applies the specified tags to the specified Amazon Chime SDK identity
 */
TagResourceResponse * ChimeSdkIdentityClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified tags from the specified Amazon Chime SDK identity
 */
UntagResourceResponse * ChimeSdkIdentityClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * UpdateAppInstanceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates <code>AppInstance</code>
 */
UpdateAppInstanceResponse * ChimeSdkIdentityClient::updateAppInstance(const UpdateAppInstanceRequest &request)
{
    return qobject_cast<UpdateAppInstanceResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * UpdateAppInstanceUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of an <code>AppInstanceUser</code>. You can update names and
 */
UpdateAppInstanceUserResponse * ChimeSdkIdentityClient::updateAppInstanceUser(const UpdateAppInstanceUserRequest &request)
{
    return qobject_cast<UpdateAppInstanceUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ChimeSdkIdentityClient service, and returns a pointer to an
 * UpdateAppInstanceUserEndpointResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the details of an <code>AppInstanceUserEndpoint</code>. You can update the name and <code>AllowMessage</code>
 */
UpdateAppInstanceUserEndpointResponse * ChimeSdkIdentityClient::updateAppInstanceUserEndpoint(const UpdateAppInstanceUserEndpointRequest &request)
{
    return qobject_cast<UpdateAppInstanceUserEndpointResponse *>(send(request));
}

/*!
 * \class QtAws::ChimeSdkIdentity::ChimeSdkIdentityClientPrivate
 * \brief The ChimeSdkIdentityClientPrivate class provides private implementation for ChimeSdkIdentityClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsChimeSdkIdentity
 */

/*!
 * Constructs a ChimeSdkIdentityClientPrivate object with public implementation \a q.
 */
ChimeSdkIdentityClientPrivate::ChimeSdkIdentityClientPrivate(ChimeSdkIdentityClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace ChimeSdkIdentity
} // namespace QtAws
