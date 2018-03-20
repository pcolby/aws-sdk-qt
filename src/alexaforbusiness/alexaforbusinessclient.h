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

#ifndef QTAWS_ALEXAFORBUSINESSCLIENT_H
#define QTAWS_ALEXAFORBUSINESSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace AlexaForBusiness {

class AlexaForBusinessClientPrivate;
class AssociateDeviceWithRoomResponse;
class AssociateSkillGroupWithRoomResponse;
class CreateProfileResponse;
class CreateRoomResponse;
class CreateSkillGroupResponse;
class CreateUserResponse;
class DeleteProfileResponse;
class DeleteRoomResponse;
class DeleteRoomSkillParameterResponse;
class DeleteSkillGroupResponse;
class DeleteUserResponse;
class DisassociateDeviceFromRoomResponse;
class DisassociateSkillGroupFromRoomResponse;
class GetDeviceResponse;
class GetProfileResponse;
class GetRoomResponse;
class GetRoomSkillParameterResponse;
class GetSkillGroupResponse;
class ListSkillsResponse;
class ListTagsResponse;
class PutRoomSkillParameterResponse;
class ResolveRoomResponse;
class RevokeInvitationResponse;
class SearchDevicesResponse;
class SearchProfilesResponse;
class SearchRoomsResponse;
class SearchSkillGroupsResponse;
class SearchUsersResponse;
class SendInvitationResponse;
class StartDeviceSyncResponse;
class TagResourceResponse;
class UntagResourceResponse;
class UpdateDeviceResponse;
class UpdateProfileResponse;
class UpdateRoomResponse;
class UpdateSkillGroupResponse;

class QTAWS_EXPORT AlexaForBusinessClient : public AwsAbstractClient {
    Q_OBJECT

public:
    AlexaForBusinessClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AlexaForBusinessClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateDeviceWithRoomResponse * associateDeviceWithRoom(const AssociateDeviceWithRoomRequest &request);
    AssociateSkillGroupWithRoomResponse * associateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest &request);
    CreateProfileResponse * createProfile(const CreateProfileRequest &request);
    CreateRoomResponse * createRoom(const CreateRoomRequest &request);
    CreateSkillGroupResponse * createSkillGroup(const CreateSkillGroupRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteProfileResponse * deleteProfile(const DeleteProfileRequest &request);
    DeleteRoomResponse * deleteRoom(const DeleteRoomRequest &request);
    DeleteRoomSkillParameterResponse * deleteRoomSkillParameter(const DeleteRoomSkillParameterRequest &request);
    DeleteSkillGroupResponse * deleteSkillGroup(const DeleteSkillGroupRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DisassociateDeviceFromRoomResponse * disassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest &request);
    DisassociateSkillGroupFromRoomResponse * disassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest &request);
    GetDeviceResponse * getDevice(const GetDeviceRequest &request);
    GetProfileResponse * getProfile(const GetProfileRequest &request);
    GetRoomResponse * getRoom(const GetRoomRequest &request);
    GetRoomSkillParameterResponse * getRoomSkillParameter(const GetRoomSkillParameterRequest &request);
    GetSkillGroupResponse * getSkillGroup(const GetSkillGroupRequest &request);
    ListSkillsResponse * listSkills(const ListSkillsRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    PutRoomSkillParameterResponse * putRoomSkillParameter(const PutRoomSkillParameterRequest &request);
    ResolveRoomResponse * resolveRoom(const ResolveRoomRequest &request);
    RevokeInvitationResponse * revokeInvitation(const RevokeInvitationRequest &request);
    SearchDevicesResponse * searchDevices(const SearchDevicesRequest &request);
    SearchProfilesResponse * searchProfiles(const SearchProfilesRequest &request);
    SearchRoomsResponse * searchRooms(const SearchRoomsRequest &request);
    SearchSkillGroupsResponse * searchSkillGroups(const SearchSkillGroupsRequest &request);
    SearchUsersResponse * searchUsers(const SearchUsersRequest &request);
    SendInvitationResponse * sendInvitation(const SendInvitationRequest &request);
    StartDeviceSyncResponse * startDeviceSync(const StartDeviceSyncRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDeviceResponse * updateDevice(const UpdateDeviceRequest &request);
    UpdateProfileResponse * updateProfile(const UpdateProfileRequest &request);
    UpdateRoomResponse * updateRoom(const UpdateRoomRequest &request);
    UpdateSkillGroupResponse * updateSkillGroup(const UpdateSkillGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AlexaForBusinessClient)
    Q_DISABLE_COPY(AlexaForBusinessClient)

};

} // namespace AlexaForBusiness
} // namespace AWS

#endif
