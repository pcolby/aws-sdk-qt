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

#include "connectclient.h"
#include "connectclient_p.h"

#include "core/awssignaturev4.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "describeuserrequest.h"
#include "describeuserresponse.h"
#include "describeuserhierarchygrouprequest.h"
#include "describeuserhierarchygroupresponse.h"
#include "describeuserhierarchystructurerequest.h"
#include "describeuserhierarchystructureresponse.h"
#include "getcontactattributesrequest.h"
#include "getcontactattributesresponse.h"
#include "getcurrentmetricdatarequest.h"
#include "getcurrentmetricdataresponse.h"
#include "getfederationtokenrequest.h"
#include "getfederationtokenresponse.h"
#include "getmetricdatarequest.h"
#include "getmetricdataresponse.h"
#include "listroutingprofilesrequest.h"
#include "listroutingprofilesresponse.h"
#include "listsecurityprofilesrequest.h"
#include "listsecurityprofilesresponse.h"
#include "listuserhierarchygroupsrequest.h"
#include "listuserhierarchygroupsresponse.h"
#include "listusersrequest.h"
#include "listusersresponse.h"
#include "startoutboundvoicecontactrequest.h"
#include "startoutboundvoicecontactresponse.h"
#include "stopcontactrequest.h"
#include "stopcontactresponse.h"
#include "updatecontactattributesrequest.h"
#include "updatecontactattributesresponse.h"
#include "updateuserhierarchyrequest.h"
#include "updateuserhierarchyresponse.h"
#include "updateuseridentityinforequest.h"
#include "updateuseridentityinforesponse.h"
#include "updateuserphoneconfigrequest.h"
#include "updateuserphoneconfigresponse.h"
#include "updateuserroutingprofilerequest.h"
#include "updateuserroutingprofileresponse.h"
#include "updateusersecurityprofilesrequest.h"
#include "updateusersecurityprofilesresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Connect
 * \brief Contains classess for accessing Amazon Connect Service.
 *
 * \inmodule QtAwsConnect
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Connect {

/*!
 * \class QtAws::Connect::ConnectClient
 * \brief The ConnectClient class provides access to the Amazon Connect Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnect
 *
 *  The Amazon Connect API Reference provides descriptions, syntax, and usage examples for each of the Amazon Connect
 *  actions, data types, parameters, and errors. Amazon Connect is a cloud-based contact center solution that makes it easy
 *  to set up and manage a customer contact center and provide reliable customer engagement at any
 * 
 *  scale>
 * 
 *  Throttling limits for the Amazon Connect API
 * 
 *  operations>
 * 
 *  For the <code>GetMetricData</code> and <code>GetCurrentMetricData</code> operations, a RateLimit of 5 per second, and a
 *  BurstLimit of 8 per
 * 
 *  second>
 * 
 *  For all other operations, a RateLimit of 2 per second, and a BurstLimit of 5 per
 * 
 *  second>
 * 
 *  You can request an increase to the throttling limits by submitting a <a
 *  href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase">Amazon Connect service
 *  limits increase form</a>. You must be signed in to your AWS account to access the
 */

/*!
 * \brief Constructs a ConnectClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
ConnectClient::ConnectClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectClientPrivate(this), parent)
{
    Q_D(ConnectClient);
    d->apiVersion = QStringLiteral("2017-08-08");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("connect");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Connect Service");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * \overload ConnectClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
ConnectClient::ConnectClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new ConnectClientPrivate(this), parent)
{
    Q_D(ConnectClient);
    d->apiVersion = QStringLiteral("2017-08-08");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("connect");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Connect Service");
    d->serviceName = QStringLiteral("connect");
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new user account in your Amazon Connect
 */
CreateUserResponse * ConnectClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a user account from Amazon
 */
DeleteUserResponse * ConnectClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>User</code> object that contains information about the user account specified by the
 */
DescribeUserResponse * ConnectClient::describeUser(const DescribeUserRequest &request)
{
    return qobject_cast<DescribeUserResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeUserHierarchyGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>HierarchyGroup</code> object that includes information about a hierarchy group in your
 */
DescribeUserHierarchyGroupResponse * ConnectClient::describeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest &request)
{
    return qobject_cast<DescribeUserHierarchyGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * DescribeUserHierarchyStructureResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>HiearchyGroupStructure</code> object, which contains data about the levels in the agent
 */
DescribeUserHierarchyStructureResponse * ConnectClient::describeUserHierarchyStructure(const DescribeUserHierarchyStructureRequest &request)
{
    return qobject_cast<DescribeUserHierarchyStructureResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetContactAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the contact attributes associated with a
 */
GetContactAttributesResponse * ConnectClient::getContactAttributes(const GetContactAttributesRequest &request)
{
    return qobject_cast<GetContactAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetCurrentMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetCurrentMetricData</code> operation retrieves current metric data from your Amazon Connect
 *
 * instance>
 *
 * If you are using an IAM account, it must have permission to the <code>connect:GetCurrentMetricData</code>
 */
GetCurrentMetricDataResponse * ConnectClient::getCurrentMetricData(const GetCurrentMetricDataRequest &request)
{
    return qobject_cast<GetCurrentMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetFederationTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a token for
 */
GetFederationTokenResponse * ConnectClient::getFederationToken(const GetFederationTokenRequest &request)
{
    return qobject_cast<GetFederationTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * GetMetricDataResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>GetMetricData</code> operation retrieves historical metrics data from your Amazon Connect
 *
 * instance>
 *
 * If you are using an IAM account, it must have permission to the <code>connect:GetMetricData</code>
 */
GetMetricDataResponse * ConnectClient::getMetricData(const GetMetricDataRequest &request)
{
    return qobject_cast<GetMetricDataResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListRoutingProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of <code>RoutingProfileSummary</code> objects that includes information about the routing profiles in
 * your
 */
ListRoutingProfilesResponse * ConnectClient::listRoutingProfiles(const ListRoutingProfilesRequest &request)
{
    return qobject_cast<ListRoutingProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of SecurityProfileSummary objects that contain information about the security profiles in your
 * instance, including the ARN, Id, and Name of the security
 */
ListSecurityProfilesResponse * ConnectClient::listSecurityProfiles(const ListSecurityProfilesRequest &request)
{
    return qobject_cast<ListSecurityProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListUserHierarchyGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>UserHierarchyGroupSummaryList</code>, which is an array of <code>HierarchyGroupSummary</code> objects
 * that contain information about the hierarchy groups in your
 */
ListUserHierarchyGroupsResponse * ConnectClient::listUserHierarchyGroups(const ListUserHierarchyGroupsRequest &request)
{
    return qobject_cast<ListUserHierarchyGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * ListUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a <code>UserSummaryList</code>, which is an array of <code>UserSummary</code>
 */
ListUsersResponse * ConnectClient::listUsers(const ListUsersRequest &request)
{
    return qobject_cast<ListUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StartOutboundVoiceContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>StartOutboundVoiceContact</code> operation initiates a contact flow to place an outbound call to a
 *
 * customer>
 *
 * If you are using an IAM account, it must have permission to the <code>connect:StartOutboundVoiceContact</code>
 *
 * action>
 *
 * There is a 60 second dialing timeout for this operation. If the call is not connected after 60 seconds, the call
 */
StartOutboundVoiceContactResponse * ConnectClient::startOutboundVoiceContact(const StartOutboundVoiceContactRequest &request)
{
    return qobject_cast<StartOutboundVoiceContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * StopContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Ends the contact initiated by the <code>StartOutboundVoiceContact</code>
 *
 * operation>
 *
 * If you are using an IAM account, it must have permission to the <code>connect:StopContact</code>
 */
StopContactResponse * ConnectClient::stopContact(const StopContactRequest &request)
{
    return qobject_cast<StopContactResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateContactAttributesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The <code>UpdateContactAttributes</code> operation lets you programmatically create new, or update existing, contact
 * attributes associated with a contact. You can use the operation to add or update attributes for both ongoing and
 * completed contacts. For example, you can update the customer's name or the reason the customer called while the call is
 * active, or add notes about steps that the agent took during the call that are displayed to the next agent that takes the
 * call. You can also use the <code>UpdateContactAttributes</code> operation to update attributes for a contact using data
 * from your CRM application and save the data with the contact in Amazon Connect. You could also flag calls for additional
 * analysis, such as legal review or identifying abusive
 *
 * callers>
 *
 * Contact attributes are available in Amazon Connect for 24 months, and are then
 *
 * deleted>
 *
 * <i>Important:</i>
 *
 * </p
 *
 * You cannot use the operation to update attributes for contacts that occurred prior to the release of the API, September
 * 12, 2018. You can update attributes only for contacts that started after the release of the API. If you attempt to
 * update attributes for a contact that occurred prior to the release of the API, a 400 error is returned. This applies
 * also to queued callbacks that were initiated prior to the release of the API but are still active in your
 */
UpdateContactAttributesResponse * ConnectClient::updateContactAttributes(const UpdateContactAttributesRequest &request)
{
    return qobject_cast<UpdateContactAttributesResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserHierarchyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the specified hierarchy group to the
 */
UpdateUserHierarchyResponse * ConnectClient::updateUserHierarchy(const UpdateUserHierarchyRequest &request)
{
    return qobject_cast<UpdateUserHierarchyResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserIdentityInfoResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the identity information for the specified user in a <code>UserIdentityInfo</code> object, including email,
 * first name, and last
 */
UpdateUserIdentityInfoResponse * ConnectClient::updateUserIdentityInfo(const UpdateUserIdentityInfoRequest &request)
{
    return qobject_cast<UpdateUserIdentityInfoResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserPhoneConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the phone configuration settings in the <code>UserPhoneConfig</code> object for the specified
 */
UpdateUserPhoneConfigResponse * ConnectClient::updateUserPhoneConfig(const UpdateUserPhoneConfigRequest &request)
{
    return qobject_cast<UpdateUserPhoneConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserRoutingProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Assigns the specified routing profile to a
 */
UpdateUserRoutingProfileResponse * ConnectClient::updateUserRoutingProfile(const UpdateUserRoutingProfileRequest &request)
{
    return qobject_cast<UpdateUserRoutingProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the ConnectClient service, and returns a pointer to an
 * UpdateUserSecurityProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the security profiles assigned to the
 */
UpdateUserSecurityProfilesResponse * ConnectClient::updateUserSecurityProfiles(const UpdateUserSecurityProfilesRequest &request)
{
    return qobject_cast<UpdateUserSecurityProfilesResponse *>(send(request));
}

/*!
 * \class QtAws::Connect::ConnectClientPrivate
 * \brief The ConnectClientPrivate class provides private implementation for ConnectClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsConnect
 */

/*!
 * Constructs a ConnectClientPrivate object with public implementation \a q.
 */
ConnectClientPrivate::ConnectClientPrivate(ConnectClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Connect
} // namespace QtAws
