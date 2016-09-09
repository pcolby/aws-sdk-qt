/*
    Copyright 2013-2016 Paul Colby

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

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    KmsCancelKeyDeletionResponse * cancelKeyDeletion(const KmsCancelKeyDeletionRequest &request);
    KmsCreateAliasResponse * createAlias(const KmsCreateAliasRequest &request);
    KmsCreateGrantResponse * createGrant(const KmsCreateGrantRequest &request);
    KmsCreateKeyResponse * createKey(const KmsCreateKeyRequest &request);
    KmsDecryptResponse * decrypt(const KmsDecryptRequest &request);
    KmsDeleteAliasResponse * deleteAlias(const KmsDeleteAliasRequest &request);
    KmsDeleteImportedKeyMaterialResponse * deleteImportedKeyMaterial(const KmsDeleteImportedKeyMaterialRequest &request);
    KmsDescribeKeyResponse * describeKey(const KmsDescribeKeyRequest &request);
    KmsDisableKeyResponse * disableKey(const KmsDisableKeyRequest &request);
    KmsDisableKeyRotationResponse * disableKeyRotation(const KmsDisableKeyRotationRequest &request);
    KmsEnableKeyResponse * enableKey(const KmsEnableKeyRequest &request);
    KmsEnableKeyRotationResponse * enableKeyRotation(const KmsEnableKeyRotationRequest &request);
    KmsEncryptResponse * encrypt(const KmsEncryptRequest &request);
    KmsGenerateDataKeyResponse * generateDataKey(const KmsGenerateDataKeyRequest &request);
    KmsGenerateDataKeyWithoutPlaintextResponse * generateDataKeyWithoutPlaintext(const KmsGenerateDataKeyWithoutPlaintextRequest &request);
    KmsGenerateRandomResponse * generateRandom(const KmsGenerateRandomRequest &request);
    KmsGetKeyPolicyResponse * getKeyPolicy(const KmsGetKeyPolicyRequest &request);
    KmsGetKeyRotationStatusResponse * getKeyRotationStatus(const KmsGetKeyRotationStatusRequest &request);
    KmsGetParametersForImportResponse * getParametersForImport(const KmsGetParametersForImportRequest &request);
    KmsImportKeyMaterialResponse * importKeyMaterial(const KmsImportKeyMaterialRequest &request);
    KmsListAliasesResponse * listAliases(const KmsListAliasesRequest &request);
    KmsListGrantsResponse * listGrants(const KmsListGrantsRequest &request);
    KmsListKeyPoliciesResponse * listKeyPolicies(const KmsListKeyPoliciesRequest &request);
    KmsListKeysResponse * listKeys(const KmsListKeysRequest &request);
    KmsListRetirableGrantsResponse * listRetirableGrants(const KmsListRetirableGrantsRequest &request);
    KmsPutKeyPolicyResponse * putKeyPolicy(const KmsPutKeyPolicyRequest &request);
    KmsReEncryptResponse * reEncrypt(const KmsReEncryptRequest &request);
    KmsRetireGrantResponse * retireGrant(const KmsRetireGrantRequest &request);
    KmsRevokeGrantResponse * revokeGrant(const KmsRevokeGrantRequest &request);
    KmsScheduleKeyDeletionResponse * scheduleKeyDeletion(const KmsScheduleKeyDeletionRequest &request);
    KmsUpdateAliasResponse * updateAlias(const KmsUpdateAliasRequest &request);
    KmsUpdateKeyDescriptionResponse * updateKeyDescription(const KmsUpdateKeyDescriptionRequest &request);

private:
    Q_DECLARE_PRIVATE(KmsClient)
    Q_DISABLE_COPY(KmsClient)

};

QTAWS_END_NAMESPACE

#endif
