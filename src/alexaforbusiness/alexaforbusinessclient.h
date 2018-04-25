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

#ifndef QTAWS_ALEXAFORBUSINESSCLIENT_H
#define QTAWS_ALEXAFORBUSINESSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessClientPrivate;
class AssociateContactWithAddressBookRequest;
class AssociateContactWithAddressBookResponse;
class AssociateDeviceWithRoomRequest;
class AssociateDeviceWithRoomResponse;
class AssociateSkillGroupWithRoomRequest;
class AssociateSkillGroupWithRoomResponse;
class CreateAddressBookRequest;
class CreateAddressBookResponse;
class CreateContactRequest;
class CreateContactResponse;
class CreateProfileRequest;
class CreateProfileResponse;
class CreateRoomRequest;
class CreateRoomResponse;
class CreateSkillGroupRequest;
class CreateSkillGroupResponse;
class CreateUserRequest;
class CreateUserResponse;
class DeleteAddressBookRequest;
class DeleteAddressBookResponse;
class DeleteContactRequest;
class DeleteContactResponse;
class DeleteProfileRequest;
class DeleteProfileResponse;
class DeleteRoomRequest;
class DeleteRoomResponse;
class DeleteRoomSkillParameterRequest;
class DeleteRoomSkillParameterResponse;
class DeleteSkillGroupRequest;
class DeleteSkillGroupResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DisassociateContactFromAddressBookRequest;
class DisassociateContactFromAddressBookResponse;
class DisassociateDeviceFromRoomRequest;
class DisassociateDeviceFromRoomResponse;
class DisassociateSkillGroupFromRoomRequest;
class DisassociateSkillGroupFromRoomResponse;
class GetAddressBookRequest;
class GetAddressBookResponse;
class GetContactRequest;
class GetContactResponse;
class GetDeviceRequest;
class GetDeviceResponse;
class GetProfileRequest;
class GetProfileResponse;
class GetRoomRequest;
class GetRoomResponse;
class GetRoomSkillParameterRequest;
class GetRoomSkillParameterResponse;
class GetSkillGroupRequest;
class GetSkillGroupResponse;
class ListSkillsRequest;
class ListSkillsResponse;
class ListTagsRequest;
class ListTagsResponse;
class PutRoomSkillParameterRequest;
class PutRoomSkillParameterResponse;
class ResolveRoomRequest;
class ResolveRoomResponse;
class RevokeInvitationRequest;
class RevokeInvitationResponse;
class SearchAddressBooksRequest;
class SearchAddressBooksResponse;
class SearchContactsRequest;
class SearchContactsResponse;
class SearchDevicesRequest;
class SearchDevicesResponse;
class SearchProfilesRequest;
class SearchProfilesResponse;
class SearchRoomsRequest;
class SearchRoomsResponse;
class SearchSkillGroupsRequest;
class SearchSkillGroupsResponse;
class SearchUsersRequest;
class SearchUsersResponse;
class SendInvitationRequest;
class SendInvitationResponse;
class StartDeviceSyncRequest;
class StartDeviceSyncResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAddressBookRequest;
class UpdateAddressBookResponse;
class UpdateContactRequest;
class UpdateContactResponse;
class UpdateDeviceRequest;
class UpdateDeviceResponse;
class UpdateProfileRequest;
class UpdateProfileResponse;
class UpdateRoomRequest;
class UpdateRoomResponse;
class UpdateSkillGroupRequest;
class UpdateSkillGroupResponse;

class QTAWS_EXPORT AlexaForBusinessClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AlexaForBusinessClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    AlexaForBusinessClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateContactWithAddressBookResponse * associateContactWithAddressBook(const AssociateContactWithAddressBookRequest &request);
    AssociateDeviceWithRoomResponse * associateDeviceWithRoom(const AssociateDeviceWithRoomRequest &request);
    AssociateSkillGroupWithRoomResponse * associateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest &request);
    CreateAddressBookResponse * createAddressBook(const CreateAddressBookRequest &request);
    CreateContactResponse * createContact(const CreateContactRequest &request);
    CreateProfileResponse * createProfile(const CreateProfileRequest &request);
    CreateRoomResponse * createRoom(const CreateRoomRequest &request);
    CreateSkillGroupResponse * createSkillGroup(const CreateSkillGroupRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAddressBookResponse * deleteAddressBook(const DeleteAddressBookRequest &request);
    DeleteContactResponse * deleteContact(const DeleteContactRequest &request);
    DeleteProfileResponse * deleteProfile(const DeleteProfileRequest &request);
    DeleteRoomResponse * deleteRoom(const DeleteRoomRequest &request);
    DeleteRoomSkillParameterResponse * deleteRoomSkillParameter(const DeleteRoomSkillParameterRequest &request);
    DeleteSkillGroupResponse * deleteSkillGroup(const DeleteSkillGroupRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DisassociateContactFromAddressBookResponse * disassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest &request);
    DisassociateDeviceFromRoomResponse * disassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest &request);
    DisassociateSkillGroupFromRoomResponse * disassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest &request);
    GetAddressBookResponse * getAddressBook(const GetAddressBookRequest &request);
    GetContactResponse * getContact(const GetContactRequest &request);
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
    SearchAddressBooksResponse * searchAddressBooks(const SearchAddressBooksRequest &request);
    SearchContactsResponse * searchContacts(const SearchContactsRequest &request);
    SearchDevicesResponse * searchDevices(const SearchDevicesRequest &request);
    SearchProfilesResponse * searchProfiles(const SearchProfilesRequest &request);
    SearchRoomsResponse * searchRooms(const SearchRoomsRequest &request);
    SearchSkillGroupsResponse * searchSkillGroups(const SearchSkillGroupsRequest &request);
    SearchUsersResponse * searchUsers(const SearchUsersRequest &request);
    SendInvitationResponse * sendInvitation(const SendInvitationRequest &request);
    StartDeviceSyncResponse * startDeviceSync(const StartDeviceSyncRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAddressBookResponse * updateAddressBook(const UpdateAddressBookRequest &request);
    UpdateContactResponse * updateContact(const UpdateContactRequest &request);
    UpdateDeviceResponse * updateDevice(const UpdateDeviceRequest &request);
    UpdateProfileResponse * updateProfile(const UpdateProfileRequest &request);
    UpdateRoomResponse * updateRoom(const UpdateRoomRequest &request);
    UpdateSkillGroupResponse * updateSkillGroup(const UpdateSkillGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(AlexaForBusinessClient)
    Q_DISABLE_COPY(AlexaForBusinessClient)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
