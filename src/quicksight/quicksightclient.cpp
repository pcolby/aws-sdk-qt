/*
    Copyright 2013-2018 Paul Colby

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

#include "quicksightclient.h"
#include "quicksightclient_p.h"

#include "core/awssignaturev4.h"
#include "creategrouprequest.h"
#include "creategroupresponse.h"
#include "creategroupmembershiprequest.h"
#include "creategroupmembershipresponse.h"
#include "deletegrouprequest.h"
#include "deletegroupresponse.h"
#include "deletegroupmembershiprequest.h"
#include "deletegroupmembershipresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describegrouprequest.h"
#include "describegroupresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "getdashboardembedurlrequest.h"
#include "getdashboardembedurlresponse.h"
#include "listgroupmembershipsrequest.h"
#include "listgroupmembershipsresponse.h"
#include "listgroupsrequest.h"
#include "listgroupsresponse.h"
#include "listusergroupsrequest.h"
#include "listusergroupsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "registeruserrequest.h"
#include "registeruserresponse.h"
#include "updategrouprequest.h"
#include "updategroupresponse.h"
#include "updateuserrequest.h"
#include "updateuserresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::QuickSight
 * \brief Contains classess for accessing Amazon QuickSight.
 *
 * \inmodule QtAwsQuickSight
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace QuickSight {

/*!
 * \class QtAws::QuickSight::QuickSightClient
 * \brief The QuickSightClient class provides access to the Amazon QuickSight service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQuickSight
 *
 *  <fullname>Amazon QuickSight API Reference</fullname>
 * 
 *  Amazon QuickSight is a fully managed, serverless, cloud business intelligence service that makes it easy to extend data
 *  and insights to every user in your organization. This API interface reference contains documentation for a programming
 *  interface that you can use to manage Amazon QuickSight.
 */

/*!
 * \brief Constructs a QuickSightClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
QuickSightClient::QuickSightClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QuickSightClientPrivate(this), parent)
{
    Q_D(QuickSightClient);
    d->apiVersion = QStringLiteral("2018-04-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("quicksight");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon QuickSight");
    d->serviceName = QStringLiteral("quicksight");
}

/*!
 * \overload QuickSightClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
QuickSightClient::QuickSightClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new QuickSightClientPrivate(this), parent)
{
    Q_D(QuickSightClient);
    d->apiVersion = QStringLiteral("2018-04-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("quicksight");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon QuickSight");
    d->serviceName = QStringLiteral("quicksight");
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon QuickSight
 *
 * group>
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The response is a group
 *
 * object>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight create-group --aws-account-id=111122223333 --namespace=default --group-name="Sales-Management"
 * --description="Sales Management - Forecasting" </code>
 */
