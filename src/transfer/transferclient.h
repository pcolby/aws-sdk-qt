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

#ifndef QTAWS_TRANSFERCLIENT_H
#define QTAWS_TRANSFERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawstransferglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Transfer {

class TransferClientPrivate;
class CreateAccessRequest;
class CreateAccessResponse;
class CreateAgreementRequest;
class CreateAgreementResponse;
class CreateConnectorRequest;
class CreateConnectorResponse;
class CreateProfileRequest;
class CreateProfileResponse;
class CreateServerRequest;
class CreateServerResponse;
class CreateUserRequest;
class CreateUserResponse;
class CreateWorkflowRequest;
class CreateWorkflowResponse;
class DeleteAccessRequest;
class DeleteAccessResponse;
class DeleteAgreementRequest;
class DeleteAgreementResponse;
class DeleteCertificateRequest;
class DeleteCertificateResponse;
class DeleteConnectorRequest;
class DeleteConnectorResponse;
class DeleteHostKeyRequest;
class DeleteHostKeyResponse;
class DeleteProfileRequest;
class DeleteProfileResponse;
class DeleteServerRequest;
class DeleteServerResponse;
class DeleteSshPublicKeyRequest;
class DeleteSshPublicKeyResponse;
class DeleteUserRequest;
class DeleteUserResponse;
class DeleteWorkflowRequest;
class DeleteWorkflowResponse;
class DescribeAccessRequest;
class DescribeAccessResponse;
class DescribeAgreementRequest;
class DescribeAgreementResponse;
class DescribeCertificateRequest;
class DescribeCertificateResponse;
class DescribeConnectorRequest;
class DescribeConnectorResponse;
class DescribeExecutionRequest;
class DescribeExecutionResponse;
class DescribeHostKeyRequest;
class DescribeHostKeyResponse;
class DescribeProfileRequest;
class DescribeProfileResponse;
class DescribeSecurityPolicyRequest;
class DescribeSecurityPolicyResponse;
class DescribeServerRequest;
class DescribeServerResponse;
class DescribeUserRequest;
class DescribeUserResponse;
class DescribeWorkflowRequest;
class DescribeWorkflowResponse;
class ImportCertificateRequest;
class ImportCertificateResponse;
class ImportHostKeyRequest;
class ImportHostKeyResponse;
class ImportSshPublicKeyRequest;
class ImportSshPublicKeyResponse;
class ListAccessesRequest;
class ListAccessesResponse;
class ListAgreementsRequest;
class ListAgreementsResponse;
class ListCertificatesRequest;
class ListCertificatesResponse;
class ListConnectorsRequest;
class ListConnectorsResponse;
class ListExecutionsRequest;
class ListExecutionsResponse;
class ListHostKeysRequest;
class ListHostKeysResponse;
class ListProfilesRequest;
class ListProfilesResponse;
class ListSecurityPoliciesRequest;
class ListSecurityPoliciesResponse;
class ListServersRequest;
class ListServersResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListUsersRequest;
class ListUsersResponse;
class ListWorkflowsRequest;
class ListWorkflowsResponse;
class SendWorkflowStepStateRequest;
class SendWorkflowStepStateResponse;
class StartFileTransferRequest;
class StartFileTransferResponse;
class StartServerRequest;
class StartServerResponse;
class StopServerRequest;
class StopServerResponse;
class TagResourceRequest;
class TagResourceResponse;
class TestIdentityProviderRequest;
class TestIdentityProviderResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAccessRequest;
class UpdateAccessResponse;
class UpdateAgreementRequest;
class UpdateAgreementResponse;
class UpdateCertificateRequest;
class UpdateCertificateResponse;
class UpdateConnectorRequest;
class UpdateConnectorResponse;
class UpdateHostKeyRequest;
class UpdateHostKeyResponse;
class UpdateProfileRequest;
class UpdateProfileResponse;
class UpdateServerRequest;
class UpdateServerResponse;
class UpdateUserRequest;
class UpdateUserResponse;

