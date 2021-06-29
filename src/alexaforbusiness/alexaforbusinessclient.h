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

#ifndef QTAWS_ALEXAFORBUSINESSCLIENT_H
#define QTAWS_ALEXAFORBUSINESSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsalexaforbusinessglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AlexaForBusiness {

class AlexaForBusinessClientPrivate;
class ApproveSkillRequest;
class ApproveSkillResponse;
class AssociateContactWithAddressBookRequest;
class AssociateContactWithAddressBookResponse;
class AssociateDeviceWithNetworkProfileRequest;
class AssociateDeviceWithNetworkProfileResponse;
class AssociateDeviceWithRoomRequest;
class AssociateDeviceWithRoomResponse;
class AssociateSkillGroupWithRoomRequest;
class AssociateSkillGroupWithRoomResponse;
class AssociateSkillWithSkillGroupRequest;
class AssociateSkillWithSkillGroupResponse;
class AssociateSkillWithUsersRequest;
class AssociateSkillWithUsersResponse;
class CreateAddressBookRequest;
class CreateAddressBookResponse;
class CreateBusinessReportScheduleRequest;
class CreateBusinessReportScheduleResponse;
class CreateConferenceProviderRequest;
class CreateConferenceProviderResponse;
class CreateContactRequest;
class CreateContactResponse;
class CreateGatewayGroupRequest;
class CreateGatewayGroupResponse;
class CreateNetworkProfileRequest;
class CreateNetworkProfileResponse;
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
class DeleteBusinessReportScheduleRequest;
class DeleteBusinessReportScheduleResponse;
class DeleteConferenceProviderRequest;
class DeleteConferenceProviderResponse;
class DeleteContactRequest;
class DeleteContactResponse;
class DeleteDeviceRequest;
class DeleteDeviceResponse;
class DeleteDeviceUsageDataRequest;
class DeleteDeviceUsageDataResponse;
class DeleteGatewayGroupRequest;
class DeleteGatewayGroupResponse;
class DeleteNetworkProfileRequest;
class DeleteNetworkProfileResponse;
class DeleteProfileRequest;
class DeleteProfileResponse;
class DeleteRoomRequest;
class DeleteRoomResponse;
class DeleteRoomSkillParameterRequest;
class DeleteRoomSkillParameterResponse;
class DeleteSkillAuthorizationRequest;
class DeleteSkillAuthorizationResponse;
class DeleteSkillGroupRequest;
class DeleteSkillGroupResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DisassociateContactFromAddressBookRequest;
class DisassociateContactFromAddressBookResponse;
class DisassociateDeviceFromRoomRequest;
class DisassociateDeviceFromRoomResponse;
class DisassociateSkillFromSkillGroupRequest;
class DisassociateSkillFromSkillGroupResponse;
class DisassociateSkillFromUsersRequest;
class DisassociateSkillFromUsersResponse;
class DisassociateSkillGroupFromRoomRequest;
class DisassociateSkillGroupFromRoomResponse;
class ForgetSmartHomeAppliancesRequest;
class ForgetSmartHomeAppliancesResponse;
class GetAddressBookRequest;
class GetAddressBookResponse;
class GetConferencePreferenceRequest;
class GetConferencePreferenceResponse;
class GetConferenceProviderRequest;
class GetConferenceProviderResponse;
class GetContactRequest;
class GetContactResponse;
class GetDeviceRequest;
class GetDeviceResponse;
class GetGatewayRequest;
class GetGatewayResponse;
class GetGatewayGroupRequest;
class GetGatewayGroupResponse;
class GetInvitationConfigurationRequest;
class GetInvitationConfigurationResponse;
class GetNetworkProfileRequest;
class GetNetworkProfileResponse;
class GetProfileRequest;
class GetProfileResponse;
class GetRoomRequest;
class GetRoomResponse;
class GetRoomSkillParameterRequest;
class GetRoomSkillParameterResponse;
class GetSkillGroupRequest;
class GetSkillGroupResponse;
class ListBusinessReportSchedulesRequest;
class ListBusinessReportSchedulesResponse;
class ListConferenceProvidersRequest;
class ListConferenceProvidersResponse;
class ListDeviceEventsRequest;
class ListDeviceEventsResponse;
class ListGatewayGroupsRequest;
class ListGatewayGroupsResponse;
class ListGatewaysRequest;
class ListGatewaysResponse;
class ListSkillsRequest;
class ListSkillsResponse;
class ListSkillsStoreCategoriesRequest;
class ListSkillsStoreCategoriesResponse;
class ListSkillsStoreSkillsByCategoryRequest;
class ListSkillsStoreSkillsByCategoryResponse;
class ListSmartHomeAppliancesRequest;
class ListSmartHomeAppliancesResponse;
class ListTagsRequest;
class ListTagsResponse;
class PutConferencePreferenceRequest;
class PutConferencePreferenceResponse;
class PutInvitationConfigurationRequest;
class PutInvitationConfigurationResponse;
class PutRoomSkillParameterRequest;
class PutRoomSkillParameterResponse;
class PutSkillAuthorizationRequest;
class PutSkillAuthorizationResponse;
class RegisterAVSDeviceRequest;
class RegisterAVSDeviceResponse;
class RejectSkillRequest;
class RejectSkillResponse;
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
class SearchNetworkProfilesRequest;
class SearchNetworkProfilesResponse;
class SearchProfilesRequest;
class SearchProfilesResponse;
class SearchRoomsRequest;
class SearchRoomsResponse;
class SearchSkillGroupsRequest;
class SearchSkillGroupsResponse;
class SearchUsersRequest;
class SearchUsersResponse;
class SendAnnouncementRequest;
class SendAnnouncementResponse;
class SendInvitationRequest;
class SendInvitationResponse;
class StartDeviceSyncRequest;
class StartDeviceSyncResponse;
class StartSmartHomeApplianceDiscoveryRequest;
class StartSmartHomeApplianceDiscoveryResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAddressBookRequest;
class UpdateAddressBookResponse;
class UpdateBusinessReportScheduleRequest;
class UpdateBusinessReportScheduleResponse;
class UpdateConferenceProviderRequest;
class UpdateConferenceProviderResponse;
class UpdateContactRequest;
class UpdateContactResponse;
class UpdateDeviceRequest;
class UpdateDeviceResponse;
class UpdateGatewayRequest;
class UpdateGatewayResponse;
class UpdateGatewayGroupRequest;
class UpdateGatewayGroupResponse;
class UpdateNetworkProfileRequest;
class UpdateNetworkProfileResponse;
class UpdateProfileRequest;
class UpdateProfileResponse;
class UpdateRoomRequest;
class UpdateRoomResponse;
class UpdateSkillGroupRequest;
class UpdateSkillGroupResponse;

