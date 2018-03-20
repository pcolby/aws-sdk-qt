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

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryClientPrivate;
class CreateApplicationResponse;
class CreateApplicationVersionResponse;
class CreateCloudFormationChangeSetResponse;
class DeleteApplicationResponse;
class GetApplicationResponse;
class GetApplicationPolicyResponse;
class ListApplicationVersionsResponse;
class ListApplicationsResponse;
class PutApplicationPolicyResponse;
class UpdateApplicationResponse;

class QTAWS_EXPORT ServerlessApplicationRepositoryClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ServerlessApplicationRepositoryClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServerlessApplicationRepositoryClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateApplicationVersionResponse * createApplicationVersion(const CreateApplicationVersionRequest &request);
    CreateCloudFormationChangeSetResponse * createCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetApplicationPolicyResponse * getApplicationPolicy(const GetApplicationPolicyRequest &request);
    ListApplicationVersionsResponse * listApplicationVersions(const ListApplicationVersionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    PutApplicationPolicyResponse * putApplicationPolicy(const PutApplicationPolicyRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(ServerlessApplicationRepositoryClient)
    Q_DISABLE_COPY(ServerlessApplicationRepositoryClient)

};

} // namespace ServerlessApplicationRepository
} // namespace AWS

#endif
