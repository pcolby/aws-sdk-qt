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

#include "alexaforbusinessclient.h"
#include "alexaforbusinessclient_p.h"

#include "core/awssignaturev4.h"
#include "approveskillrequest.h"
#include "approveskillresponse.h"
#include "associatecontactwithaddressbookrequest.h"
#include "associatecontactwithaddressbookresponse.h"
#include "associatedevicewithroomrequest.h"
#include "associatedevicewithroomresponse.h"
#include "associateskillgroupwithroomrequest.h"
#include "associateskillgroupwithroomresponse.h"
#include "associateskillwithskillgrouprequest.h"
#include "associateskillwithskillgroupresponse.h"
#include "associateskillwithusersrequest.h"
#include "associateskillwithusersresponse.h"
#include "createaddressbookrequest.h"
#include "createaddressbookresponse.h"
#include "createbusinessreportschedulerequest.h"
#include "createbusinessreportscheduleresponse.h"
#include "createconferenceproviderrequest.h"
#include "createconferenceproviderresponse.h"
#include "createcontactrequest.h"
#include "createcontactresponse.h"
#include "createprofilerequest.h"
#include "createprofileresponse.h"
#include "createroomrequest.h"
#include "createroomresponse.h"
#include "createskillgrouprequest.h"
#include "createskillgroupresponse.h"
#include "createuserrequest.h"
#include "createuserresponse.h"
#include "deleteaddressbookrequest.h"
#include "deleteaddressbookresponse.h"
#include "deletebusinessreportschedulerequest.h"
#include "deletebusinessreportscheduleresponse.h"
#include "deleteconferenceproviderrequest.h"
#include "deleteconferenceproviderresponse.h"
#include "deletecontactrequest.h"
#include "deletecontactresponse.h"
#include "deletedevicerequest.h"
#include "deletedeviceresponse.h"
#include "deleteprofilerequest.h"
#include "deleteprofileresponse.h"
#include "deleteroomrequest.h"
#include "deleteroomresponse.h"
#include "deleteroomskillparameterrequest.h"
#include "deleteroomskillparameterresponse.h"
#include "deleteskillauthorizationrequest.h"
#include "deleteskillauthorizationresponse.h"
#include "deleteskillgrouprequest.h"
#include "deleteskillgroupresponse.h"
#include "deleteuserrequest.h"
#include "deleteuserresponse.h"
#include "disassociatecontactfromaddressbookrequest.h"
#include "disassociatecontactfromaddressbookresponse.h"
#include "disassociatedevicefromroomrequest.h"
#include "disassociatedevicefromroomresponse.h"
#include "disassociateskillfromskillgrouprequest.h"
#include "disassociateskillfromskillgroupresponse.h"
#include "disassociateskillfromusersrequest.h"
#include "disassociateskillfromusersresponse.h"
#include "disassociateskillgroupfromroomrequest.h"
#include "disassociateskillgroupfromroomresponse.h"
#include "forgetsmarthomeappliancesrequest.h"
#include "forgetsmarthomeappliancesresponse.h"
#include "getaddressbookrequest.h"
#include "getaddressbookresponse.h"
#include "getconferencepreferencerequest.h"
#include "getconferencepreferenceresponse.h"
#include "getconferenceproviderrequest.h"
#include "getconferenceproviderresponse.h"
#include "getcontactrequest.h"
#include "getcontactresponse.h"
#include "getdevicerequest.h"
#include "getdeviceresponse.h"
#include "getprofilerequest.h"
#include "getprofileresponse.h"
#include "getroomrequest.h"
#include "getroomresponse.h"
#include "getroomskillparameterrequest.h"
#include "getroomskillparameterresponse.h"
#include "getskillgrouprequest.h"
#include "getskillgroupresponse.h"
#include "listbusinessreportschedulesrequest.h"
#include "listbusinessreportschedulesresponse.h"
#include "listconferenceprovidersrequest.h"
#include "listconferenceprovidersresponse.h"
#include "listdeviceeventsrequest.h"
#include "listdeviceeventsresponse.h"
#include "listskillsrequest.h"
#include "listskillsresponse.h"
#include "listskillsstorecategoriesrequest.h"
#include "listskillsstorecategoriesresponse.h"
#include "listskillsstoreskillsbycategoryrequest.h"
#include "listskillsstoreskillsbycategoryresponse.h"
#include "listsmarthomeappliancesrequest.h"
#include "listsmarthomeappliancesresponse.h"
#include "listtagsrequest.h"
#include "listtagsresponse.h"
#include "putconferencepreferencerequest.h"
#include "putconferencepreferenceresponse.h"
#include "putroomskillparameterrequest.h"
#include "putroomskillparameterresponse.h"
#include "putskillauthorizationrequest.h"
#include "putskillauthorizationresponse.h"
#include "registeravsdevicerequest.h"
#include "registeravsdeviceresponse.h"
#include "rejectskillrequest.h"
#include "rejectskillresponse.h"
#include "resolveroomrequest.h"
#include "resolveroomresponse.h"
#include "revokeinvitationrequest.h"
#include "revokeinvitationresponse.h"
#include "searchaddressbooksrequest.h"
#include "searchaddressbooksresponse.h"
#include "searchcontactsrequest.h"
#include "searchcontactsresponse.h"
#include "searchdevicesrequest.h"
#include "searchdevicesresponse.h"
#include "searchprofilesrequest.h"
#include "searchprofilesresponse.h"
#include "searchroomsrequest.h"
#include "searchroomsresponse.h"
#include "searchskillgroupsrequest.h"
#include "searchskillgroupsresponse.h"
#include "searchusersrequest.h"
#include "searchusersresponse.h"
#include "sendinvitationrequest.h"
#include "sendinvitationresponse.h"
#include "startdevicesyncrequest.h"
#include "startdevicesyncresponse.h"
#include "startsmarthomeappliancediscoveryrequest.h"
#include "startsmarthomeappliancediscoveryresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateaddressbookrequest.h"
#include "updateaddressbookresponse.h"
#include "updatebusinessreportschedulerequest.h"
#include "updatebusinessreportscheduleresponse.h"
#include "updateconferenceproviderrequest.h"
#include "updateconferenceproviderresponse.h"
#include "updatecontactrequest.h"
#include "updatecontactresponse.h"
#include "updatedevicerequest.h"
#include "updatedeviceresponse.h"
#include "updateprofilerequest.h"
#include "updateprofileresponse.h"
#include "updateroomrequest.h"
#include "updateroomresponse.h"
#include "updateskillgrouprequest.h"
#include "updateskillgroupresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AlexaForBusiness
 * \brief Contains classess for accessing Alexa For Business.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::AlexaForBusinessClient
 * \brief The AlexaForBusinessClient class provides access to the Alexa For Business service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 */