class QTAWSALEXAFORBUSINESS_EXPORT AlexaForBusinessClient : public QtAws::Core::AwsAbstractClient {
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
    ApproveSkillResponse * approveSkill(const ApproveSkillRequest &request);
    AssociateContactWithAddressBookResponse * associateContactWithAddressBook(const AssociateContactWithAddressBookRequest &request);
    AssociateDeviceWithNetworkProfileResponse * associateDeviceWithNetworkProfile(const AssociateDeviceWithNetworkProfileRequest &request);
    AssociateDeviceWithRoomResponse * associateDeviceWithRoom(const AssociateDeviceWithRoomRequest &request);
    AssociateSkillGroupWithRoomResponse * associateSkillGroupWithRoom(const AssociateSkillGroupWithRoomRequest &request);
    AssociateSkillWithSkillGroupResponse * associateSkillWithSkillGroup(const AssociateSkillWithSkillGroupRequest &request);
    AssociateSkillWithUsersResponse * associateSkillWithUsers(const AssociateSkillWithUsersRequest &request);
    CreateAddressBookResponse * createAddressBook(const CreateAddressBookRequest &request);
    CreateBusinessReportScheduleResponse * createBusinessReportSchedule(const CreateBusinessReportScheduleRequest &request);
    CreateConferenceProviderResponse * createConferenceProvider(const CreateConferenceProviderRequest &request);
    CreateContactResponse * createContact(const CreateContactRequest &request);
    CreateGatewayGroupResponse * createGatewayGroup(const CreateGatewayGroupRequest &request);
    CreateNetworkProfileResponse * createNetworkProfile(const CreateNetworkProfileRequest &request);
    CreateProfileResponse * createProfile(const CreateProfileRequest &request);
    CreateRoomResponse * createRoom(const CreateRoomRequest &request);
    CreateSkillGroupResponse * createSkillGroup(const CreateSkillGroupRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteAddressBookResponse * deleteAddressBook(const DeleteAddressBookRequest &request);
    DeleteBusinessReportScheduleResponse * deleteBusinessReportSchedule(const DeleteBusinessReportScheduleRequest &request);
    DeleteConferenceProviderResponse * deleteConferenceProvider(const DeleteConferenceProviderRequest &request);
    DeleteContactResponse * deleteContact(const DeleteContactRequest &request);
    DeleteDeviceResponse * deleteDevice(const DeleteDeviceRequest &request);
    DeleteDeviceUsageDataResponse * deleteDeviceUsageData(const DeleteDeviceUsageDataRequest &request);
    DeleteGatewayGroupResponse * deleteGatewayGroup(const DeleteGatewayGroupRequest &request);
    DeleteNetworkProfileResponse * deleteNetworkProfile(const DeleteNetworkProfileRequest &request);
    DeleteProfileResponse * deleteProfile(const DeleteProfileRequest &request);
    DeleteRoomResponse * deleteRoom(const DeleteRoomRequest &request);
    DeleteRoomSkillParameterResponse * deleteRoomSkillParameter(const DeleteRoomSkillParameterRequest &request);
    DeleteSkillAuthorizationResponse * deleteSkillAuthorization(const DeleteSkillAuthorizationRequest &request);
    DeleteSkillGroupResponse * deleteSkillGroup(const DeleteSkillGroupRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DisassociateContactFromAddressBookResponse * disassociateContactFromAddressBook(const DisassociateContactFromAddressBookRequest &request);
    DisassociateDeviceFromRoomResponse * disassociateDeviceFromRoom(const DisassociateDeviceFromRoomRequest &request);
    DisassociateSkillFromSkillGroupResponse * disassociateSkillFromSkillGroup(const DisassociateSkillFromSkillGroupRequest &request);
    DisassociateSkillFromUsersResponse * disassociateSkillFromUsers(const DisassociateSkillFromUsersRequest &request);
    DisassociateSkillGroupFromRoomResponse * disassociateSkillGroupFromRoom(const DisassociateSkillGroupFromRoomRequest &request);
    ForgetSmartHomeAppliancesResponse * forgetSmartHomeAppliances(const ForgetSmartHomeAppliancesRequest &request);
    GetAddressBookResponse * getAddressBook(const GetAddressBookRequest &request);
    GetConferencePreferenceResponse * getConferencePreference(const GetConferencePreferenceRequest &request);
    GetConferenceProviderResponse * getConferenceProvider(const GetConferenceProviderRequest &request);
    GetContactResponse * getContact(const GetContactRequest &request);
    GetDeviceResponse * getDevice(const GetDeviceRequest &request);
    GetGatewayResponse * getGateway(const GetGatewayRequest &request);
    GetGatewayGroupResponse * getGatewayGroup(const GetGatewayGroupRequest &request);
    GetInvitationConfigurationResponse * getInvitationConfiguration(const GetInvitationConfigurationRequest &request);
    GetNetworkProfileResponse * getNetworkProfile(const GetNetworkProfileRequest &request);
    GetProfileResponse * getProfile(const GetProfileRequest &request);
    GetRoomResponse * getRoom(const GetRoomRequest &request);
    GetRoomSkillParameterResponse * getRoomSkillParameter(const GetRoomSkillParameterRequest &request);
    GetSkillGroupResponse * getSkillGroup(const GetSkillGroupRequest &request);
    ListBusinessReportSchedulesResponse * listBusinessReportSchedules(const ListBusinessReportSchedulesRequest &request);
    ListConferenceProvidersResponse * listConferenceProviders(const ListConferenceProvidersRequest &request);
    ListDeviceEventsResponse * listDeviceEvents(const ListDeviceEventsRequest &request);
    ListGatewayGroupsResponse * listGatewayGroups(const ListGatewayGroupsRequest &request);
    ListGatewaysResponse * listGateways(const ListGatewaysRequest &request);
    ListSkillsResponse * listSkills(const ListSkillsRequest &request);
    ListSkillsStoreCategoriesResponse * listSkillsStoreCategories(const ListSkillsStoreCategoriesRequest &request);
    ListSkillsStoreSkillsByCategoryResponse * listSkillsStoreSkillsByCategory(const ListSkillsStoreSkillsByCategoryRequest &request);
    ListSmartHomeAppliancesResponse * listSmartHomeAppliances(const ListSmartHomeAppliancesRequest &request);
    ListTagsResponse * listTags(const ListTagsRequest &request);
    PutConferencePreferenceResponse * putConferencePreference(const PutConferencePreferenceRequest &request);
    PutInvitationConfigurationResponse * putInvitationConfiguration(const PutInvitationConfigurationRequest &request);
    PutRoomSkillParameterResponse * putRoomSkillParameter(const PutRoomSkillParameterRequest &request);
    PutSkillAuthorizationResponse * putSkillAuthorization(const PutSkillAuthorizationRequest &request);
    RegisterAVSDeviceResponse * registerAVSDevice(const RegisterAVSDeviceRequest &request);
    RejectSkillResponse * rejectSkill(const RejectSkillRequest &request);
    ResolveRoomResponse * resolveRoom(const ResolveRoomRequest &request);
    RevokeInvitationResponse * revokeInvitation(const RevokeInvitationRequest &request);
    SearchAddressBooksResponse * searchAddressBooks(const SearchAddressBooksRequest &request);
    SearchContactsResponse * searchContacts(const SearchContactsRequest &request);
    SearchDevicesResponse * searchDevices(const SearchDevicesRequest &request);
    SearchNetworkProfilesResponse * searchNetworkProfiles(const SearchNetworkProfilesRequest &request);
    SearchProfilesResponse * searchProfiles(const SearchProfilesRequest &request);
    SearchRoomsResponse * searchRooms(const SearchRoomsRequest &request);
    SearchSkillGroupsResponse * searchSkillGroups(const SearchSkillGroupsRequest &request);
    SearchUsersResponse * searchUsers(const SearchUsersRequest &request);
    SendAnnouncementResponse * sendAnnouncement(const SendAnnouncementRequest &request);
    SendInvitationResponse * sendInvitation(const SendInvitationRequest &request);
    StartDeviceSyncResponse * startDeviceSync(const StartDeviceSyncRequest &request);
    StartSmartHomeApplianceDiscoveryResponse * startSmartHomeApplianceDiscovery(const StartSmartHomeApplianceDiscoveryRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAddressBookResponse * updateAddressBook(const UpdateAddressBookRequest &request);
    UpdateBusinessReportScheduleResponse * updateBusinessReportSchedule(const UpdateBusinessReportScheduleRequest &request);
    UpdateConferenceProviderResponse * updateConferenceProvider(const UpdateConferenceProviderRequest &request);
    UpdateContactResponse * updateContact(const UpdateContactRequest &request);
    UpdateDeviceResponse * updateDevice(const UpdateDeviceRequest &request);
    UpdateGatewayResponse * updateGateway(const UpdateGatewayRequest &request);
    UpdateGatewayGroupResponse * updateGatewayGroup(const UpdateGatewayGroupRequest &request);
    UpdateNetworkProfileResponse * updateNetworkProfile(const UpdateNetworkProfileRequest &request);
    UpdateProfileResponse * updateProfile(const UpdateProfileRequest &request);
    UpdateRoomResponse * updateRoom(const UpdateRoomRequest &request);
    UpdateSkillGroupResponse * updateSkillGroup(const UpdateSkillGroupRequest &request);

protected:
    /// @cond internal
    AlexaForBusinessClientPrivate * const d_ptr; ///< Internal d-pointer.
    AlexaForBusinessClient(AlexaForBusinessClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AlexaForBusinessClient)
    Q_DISABLE_COPY(AlexaForBusinessClient)

};

} // namespace AlexaForBusiness
} // namespace QtAws

#endif
