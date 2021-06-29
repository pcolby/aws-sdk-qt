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
class CreateTokenRequest;
class CreateTokenResponse;
class DeleteBackendRequest;
class DeleteBackendResponse;
class DeleteBackendAPIRequest;
class DeleteBackendAPIResponse;
class DeleteBackendAuthRequest;
class DeleteBackendAuthResponse;
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
class GetTokenRequest;
class GetTokenResponse;
class ListBackendJobsRequest;
class ListBackendJobsResponse;
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
    CreateTokenResponse * createToken(const CreateTokenRequest &request);
    DeleteBackendResponse * deleteBackend(const DeleteBackendRequest &request);
    DeleteBackendAPIResponse * deleteBackendAPI(const DeleteBackendAPIRequest &request);
    DeleteBackendAuthResponse * deleteBackendAuth(const DeleteBackendAuthRequest &request);
    DeleteTokenResponse * deleteToken(const DeleteTokenRequest &request);
    GenerateBackendAPIModelsResponse * generateBackendAPIModels(const GenerateBackendAPIModelsRequest &request);
    GetBackendResponse * getBackend(const GetBackendRequest &request);
    GetBackendAPIResponse * getBackendAPI(const GetBackendAPIRequest &request);
    GetBackendAPIModelsResponse * getBackendAPIModels(const GetBackendAPIModelsRequest &request);
    GetBackendAuthResponse * getBackendAuth(const GetBackendAuthRequest &request);
    GetBackendJobResponse * getBackendJob(const GetBackendJobRequest &request);
    GetTokenResponse * getToken(const GetTokenRequest &request);
    ListBackendJobsResponse * listBackendJobs(const ListBackendJobsRequest &request);
    RemoveAllBackendsResponse * removeAllBackends(const RemoveAllBackendsRequest &request);
    RemoveBackendConfigResponse * removeBackendConfig(const RemoveBackendConfigRequest &request);
    UpdateBackendAPIResponse * updateBackendAPI(const UpdateBackendAPIRequest &request);
    UpdateBackendAuthResponse * updateBackendAuth(const UpdateBackendAuthRequest &request);
    UpdateBackendConfigResponse * updateBackendConfig(const UpdateBackendConfigRequest &request);
    UpdateBackendJobResponse * updateBackendJob(const UpdateBackendJobRequest &request);

protected:
    /// @cond internal
    AmplifyBackendClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit AmplifyBackendClient(AmplifyBackendClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(AmplifyBackendClient)
    Q_DISABLE_COPY(AmplifyBackendClient)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
