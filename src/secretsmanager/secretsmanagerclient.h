/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
class DeleteSecretRequest;
class DeleteSecretResponse;
class DescribeSecretRequest;
class DescribeSecretResponse;
class GetRandomPasswordRequest;
class GetRandomPasswordResponse;
class GetSecretValueRequest;
class GetSecretValueResponse;
class ListSecretVersionIdsRequest;
class ListSecretVersionIdsResponse;
class ListSecretsRequest;
class ListSecretsResponse;
class PutSecretValueRequest;
class PutSecretValueResponse;
class RestoreSecretRequest;
class RestoreSecretResponse;
class RotateSecretRequest;
class RotateSecretResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateSecretRequest;
class UpdateSecretResponse;
class UpdateSecretVersionStageRequest;
class UpdateSecretVersionStageResponse;

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
    DeleteSecretResponse * deleteSecret(const DeleteSecretRequest &request);
    DescribeSecretResponse * describeSecret(const DescribeSecretRequest &request);
    GetRandomPasswordResponse * getRandomPassword(const GetRandomPasswordRequest &request);
    GetSecretValueResponse * getSecretValue(const GetSecretValueRequest &request);
    ListSecretVersionIdsResponse * listSecretVersionIds(const ListSecretVersionIdsRequest &request);
    ListSecretsResponse * listSecrets(const ListSecretsRequest &request);
    PutSecretValueResponse * putSecretValue(const PutSecretValueRequest &request);
    RestoreSecretResponse * restoreSecret(const RestoreSecretRequest &request);
    RotateSecretResponse * rotateSecret(const RotateSecretRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateSecretResponse * updateSecret(const UpdateSecretRequest &request);
    UpdateSecretVersionStageResponse * updateSecretVersionStage(const UpdateSecretVersionStageRequest &request);

private:
    Q_DECLARE_PRIVATE(SecretsManagerClient)
    Q_DISABLE_COPY(SecretsManagerClient)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