/*!
 * \brief Constructs a AlexaForBusinessClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AlexaForBusinessClient::AlexaForBusinessClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AlexaForBusinessClientPrivate(this), parent)
{
    Q_D(AlexaForBusinessClient);
    d->apiVersion = QStringLiteral("2017-11-09");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("a4b");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Alexa For Business");
    d->serviceName = QStringLiteral("a4b");
}

/*!
 * \overload AlexaForBusinessClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AlexaForBusinessClient::AlexaForBusinessClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AlexaForBusinessClientPrivate(this), parent)
{
    Q_D(AlexaForBusinessClient);
    d->apiVersion = QStringLiteral("2017-11-09");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("a4b");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Alexa For Business");
    d->serviceName = QStringLiteral("a4b");
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ApproveSkillResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a skill with the organization under the customer's AWS account. If a skill is private, the user implicitly
 * accepts access to this skill during
 */
ApproveSkillResponse * AlexaForBusinessClient::approveSkill(const ApproveSkillRequest &request)
{
    return qobject_cast<ApproveSkillResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * AssociateContactWithAddressBookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a contact with a given address
 */
AssociateContactWithAddressBookResponse * AlexaForBusinessClient::associateContactWithAddressBook(const AssociateContactWithAddressBookRequest &request)
{
    return qobject_cast<AssociateContactWithAddressBookResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * AssociateDeviceWithRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a device with a given room. This applies all the settings from the room profile to the device, and all the
 * skills in any skill groups added to that room. This operation requires the device to be online, or else a manual sync is
 * required.
 */
AssociateDeviceWithRoomResponse * AlexaForBusinessClient::associateDeviceWithRoom(const AssociateDeviceWithRoomRequest &request)
{
    return qobject_cast<AssociateDeviceWithRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * AssociateSkillGroupWithRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a skill group with a given room. This enables all skills in the associated skill group on all devices in the
 */
AssociateSkillGroupWithRoomResponse * AlexaForBusinessClient::associateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest &request)
{
    return qobject_cast<AssociateSkillGroupWithRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * AssociateSkillWithSkillGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Associates a skill with a skill
 */
AssociateSkillWithSkillGroupResponse * AlexaForBusinessClient::associateSkillWithSkillGroup(const AssociateSkillWithSkillGroupRequest &request)
{
    return qobject_cast<AssociateSkillWithSkillGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * AssociateSkillWithUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Makes a private skill available for enrolled users to enable on their
 */
AssociateSkillWithUsersResponse * AlexaForBusinessClient::associateSkillWithUsers(const AssociateSkillWithUsersRequest &request)
{
    return qobject_cast<AssociateSkillWithUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateAddressBookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an address book with the specified
 */
CreateAddressBookResponse * AlexaForBusinessClient::createAddressBook(const CreateAddressBookRequest &request)
{
    return qobject_cast<CreateAddressBookResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateBusinessReportScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a recurring schedule for usage reports to deliver to the specified S3 location with a specified daily or weekly
 */
CreateBusinessReportScheduleResponse * AlexaForBusinessClient::createBusinessReportSchedule(const CreateBusinessReportScheduleRequest &request)
{
    return qobject_cast<CreateBusinessReportScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateConferenceProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a new conference provider under the user's AWS
 */
CreateConferenceProviderResponse * AlexaForBusinessClient::createConferenceProvider(const CreateConferenceProviderRequest &request)
{
    return qobject_cast<CreateConferenceProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a contact with the specified
 */
CreateContactResponse * AlexaForBusinessClient::createContact(const CreateContactRequest &request)
{
    return qobject_cast<CreateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new room profile with the specified
 */
CreateProfileResponse * AlexaForBusinessClient::createProfile(const CreateProfileRequest &request)
{
    return qobject_cast<CreateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a room with the specified
 */
CreateRoomResponse * AlexaForBusinessClient::createRoom(const CreateRoomRequest &request)
{
    return qobject_cast<CreateRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateSkillGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a skill group with a specified name and
 */
CreateSkillGroupResponse * AlexaForBusinessClient::createSkillGroup(const CreateSkillGroupRequest &request)
{
    return qobject_cast<CreateSkillGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * CreateUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a
 */
CreateUserResponse * AlexaForBusinessClient::createUser(const CreateUserRequest &request)
{
    return qobject_cast<CreateUserResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteAddressBookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an address book by the address book
 */
DeleteAddressBookResponse * AlexaForBusinessClient::deleteAddressBook(const DeleteAddressBookRequest &request)
{
    return qobject_cast<DeleteAddressBookResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteBusinessReportScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the recurring report delivery schedule with the specified schedule
 */
DeleteBusinessReportScheduleResponse * AlexaForBusinessClient::deleteBusinessReportSchedule(const DeleteBusinessReportScheduleRequest &request)
{
    return qobject_cast<DeleteBusinessReportScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteConferenceProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a conference
 */
DeleteConferenceProviderResponse * AlexaForBusinessClient::deleteConferenceProvider(const DeleteConferenceProviderRequest &request)
{
    return qobject_cast<DeleteConferenceProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a contact by the contact
 */
DeleteContactResponse * AlexaForBusinessClient::deleteContact(const DeleteContactRequest &request)
{
    return qobject_cast<DeleteContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a device from Alexa For
 */
DeleteDeviceResponse * AlexaForBusinessClient::deleteDevice(const DeleteDeviceRequest &request)
{
    return qobject_cast<DeleteDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a room profile by the profile
 */
DeleteProfileResponse * AlexaForBusinessClient::deleteProfile(const DeleteProfileRequest &request)
{
    return qobject_cast<DeleteProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a room by the room
 */
DeleteRoomResponse * AlexaForBusinessClient::deleteRoom(const DeleteRoomRequest &request)
{
    return qobject_cast<DeleteRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteRoomSkillParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes room skill parameter details by room, skill, and parameter key
 */
DeleteRoomSkillParameterResponse * AlexaForBusinessClient::deleteRoomSkillParameter(const DeleteRoomSkillParameterRequest &request)
{
    return qobject_cast<DeleteRoomSkillParameterResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteSkillAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unlinks a third-party account from a
 */
DeleteSkillAuthorizationResponse * AlexaForBusinessClient::deleteSkillAuthorization(const DeleteSkillAuthorizationRequest &request)
{
    return qobject_cast<DeleteSkillAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteSkillGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a skill group by skill group
 */
DeleteSkillGroupResponse * AlexaForBusinessClient::deleteSkillGroup(const DeleteSkillGroupRequest &request)
{
    return qobject_cast<DeleteSkillGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DeleteUserResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specified user by user ARN and enrollment
 */
DeleteUserResponse * AlexaForBusinessClient::deleteUser(const DeleteUserRequest &request)
{
    return qobject_cast<DeleteUserResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DisassociateContactFromAddressBookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a contact from a given address
 */
DisassociateContactFromAddressBookResponse * AlexaForBusinessClient::disassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest &request)
{
    return qobject_cast<DisassociateContactFromAddressBookResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DisassociateDeviceFromRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a device from its current room. The device continues to be connected to the Wi-Fi network and is still
 * registered to the account. The device settings and skills are removed from the
 */
DisassociateDeviceFromRoomResponse * AlexaForBusinessClient::disassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest &request)
{
    return qobject_cast<DisassociateDeviceFromRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DisassociateSkillFromSkillGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a skill from a skill
 */
DisassociateSkillFromSkillGroupResponse * AlexaForBusinessClient::disassociateSkillFromSkillGroup(const DisassociateSkillFromSkillGroupRequest &request)
{
    return qobject_cast<DisassociateSkillFromSkillGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DisassociateSkillFromUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Makes a private skill unavailable for enrolled users and prevents them from enabling it on their
 */
DisassociateSkillFromUsersResponse * AlexaForBusinessClient::disassociateSkillFromUsers(const DisassociateSkillFromUsersRequest &request)
{
    return qobject_cast<DisassociateSkillFromUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * DisassociateSkillGroupFromRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a skill group from a specified room. This disables all skills in the skill group on all devices in the
 */
DisassociateSkillGroupFromRoomResponse * AlexaForBusinessClient::disassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest &request)
{
    return qobject_cast<DisassociateSkillGroupFromRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ForgetSmartHomeAppliancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Forgets smart home appliances associated to a
 */
ForgetSmartHomeAppliancesResponse * AlexaForBusinessClient::forgetSmartHomeAppliances(const ForgetSmartHomeAppliancesRequest &request)
{
    return qobject_cast<ForgetSmartHomeAppliancesResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetAddressBookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets address the book details by the address book
 */
GetAddressBookResponse * AlexaForBusinessClient::getAddressBook(const GetAddressBookRequest &request)
{
    return qobject_cast<GetAddressBookResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetConferencePreferenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the existing conference
 */
GetConferencePreferenceResponse * AlexaForBusinessClient::getConferencePreference(const GetConferencePreferenceRequest &request)
{
    return qobject_cast<GetConferencePreferenceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetConferenceProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details about a specific conference
 */
GetConferenceProviderResponse * AlexaForBusinessClient::getConferenceProvider(const GetConferenceProviderRequest &request)
{
    return qobject_cast<GetConferenceProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the contact details by the contact
 */
GetContactResponse * AlexaForBusinessClient::getContact(const GetContactRequest &request)
{
    return qobject_cast<GetContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of a device by device
 */
GetDeviceResponse * AlexaForBusinessClient::getDevice(const GetDeviceRequest &request)
{
    return qobject_cast<GetDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of a room profile by profile
 */
GetProfileResponse * AlexaForBusinessClient::getProfile(const GetProfileRequest &request)
{
    return qobject_cast<GetProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets room details by room
 */
GetRoomResponse * AlexaForBusinessClient::getRoom(const GetRoomRequest &request)
{
    return qobject_cast<GetRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetRoomSkillParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets room skill parameter details by room, skill, and parameter key
 */
GetRoomSkillParameterResponse * AlexaForBusinessClient::getRoomSkillParameter(const GetRoomSkillParameterRequest &request)
{
    return qobject_cast<GetRoomSkillParameterResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * GetSkillGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets skill group details by skill group
 */
GetSkillGroupResponse * AlexaForBusinessClient::getSkillGroup(const GetSkillGroupRequest &request)
{
    return qobject_cast<GetSkillGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListBusinessReportSchedulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the details of the schedules that a user
 */
ListBusinessReportSchedulesResponse * AlexaForBusinessClient::listBusinessReportSchedules(const ListBusinessReportSchedulesRequest &request)
{
    return qobject_cast<ListBusinessReportSchedulesResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListConferenceProvidersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists conference providers under a specific AWS
 */
ListConferenceProvidersResponse * AlexaForBusinessClient::listConferenceProviders(const ListConferenceProvidersRequest &request)
{
    return qobject_cast<ListConferenceProvidersResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListDeviceEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the device event history, including device connection status, for up to 30
 */
ListDeviceEventsResponse * AlexaForBusinessClient::listDeviceEvents(const ListDeviceEventsRequest &request)
{
    return qobject_cast<ListDeviceEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListSkillsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all enabled skills in a specific skill
 */
ListSkillsResponse * AlexaForBusinessClient::listSkills(const ListSkillsRequest &request)
{
    return qobject_cast<ListSkillsResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListSkillsStoreCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all categories in the Alexa skill
 */
ListSkillsStoreCategoriesResponse * AlexaForBusinessClient::listSkillsStoreCategories(const ListSkillsStoreCategoriesRequest &request)
{
    return qobject_cast<ListSkillsStoreCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListSkillsStoreSkillsByCategoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all skills in the Alexa skill store by
 */
ListSkillsStoreSkillsByCategoryResponse * AlexaForBusinessClient::listSkillsStoreSkillsByCategory(const ListSkillsStoreSkillsByCategoryRequest &request)
{
    return qobject_cast<ListSkillsStoreSkillsByCategoryResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListSmartHomeAppliancesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the smart home appliances associated with a
 */
ListSmartHomeAppliancesResponse * AlexaForBusinessClient::listSmartHomeAppliances(const ListSmartHomeAppliancesRequest &request)
{
    return qobject_cast<ListSmartHomeAppliancesResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ListTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all tags for the specified
 */
ListTagsResponse * AlexaForBusinessClient::listTags(const ListTagsRequest &request)
{
    return qobject_cast<ListTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * PutConferencePreferenceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the conference preferences on a specific conference provider at the account
 */
PutConferencePreferenceResponse * AlexaForBusinessClient::putConferencePreference(const PutConferencePreferenceRequest &request)
{
    return qobject_cast<PutConferencePreferenceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * PutRoomSkillParameterResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates room skill parameter details by room, skill, and parameter key ID. Not all skills have a room skill
 */
PutRoomSkillParameterResponse * AlexaForBusinessClient::putRoomSkillParameter(const PutRoomSkillParameterRequest &request)
{
    return qobject_cast<PutRoomSkillParameterResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * PutSkillAuthorizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Links a user's account to a third-party skill provider. If this API operation is called by an assumed IAM role, the
 * skill being linked must be a private skill. Also, the skill must be owned by the AWS account that assumed the IAM
 */
PutSkillAuthorizationResponse * AlexaForBusinessClient::putSkillAuthorization(const PutSkillAuthorizationRequest &request)
{
    return qobject_cast<PutSkillAuthorizationResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * RegisterAVSDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers an Alexa-enabled device built by an Original Equipment Manufacturer (OEM) using Alexa Voice Service
 */
RegisterAVSDeviceResponse * AlexaForBusinessClient::registerAVSDevice(const RegisterAVSDeviceRequest &request)
{
    return qobject_cast<RegisterAVSDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * RejectSkillResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Disassociates a skill from the organization under a user's AWS account. If the skill is a private skill, it moves to an
 * AcceptStatus of PENDING. Any private or public skill that is rejected can be added later by calling the ApproveSkill
 * API.
 */
RejectSkillResponse * AlexaForBusinessClient::rejectSkill(const RejectSkillRequest &request)
{
    return qobject_cast<RejectSkillResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * ResolveRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Determines the details for the room from which a skill request was invoked. This operation is used by skill
 */
ResolveRoomResponse * AlexaForBusinessClient::resolveRoom(const ResolveRoomRequest &request)
{
    return qobject_cast<ResolveRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * RevokeInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Revokes an invitation and invalidates the enrollment
 */
RevokeInvitationResponse * AlexaForBusinessClient::revokeInvitation(const RevokeInvitationRequest &request)
{
    return qobject_cast<RevokeInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchAddressBooksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches address books and lists the ones that meet a set of filter and sort
 */
SearchAddressBooksResponse * AlexaForBusinessClient::searchAddressBooks(const SearchAddressBooksRequest &request)
{
    return qobject_cast<SearchAddressBooksResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchContactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches contacts and lists the ones that meet a set of filter and sort
 */
SearchContactsResponse * AlexaForBusinessClient::searchContacts(const SearchContactsRequest &request)
{
    return qobject_cast<SearchContactsResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchDevicesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches devices and lists the ones that meet a set of filter
 */
SearchDevicesResponse * AlexaForBusinessClient::searchDevices(const SearchDevicesRequest &request)
{
    return qobject_cast<SearchDevicesResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchProfilesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches room profiles and lists the ones that meet a set of filter
 */
SearchProfilesResponse * AlexaForBusinessClient::searchProfiles(const SearchProfilesRequest &request)
{
    return qobject_cast<SearchProfilesResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchRoomsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches rooms and lists the ones that meet a set of filter and sort
 */
SearchRoomsResponse * AlexaForBusinessClient::searchRooms(const SearchRoomsRequest &request)
{
    return qobject_cast<SearchRoomsResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchSkillGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches skill groups and lists the ones that meet a set of filter and sort
 */
SearchSkillGroupsResponse * AlexaForBusinessClient::searchSkillGroups(const SearchSkillGroupsRequest &request)
{
    return qobject_cast<SearchSkillGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SearchUsersResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Searches users and lists the ones that meet a set of filter and sort
 */
SearchUsersResponse * AlexaForBusinessClient::searchUsers(const SearchUsersRequest &request)
{
    return qobject_cast<SearchUsersResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * SendInvitationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sends an enrollment invitation email with a URL to a user. The URL is valid for 72 hours or until you call this
 * operation again, whichever comes first.
 */
SendInvitationResponse * AlexaForBusinessClient::sendInvitation(const SendInvitationRequest &request)
{
    return qobject_cast<SendInvitationResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * StartDeviceSyncResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets a device and its account to the known default settings, by clearing all information and settings set by previous
 */
StartDeviceSyncResponse * AlexaForBusinessClient::startDeviceSync(const StartDeviceSyncRequest &request)
{
    return qobject_cast<StartDeviceSyncResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * StartSmartHomeApplianceDiscoveryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates the discovery of any smart home appliances associated with the
 */
StartSmartHomeApplianceDiscoveryResponse * AlexaForBusinessClient::startSmartHomeApplianceDiscovery(const StartSmartHomeApplianceDiscoveryRequest &request)
{
    return qobject_cast<StartSmartHomeApplianceDiscoveryResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to a specified
 */
TagResourceResponse * AlexaForBusinessClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from a specified
 */
UntagResourceResponse * AlexaForBusinessClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateAddressBookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates address book details by the address book
 */
UpdateAddressBookResponse * AlexaForBusinessClient::updateAddressBook(const UpdateAddressBookRequest &request)
{
    return qobject_cast<UpdateAddressBookResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateBusinessReportScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration of the report delivery schedule with the specified schedule
 */
UpdateBusinessReportScheduleResponse * AlexaForBusinessClient::updateBusinessReportSchedule(const UpdateBusinessReportScheduleRequest &request)
{
    return qobject_cast<UpdateBusinessReportScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateConferenceProviderResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing conference provider's
 */
UpdateConferenceProviderResponse * AlexaForBusinessClient::updateConferenceProvider(const UpdateConferenceProviderRequest &request)
{
    return qobject_cast<UpdateConferenceProviderResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateContactResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the contact details by the contact
 */
UpdateContactResponse * AlexaForBusinessClient::updateContact(const UpdateContactRequest &request)
{
    return qobject_cast<UpdateContactResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the device name by device
 */
UpdateDeviceResponse * AlexaForBusinessClient::updateDevice(const UpdateDeviceRequest &request)
{
    return qobject_cast<UpdateDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateProfileResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing room profile by room profile
 */
UpdateProfileResponse * AlexaForBusinessClient::updateProfile(const UpdateProfileRequest &request)
{
    return qobject_cast<UpdateProfileResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateRoomResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates room details by room
 */
UpdateRoomResponse * AlexaForBusinessClient::updateRoom(const UpdateRoomRequest &request)
{
    return qobject_cast<UpdateRoomResponse *>(send(request));
}

/*!
 * Sends \a request to the AlexaForBusinessClient service, and returns a pointer to an
 * UpdateSkillGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates skill group details by skill group
 */
UpdateSkillGroupResponse * AlexaForBusinessClient::updateSkillGroup(const UpdateSkillGroupRequest &request)
{
    return qobject_cast<UpdateSkillGroupResponse *>(send(request));
}

/*!
 * \class QtAws::AlexaForBusiness::AlexaForBusinessClientPrivate
 * \brief The AlexaForBusinessClientPrivate class provides private implementation for AlexaForBusinessClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a AlexaForBusinessClientPrivate object with public implementation \a q.
 */
AlexaForBusinessClientPrivate::AlexaForBusinessClientPrivate(AlexaForBusinessClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AlexaForBusiness
} // namespace QtAws
