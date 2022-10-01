// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_H
#define QTAWS_SERVERLESSAPPLICATIONREPOSITORYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsserverlessapplicationrepositoryglobal.h"

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
class UnshareApplicationRequest;
class UnshareApplicationResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWSSERVERLESSAPPLICATIONREPOSITORY_EXPORT ServerlessApplicationRepositoryClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ServerlessApplicationRepositoryClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ServerlessApplicationRepositoryClient(
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
    UnshareApplicationResponse * unshareApplication(const UnshareApplicationRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(ServerlessApplicationRepositoryClient)
    Q_DISABLE_COPY(ServerlessApplicationRepositoryClient)

};

} // namespace ServerlessApplicationRepository
} // namespace QtAws

#endif
