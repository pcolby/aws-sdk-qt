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

#include "codebuildclient.h"
#include "codebuildclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdeletebuildsrequest.h"
#include "batchdeletebuildsresponse.h"
#include "batchgetbuildsrequest.h"
#include "batchgetbuildsresponse.h"
#include "batchgetprojectsrequest.h"
#include "batchgetprojectsresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createwebhookrequest.h"
#include "createwebhookresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deletewebhookrequest.h"
#include "deletewebhookresponse.h"
#include "invalidateprojectcacherequest.h"
#include "invalidateprojectcacheresponse.h"
#include "listbuildsrequest.h"
#include "listbuildsresponse.h"
#include "listbuildsforprojectrequest.h"
#include "listbuildsforprojectresponse.h"
#include "listcuratedenvironmentimagesrequest.h"
#include "listcuratedenvironmentimagesresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "startbuildrequest.h"
#include "startbuildresponse.h"
#include "stopbuildrequest.h"
#include "stopbuildresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"
#include "updatewebhookrequest.h"
#include "updatewebhookresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeBuild
 * \brief The QtAws::CodeBuild contains stuff...
 *
 * \inmodule QtAwsCodeBuild
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CodeBuild {

/*!
 * \class QtAws::CodeBuild::CodeBuildClient
 * \brief The CodeBuildClient class provides access to the AWS CodeBuild service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeBuild
 *
 *  <fullname>AWS CodeBuild</fullname>
 * 
 *  AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 *  and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 *  own build servers. It provides prepackaged build environments for the most popular programming languages and build
 *  tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests, and you pay only for the build
 *  time you consume. For more information about AWS CodeBuild, see the <i>AWS CodeBuild User
 * 
 *  Guide</i>>
 * 
 *  AWS CodeBuild supports these
 * 
 *  operations> <ul> <li>
 * 
 *  <code>BatchDeleteBuilds</code>: Deletes one or more
 * 
 *  builds> </li> <li>
 * 
 *  <code>BatchGetProjects</code>: Gets information about one or more build projects. A <i>build project</i> defines how AWS
 *  CodeBuild will run a build. This includes information such as where to get the source code to build, the build
 *  environment to use, the build commands to run, and where to store the build output. A <i>build environment</i>
 *  represents a combination of operating system, programming language runtime, and tools that AWS CodeBuild will use to run
 *  a build. Also, you can add tags to build projects to help manage your resources and
 * 
 *  costs> </li> <li>
 * 
 *  <code>CreateProject</code>: Creates a build
 * 
 *  project> </li> <li>
 * 
 *  <code>CreateWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub
 *  repository, enables AWS CodeBuild to begin automatically rebuilding the source code every time a code change is pushed
 *  to the
 * 
 *  repository> </li> <li>
 * 
 *  <code>UpdateWebhook</code>: Changes the settings of an existing
 * 
 *  webhook> </li> <li>
 * 
 *  <code>DeleteProject</code>: Deletes a build
 * 
 *  project> </li> <li>
 * 
 *  <code>DeleteWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub
 *  repository, stops AWS CodeBuild from automatically rebuilding the source code every time a code change is pushed to the
 * 
 *  repository> </li> <li>
 * 
 *  <code>ListProjects</code>: Gets a list of build project names, with each build project name representing a single build
 * 
 *  project> </li> <li>
 * 
 *  <code>UpdateProject</code>: Changes the settings of an existing build
 * 
 *  project> </li> <li>
 * 
 *  <code>BatchGetBuilds</code>: Gets information about one or more
 * 
 *  builds> </li> <li>
 * 
 *  <code>ListBuilds</code>: Gets a list of build IDs, with each build ID representing a single
 * 
 *  build> </li> <li>
 * 
 *  <code>ListBuildsForProject</code>: Gets a list of build IDs for the specified build project, with each build ID
 *  representing a single
 * 
 *  build> </li> <li>
 * 
 *  <code>StartBuild</code>: Starts running a
 * 
 *  build> </li> <li>
 * 
 *  <code>StopBuild</code>: Attempts to stop running a
 * 
 *  build> </li> <li>
 * 
 *  <code>ListCuratedEnvironmentImages</code>: Gets information about Docker images that are managed by AWS
 */

/*!
 * \brief Constructs a CodeBuildClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CodeBuildClient::CodeBuildClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeBuildClientPrivate(this), parent)
{
    Q_D(CodeBuildClient);
    d->apiVersion = QStringLiteral("2016-10-06");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("codebuild");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS CodeBuild");
    d->serviceName = QStringLiteral("codebuild");
}

/*!
 * \overload CodeBuildClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CodeBuildClient::CodeBuildClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CodeBuildClientPrivate(this), parent)
{
    Q_D(CodeBuildClient);
    d->apiVersion = QStringLiteral("2016-10-06");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("codebuild");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS CodeBuild");
    d->serviceName = QStringLiteral("codebuild");
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * BatchDeleteBuildsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more
 */
BatchDeleteBuildsResponse * CodeBuildClient::batchDeleteBuilds(const BatchDeleteBuildsRequest &request)
{
    return qobject_cast<BatchDeleteBuildsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * BatchGetBuildsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about
 */
BatchGetBuildsResponse * CodeBuildClient::batchGetBuilds(const BatchGetBuildsRequest &request)
{
    return qobject_cast<BatchGetBuildsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * BatchGetProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about build
 */
BatchGetProjectsResponse * CodeBuildClient::batchGetProjects(const BatchGetProjectsRequest &request)
{
    return qobject_cast<BatchGetProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a build
 */
CreateProjectResponse * CodeBuildClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * CreateWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For an existing AWS CodeBuild build project that has its source code stored in a GitHub repository, enables AWS
 * CodeBuild to begin automatically rebuilding the source code every time a code change is pushed to the
 *
 * repository> <b>
 *
 * If you enable webhooks for an AWS CodeBuild project, and the project is used as a build step in AWS CodePipeline, then
 * two identical builds will be created for each commit. One build is triggered through webhooks, and one through AWS
 * CodePipeline. Because billing is on a per-build basis, you will be billed for both builds. Therefore, if you are using
 * AWS CodePipeline, we recommend that you disable webhooks in CodeBuild. In the AWS CodeBuild console, clear the Webhook
 * box. For more information, see step 9 in <a
 * href="http://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change a Build
 * Project's
 */
CreateWebhookResponse * CodeBuildClient::createWebhook(const CreateWebhookRequest &request)
{
    return qobject_cast<CreateWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a build
 */
DeleteProjectResponse * CodeBuildClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For an existing AWS CodeBuild build project that has its source code stored in a GitHub repository, stops AWS CodeBuild
 * from automatically rebuilding the source code every time a code change is pushed to the
 */
DeleteWebhookResponse * CodeBuildClient::deleteWebhook(const DeleteWebhookRequest &request)
{
    return qobject_cast<DeleteWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * InvalidateProjectCacheResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Resets the cache for a
 */
InvalidateProjectCacheResponse * CodeBuildClient::invalidateProjectCache(const InvalidateProjectCacheRequest &request)
{
    return qobject_cast<InvalidateProjectCacheResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListBuildsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of build IDs, with each build ID representing a single
 */
ListBuildsResponse * CodeBuildClient::listBuilds(const ListBuildsRequest &request)
{
    return qobject_cast<ListBuildsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListBuildsForProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of build IDs for the specified build project, with each build ID representing a single
 */
ListBuildsForProjectResponse * CodeBuildClient::listBuildsForProject(const ListBuildsForProjectRequest &request)
{
    return qobject_cast<ListBuildsForProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListCuratedEnvironmentImagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about Docker images that are managed by AWS
 */
ListCuratedEnvironmentImagesResponse * CodeBuildClient::listCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest &request)
{
    return qobject_cast<ListCuratedEnvironmentImagesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of build project names, with each build project name representing a single build
 */
ListProjectsResponse * CodeBuildClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * StartBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts running a
 */
StartBuildResponse * CodeBuildClient::startBuild(const StartBuildRequest &request)
{
    return qobject_cast<StartBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * StopBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Attempts to stop running a
 */
StopBuildResponse * CodeBuildClient::stopBuild(const StopBuildRequest &request)
{
    return qobject_cast<StopBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Changes the settings of a build
 */
UpdateProjectResponse * CodeBuildClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * UpdateWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the webhook associated with an AWS CodeBuild build project.
 */
UpdateWebhookResponse * CodeBuildClient::updateWebhook(const UpdateWebhookRequest &request)
{
    return qobject_cast<UpdateWebhookResponse *>(send(request));
}

/*!
 * \class QtAws::CodeBuild::CodeBuildClientPrivate
 * \brief The CodeBuildClientPrivate class provides private implementation for CodeBuildClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCodeBuild
 */

/*!
 * Constructs a CodeBuildClientPrivate object with public implementation \a q.
 */
CodeBuildClientPrivate::CodeBuildClientPrivate(CodeBuildClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CodeBuild
} // namespace QtAws
