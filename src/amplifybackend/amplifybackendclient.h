// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYBACKENDCLIENT_H
#define QTAWS_AMPLIFYBACKENDCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsamplifybackendglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AmplifyBackend {

class AmplifyBackendClientPrivate;
class CloneBackendRequest;
class CloneBackendResponse;
class CreateBackendRequest;
class CreateBackendResponse;
class CreateBackendAPIRequest;
class CreateBackendAPIResponse;
class CreateBackendAuthRequest;
class CreateBackendAuthResponse;
class CreateBackendConfigRequest;
class CreateBackendConfigResponse;
class CreateBackendStorageRequest;
class CreateBackendStorageResponse;
class CreateTokenRequest;
class CreateTokenResponse;
class DeleteBackendRequest;
class DeleteBackendResponse;
class DeleteBackendAPIRequest;
class DeleteBackendAPIResponse;
class DeleteBackendAuthRequest;
class DeleteBackendAuthResponse;
class DeleteBackendStorageRequest;
class DeleteBackendStorageResponse;
class DeleteTokenRequest;
class DeleteTokenResponse;
class GenerateBackendAPIModelsRequest;
class GenerateBackendAPIModelsResponse;
class GetBackendRequest;
class GetBackendResponse;
class GetBackendAPIRequest;
class GetBackendAPIResponse;
class GetBackendAPIModelsRequest;
class GetBackendAPIModelsResponse;
class GetBackendAuthRequest;
class GetBackendAuthResponse;
class GetBackendJobRequest;
class GetBackendJobResponse;
class GetBackendStorageRequest;
class GetBackendStorageResponse;
class GetTokenRequest;
class GetTokenResponse;
class ImportBackendAuthRequest;
class ImportBackendAuthResponse;
class ImportBackendStorageRequest;
class ImportBackendStorageResponse;
class ListBackendJobsRequest;
class ListBackendJobsResponse;
class ListS3BucketsRequest;
class ListS3BucketsResponse;
class RemoveAllBackendsRequest;
class RemoveAllBackendsResponse;
class RemoveBackendConfigRequest;
class RemoveBackendConfigResponse;
class UpdateBackendAPIRequest;
class UpdateBackendAPIResponse;
class UpdateBackendAuthRequest;
class UpdateBackendAuthResponse;
class UpdateBackendConfigRequest;
class UpdateBackendConfigResponse;
class UpdateBackendJobRequest;
class UpdateBackendJobResponse;
class UpdateBackendStorageRequest;
class UpdateBackendStorageResponse;

class QTAWSAMPLIFYBACKEND_EXPORT AmplifyBackendClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AmplifyBackendClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AmplifyBackendClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CloneBackendResponse * cloneBackend(const CloneBackendRequest &request);
    CreateBackendResponse * createBackend(const CreateBackendRequest &request);
    CreateBackendAPIResponse * createBackendAPI(const CreateBackendAPIRequest &request);
    CreateBackendAuthResponse * createBackendAuth(const CreateBackendAuthRequest &request);
    CreateBackendConfigResponse * createBackendConfig(const CreateBackendConfigRequest &request);
    CreateBackendStorageResponse * createBackendStorage(const CreateBackendStorageRequest &request);
    CreateTokenResponse * createToken(const CreateTokenRequest &request);
    DeleteBackendResponse * deleteBackend(const DeleteBackendRequest &request);
    DeleteBackendAPIResponse * deleteBackendAPI(const DeleteBackendAPIRequest &request);
    DeleteBackendAuthResponse * deleteBackendAuth(const DeleteBackendAuthRequest &request);
    DeleteBackendStorageResponse * deleteBackendStorage(const DeleteBackendStorageRequest &request);
    DeleteTokenResponse * deleteToken(const DeleteTokenRequest &request);
    GenerateBackendAPIModelsResponse * generateBackendAPIModels(const GenerateBackendAPIModelsRequest &request);
    GetBackendResponse * getBackend(const GetBackendRequest &request);
    GetBackendAPIResponse * getBackendAPI(const GetBackendAPIRequest &request);
    GetBackendAPIModelsResponse * getBackendAPIModels(const GetBackendAPIModelsRequest &request);
    GetBackendAuthResponse * getBackendAuth(const GetBackendAuthRequest &request);
    GetBackendJobResponse * getBackendJob(const GetBackendJobRequest &request);
    GetBackendStorageResponse * getBackendStorage(const GetBackendStorageRequest &request);
    GetTokenResponse * getToken(const GetTokenRequest &request);
    ImportBackendAuthResponse * importBackendAuth(const ImportBackendAuthRequest &request);
    ImportBackendStorageResponse * importBackendStorage(const ImportBackendStorageRequest &request);
    ListBackendJobsResponse * listBackendJobs(const ListBackendJobsRequest &request);
    ListS3BucketsResponse * listS3Buckets(const ListS3BucketsRequest &request);
    RemoveAllBackendsResponse * removeAllBackends(const RemoveAllBackendsRequest &request);
    RemoveBackendConfigResponse * removeBackendConfig(const RemoveBackendConfigRequest &request);
    UpdateBackendAPIResponse * updateBackendAPI(const UpdateBackendAPIRequest &request);
    UpdateBackendAuthResponse * updateBackendAuth(const UpdateBackendAuthRequest &request);
    UpdateBackendConfigResponse * updateBackendConfig(const UpdateBackendConfigRequest &request);
    UpdateBackendJobResponse * updateBackendJob(const UpdateBackendJobRequest &request);
    UpdateBackendStorageResponse * updateBackendStorage(const UpdateBackendStorageRequest &request);

private:
    Q_DECLARE_PRIVATE(AmplifyBackendClient)
    Q_DISABLE_COPY(AmplifyBackendClient)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
