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

#ifndef QTAWS_IOTCLIENT_H
#define QTAWS_IOTCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace IoT {

class IoTClientPrivate;

class QTAWS_EXPORT IoTClient : public AwsAbstractClient {
    Q_OBJECT

public:
    IoTClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    IoTClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcceptCertificateTransferResponse * acceptCertificateTransfer(const AcceptCertificateTransferRequest &request);
    AddThingToThingGroupResponse * addThingToThingGroup(const AddThingToThingGroupRequest &request);
    AssociateTargetsWithJobResponse * associateTargetsWithJob(const AssociateTargetsWithJobRequest &request);
    AttachPolicyResponse * attachPolicy(const AttachPolicyRequest &request);
    AttachPrincipalPolicyResponse * attachPrincipalPolicy(const AttachPrincipalPolicyRequest &request);
    AttachThingPrincipalResponse * attachThingPrincipal(const AttachThingPrincipalRequest &request);
    CancelCertificateTransferResponse * cancelCertificateTransfer(const CancelCertificateTransferRequest &request);
    CancelJobResponse * cancelJob(const CancelJobRequest &request);
    ClearDefaultAuthorizerResponse * clearDefaultAuthorizer(const ClearDefaultAuthorizerRequest &request);
    CreateAuthorizerResponse * createAuthorizer(const CreateAuthorizerRequest &request);
    CreateCertificateFromCsrResponse * createCertificateFromCsr(const CreateCertificateFromCsrRequest &request);
    CreateJobResponse * createJob(const CreateJobRequest &request);
    CreateKeysAndCertificateResponse * createKeysAndCertificate(const CreateKeysAndCertificateRequest &request);
    CreateOTAUpdateResponse * createOTAUpdate(const CreateOTAUpdateRequest &request);
    CreatePolicyResponse * createPolicy(const CreatePolicyRequest &request);
    CreatePolicyVersionResponse * createPolicyVersion(const CreatePolicyVersionRequest &request);
    CreateRoleAliasResponse * createRoleAlias(const CreateRoleAliasRequest &request);
    CreateStreamResponse * createStream(const CreateStreamRequest &request);
    CreateThingResponse * createThing(const CreateThingRequest &request);
    CreateThingGroupResponse * createThingGroup(const CreateThingGroupRequest &request);
    CreateThingTypeResponse * createThingType(const CreateThingTypeRequest &request);
    CreateTopicRuleResponse * createTopicRule(const CreateTopicRuleRequest &request);
    DeleteAuthorizerResponse * deleteAuthorizer(const DeleteAuthorizerRequest &request);
    DeleteCACertificateResponse * deleteCACertificate(const DeleteCACertificateRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DeleteOTAUpdateResponse * deleteOTAUpdate(const DeleteOTAUpdateRequest &request);
    DeletePolicyResponse * deletePolicy(const DeletePolicyRequest &request);
    DeletePolicyVersionResponse * deletePolicyVersion(const DeletePolicyVersionRequest &request);
    DeleteRegistrationCodeResponse * deleteRegistrationCode(const DeleteRegistrationCodeRequest &request);
    DeleteRoleAliasResponse * deleteRoleAlias(const DeleteRoleAliasRequest &request);
    DeleteStreamResponse * deleteStream(const DeleteStreamRequest &request);
    DeleteThingResponse * deleteThing(const DeleteThingRequest &request);
    DeleteThingGroupResponse * deleteThingGroup(const DeleteThingGroupRequest &request);
    DeleteThingTypeResponse * deleteThingType(const DeleteThingTypeRequest &request);
    DeleteTopicRuleResponse * deleteTopicRule(const DeleteTopicRuleRequest &request);
    DeleteV2LoggingLevelResponse * deleteV2LoggingLevel(const DeleteV2LoggingLevelRequest &request);
    DeprecateThingTypeResponse * deprecateThingType(const DeprecateThingTypeRequest &request);
    DescribeAuthorizerResponse * describeAuthorizer(const DescribeAuthorizerRequest &request);
    DescribeCACertificateResponse * describeCACertificate(const DescribeCACertificateRequest &request);
    DescribeCertificateResponse * describeCertificate(const DescribeCertificateRequest &request);
    DescribeDefaultAuthorizerResponse * describeDefaultAuthorizer(const DescribeDefaultAuthorizerRequest &request);
    DescribeEndpointResponse * describeEndpoint(const DescribeEndpointRequest &request);
    DescribeEventConfigurationsResponse * describeEventConfigurations(const DescribeEventConfigurationsRequest &request);
    DescribeIndexResponse * describeIndex(const DescribeIndexRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    DescribeJobExecutionResponse * describeJobExecution(const DescribeJobExecutionRequest &request);
    DescribeRoleAliasResponse * describeRoleAlias(const DescribeRoleAliasRequest &request);
    DescribeStreamResponse * describeStream(const DescribeStreamRequest &request);
    DescribeThingResponse * describeThing(const DescribeThingRequest &request);
    DescribeThingGroupResponse * describeThingGroup(const DescribeThingGroupRequest &request);
    DescribeThingRegistrationTaskResponse * describeThingRegistrationTask(const DescribeThingRegistrationTaskRequest &request);
    DescribeThingTypeResponse * describeThingType(const DescribeThingTypeRequest &request);
    DetachPolicyResponse * detachPolicy(const DetachPolicyRequest &request);
    DetachPrincipalPolicyResponse * detachPrincipalPolicy(const DetachPrincipalPolicyRequest &request);
    DetachThingPrincipalResponse * detachThingPrincipal(const DetachThingPrincipalRequest &request);
    DisableTopicRuleResponse * disableTopicRule(const DisableTopicRuleRequest &request);
    EnableTopicRuleResponse * enableTopicRule(const EnableTopicRuleRequest &request);
    GetEffectivePoliciesResponse * getEffectivePolicies(const GetEffectivePoliciesRequest &request);
    GetIndexingConfigurationResponse * getIndexingConfiguration(const GetIndexingConfigurationRequest &request);
    GetJobDocumentResponse * getJobDocument(const GetJobDocumentRequest &request);
    GetLoggingOptionsResponse * getLoggingOptions(const GetLoggingOptionsRequest &request);
    GetOTAUpdateResponse * getOTAUpdate(const GetOTAUpdateRequest &request);
    GetPolicyResponse * getPolicy(const GetPolicyRequest &request);
    GetPolicyVersionResponse * getPolicyVersion(const GetPolicyVersionRequest &request);
    GetRegistrationCodeResponse * getRegistrationCode(const GetRegistrationCodeRequest &request);
    GetTopicRuleResponse * getTopicRule(const GetTopicRuleRequest &request);
    GetV2LoggingOptionsResponse * getV2LoggingOptions(const GetV2LoggingOptionsRequest &request);
    ListAttachedPoliciesResponse * listAttachedPolicies(const ListAttachedPoliciesRequest &request);
    ListAuthorizersResponse * listAuthorizers(const ListAuthorizersRequest &request);
    ListCACertificatesResponse * listCACertificates(const ListCACertificatesRequest &request);
    ListCertificatesResponse * listCertificates(const ListCertificatesRequest &request);
    ListCertificatesByCAResponse * listCertificatesByCA(const ListCertificatesByCARequest &request);
    ListIndicesResponse * listIndices(const ListIndicesRequest &request);
    ListJobExecutionsForJobResponse * listJobExecutionsForJob(const ListJobExecutionsForJobRequest &request);
    ListJobExecutionsForThingResponse * listJobExecutionsForThing(const ListJobExecutionsForThingRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListOTAUpdatesResponse * listOTAUpdates(const ListOTAUpdatesRequest &request);
    ListOutgoingCertificatesResponse * listOutgoingCertificates(const ListOutgoingCertificatesRequest &request);
    ListPoliciesResponse * listPolicies(const ListPoliciesRequest &request);
    ListPolicyPrincipalsResponse * listPolicyPrincipals(const ListPolicyPrincipalsRequest &request);
    ListPolicyVersionsResponse * listPolicyVersions(const ListPolicyVersionsRequest &request);
    ListPrincipalPoliciesResponse * listPrincipalPolicies(const ListPrincipalPoliciesRequest &request);
    ListPrincipalThingsResponse * listPrincipalThings(const ListPrincipalThingsRequest &request);
    ListRoleAliasesResponse * listRoleAliases(const ListRoleAliasesRequest &request);
    ListStreamsResponse * listStreams(const ListStreamsRequest &request);
    ListTargetsForPolicyResponse * listTargetsForPolicy(const ListTargetsForPolicyRequest &request);
    ListThingGroupsResponse * listThingGroups(const ListThingGroupsRequest &request);
    ListThingGroupsForThingResponse * listThingGroupsForThing(const ListThingGroupsForThingRequest &request);
    ListThingPrincipalsResponse * listThingPrincipals(const ListThingPrincipalsRequest &request);
    ListThingRegistrationTaskReportsResponse * listThingRegistrationTaskReports(const ListThingRegistrationTaskReportsRequest &request);
    ListThingRegistrationTasksResponse * listThingRegistrationTasks(const ListThingRegistrationTasksRequest &request);
    ListThingTypesResponse * listThingTypes(const ListThingTypesRequest &request);
    ListThingsResponse * listThings(const ListThingsRequest &request);
    ListThingsInThingGroupResponse * listThingsInThingGroup(const ListThingsInThingGroupRequest &request);
    ListTopicRulesResponse * listTopicRules(const ListTopicRulesRequest &request);
    ListV2LoggingLevelsResponse * listV2LoggingLevels(const ListV2LoggingLevelsRequest &request);
    RegisterCACertificateResponse * registerCACertificate(const RegisterCACertificateRequest &request);
    RegisterCertificateResponse * registerCertificate(const RegisterCertificateRequest &request);
    RegisterThingResponse * registerThing(const RegisterThingRequest &request);
    RejectCertificateTransferResponse * rejectCertificateTransfer(const RejectCertificateTransferRequest &request);
    RemoveThingFromThingGroupResponse * removeThingFromThingGroup(const RemoveThingFromThingGroupRequest &request);
    ReplaceTopicRuleResponse * replaceTopicRule(const ReplaceTopicRuleRequest &request);
    SearchIndexResponse * searchIndex(const SearchIndexRequest &request);
    SetDefaultAuthorizerResponse * setDefaultAuthorizer(const SetDefaultAuthorizerRequest &request);
    SetDefaultPolicyVersionResponse * setDefaultPolicyVersion(const SetDefaultPolicyVersionRequest &request);
    SetLoggingOptionsResponse * setLoggingOptions(const SetLoggingOptionsRequest &request);
    SetV2LoggingLevelResponse * setV2LoggingLevel(const SetV2LoggingLevelRequest &request);
    SetV2LoggingOptionsResponse * setV2LoggingOptions(const SetV2LoggingOptionsRequest &request);
    StartThingRegistrationTaskResponse * startThingRegistrationTask(const StartThingRegistrationTaskRequest &request);
    StopThingRegistrationTaskResponse * stopThingRegistrationTask(const StopThingRegistrationTaskRequest &request);
    TestAuthorizationResponse * testAuthorization(const TestAuthorizationRequest &request);
    TestInvokeAuthorizerResponse * testInvokeAuthorizer(const TestInvokeAuthorizerRequest &request);
    TransferCertificateResponse * transferCertificate(const TransferCertificateRequest &request);
    UpdateAuthorizerResponse * updateAuthorizer(const UpdateAuthorizerRequest &request);
    UpdateCACertificateResponse * updateCACertificate(const UpdateCACertificateRequest &request);
    UpdateCertificateResponse * updateCertificate(const UpdateCertificateRequest &request);
    UpdateEventConfigurationsResponse * updateEventConfigurations(const UpdateEventConfigurationsRequest &request);
    UpdateIndexingConfigurationResponse * updateIndexingConfiguration(const UpdateIndexingConfigurationRequest &request);
    UpdateRoleAliasResponse * updateRoleAlias(const UpdateRoleAliasRequest &request);
    UpdateStreamResponse * updateStream(const UpdateStreamRequest &request);
    UpdateThingResponse * updateThing(const UpdateThingRequest &request);
    UpdateThingGroupResponse * updateThingGroup(const UpdateThingGroupRequest &request);
    UpdateThingGroupsForThingResponse * updateThingGroupsForThing(const UpdateThingGroupsForThingRequest &request);

private:
    Q_DECLARE_PRIVATE(IoTClient)
    Q_DISABLE_COPY(IoTClient)

};

} // namespace IoT
} // namespace AWS

#endif
