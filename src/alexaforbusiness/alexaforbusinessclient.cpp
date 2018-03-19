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

#include "alexaforbusinessclient.h"
#include "alexaforbusinessclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  AlexaForBusinessClient
 *
 * @brief  Client for Alexa For Business
 *
 * Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 * need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 * skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 * for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 * context-aware voice experiences for your
 */

/**
 * @brief  Constructs a new AlexaForBusinessClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AlexaForBusinessClient::AlexaForBusinessClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AlexaForBusinessClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new AlexaForBusinessClient object.
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
AlexaForBusinessClient::AlexaForBusinessClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AlexaForBusinessClientPrivate(this), parent)
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

/// @todo override getEndpoint() to use a4b.

/**
 * Associates a device to a given room. This applies all the settings from the room profile to the device, and all the
 * skills in any skill groups added to that room. This operation requires the device to be online, or a manual sync is
 * required.
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateDeviceWithRoomResponse * AlexaForBusinessClient::associateDeviceWithRoom(const AssociateDeviceWithRoomRequest &request)
{

}

/**
 * Associates a skill group to a given room. This enables all skills in the associated skill group on all devices in the
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
AssociateSkillGroupWithRoomResponse * AlexaForBusinessClient::associateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest &request)
{

}

/**
 * Creates a new room profile with the specified
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProfileResponse * AlexaForBusinessClient::createProfile(const CreateProfileRequest &request)
{

}

/**
 * Creates a room with the specified
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateRoomResponse * AlexaForBusinessClient::createRoom(const CreateRoomRequest &request)
{

}

/**
 * Creates a skill group with a specified name and
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateSkillGroupResponse * AlexaForBusinessClient::createSkillGroup(const CreateSkillGroupRequest &request)
{

}

/**
 * Creates a
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateUserResponse * AlexaForBusinessClient::createUser(const CreateUserRequest &request)
{

}

/**
 * Deletes a room profile by the profile
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProfileResponse * AlexaForBusinessClient::deleteProfile(const DeleteProfileRequest &request)
{

}

/**
 * Deletes a room by the room
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRoomResponse * AlexaForBusinessClient::deleteRoom(const DeleteRoomRequest &request)
{

}

/**
 * Deletes room skill parameter details by room, skill, and parameter key
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteRoomSkillParameterResponse * AlexaForBusinessClient::deleteRoomSkillParameter(const DeleteRoomSkillParameterRequest &request)
{

}

/**
 * Deletes a skill group by skill group
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteSkillGroupResponse * AlexaForBusinessClient::deleteSkillGroup(const DeleteSkillGroupRequest &request)
{

}

/**
 * Deletes a specified user by user ARN and enrollment
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteUserResponse * AlexaForBusinessClient::deleteUser(const DeleteUserRequest &request)
{

}

/**
 * Disassociates a device from its current room. The device continues to be connected to the Wi-Fi network and is still
 * registered to the account. The device settings and skills are removed from the
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateDeviceFromRoomResponse * AlexaForBusinessClient::disassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest &request)
{

}

/**
 * Disassociates a skill group from a specified room. This disables all skills in the skill group on all devices in the
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DisassociateSkillGroupFromRoomResponse * AlexaForBusinessClient::disassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest &request)
{

}

/**
 * Gets the details of a device by device
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDeviceResponse * AlexaForBusinessClient::getDevice(const GetDeviceRequest &request)
{

}

/**
 * Gets the details of a room profile by profile
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetProfileResponse * AlexaForBusinessClient::getProfile(const GetProfileRequest &request)
{

}

/**
 * Gets room details by room
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRoomResponse * AlexaForBusinessClient::getRoom(const GetRoomRequest &request)
{

}

/**
 * Gets room skill parameter details by room, skill, and parameter key
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetRoomSkillParameterResponse * AlexaForBusinessClient::getRoomSkillParameter(const GetRoomSkillParameterRequest &request)
{

}

/**
 * Gets skill group details by skill group
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetSkillGroupResponse * AlexaForBusinessClient::getSkillGroup(const GetSkillGroupRequest &request)
{

}

/**
 * Lists all enabled skills in a specific skill
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListSkillsResponse * AlexaForBusinessClient::listSkills(const ListSkillsRequest &request)
{

}

/**
 * Lists all tags for a specific
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListTagsResponse * AlexaForBusinessClient::listTags(const ListTagsRequest &request)
{

}

/**
 * Updates room skill parameter details by room, skill, and parameter key ID. Not all skills have a room skill
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PutRoomSkillParameterResponse * AlexaForBusinessClient::putRoomSkillParameter(const PutRoomSkillParameterRequest &request)
{

}

/**
 * Determines the details for the room from which a skill request was invoked. This operation is used by skill
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ResolveRoomResponse * AlexaForBusinessClient::resolveRoom(const ResolveRoomRequest &request)
{

}

/**
 * Revokes an invitation and invalidates the enrollment
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RevokeInvitationResponse * AlexaForBusinessClient::revokeInvitation(const RevokeInvitationRequest &request)
{

}

/**
 * Searches devices and lists the ones that meet a set of filter
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchDevicesResponse * AlexaForBusinessClient::searchDevices(const SearchDevicesRequest &request)
{

}

/**
 * Searches room profiles and lists the ones that meet a set of filter
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchProfilesResponse * AlexaForBusinessClient::searchProfiles(const SearchProfilesRequest &request)
{

}

/**
 * Searches rooms and lists the ones that meet a set of filter and sort
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchRoomsResponse * AlexaForBusinessClient::searchRooms(const SearchRoomsRequest &request)
{

}

/**
 * Searches skill groups and lists the ones that meet a set of filter and sort
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchSkillGroupsResponse * AlexaForBusinessClient::searchSkillGroups(const SearchSkillGroupsRequest &request)
{

}

/**
 * Searches users and lists the ones that meet a set of filter and sort
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SearchUsersResponse * AlexaForBusinessClient::searchUsers(const SearchUsersRequest &request)
{

}

/**
 * Sends an enrollment invitation email with a URL to a user. The URL is valid for 72 hours or until you call this
 * operation again, whichever comes first.
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SendInvitationResponse * AlexaForBusinessClient::sendInvitation(const SendInvitationRequest &request)
{

}

/**
 * Resets a device and its account to the known default settings by clearing all information and settings set by previous
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartDeviceSyncResponse * AlexaForBusinessClient::startDeviceSync(const StartDeviceSyncRequest &request)
{

}

/**
 * Adds metadata tags to a specified
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TagResourceResponse * AlexaForBusinessClient::tagResource(const TagResourceRequest &request)
{

}

/**
 * Removes metadata tags from a specified
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UntagResourceResponse * AlexaForBusinessClient::untagResource(const UntagResourceRequest &request)
{

}

/**
 * Updates the device name by device
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateDeviceResponse * AlexaForBusinessClient::updateDevice(const UpdateDeviceRequest &request)
{

}

/**
 * Updates an existing room profile by room profile
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProfileResponse * AlexaForBusinessClient::updateProfile(const UpdateProfileRequest &request)
{

}

/**
 * Updates room details by room
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRoomResponse * AlexaForBusinessClient::updateRoom(const UpdateRoomRequest &request)
{

}

/**
 * Updates skill group details by skill group
 *
 * @param  request Request to send to Alexa For Business.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateSkillGroupResponse * AlexaForBusinessClient::updateSkillGroup(const UpdateSkillGroupRequest &request)
{

}

/**
 * @internal
 *
 * @class  AlexaForBusinessClientPrivate
 *
 * @brief  Private implementation for AlexaForBusinessClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AlexaForBusinessClientPrivate object.
 *
 * @param  q  Pointer to this object's public AlexaForBusinessClient instance.
 */
AlexaForBusinessClientPrivate::AlexaForBusinessClientPrivate(AlexaForBusinessClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace AlexaForBusiness
} // namespace AWS
