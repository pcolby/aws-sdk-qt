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

#ifndef QTAWS_CONNECTCLIENT_H
#define QTAWS_CONNECTCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace Connect {

class ConnectClientPrivate;
class AssociateApprovedOriginRequest;
class AssociateApprovedOriginResponse;
class AssociateBotRequest;
class AssociateBotResponse;
class AssociateInstanceStorageConfigRequest;
class AssociateInstanceStorageConfigResponse;
class AssociateLambdaFunctionRequest;
class AssociateLambdaFunctionResponse;
class AssociateLexBotRequest;
class AssociateLexBotResponse;
class AssociateQueueQuickConnectsRequest;
class AssociateQueueQuickConnectsResponse;
class AssociateRoutingProfileQueuesRequest;
class AssociateRoutingProfileQueuesResponse;
class AssociateSecurityKeyRequest;
class AssociateSecurityKeyResponse;
class CreateContactFlowRequest;
class CreateContactFlowResponse;
class CreateInstanceRequest;
class CreateInstanceResponse;
class CreateIntegrationAssociationRequest;
class CreateIntegrationAssociationResponse;
class CreateQueueRequest;
class CreateQueueResponse;
class CreateQuickConnectRequest;
class CreateQuickConnectResponse;
class CreateRoutingProfileRequest;
class CreateRoutingProfileResponse;
class CreateUseCaseRequest;
class CreateUseCaseResponse;
class CreateUserRequest;
class CreateUserResponse;
class CreateUserHierarchyGroupRequest;
class CreateUserHierarchyGroupResponse;
class DeleteInstanceRequest;
class DeleteInstanceResponse;
class DeleteIntegrationAssociationRequest;
class DeleteIntegrationAssociationResponse;
class DeleteQuickConnectRequest;
class DeleteQuickConnectResponse;
class DeleteUseCaseRequest;
class DeleteUseCaseResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeleteUserHierarchyGroupRequest;
class DeleteUserHierarchyGroupResponse;
class DescribeContactFlowRequest;
class DescribeContactFlowResponse;
class DescribeHoursOfOperationRequest;
class DescribeHoursOfOperationResponse;
class DescribeInstanceRequest;
class DescribeInstanceResponse;
class DescribeInstanceAttributeRequest;
class DescribeInstanceAttributeResponse;
class DescribeInstanceStorageConfigRequest;
class DescribeInstanceStorageConfigResponse;
class DescribeQueueRequest;
class DescribeQueueResponse;
class DescribeQuickConnectRequest;
class DescribeQuickConnectResponse;
class DescribeRoutingProfileRequest;
class DescribeRoutingProfileResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class DescribeUserHierarchyGroupRequest;
class DescribeUserHierarchyGroupResponse;
class DescribeUserHierarchyStructureRequest;
class DescribeUserHierarchyStructureResponse;
class DisassociateApprovedOriginRequest;
class DisassociateApprovedOriginResponse;
class DisassociateBotRequest;
class DisassociateBotResponse;
class DisassociateInstanceStorageConfigRequest;
class DisassociateInstanceStorageConfigResponse;
class DisassociateLambdaFunctionRequest;
class DisassociateLambdaFunctionResponse;
class DisassociateLexBotRequest;
class DisassociateLexBotResponse;
class DisassociateQueueQuickConnectsRequest;
class DisassociateQueueQuickConnectsResponse;
class DisassociateRoutingProfileQueuesRequest;
class DisassociateRoutingProfileQueuesResponse;
class DisassociateSecurityKeyRequest;
class DisassociateSecurityKeyResponse;
class GetContactAttributesRequest;
class GetContactAttributesResponse;
class GetCurrentMetricDataRequest;
class GetCurrentMetricDataResponse;
class GetFederationTokenRequest;
class GetFederationTokenResponse;
class GetMetricDataRequest;
class GetMetricDataResponse;
class ListApprovedOriginsRequest;
class ListApprovedOriginsResponse;
class ListBotsRequest;
class ListBotsResponse;
class ListContactFlowsRequest;
class ListContactFlowsResponse;
class ListHoursOfOperationsRequest;
class ListHoursOfOperationsResponse;
class ListInstanceAttributesRequest;
class ListInstanceAttributesResponse;
class ListInstanceStorageConfigsRequest;
class ListInstanceStorageConfigsResponse;
class ListInstancesRequest;
class ListInstancesResponse;
class ListIntegrationAssociationsRequest;
class ListIntegrationAssociationsResponse;
class ListLambdaFunctionsRequest;
class ListLambdaFunctionsResponse;
class ListLexBotsRequest;
class ListLexBotsResponse;
class ListPhoneNumbersRequest;
class ListPhoneNumbersResponse;
class ListPromptsRequest;
class ListPromptsResponse;
class ListQueueQuickConnectsRequest;
class ListQueueQuickConnectsResponse;
class ListQueuesRequest;
class ListQueuesResponse;
class ListQuickConnectsRequest;
class ListQuickConnectsResponse;
class ListRoutingProfileQueuesRequest;
class ListRoutingProfileQueuesResponse;
class ListRoutingProfilesRequest;
class ListRoutingProfilesResponse;
class ListSecurityKeysRequest;
class ListSecurityKeysResponse;
class ListSecurityProfilesRequest;
class ListSecurityProfilesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUseCasesRequest;
class ListUseCasesResponse;
class ListUserHierarchyGroupsRequest;
class ListUserHierarchyGroupsResponse;
class ListUsersRequest;
class ListUsersResponse;
class ResumeContactRecordingRequest;
class ResumeContactRecordingResponse;
class StartChatContactRequest;
class StartChatContactResponse;
class StartContactRecordingRequest;
class StartContactRecordingResponse;
class StartOutboundVoiceContactRequest;
class StartOutboundVoiceContactResponse;
class StartTaskContactRequest;
class StartTaskContactResponse;
class StopContactRequest;
class StopContactResponse;
class StopContactRecordingRequest;
class StopContactRecordingResponse;
class SuspendContactRecordingRequest;
class SuspendContactRecordingResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateContactAttributesRequest;
class UpdateContactAttributesResponse;
class UpdateContactFlowContentRequest;
class UpdateContactFlowContentResponse;
class UpdateContactFlowNameRequest;
class UpdateContactFlowNameResponse;
class UpdateInstanceAttributeRequest;
class UpdateInstanceAttributeResponse;
class UpdateInstanceStorageConfigRequest;
class UpdateInstanceStorageConfigResponse;
class UpdateQueueHoursOfOperationRequest;
class UpdateQueueHoursOfOperationResponse;
class UpdateQueueMaxContactsRequest;
class UpdateQueueMaxContactsResponse;
class UpdateQueueNameRequest;
class UpdateQueueNameResponse;
class UpdateQueueOutboundCallerConfigRequest;
class UpdateQueueOutboundCallerConfigResponse;
class UpdateQueueStatusRequest;
class UpdateQueueStatusResponse;
class UpdateQuickConnectConfigRequest;
class UpdateQuickConnectConfigResponse;
class UpdateQuickConnectNameRequest;
class UpdateQuickConnectNameResponse;
class UpdateRoutingProfileConcurrencyRequest;
class UpdateRoutingProfileConcurrencyResponse;
class UpdateRoutingProfileDefaultOutboundQueueRequest;
class UpdateRoutingProfileDefaultOutboundQueueResponse;
class UpdateRoutingProfileNameRequest;
class UpdateRoutingProfileNameResponse;
class UpdateRoutingProfileQueuesRequest;
class UpdateRoutingProfileQueuesResponse;
class UpdateUserHierarchyRequest;
class UpdateUserHierarchyResponse;
class UpdateUserHierarchyGroupNameRequest;
class UpdateUserHierarchyGroupNameResponse;
class UpdateUserHierarchyStructureRequest;
class UpdateUserHierarchyStructureResponse;
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
    AssociateApprovedOriginResponse * associateApprovedOrigin(const AssociateApprovedOriginRequest &request);
    AssociateBotResponse * associateBot(const AssociateBotRequest &request);
    AssociateInstanceStorageConfigResponse * associateInstanceStorageConfig(const AssociateInstanceStorageConfigRequest &request);
    AssociateLambdaFunctionResponse * associateLambdaFunction(const AssociateLambdaFunctionRequest &request);
    AssociateLexBotResponse * associateLexBot(const AssociateLexBotRequest &request);
    AssociateQueueQuickConnectsResponse * associateQueueQuickConnects(const AssociateQueueQuickConnectsRequest &request);
    AssociateRoutingProfileQueuesResponse * associateRoutingProfileQueues(const AssociateRoutingProfileQueuesRequest &request);
    AssociateSecurityKeyResponse * associateSecurityKey(const AssociateSecurityKeyRequest &request);
    CreateContactFlowResponse * createContactFlow(const CreateContactFlowRequest &request);
    CreateInstanceResponse * createInstance(const CreateInstanceRequest &request);
    CreateIntegrationAssociationResponse * createIntegrationAssociation(const CreateIntegrationAssociationRequest &request);
    CreateQueueResponse * createQueue(const CreateQueueRequest &request);
    CreateQuickConnectResponse * createQuickConnect(const CreateQuickConnectRequest &request);
    CreateRoutingProfileResponse * createRoutingProfile(const CreateRoutingProfileRequest &request);
    CreateUseCaseResponse * createUseCase(const CreateUseCaseRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    CreateUserHierarchyGroupResponse * createUserHierarchyGroup(const CreateUserHierarchyGroupRequest &request);
    DeleteInstanceResponse * deleteInstance(const DeleteInstanceRequest &request);
    DeleteIntegrationAssociationResponse * deleteIntegrationAssociation(const DeleteIntegrationAssociationRequest &request);
    DeleteQuickConnectResponse * deleteQuickConnect(const DeleteQuickConnectRequest &request);
    DeleteUseCaseResponse * deleteUseCase(const DeleteUseCaseRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteUserHierarchyGroupResponse * deleteUserHierarchyGroup(const DeleteUserHierarchyGroupRequest &request);
    DescribeContactFlowResponse * describeContactFlow(const DescribeContactFlowRequest &request);
    DescribeHoursOfOperationResponse * describeHoursOfOperation(const DescribeHoursOfOperationRequest &request);
    DescribeInstanceResponse * describeInstance(const DescribeInstanceRequest &request);
    DescribeInstanceAttributeResponse * describeInstanceAttribute(const DescribeInstanceAttributeRequest &request);
    DescribeInstanceStorageConfigResponse * describeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest &request);
    DescribeQueueResponse * describeQueue(const DescribeQueueRequest &request);
    DescribeQuickConnectResponse * describeQuickConnect(const DescribeQuickConnectRequest &request);
    DescribeRoutingProfileResponse * describeRoutingProfile(const DescribeRoutingProfileRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DescribeUserHierarchyGroupResponse * describeUserHierarchyGroup(const DescribeUserHierarchyGroupRequest &request);
    DescribeUserHierarchyStructureResponse * describeUserHierarchyStructure(const DescribeUserHierarchyStructureRequest &request);
    DisassociateApprovedOriginResponse * disassociateApprovedOrigin(const DisassociateApprovedOriginRequest &request);
    DisassociateBotResponse * disassociateBot(const DisassociateBotRequest &request);
    DisassociateInstanceStorageConfigResponse * disassociateInstanceStorageConfig(const DisassociateInstanceStorageConfigRequest &request);
    DisassociateLambdaFunctionResponse * disassociateLambdaFunction(const DisassociateLambdaFunctionRequest &request);
    DisassociateLexBotResponse * disassociateLexBot(const DisassociateLexBotRequest &request);
    DisassociateQueueQuickConnectsResponse * disassociateQueueQuickConnects(const DisassociateQueueQuickConnectsRequest &request);
    DisassociateRoutingProfileQueuesResponse * disassociateRoutingProfileQueues(const DisassociateRoutingProfileQueuesRequest &request);
    DisassociateSecurityKeyResponse * disassociateSecurityKey(const DisassociateSecurityKeyRequest &request);
    GetContactAttributesResponse * getContactAttributes(const GetContactAttributesRequest &request);
    GetCurrentMetricDataResponse * getCurrentMetricData(const GetCurrentMetricDataRequest &request);
    GetFederationTokenResponse * getFederationToken(const GetFederationTokenRequest &request);
    GetMetricDataResponse * getMetricData(const GetMetricDataRequest &request);
    ListApprovedOriginsResponse * listApprovedOrigins(const ListApprovedOriginsRequest &request);
    ListBotsResponse * listBots(const ListBotsRequest &request);
    ListContactFlowsResponse * listContactFlows(const ListContactFlowsRequest &request);
    ListHoursOfOperationsResponse * listHoursOfOperations(const ListHoursOfOperationsRequest &request);
    ListInstanceAttributesResponse * listInstanceAttributes(const ListInstanceAttributesRequest &request);
    ListInstanceStorageConfigsResponse * listInstanceStorageConfigs(const ListInstanceStorageConfigsRequest &request);
    ListInstancesResponse * listInstances(const ListInstancesRequest &request);
    ListIntegrationAssociationsResponse * listIntegrationAssociations(const ListIntegrationAssociationsRequest &request);
    ListLambdaFunctionsResponse * listLambdaFunctions(const ListLambdaFunctionsRequest &request);
    ListLexBotsResponse * listLexBots(const ListLexBotsRequest &request);
    ListPhoneNumbersResponse * listPhoneNumbers(const ListPhoneNumbersRequest &request);
    ListPromptsResponse * listPrompts(const ListPromptsRequest &request);
    ListQueueQuickConnectsResponse * listQueueQuickConnects(const ListQueueQuickConnectsRequest &request);
    ListQueuesResponse * listQueues(const ListQueuesRequest &request);
    ListQuickConnectsResponse * listQuickConnects(const ListQuickConnectsRequest &request);
    ListRoutingProfileQueuesResponse * listRoutingProfileQueues(const ListRoutingProfileQueuesRequest &request);
    ListRoutingProfilesResponse * listRoutingProfiles(const ListRoutingProfilesRequest &request);
    ListSecurityKeysResponse * listSecurityKeys(const ListSecurityKeysRequest &request);
    ListSecurityProfilesResponse * listSecurityProfiles(const ListSecurityProfilesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUseCasesResponse * listUseCases(const ListUseCasesRequest &request);
    ListUserHierarchyGroupsResponse * listUserHierarchyGroups(const ListUserHierarchyGroupsRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ResumeContactRecordingResponse * resumeContactRecording(const ResumeContactRecordingRequest &request);
    StartChatContactResponse * startChatContact(const StartChatContactRequest &request);
    StartContactRecordingResponse * startContactRecording(const StartContactRecordingRequest &request);
    StartOutboundVoiceContactResponse * startOutboundVoiceContact(const StartOutboundVoiceContactRequest &request);
    StartTaskContactResponse * startTaskContact(const StartTaskContactRequest &request);
    StopContactResponse * stopContact(const StopContactRequest &request);
    StopContactRecordingResponse * stopContactRecording(const StopContactRecordingRequest &request);
    SuspendContactRecordingResponse * suspendContactRecording(const SuspendContactRecordingRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateContactAttributesResponse * updateContactAttributes(const UpdateContactAttributesRequest &request);
    UpdateContactFlowContentResponse * updateContactFlowContent(const UpdateContactFlowContentRequest &request);
    UpdateContactFlowNameResponse * updateContactFlowName(const UpdateContactFlowNameRequest &request);
    UpdateInstanceAttributeResponse * updateInstanceAttribute(const UpdateInstanceAttributeRequest &request);
    UpdateInstanceStorageConfigResponse * updateInstanceStorageConfig(const UpdateInstanceStorageConfigRequest &request);
    UpdateQueueHoursOfOperationResponse * updateQueueHoursOfOperation(const UpdateQueueHoursOfOperationRequest &request);
    UpdateQueueMaxContactsResponse * updateQueueMaxContacts(const UpdateQueueMaxContactsRequest &request);
    UpdateQueueNameResponse * updateQueueName(const UpdateQueueNameRequest &request);
    UpdateQueueOutboundCallerConfigResponse * updateQueueOutboundCallerConfig(const UpdateQueueOutboundCallerConfigRequest &request);
    UpdateQueueStatusResponse * updateQueueStatus(const UpdateQueueStatusRequest &request);
    UpdateQuickConnectConfigResponse * updateQuickConnectConfig(const UpdateQuickConnectConfigRequest &request);
    UpdateQuickConnectNameResponse * updateQuickConnectName(const UpdateQuickConnectNameRequest &request);
    UpdateRoutingProfileConcurrencyResponse * updateRoutingProfileConcurrency(const UpdateRoutingProfileConcurrencyRequest &request);
    UpdateRoutingProfileDefaultOutboundQueueResponse * updateRoutingProfileDefaultOutboundQueue(const UpdateRoutingProfileDefaultOutboundQueueRequest &request);
    UpdateRoutingProfileNameResponse * updateRoutingProfileName(const UpdateRoutingProfileNameRequest &request);
    UpdateRoutingProfileQueuesResponse * updateRoutingProfileQueues(const UpdateRoutingProfileQueuesRequest &request);
    UpdateUserHierarchyResponse * updateUserHierarchy(const UpdateUserHierarchyRequest &request);
    UpdateUserHierarchyGroupNameResponse * updateUserHierarchyGroupName(const UpdateUserHierarchyGroupNameRequest &request);
    UpdateUserHierarchyStructureResponse * updateUserHierarchyStructure(const UpdateUserHierarchyStructureRequest &request);
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
