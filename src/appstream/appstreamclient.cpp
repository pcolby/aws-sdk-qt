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

#include "appstreamclient.h"
#include "appstreamclient_p.h"

#include "core/awssignaturev4.h"
#include "associateapplicationfleetrequest.h"
#include "associateapplicationfleetresponse.h"
#include "associateapplicationtoentitlementrequest.h"
#include "associateapplicationtoentitlementresponse.h"
#include "associatefleetrequest.h"
#include "associatefleetresponse.h"
#include "batchassociateuserstackrequest.h"
#include "batchassociateuserstackresponse.h"
#include "batchdisassociateuserstackrequest.h"
#include "batchdisassociateuserstackresponse.h"
#include "copyimagerequest.h"
#include "copyimageresponse.h"
#include "createappblockrequest.h"
#include "createappblockresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createdirectoryconfigrequest.h"
#include "createdirectoryconfigresponse.h"
#include "createentitlementrequest.h"
#include "createentitlementresponse.h"
#include "createfleetrequest.h"
#include "createfleetresponse.h"
#include "createimagebuilderrequest.h"
#include "createimagebuilderresponse.h"
#include "createimagebuilderstreamingurlrequest.h"
#include "createimagebuilderstreamingurlresponse.h"
#include "createstackrequest.h"
#include "createstackresponse.h"
#include "createstreamingurlrequest.h"
#include "createstreamingurlresponse.h"
#include "createupdatedimagerequest.h"
#include "createupdatedimageresponse.h"
#include "createusagereportsubscriptionrequest.h"
#include "createusagereportsubscriptionresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deleteappblockrequest.h"
#include "deleteappblockresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deletedirectoryconfigrequest.h"
#include "deletedirectoryconfigresponse.h"
#include "deleteentitlementrequest.h"
#include "deleteentitlementresponse.h"
#include "deletefleetrequest.h"
#include "deletefleetresponse.h"
#include "deleteimagerequest.h"
#include "deleteimageresponse.h"
#include "deleteimagebuilderrequest.h"
#include "deleteimagebuilderresponse.h"
#include "deleteimagepermissionsrequest.h"
#include "deleteimagepermissionsresponse.h"
#include "deletestackrequest.h"
#include "deletestackresponse.h"
#include "deleteusagereportsubscriptionrequest.h"
#include "deleteusagereportsubscriptionresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describeappblocksrequest.h"
#include "describeappblocksresponse.h"
#include "describeapplicationfleetassociationsrequest.h"
#include "describeapplicationfleetassociationsresponse.h"
#include "describeapplicationsrequest.h"
#include "describeapplicationsresponse.h"
#include "describedirectoryconfigsrequest.h"
#include "describedirectoryconfigsresponse.h"
#include "describeentitlementsrequest.h"
#include "describeentitlementsresponse.h"
#include "describefleetsrequest.h"
#include "describefleetsresponse.h"
#include "describeimagebuildersrequest.h"
#include "describeimagebuildersresponse.h"
#include "describeimagepermissionsrequest.h"
#include "describeimagepermissionsresponse.h"
#include "describeimagesrequest.h"
#include "describeimagesresponse.h"
#include "describesessionsrequest.h"
#include "describesessionsresponse.h"
#include "describestacksrequest.h"
#include "describestacksresponse.h"
#include "describeusagereportsubscriptionsrequest.h"
#include "describeusagereportsubscriptionsresponse.h"
#include "describeuserstackassociationsrequest.h"
#include "describeuserstackassociationsresponse.h"
#include "describeusersrequest.h"
#include "describeusersresponse.h"
#include "disableuserrequest.h"
#include "disableuserresponse.h"
#include "disassociateapplicationfleetrequest.h"
#include "disassociateapplicationfleetresponse.h"
#include "disassociateapplicationfromentitlementrequest.h"
#include "disassociateapplicationfromentitlementresponse.h"
#include "disassociatefleetrequest.h"
#include "disassociatefleetresponse.h"
#include "enableuserrequest.h"
#include "enableuserresponse.h"
#include "expiresessionrequest.h"
#include "expiresessionresponse.h"
#include "listassociatedfleetsrequest.h"
#include "listassociatedfleetsresponse.h"
#include "listassociatedstacksrequest.h"
#include "listassociatedstacksresponse.h"
#include "listentitledapplicationsrequest.h"
#include "listentitledapplicationsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startfleetrequest.h"
#include "startfleetresponse.h"
#include "startimagebuilderrequest.h"
#include "startimagebuilderresponse.h"
#include "stopfleetrequest.h"
#include "stopfleetresponse.h"
#include "stopimagebuilderrequest.h"
#include "stopimagebuilderresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"
#include "updatedirectoryconfigrequest.h"
#include "updatedirectoryconfigresponse.h"
#include "updateentitlementrequest.h"
#include "updateentitlementresponse.h"
#include "updatefleetrequest.h"
#include "updatefleetresponse.h"
#include "updateimagepermissionsrequest.h"
#include "updateimagepermissionsresponse.h"
#include "updatestackrequest.h"
#include "updatestackresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppStream
 * \brief Contains classess for accessing Amazon AppStream.
 *
 * \inmodule QtAwsAppStream
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppStream {

/*!
 * \class QtAws::AppStream::AppStreamClient
 * \brief The AppStreamClient class provides access to the Amazon AppStream service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppStream
 *
 *  <fullname>Amazon AppStream 2.0</fullname>
 * 
 *  This is the <i>Amazon AppStream 2.0 API Reference</i>. This documentation provides descriptions and syntax for each of
 *  the actions and data types in AppStream 2.0. AppStream 2.0 is a fully managed, secure application streaming service that
 *  lets you stream desktop applications to users without rewriting applications. AppStream 2.0 manages the AWS resources
 *  that are required to host and run your applications, scales automatically, and provides access to your users on demand.
 * 
 *  </p <note>
 * 
 *  You can call the AppStream 2.0 API operations by using an interface VPC endpoint (interface endpoint). For more
 *  information, see <a
 *  href="https://docs.aws.amazon.com/appstream2/latest/developerguide/access-api-cli-through-interface-vpc-endpoint.html">Access
 *  AppStream 2.0 API Operations and CLI Commands Through an Interface VPC Endpoint</a> in the <i>Amazon AppStream 2.0
 *  Administration
 * 
 *  Guide</i>> </note>
 * 
 *  To learn more about AppStream 2.0, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/appstream2">Amazon AppStream 2.0 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/appstream2">Amazon AppStream 2.0 documentation</a>
 */

/*!
 * \brief Constructs a AppStreamClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppStreamClient::AppStreamClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppStreamClientPrivate(this), parent)
{
    Q_D(AppStreamClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appstream2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon AppStream");
    d->serviceName = QStringLiteral("appstream");
}

/*!
 * \overload AppStreamClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppStreamClient::AppStreamClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppStreamClientPrivate(this), parent)
{
    Q_D(AppStreamClient);
    d->apiVersion = QStringLiteral("2016-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appstream2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon AppStream");
    d->serviceName = QStringLiteral("appstream");
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * AssociateApplicationFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified application with the specified fleet. This is only supported for Elastic
 */
AssociateApplicationFleetResponse * AppStreamClient::associateApplicationFleet(const AssociateApplicationFleetRequest &request)
{
    return qobject_cast<AssociateApplicationFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * AssociateApplicationToEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates an application to
 */
AssociateApplicationToEntitlementResponse * AppStreamClient::associateApplicationToEntitlement(const AssociateApplicationToEntitlementRequest &request)
{
    return qobject_cast<AssociateApplicationToEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * AssociateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified fleet with the specified
 */
AssociateFleetResponse * AppStreamClient::associateFleet(const AssociateFleetRequest &request)
{
    return qobject_cast<AssociateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * BatchAssociateUserStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates the specified users with the specified stacks. Users in a user pool cannot be assigned to stacks with fleets
 * that are joined to an Active Directory
 */
BatchAssociateUserStackResponse * AppStreamClient::batchAssociateUserStack(const BatchAssociateUserStackRequest &request)
{
    return qobject_cast<BatchAssociateUserStackResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * BatchDisassociateUserStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified users from the specified
 */
BatchDisassociateUserStackResponse * AppStreamClient::batchDisassociateUserStack(const BatchDisassociateUserStackRequest &request)
{
    return qobject_cast<BatchDisassociateUserStackResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CopyImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Copies the image within the same region or to a new region within the same AWS account. Note that any tags you added to
 * the image will not be
 */
CopyImageResponse * AppStreamClient::copyImage(const CopyImageRequest &request)
{
    return qobject_cast<CopyImageResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateAppBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an app
 *
 * block>
 *
 * App blocks are an Amazon AppStream 2.0 resource that stores the details about the virtual hard disk in an S3 bucket. It
 * also stores the setup script with details about how to mount the virtual hard disk. The virtual hard disk includes the
 * application binaries and other files necessary to launch your applications. Multiple applications can be assigned to a
 * single app
 *
 * block>
 *
 * This is only supported for Elastic
 */
CreateAppBlockResponse * AppStreamClient::createAppBlock(const CreateAppBlockRequest &request)
{
    return qobject_cast<CreateAppBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an
 *
 * application>
 *
 * Applications are an Amazon AppStream 2.0 resource that stores the details about how to launch applications on Elastic
 * fleet streaming instances. An application consists of the launch details, icon, and display name. Applications are
 * associated with an app block that contains the application binaries and other files. The applications assigned to an
 * Elastic fleet are the applications users can launch.
 *
 * </p
 *
 * This is only supported for Elastic
 */
CreateApplicationResponse * AppStreamClient::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateDirectoryConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a Directory Config object in AppStream 2.0. This object includes the configuration information required to join
 * fleets and image builders to Microsoft Active Directory
 */
CreateDirectoryConfigResponse * AppStreamClient::createDirectoryConfig(const CreateDirectoryConfigRequest &request)
{
    return qobject_cast<CreateDirectoryConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new entitlement. Entitlements control access to specific applications within a stack, based on user
 * attributes. Entitlements apply to SAML 2.0 federated user identities. Amazon AppStream 2.0 user pool and streaming URL
 * users are entitled to all applications in a stack. Entitlements don't apply to the desktop stream view application, or
 * to applications managed by a dynamic app provider using the Dynamic Application
 */
CreateEntitlementResponse * AppStreamClient::createEntitlement(const CreateEntitlementRequest &request)
{
    return qobject_cast<CreateEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a fleet. A fleet consists of streaming instances that run a specified image when using Always-On or
 */
CreateFleetResponse * AppStreamClient::createFleet(const CreateFleetRequest &request)
{
    return qobject_cast<CreateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an image builder. An image builder is a virtual machine that is used to create an
 *
 * image>
 *
 * The initial state of the builder is <code>PENDING</code>. When it is ready, the state is
 */
CreateImageBuilderResponse * AppStreamClient::createImageBuilder(const CreateImageBuilderRequest &request)
{
    return qobject_cast<CreateImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateImageBuilderStreamingURLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a URL to start an image builder streaming
 */
CreateImageBuilderStreamingURLResponse * AppStreamClient::createImageBuilderStreamingURL(const CreateImageBuilderStreamingURLRequest &request)
{
    return qobject_cast<CreateImageBuilderStreamingURLResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a stack to start streaming applications to users. A stack consists of an associated fleet, user access policies,
 * and storage configurations.
 */
CreateStackResponse * AppStreamClient::createStack(const CreateStackRequest &request)
{
    return qobject_cast<CreateStackResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateStreamingURLResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a temporary URL to start an AppStream 2.0 streaming session for the specified user. A streaming URL enables
 * application streaming to be tested without user setup.
 */
CreateStreamingURLResponse * AppStreamClient::createStreamingURL(const CreateStreamingURLRequest &request)
{
    return qobject_cast<CreateStreamingURLResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateUpdatedImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new image with the latest Windows operating system updates, driver updates, and AppStream 2.0 agent
 *
 * software>
 *
 * For more information, see the "Update an Image by Using Managed AppStream 2.0 Image Updates" section in <a
 * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/administer-images.html">Administer Your AppStream 2.0
 * Images</a>, in the <i>Amazon AppStream 2.0 Administration
 */
CreateUpdatedImageResponse * AppStreamClient::createUpdatedImage(const CreateUpdatedImageRequest &request)
{
    return qobject_cast<CreateUpdatedImageResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateUsageReportSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a usage report subscription. Usage reports are generated
 */
CreateUsageReportSubscriptionResponse * AppStreamClient::createUsageReportSubscription(const CreateUsageReportSubscriptionRequest &request)
{
    return qobject_cast<CreateUsageReportSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user in the user
 */
CreateUserResponse * AppStreamClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteAppBlockResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an app
 */
DeleteAppBlockResponse * AppStreamClient::deleteAppBlock(const DeleteAppBlockRequest &request)
{
    return qobject_cast<DeleteAppBlockResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an
 */
DeleteApplicationResponse * AppStreamClient::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteDirectoryConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified Directory Config object from AppStream 2.0. This object includes the information required to join
 * streaming instances to an Active Directory
 */
DeleteDirectoryConfigResponse * AppStreamClient::deleteDirectoryConfig(const DeleteDirectoryConfigRequest &request)
{
    return qobject_cast<DeleteDirectoryConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteEntitlementResponse * AppStreamClient::deleteEntitlement(const DeleteEntitlementRequest &request)
{
    return qobject_cast<DeleteEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified
 */
DeleteFleetResponse * AppStreamClient::deleteFleet(const DeleteFleetRequest &request)
{
    return qobject_cast<DeleteFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteImageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified image. You cannot delete an image when it is in use. After you delete an image, you cannot
 * provision new capacity using the
 */
DeleteImageResponse * AppStreamClient::deleteImage(const DeleteImageRequest &request)
{
    return qobject_cast<DeleteImageResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified image builder and releases the
 */
DeleteImageBuilderResponse * AppStreamClient::deleteImageBuilder(const DeleteImageBuilderRequest &request)
{
    return qobject_cast<DeleteImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteImagePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes permissions for the specified private image. After you delete permissions for an image, AWS accounts to which
 * you previously granted these permissions can no longer use the
 */
DeleteImagePermissionsResponse * AppStreamClient::deleteImagePermissions(const DeleteImagePermissionsRequest &request)
{
    return qobject_cast<DeleteImagePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified stack. After the stack is deleted, the application streaming environment provided by the stack is
 * no longer available to users. Also, any reservations made for application streaming sessions for the stack are
 */
DeleteStackResponse * AppStreamClient::deleteStack(const DeleteStackRequest &request)
{
    return qobject_cast<DeleteStackResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteUsageReportSubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables usage report
 */
DeleteUsageReportSubscriptionResponse * AppStreamClient::deleteUsageReportSubscription(const DeleteUsageReportSubscriptionRequest &request)
{
    return qobject_cast<DeleteUsageReportSubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user from the user
 */
DeleteUserResponse * AppStreamClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeAppBlocksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more app
 */
DescribeAppBlocksResponse * AppStreamClient::describeAppBlocks(const DescribeAppBlocksRequest &request)
{
    return qobject_cast<DescribeAppBlocksResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeApplicationFleetAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more application fleet associations. Either ApplicationArn or FleetName must be
 */
DescribeApplicationFleetAssociationsResponse * AppStreamClient::describeApplicationFleetAssociations(const DescribeApplicationFleetAssociationsRequest &request)
{
    return qobject_cast<DescribeApplicationFleetAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more
 */
DescribeApplicationsResponse * AppStreamClient::describeApplications(const DescribeApplicationsRequest &request)
{
    return qobject_cast<DescribeApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeDirectoryConfigsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified Directory Config objects for AppStream 2.0, if the names for these
 * objects are provided. Otherwise, all Directory Config objects in the account are described. These objects include the
 * configuration information required to join fleets and image builders to Microsoft Active Directory domains.
 *
 * </p
 *
 * Although the response syntax in this topic includes the account password, this password is not returned in the actual
 */
DescribeDirectoryConfigsResponse * AppStreamClient::describeDirectoryConfigs(const DescribeDirectoryConfigsRequest &request)
{
    return qobject_cast<DescribeDirectoryConfigsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeEntitlementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one of more
 */
DescribeEntitlementsResponse * AppStreamClient::describeEntitlements(const DescribeEntitlementsRequest &request)
{
    return qobject_cast<DescribeEntitlementsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified fleets, if the fleet names are provided. Otherwise, all fleets in
 * the account are
 */
DescribeFleetsResponse * AppStreamClient::describeFleets(const DescribeFleetsRequest &request)
{
    return qobject_cast<DescribeFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeImageBuildersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified image builders, if the image builder names are provided.
 * Otherwise, all image builders in the account are
 */
DescribeImageBuildersResponse * AppStreamClient::describeImageBuilders(const DescribeImageBuildersRequest &request)
{
    return qobject_cast<DescribeImageBuildersResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeImagePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the permissions for shared AWS account IDs on a private image that you own.
 */
DescribeImagePermissionsResponse * AppStreamClient::describeImagePermissions(const DescribeImagePermissionsRequest &request)
{
    return qobject_cast<DescribeImagePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified images, if the image names or image ARNs are provided. Otherwise,
 * all images in the account are
 */
DescribeImagesResponse * AppStreamClient::describeImages(const DescribeImagesRequest &request)
{
    return qobject_cast<DescribeImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeSessionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the streaming sessions for a specified stack and fleet. If a UserId is provided for the
 * stack and fleet, only streaming sessions for that user are described. If an authentication type is not provided, the
 * default is to authenticate users using a streaming
 */
DescribeSessionsResponse * AppStreamClient::describeSessions(const DescribeSessionsRequest &request)
{
    return qobject_cast<DescribeSessionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified stacks, if the stack names are provided. Otherwise, all stacks in
 * the account are
 */
DescribeStacksResponse * AppStreamClient::describeStacks(const DescribeStacksRequest &request)
{
    return qobject_cast<DescribeStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeUsageReportSubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more usage report
 */
DescribeUsageReportSubscriptionsResponse * AppStreamClient::describeUsageReportSubscriptions(const DescribeUsageReportSubscriptionsRequest &request)
{
    return qobject_cast<DescribeUsageReportSubscriptionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeUserStackAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes the UserStackAssociation objects. You must specify either or both of the
 *
 * following> <ul> <li>
 *
 * The stack
 *
 * nam> </li> <li>
 *
 * The user name (email address of the user associated with the stack) and the authentication type for the
 */
DescribeUserStackAssociationsResponse * AppStreamClient::describeUserStackAssociations(const DescribeUserStackAssociationsRequest &request)
{
    return qobject_cast<DescribeUserStackAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DescribeUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list that describes one or more specified users in the user
 */
DescribeUsersResponse * AppStreamClient::describeUsers(const DescribeUsersRequest &request)
{
    return qobject_cast<DescribeUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DisableUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disables the specified user in the user pool. Users can't sign in to AppStream 2.0 until they are re-enabled. This
 * action does not delete the user.
 */
DisableUserResponse * AppStreamClient::disableUser(const DisableUserRequest &request)
{
    return qobject_cast<DisableUserResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DisassociateApplicationFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified application from the
 */
DisassociateApplicationFleetResponse * AppStreamClient::disassociateApplicationFleet(const DisassociateApplicationFleetRequest &request)
{
    return qobject_cast<DisassociateApplicationFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DisassociateApplicationFromEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified application from the specified
 */
DisassociateApplicationFromEntitlementResponse * AppStreamClient::disassociateApplicationFromEntitlement(const DisassociateApplicationFromEntitlementRequest &request)
{
    return qobject_cast<DisassociateApplicationFromEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * DisassociateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates the specified fleet from the specified
 */
DisassociateFleetResponse * AppStreamClient::disassociateFleet(const DisassociateFleetRequest &request)
{
    return qobject_cast<DisassociateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * EnableUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables a user in the user pool. After being enabled, users can sign in to AppStream 2.0 and open applications from the
 * stacks to which they are
 */
EnableUserResponse * AppStreamClient::enableUser(const EnableUserRequest &request)
{
    return qobject_cast<EnableUserResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ExpireSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Immediately stops the specified streaming
 */
ExpireSessionResponse * AppStreamClient::expireSession(const ExpireSessionRequest &request)
{
    return qobject_cast<ExpireSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListAssociatedFleetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the name of the fleet that is associated with the specified
 */
ListAssociatedFleetsResponse * AppStreamClient::listAssociatedFleets(const ListAssociatedFleetsRequest &request)
{
    return qobject_cast<ListAssociatedFleetsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListAssociatedStacksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the name of the stack with which the specified fleet is
 */
ListAssociatedStacksResponse * AppStreamClient::listAssociatedStacks(const ListAssociatedStacksRequest &request)
{
    return qobject_cast<ListAssociatedStacksResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListEntitledApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of entitled
 */
ListEntitledApplicationsResponse * AppStreamClient::listEntitledApplications(const ListEntitledApplicationsRequest &request)
{
    return qobject_cast<ListEntitledApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a list of all tags for the specified AppStream 2.0 resource. You can tag AppStream 2.0 image builders, images,
 * fleets, and
 *
 * stacks>
 *
 * For more information about tags, see <a
 * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Administration
 */
ListTagsForResourceResponse * AppStreamClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StartFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified
 */
StartFleetResponse * AppStreamClient::startFleet(const StartFleetRequest &request)
{
    return qobject_cast<StartFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StartImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the specified image
 */
StartImageBuilderResponse * AppStreamClient::startImageBuilder(const StartImageBuilderRequest &request)
{
    return qobject_cast<StartImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StopFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified
 */
StopFleetResponse * AppStreamClient::stopFleet(const StopFleetRequest &request)
{
    return qobject_cast<StopFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * StopImageBuilderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops the specified image
 */
StopImageBuilderResponse * AppStreamClient::stopImageBuilder(const StopImageBuilderRequest &request)
{
    return qobject_cast<StopImageBuilderResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or overwrites one or more tags for the specified AppStream 2.0 resource. You can tag AppStream 2.0 image builders,
 * images, fleets, and
 *
 * stacks>
 *
 * Each tag consists of a key and an optional value. If a resource already has a tag with the same key, this operation
 * updates its
 *
 * value>
 *
 * To list the current tags for your resources, use <a>ListTagsForResource</a>. To disassociate tags from your resources,
 * use
 *
 * <a>UntagResource</a>>
 *
 * For more information about tags, see <a
 * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Administration
 */
TagResourceResponse * AppStreamClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates one or more specified tags from the specified AppStream 2.0
 *
 * resource>
 *
 * To list the current tags for your resources, use
 *
 * <a>ListTagsForResource</a>>
 *
 * For more information about tags, see <a
 * href="https://docs.aws.amazon.com/appstream2/latest/developerguide/tagging-basic.html">Tagging Your Resources</a> in the
 * <i>Amazon AppStream 2.0 Administration
 */
UntagResourceResponse * AppStreamClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateApplicationResponse * AppStreamClient::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateDirectoryConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified Directory Config object in AppStream 2.0. This object includes the configuration information
 * required to join fleets and image builders to Microsoft Active Directory
 */
UpdateDirectoryConfigResponse * AppStreamClient::updateDirectoryConfig(const UpdateDirectoryConfigRequest &request)
{
    return qobject_cast<UpdateDirectoryConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateEntitlementResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 */
UpdateEntitlementResponse * AppStreamClient::updateEntitlement(const UpdateEntitlementRequest &request)
{
    return qobject_cast<UpdateEntitlementResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateFleetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified
 *
 * fleet>
 *
 * If the fleet is in the <code>STOPPED</code> state, you can update any attribute except the fleet
 *
 * name>
 *
 * If the fleet is in the <code>RUNNING</code> state, you can update the following based on the fleet
 *
 * type> <ul> <li>
 *
 * Always-On and On-Demand fleet
 *
 * type>
 *
 * You can update the <code>DisplayName</code>, <code>ComputeCapacity</code>, <code>ImageARN</code>,
 * <code>ImageName</code>, <code>IdleDisconnectTimeoutInSeconds</code>, and <code>DisconnectTimeoutInSeconds</code>
 *
 * attributes> </li> <li>
 *
 * Elastic fleet
 *
 * typ>
 *
 * You can update the <code>DisplayName</code>, <code>IdleDisconnectTimeoutInSeconds</code>,
 * <code>DisconnectTimeoutInSeconds</code>, <code>MaxConcurrentSessions</code>, <code>SessionScriptS3Location</code> and
 * <code>UsbDeviceFilterStrings</code>
 *
 * attributes> </li> </ul>
 *
 * If the fleet is in the <code>STARTING</code> or <code>STOPPED</code> state, you can't update
 */
UpdateFleetResponse * AppStreamClient::updateFleet(const UpdateFleetRequest &request)
{
    return qobject_cast<UpdateFleetResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateImagePermissionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds or updates permissions for the specified private image.
 */
UpdateImagePermissionsResponse * AppStreamClient::updateImagePermissions(const UpdateImagePermissionsRequest &request)
{
    return qobject_cast<UpdateImagePermissionsResponse *>(send(request));
}

/*!
 * Sends \a request to the AppStreamClient service, and returns a pointer to an
 * UpdateStackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the specified fields for the specified
 */
UpdateStackResponse * AppStreamClient::updateStack(const UpdateStackRequest &request)
{
    return qobject_cast<UpdateStackResponse *>(send(request));
}

/*!
 * \class QtAws::AppStream::AppStreamClientPrivate
 * \brief The AppStreamClientPrivate class provides private implementation for AppStreamClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppStream
 */

/*!
 * Constructs a AppStreamClientPrivate object with public implementation \a q.
 */
AppStreamClientPrivate::AppStreamClientPrivate(AppStreamClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppStream
} // namespace QtAws
