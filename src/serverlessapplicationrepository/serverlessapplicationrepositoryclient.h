/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ServerlessApplicationRepository {

class ServerlessApplicationRepositoryClientPrivate;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateApplicationVersionRequest;
class CreateApplicationVersionResponse;
class CreateCloudFormationChangeSetRequest;
class CreateCloudFormationChangeSetResponse;
class CreateCloudFormationTemplateRequest;
class CreateCloudFormationTemplateResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetApplicationPolicyRequest;
class GetApplicationPolicyResponse;
class GetCloudFormationTemplateRequest;
class GetCloudFormationTemplateResponse;
class ListApplicationDependenciesRequest;
class ListApplicationDependenciesResponse;
class ListApplicationVersionsRequest;
class ListApplicationVersionsResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class PutApplicationPolicyRequest;
class PutApplicationPolicyResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWS_EXPORT ServerlessApplicationRepositoryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServerlessApplicationRepositoryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ServerlessApplicationRepositoryClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateApplicationVersionResponse * createApplicationVersion(const CreateApplicationVersionRequest &request);
    CreateCloudFormationChangeSetResponse * createCloudFormationChangeSet(const CreateCloudFormationChangeSetRequest &request);
    CreateCloudFormationTemplateResponse * createCloudFormationTemplate(const CreateCloudFormationTemplateRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetApplicationPolicyResponse * getApplicationPolicy(const GetApplicationPolicyRequest &request);
    GetCloudFormationTemplateResponse * getCloudFormationTemplate(const GetCloudFormationTemplateRequest &request);
    ListApplicationDependenciesResponse * listApplicationDependencies(const ListApplicationDependenciesRequest &request);
    ListApplicationVersionsResponse * listApplicationVersions(const ListApplicationVersionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    PutApplicationPolicyResponse * putApplicationPolicy(const PutApplicationPolicyRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(ServerlessApplicationRepositoryClient)
    Q_DISABLE_COPY(ServerlessApplicationRepositoryClient)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