CreateGroupResponse * QuickSightClient::createGroup(const CreateGroupRequest &request)
{
    return qobject_cast<CreateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * CreateGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds an Amazon QuickSight user to an Amazon QuickSight group.
 *
 * </p
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The condition resource is the user
 *
 * name>
 *
 * The condition key is
 *
 * <code>quicksight:UserName</code>>
 *
 * The response is the group member
 *
 * object>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight create-group-membership --aws-account-id=111122223333 --namespace=default --group-name=Sales
 * --member-name=Pat </code>
 */
CreateGroupMembershipResponse * QuickSightClient::createGroupMembership(const CreateGroupMembershipRequest &request)
{
    return qobject_cast<CreateGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user group from Amazon QuickSight.
 *
 * </p
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight delete-group -\-aws-account-id=111122223333 -\-namespace=default -\-group-name=Sales-Management
 * </code>
 */
DeleteGroupResponse * QuickSightClient::deleteGroup(const DeleteGroupRequest &request)
{
    return qobject_cast<DeleteGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteGroupMembershipResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a user from a group so that the user is no longer a member of the
 *
 * group>
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The condition resource is the user
 *
 * name>
 *
 * The condition key is
 *
 * <code>quicksight:UserName</code>>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight delete-group-membership --aws-account-id=111122223333 --namespace=default
 * --group-name=Sales-Management --member-name=Charlie </code>
 */
DeleteGroupMembershipResponse * QuickSightClient::deleteGroupMembership(const DeleteGroupMembershipRequest &request)
{
    return qobject_cast<DeleteGroupMembershipResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the Amazon QuickSight user that is associated with the identity of the AWS Identity and Access Management (IAM)
 * user or role that's making the call. The IAM user isn't deleted as a result of this call.
 *
 * </p
 *
 * The permission resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt; </i>
 *
 * </code>>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight delete-user --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
 */
DeleteUserResponse * QuickSightClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an Amazon QuickSight group's description and Amazon Resource Name (ARN).
 *
 * </p
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;relevant-aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The response is the group object.
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight describe-group -\-aws-account-id=11112222333 -\-namespace=default -\-group-name=Sales </code>
 */
DescribeGroupResponse * QuickSightClient::describeGroup(const DescribeGroupRequest &request)
{
    return qobject_cast<DescribeGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a user, given the user name.
 *
 * </p
 *
 * The permission resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i> </code>.
 *
 * </p
 *
 * The response is a user object that contains the user's Amazon Resource Name (ARN), AWS Identity and Access Management
 * (IAM) role, and email address.
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight describe-user --aws-account-id=111122223333 --namespace=default --user-name=Pat </code>
 */
DescribeUserResponse * QuickSightClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * GetDashboardEmbedUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a server-side embeddable URL and authorization code. Before this can work properly, first you need to
 * configure the dashboards and user permissions. For more information, see <a
 * href="https://docs.aws.amazon.com/en_us/quicksight/latest/user/embedding.html"> Embedding Amazon QuickSight
 *
 * Dashboards</a>>
 *
 * Currently, you can use <code>GetDashboardEmbedURL</code> only from the server, not from the user’s
 *
 * browser>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * Assume the role with permissions enabled for actions: <code>quickSight:RegisterUser</code> and
 * <code>quicksight:GetDashboardEmbedURL</code>. You can use assume-role, assume-role-with-web-identity, or
 * assume-role-with-saml.
 *
 * </p
 *
 * <code>aws sts assume-role --role-arn "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role"
 * --role-session-name embeddingsession</code>
 *
 * </p
 *
 * If the user does not exist in QuickSight, register the
 *
 * user>
 *
 * <code>aws quicksight register-user --aws-account-id 111122223333 --namespace default --identity-type IAM --iam-arn
 * "arn:aws:iam::111122223333:role/embedding_quicksight_dashboard_role" --user-role READER --session-name
 * "embeddingsession" --email user123@example.com --region us-east-1</code>
 *
 * </p
 *
 * Get the URL for the embedded
 *
 * dashboar>
 *
 * <code>aws quicksight get-dashboard-embed-url --aws-account-id 111122223333 --dashboard-id
 * 1a1ac2b2-3fc3-4b44-5e5d-c6db6778df89 --identity-type IAM</code>
 */
GetDashboardEmbedUrlResponse * QuickSightClient::getDashboardEmbedUrl(const GetDashboardEmbedUrlRequest &request)
{
    return qobject_cast<GetDashboardEmbedUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListGroupMembershipsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists member users in a
 *
 * group>
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The response is a list of group member
 *
 * objects>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight list-group-memberships -\-aws-account-id=111122223333 -\-namespace=default </code>
 */
ListGroupMembershipsResponse * QuickSightClient::listGroupMemberships(const ListGroupMembershipsRequest &request)
{
    return qobject_cast<ListGroupMembershipsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all user groups in Amazon QuickSight.
 *
 * </p
 *
 * The permissions resource is
 *
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/*</code>>
 *
 * The response is a list of group objects.
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight list-groups -\-aws-account-id=111122223333 -\-namespace=default </code>
 */
ListGroupsResponse * QuickSightClient::listGroups(const ListGroupsRequest &request)
{
    return qobject_cast<ListGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListUserGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the Amazon QuickSight groups that an Amazon QuickSight user is a member
 *
 * of>
 *
 * The permission resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i> </code>.
 *
 * </p
 *
 * The response is a one or more group objects.
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight list-user-groups -\-user-name=Pat -\-aws-account-id=111122223333 -\-namespace=default
 * -\-region=us-east-1 </code>
 */
ListUserGroupsResponse * QuickSightClient::listUserGroups(const ListUserGroupsRequest &request)
{
    return qobject_cast<ListUserGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all of the Amazon QuickSight users belonging to this account.
 *
 * </p
 *
 * The permission resource is <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>*</i>
 *
 * </code>>
 *
 * The response is a list of user objects, containing each user's Amazon Resource Name (ARN), AWS Identity and Access
 * Management (IAM) role, and email address.
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight list-users --aws-account-id=111122223333 --namespace=default </code>
 */
ListUsersResponse * QuickSightClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * RegisterUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an Amazon QuickSight user, whose identity is associated with the AWS Identity and Access Management (IAM)
 * identity or role specified in the request.
 *
 * </p
 *
 * The permission resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i>
 *
 * </code>>
 *
 * The condition resource is the Amazon Resource Name (ARN) for the IAM user or role, and the session name.
 *
 * </p
 *
 * The condition keys are <code>quicksight:IamArn</code> and <code>quicksight:SessionName</code>.
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight register-user -\-aws-account-id=111122223333 -\-namespace=default -\-email=pat@example.com
 * -\-identity-type=IAM -\-user-role=AUTHOR -\-iam-arn=arn:aws:iam::111122223333:user/Pat </code>
 */
RegisterUserResponse * QuickSightClient::registerUser(const RegisterUserRequest &request)
{
    return qobject_cast<RegisterUserResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes a group description.
 *
 * </p
 *
 * The permissions resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:group/default/<i>&lt;group-name&gt;</i>
 *
 * </code>>
 *
 * The response is a group
 *
 * object>
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight update-group --aws-account-id=111122223333 --namespace=default --group-name=Sales
 * --description="Sales BI Dashboards" </code>
 */
UpdateGroupResponse * QuickSightClient::updateGroup(const UpdateGroupRequest &request)
{
    return qobject_cast<UpdateGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the QuickSightClient service, and returns a pointer to an
 * UpdateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an Amazon QuickSight
 *
 * user>
 *
 * The permission resource is
 * <code>arn:aws:quicksight:us-east-1:<i>&lt;aws-account-id&gt;</i>:user/default/<i>&lt;user-name&gt;</i> </code>.
 *
 * </p
 *
 * The response is a user object that contains the user's Amazon QuickSight user name, email address, active or inactive
 * status in Amazon QuickSight, Amazon QuickSight role, and Amazon Resource Name (ARN).
 *
 * </p
 *
 * <b>CLI Sample:</b>
 *
 * </p
 *
 * <code>aws quicksight update-user --user-name=Pat --role=ADMIN --email=new_address@amazon.com
 * --aws-account-id=111122223333 --namespace=default --region=us-east-1 </code>
 */
UpdateUserResponse * QuickSightClient::updateUser(const UpdateUserRequest &request)
{
    return qobject_cast<UpdateUserResponse *>(send(request));
}

/*!
 * \class QtAws::QuickSight::QuickSightClientPrivate
 * \brief The QuickSightClientPrivate class provides private implementation for QuickSightClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsQuickSight
 */

/*!
 * Constructs a QuickSightClientPrivate object with public implementation \a q.
 */
QuickSightClientPrivate::QuickSightClientPrivate(QuickSightClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace QuickSight
} // namespace QtAws
