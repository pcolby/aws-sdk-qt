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

#ifndef QTAWS_SECRETSMANAGERCLIENT_H
#define QTAWS_SECRETSMANAGERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SecretsManager {

class SecretsManagerClientPrivate;
class CancelRotateSecretRequest;
class CancelRotateSecretResponse;
class CreateSecretRequest;
class CreateSecretResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSecretRequest;
class DeleteSecretResponse;
class DescribeSecretRequest;
class DescribeSecretResponse;
class GetRandomPasswordRequest;
class GetRandomPasswordResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class GetSecretValueRequest;
class GetSecretValueResponse;
class ListSecretVersionIdsRequest;
class ListSecretVersionIdsResponse;
class ListSecretsRequest;
class ListSecretsResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class PutSecretValueRequest;
class PutSecretValueResponse;
class RemoveRegionsFromReplicationRequest;
class RemoveRegionsFromReplicationResponse;
class ReplicateSecretToRegionsRequest;
class ReplicateSecretToRegionsResponse;
class RestoreSecretRequest;
class RestoreSecretResponse;
class RotateSecretRequest;
class RotateSecretResponse;
class StopReplicationToReplicaRequest;
class StopReplicationToReplicaResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateSecretRequest;
class UpdateSecretResponse;
class UpdateSecretVersionStageRequest;
class UpdateSecretVersionStageResponse;
class ValidateResourcePolicyRequest;
class ValidateResourcePolicyResponse;

class QTAWS_EXPORT SecretsManagerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SecretsManagerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SecretsManagerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelRotateSecretResponse * cancelRotateSecret(const CancelRotateSecretRequest &request);
    CreateSecretResponse * createSecret(const CreateSecretRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSecretResponse * deleteSecret(const DeleteSecretRequest &request);
    DescribeSecretResponse * describeSecret(const DescribeSecretRequest &request);
    GetRandomPasswordResponse * getRandomPassword(const GetRandomPasswordRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    GetSecretValueResponse * getSecretValue(const GetSecretValueRequest &request);
    ListSecretVersionIdsResponse * listSecretVersionIds(const ListSecretVersionIdsRequest &request);
    ListSecretsResponse * listSecrets(const ListSecretsRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    PutSecretValueResponse * putSecretValue(const PutSecretValueRequest &request);
    RemoveRegionsFromReplicationResponse * removeRegionsFromReplication(const RemoveRegionsFromReplicationRequest &request);
    ReplicateSecretToRegionsResponse * replicateSecretToRegions(const ReplicateSecretToRegionsRequest &request);
    RestoreSecretResponse * restoreSecret(const RestoreSecretRequest &request);
    RotateSecretResponse * rotateSecret(const RotateSecretRequest &request);
    StopReplicationToReplicaResponse * stopReplicationToReplica(const StopReplicationToReplicaRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateSecretResponse * updateSecret(const UpdateSecretRequest &request);
    UpdateSecretVersionStageResponse * updateSecretVersionStage(const UpdateSecretVersionStageRequest &request);
    ValidateResourcePolicyResponse * validateResourcePolicy(const ValidateResourcePolicyRequest &request);

protected:
    /// @cond internal
    SecretsManagerClientPrivate * const d_ptr; ///< Internal d-pointer.
    SecretsManagerClient(SecretsManagerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(SecretsManagerClient)
    Q_DISABLE_COPY(SecretsManagerClient)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
