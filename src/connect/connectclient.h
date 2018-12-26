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

#ifndef QTAWS_CONNECTCLIENT_H
#define QTAWS_CONNECTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Connect {

class ConnectClientPrivate;
class CreateUserRequest;
class CreateUserResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class DescribeUserHierarchyGroupRequest;
class DescribeUserHierarchyGroupResponse;
class DescribeUserHierarchyStructureRequest;
class DescribeUserHierarchyStructureResponse;
class GetContactAttributesRequest;
class GetContactAttributesResponse;
class GetCurrentMetricDataRequest;
class GetCurrentMetricDataResponse;
class GetFederationTokenRequest;
class GetFederationTokenResponse;
class GetMetricDataRequest;
class GetMetricDataResponse;
class ListRoutingProfilesRequest;
class ListRoutingProfilesResponse;
class ListSecurityProfilesRequest;
class ListSecurityProfilesResponse;
class ListUserHierarchyGroupsRequest;
class ListUserHierarchyGroupsResponse;
class ListUsersRequest;
class ListUsersResponse;
class StartOutboundVoiceContactRequest;
class StartOutboundVoiceContactResponse;
class StopContactRequest;
class StopContactResponse;
class UpdateContactAttributesRequest;
class UpdateContactAttributesResponse;
class UpdateUserHierarchyRequest;
class UpdateUserHierarchyResponse;
class UpdateUserIdentityInfoRequest;
class UpdateUserIdentityInfoResponse;
class UpdateUserPhoneConfigRequest;
class UpdateUserPhoneConfigResponse;
class UpdateUserRoutingProfileRequest;
class UpdateUserRoutingProfileResponse;
class UpdateUserSecurityProfilesRequest;
class UpdateUserSecurityProfilesResponse;

class QTAWS_EXPORT ConnectClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ConnectClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ConnectClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateUserResponse * createUser(const CreateUserRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DescribeUserHierarchyGroupResponse * describeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest &request);
    DescribeUserHierarchyStructureResponse * describeUserHierarchyStructure(const DescribeUserHierarchyStructureRequest &request);
    GetContactAttributesResponse * getContactAttributes(const GetContactAttributesRequest &request);
    GetCurrentMetricDataResponse * getCurrentMetricData(const GetCurrentMetricDataRequest &request);
    GetFederationTokenResponse * getFederationToken(const GetFederationTokenRequest &request);
    GetMetricDataResponse * getMetricData(const GetMetricDataRequest &request);
    ListRoutingProfilesResponse * listRoutingProfiles(const ListRoutingProfilesRequest &request);
    ListSecurityProfilesResponse * listSecurityProfiles(const ListSecurityProfilesRequest &request);
    ListUserHierarchyGroupsResponse * listUserHierarchyGroups(const ListUserHierarchyGroupsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    StartOutboundVoiceContactResponse * startOutboundVoiceContact(const StartOutboundVoiceContactRequest &request);
    StopContactResponse * stopContact(const StopContactRequest &request);
    UpdateContactAttributesResponse * updateContactAttributes(const UpdateContactAttributesRequest &request);
    UpdateUserHierarchyResponse * updateUserHierarchy(const UpdateUserHierarchyRequest &request);
    UpdateUserIdentityInfoResponse * updateUserIdentityInfo(const UpdateUserIdentityInfoRequest &request);
    UpdateUserPhoneConfigResponse * updateUserPhoneConfig(const UpdateUserPhoneConfigRequest &request);
    UpdateUserRoutingProfileResponse * updateUserRoutingProfile(const UpdateUserRoutingProfileRequest &request);
    UpdateUserSecurityProfilesResponse * updateUserSecurityProfiles(const UpdateUserSecurityProfilesRequest &request);

private:
    Q_DECLARE_PRIVATE(ConnectClient)
    Q_DISABLE_COPY(ConnectClient)

};

} // namespace Connect
} // namespace QtAws

#endif
