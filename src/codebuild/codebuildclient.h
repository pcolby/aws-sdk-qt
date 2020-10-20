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

#ifndef QTAWS_CODEBUILDCLIENT_H
#define QTAWS_CODEBUILDCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodeBuild {

class CodeBuildClientPrivate;
class BatchDeleteBuildsRequest;
class BatchDeleteBuildsResponse;
class BatchGetBuildsRequest;
class BatchGetBuildsResponse;
class BatchGetProjectsRequest;
class BatchGetProjectsResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateWebhookRequest;
class CreateWebhookResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteSourceCredentialsRequest;
class DeleteSourceCredentialsResponse;
class DeleteWebhookRequest;
class DeleteWebhookResponse;
class ImportSourceCredentialsRequest;
class ImportSourceCredentialsResponse;
class InvalidateProjectCacheRequest;
class InvalidateProjectCacheResponse;
class ListBuildsRequest;
class ListBuildsResponse;
class ListBuildsForProjectRequest;
class ListBuildsForProjectResponse;
class ListCuratedEnvironmentImagesRequest;
class ListCuratedEnvironmentImagesResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListSourceCredentialsRequest;
class ListSourceCredentialsResponse;
class StartBuildRequest;
class StartBuildResponse;
class StopBuildRequest;
class StopBuildResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;
class UpdateWebhookRequest;
class UpdateWebhookResponse;

class QTAWS_EXPORT CodeBuildClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeBuildClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeBuildClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteBuildsResponse * batchDeleteBuilds(const BatchDeleteBuildsRequest &request);
    BatchGetBuildsResponse * batchGetBuilds(const BatchGetBuildsRequest &request);
    BatchGetProjectsResponse * batchGetProjects(const BatchGetProjectsRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateWebhookResponse * createWebhook(const CreateWebhookRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteSourceCredentialsResponse * deleteSourceCredentials(const DeleteSourceCredentialsRequest &request);
    DeleteWebhookResponse * deleteWebhook(const DeleteWebhookRequest &request);
    ImportSourceCredentialsResponse * importSourceCredentials(const ImportSourceCredentialsRequest &request);
    InvalidateProjectCacheResponse * invalidateProjectCache(const InvalidateProjectCacheRequest &request);
    ListBuildsResponse * listBuilds(const ListBuildsRequest &request);
    ListBuildsForProjectResponse * listBuildsForProject(const ListBuildsForProjectRequest &request);
    ListCuratedEnvironmentImagesResponse * listCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListSourceCredentialsResponse * listSourceCredentials(const ListSourceCredentialsRequest &request);
    StartBuildResponse * startBuild(const StartBuildRequest &request);
    StopBuildResponse * stopBuild(const StopBuildRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateWebhookResponse * updateWebhook(const UpdateWebhookRequest &request);

private:
    Q_DECLARE_PRIVATE(CodeBuildClient)
    Q_DISABLE_COPY(CodeBuildClient)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
