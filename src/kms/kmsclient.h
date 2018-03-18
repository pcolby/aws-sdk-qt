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

#ifndef QTAWS_KMSCLIENT_H
#define QTAWS_KMSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace KMS {

class KmsClientPrivate;

class QTAWS_EXPORT KmsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    KmsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KmsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelKeyDeletionResponse * cancelKeyDeletion(const CancelKeyDeletionRequest &request);
    CreateAliasResponse * createAlias(const CreateAliasRequest &request);
    CreateGrantResponse * createGrant(const CreateGrantRequest &request);
    CreateKeyResponse * createKey(const CreateKeyRequest &request);
    DecryptResponse * decrypt(const DecryptRequest &request);
    DeleteAliasResponse * deleteAlias(const DeleteAliasRequest &request);
    DeleteImportedKeyMaterialResponse * deleteImportedKeyMaterial(const DeleteImportedKeyMaterialRequest &request);
    DescribeKeyResponse * describeKey(const DescribeKeyRequest &request);
    DisableKeyResponse * disableKey(const DisableKeyRequest &request);
    DisableKeyRotationResponse * disableKeyRotation(const DisableKeyRotationRequest &request);
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
    UpdateKeyDescriptionResponse * updateKeyDescription(const UpdateKeyDescriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(KmsClient)
    Q_DISABLE_COPY(KmsClient)

};

} // namespace KMS
} // namespace AWS

#endif
