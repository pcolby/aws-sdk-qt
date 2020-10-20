/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_KMSCLIENT_H
#define QTAWS_KMSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace KMS {

class KmsClientPrivate;
class CancelKeyDeletionRequest;
class CancelKeyDeletionResponse;
class ConnectCustomKeyStoreRequest;
class ConnectCustomKeyStoreResponse;
class CreateAliasRequest;
class CreateAliasResponse;
class CreateCustomKeyStoreRequest;
class CreateCustomKeyStoreResponse;
class CreateGrantRequest;
class CreateGrantResponse;
class CreateKeyRequest;
class CreateKeyResponse;
class DecryptRequest;
class DecryptResponse;
class DeleteAliasRequest;
class DeleteAliasResponse;
class DeleteCustomKeyStoreRequest;
class DeleteCustomKeyStoreResponse;
class DeleteImportedKeyMaterialRequest;
class DeleteImportedKeyMaterialResponse;
class DescribeCustomKeyStoresRequest;
class DescribeCustomKeyStoresResponse;
class DescribeKeyRequest;
class DescribeKeyResponse;
class DisableKeyRequest;
class DisableKeyResponse;
class DisableKeyRotationRequest;
class DisableKeyRotationResponse;
class DisconnectCustomKeyStoreRequest;
class DisconnectCustomKeyStoreResponse;
class EnableKeyRequest;
class EnableKeyResponse;
class EnableKeyRotationRequest;
class EnableKeyRotationResponse;
class EncryptRequest;
class EncryptResponse;
class GenerateDataKeyRequest;
class GenerateDataKeyResponse;
class GenerateDataKeyWithoutPlaintextRequest;
class GenerateDataKeyWithoutPlaintextResponse;
class GenerateRandomRequest;
class GenerateRandomResponse;
class GetKeyPolicyRequest;
class GetKeyPolicyResponse;
class GetKeyRotationStatusRequest;
class GetKeyRotationStatusResponse;
class GetParametersForImportRequest;
class GetParametersForImportResponse;
class ImportKeyMaterialRequest;
class ImportKeyMaterialResponse;
class ListAliasesRequest;
class ListAliasesResponse;
class ListGrantsRequest;
class ListGrantsResponse;
class ListKeyPoliciesRequest;
class ListKeyPoliciesResponse;
class ListKeysRequest;
class ListKeysResponse;
class ListResourceTagsRequest;
class ListResourceTagsResponse;
class ListRetirableGrantsRequest;
class ListRetirableGrantsResponse;
class PutKeyPolicyRequest;
class PutKeyPolicyResponse;
class ReEncryptRequest;
class ReEncryptResponse;
class RetireGrantRequest;
class RetireGrantResponse;
class RevokeGrantRequest;
class RevokeGrantResponse;
class ScheduleKeyDeletionRequest;
class ScheduleKeyDeletionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAliasRequest;
class UpdateAliasResponse;
class UpdateCustomKeyStoreRequest;
class UpdateCustomKeyStoreResponse;
class UpdateKeyDescriptionRequest;
class UpdateKeyDescriptionResponse;

class QTAWS_EXPORT KmsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KmsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KmsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelKeyDeletionResponse * cancelKeyDeletion(const CancelKeyDeletionRequest &request);
    ConnectCustomKeyStoreResponse * connectCustomKeyStore(const ConnectCustomKeyStoreRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateCustomKeyStoreResponse * createCustomKeyStore(const CreateCustomKeyStoreRequest &request);
    CreateGrantResponse * createGrant(const CreateGrantRequest &request);
    CreateKeyResponse * createKey(const CreateKeyRequest &request);
    DecryptResponse * decrypt(const DecryptRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteCustomKeyStoreResponse * deleteCustomKeyStore(const DeleteCustomKeyStoreRequest &request);
    DeleteImportedKeyMaterialResponse * deleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest &request);
    DescribeCustomKeyStoresResponse * describeCustomKeyStores(const DescribeCustomKeyStoresRequest &request);
    DescribeKeyResponse * describeKey(const DescribeKeyRequest &request);
    DisableKeyResponse * disableKey(const DisableKeyRequest &request);
    DisableKeyRotationResponse * disableKeyRotation(const DisableKeyRotationRequest &request);
    DisconnectCustomKeyStoreResponse * disconnectCustomKeyStore(const DisconnectCustomKeyStoreRequest &request);
    EnableKeyResponse * enableKey(const EnableKeyRequest &request);
    EnableKeyRotationResponse * enableKeyRotation(const EnableKeyRotationRequest &request);
    EncryptResponse * encrypt(const EncryptRequest &request);
    GenerateDataKeyResponse * generateDataKey(const GenerateDataKeyRequest &request);
    GenerateDataKeyWithoutPlaintextResponse * generateDataKeyWithoutPlaintext(const GenerateDataKeyWithoutPlaintextRequest &request);
    GenerateRandomResponse * generateRandom(const GenerateRandomRequest &request);
    GetKeyPolicyResponse * getKeyPolicy(const GetKeyPolicyRequest &request);
    GetKeyRotationStatusResponse * getKeyRotationStatus(const GetKeyRotationStatusRequest &request);
    GetParametersForImportResponse * getParametersForImport(const GetParametersForImportRequest &request);
    ImportKeyMaterialResponse * importKeyMaterial(const ImportKeyMaterialRequest &request);
    ListAliasesResponse * listAliases(const ListAliasesRequest &request);
    ListGrantsResponse * listGrants(const ListGrantsRequest &request);
    ListKeyPoliciesResponse * listKeyPolicies(const ListKeyPoliciesRequest &request);
    ListKeysResponse * listKeys(const ListKeysRequest &request);
    ListResourceTagsResponse * listResourceTags(const ListResourceTagsRequest &request);
    ListRetirableGrantsResponse * listRetirableGrants(const ListRetirableGrantsRequest &request);
    PutKeyPolicyResponse * putKeyPolicy(const PutKeyPolicyRequest &request);
    ReEncryptResponse * reEncrypt(const ReEncryptRequest &request);
    RetireGrantResponse * retireGrant(const RetireGrantRequest &request);
    RevokeGrantResponse * revokeGrant(const RevokeGrantRequest &request);
    ScheduleKeyDeletionResponse * scheduleKeyDeletion(const ScheduleKeyDeletionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAliasResponse * updateAlias(const UpdateAliasRequest &request);
    UpdateCustomKeyStoreResponse * updateCustomKeyStore(const UpdateCustomKeyStoreRequest &request);
    UpdateKeyDescriptionResponse * updateKeyDescription(const UpdateKeyDescriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(KmsClient)
    Q_DISABLE_COPY(KmsClient)

};

} // namespace KMS
} // namespace QtAws

#endif