class QTAWSTRANSFER_EXPORT TransferClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    TransferClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit TransferClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAccessResponse * createAccess(const CreateAccessRequest &request);
    CreateAgreementResponse * createAgreement(const CreateAgreementRequest &request);
    CreateConnectorResponse * createConnector(const CreateConnectorRequest &request);
    CreateProfileResponse * createProfile(const CreateProfileRequest &request);
    CreateServerResponse * createServer(const CreateServerRequest &request);
    CreateUserResponse * createUser(const CreateUserRequest &request);
    CreateWorkflowResponse * createWorkflow(const CreateWorkflowRequest &request);
    DeleteAccessResponse * deleteAccess(const DeleteAccessRequest &request);
    DeleteAgreementResponse * deleteAgreement(const DeleteAgreementRequest &request);
    DeleteCertificateResponse * deleteCertificate(const DeleteCertificateRequest &request);
    DeleteConnectorResponse * deleteConnector(const DeleteConnectorRequest &request);
    DeleteHostKeyResponse * deleteHostKey(const DeleteHostKeyRequest &request);
    DeleteProfileResponse * deleteProfile(const DeleteProfileRequest &request);
    DeleteServerResponse * deleteServer(const DeleteServerRequest &request);
    DeleteSshPublicKeyResponse * deleteSshPublicKey(const DeleteSshPublicKeyRequest &request);
    DeleteUserResponse * deleteUser(const DeleteUserRequest &request);
    DeleteWorkflowResponse * deleteWorkflow(const DeleteWorkflowRequest &request);
    DescribeAccessResponse * describeAccess(const DescribeAccessRequest &request);
    DescribeAgreementResponse * describeAgreement(const DescribeAgreementRequest &request);
    DescribeCertificateResponse * describeCertificate(const DescribeCertificateRequest &request);
    DescribeConnectorResponse * describeConnector(const DescribeConnectorRequest &request);
    DescribeExecutionResponse * describeExecution(const DescribeExecutionRequest &request);
    DescribeHostKeyResponse * describeHostKey(const DescribeHostKeyRequest &request);
    DescribeProfileResponse * describeProfile(const DescribeProfileRequest &request);
    DescribeSecurityPolicyResponse * describeSecurityPolicy(const DescribeSecurityPolicyRequest &request);
    DescribeServerResponse * describeServer(const DescribeServerRequest &request);
    DescribeUserResponse * describeUser(const DescribeUserRequest &request);
    DescribeWorkflowResponse * describeWorkflow(const DescribeWorkflowRequest &request);
    ImportCertificateResponse * importCertificate(const ImportCertificateRequest &request);
    ImportHostKeyResponse * importHostKey(const ImportHostKeyRequest &request);
    ImportSshPublicKeyResponse * importSshPublicKey(const ImportSshPublicKeyRequest &request);
    ListAccessesResponse * listAccesses(const ListAccessesRequest &request);
    ListAgreementsResponse * listAgreements(const ListAgreementsRequest &request);
    ListCertificatesResponse * listCertificates(const ListCertificatesRequest &request);
    ListConnectorsResponse * listConnectors(const ListConnectorsRequest &request);
    ListExecutionsResponse * listExecutions(const ListExecutionsRequest &request);
    ListHostKeysResponse * listHostKeys(const ListHostKeysRequest &request);
    ListProfilesResponse * listProfiles(const ListProfilesRequest &request);
    ListSecurityPoliciesResponse * listSecurityPolicies(const ListSecurityPoliciesRequest &request);
    ListServersResponse * listServers(const ListServersRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListUsersResponse * listUsers(const ListUsersRequest &request);
    ListWorkflowsResponse * listWorkflows(const ListWorkflowsRequest &request);
    SendWorkflowStepStateResponse * sendWorkflowStepState(const SendWorkflowStepStateRequest &request);
    StartFileTransferResponse * startFileTransfer(const StartFileTransferRequest &request);
    StartServerResponse * startServer(const StartServerRequest &request);
    StopServerResponse * stopServer(const StopServerRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    TestIdentityProviderResponse * testIdentityProvider(const TestIdentityProviderRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAccessResponse * updateAccess(const UpdateAccessRequest &request);
    UpdateAgreementResponse * updateAgreement(const UpdateAgreementRequest &request);
    UpdateCertificateResponse * updateCertificate(const UpdateCertificateRequest &request);
    UpdateConnectorResponse * updateConnector(const UpdateConnectorRequest &request);
    UpdateHostKeyResponse * updateHostKey(const UpdateHostKeyRequest &request);
    UpdateProfileResponse * updateProfile(const UpdateProfileRequest &request);
    UpdateServerResponse * updateServer(const UpdateServerRequest &request);
    UpdateUserResponse * updateUser(const UpdateUserRequest &request);

private:
    Q_DECLARE_PRIVATE(TransferClient)
    Q_DISABLE_COPY(TransferClient)

};

} // namespace Transfer
} // namespace QtAws

#endif
