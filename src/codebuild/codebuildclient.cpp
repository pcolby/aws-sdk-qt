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

#include "codebuildclient.h"
#include "codebuildclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CodeBuild {

/**
 * @class  CodeBuildClient
 *
 * @brief  Client for AWS CodeBuild
 *
 * <fullname>AWS CodeBuild</fullname>
 *
 * AWS CodeBuild is a fully managed build service in the cloud. AWS CodeBuild compiles your source code, runs unit tests,
 * and produces artifacts that are ready to deploy. AWS CodeBuild eliminates the need to provision, manage, and scale your
 * own build servers. It provides prepackaged build environments for the most popular programming languages and build
 * tools, such as Apache Maven, Gradle, and more. You can also fully customize build environments in AWS CodeBuild to use
 * your own build tools. AWS CodeBuild scales automatically to meet peak build requests, and you pay only for the build
 * time you consume. For more information about AWS CodeBuild, see the <i>AWS CodeBuild User
 *
 * Guide</i>>
 *
 * AWS CodeBuild supports these
 *
 * operations> <ul> <li>
 *
 * <code>BatchDeleteBuilds</code>: Deletes one or more
 *
 * builds> </li> <li>
 *
 * <code>BatchGetProjects</code>: Gets information about one or more build projects. A <i>build project</i> defines how AWS
 * CodeBuild will run a build. This includes information such as where to get the source code to build, the build
 * environment to use, the build commands to run, and where to store the build output. A <i>build environment</i>
 * represents a combination of operating system, programming language runtime, and tools that AWS CodeBuild will use to run
 * a build. Also, you can add tags to build projects to help manage your resources and
 *
 * costs> </li> <li>
 *
 * <code>CreateProject</code>: Creates a build
 *
 * project> </li> <li>
 *
 * <code>CreateWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub
 * repository, enables AWS CodeBuild to begin automatically rebuilding the source code every time a code change is pushed
 * to the
 *
 * repository> </li> <li>
 *
 * <code>DeleteProject</code>: Deletes a build
 *
 * project> </li> <li>
 *
 * <code>DeleteWebhook</code>: For an existing AWS CodeBuild build project that has its source code stored in a GitHub
 * repository, stops AWS CodeBuild from automatically rebuilding the source code every time a code change is pushed to the
 *
 * repository> </li> <li>
 *
 * <code>ListProjects</code>: Gets a list of build project names, with each build project name representing a single build
 *
 * project> </li> <li>
 *
 * <code>UpdateProject</code>: Changes the settings of an existing build
 *
 * project> </li> <li>
 *
 * <code>BatchGetBuilds</code>: Gets information about one or more
 *
 * builds> </li> <li>
 *
 * <code>ListBuilds</code>: Gets a list of build IDs, with each build ID representing a single
 *
 * build> </li> <li>
 *
 * <code>ListBuildsForProject</code>: Gets a list of build IDs for the specified build project, with each build ID
 * representing a single
 *
 * build> </li> <li>
 *
 * <code>StartBuild</code>: Starts running a
 *
 * build> </li> <li>
 *
 * <code>StopBuild</code>: Attempts to stop running a
 *
 * build> </li> <li>
 *
 * <code>ListCuratedEnvironmentImages</code>: Gets information about Docker images that are managed by AWS
 */

/**
 * @brief  Constructs a new CodeBuildClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CodeBuildClient::CodeBuildClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeBuildClientPrivate(this), parent)
{
    Q_D(CodeBuildClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("codebuild");
}

/**
 * @brief  Constructs a new CodeBuildClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CodeBuildClient::CodeBuildClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CodeBuildClientPrivate(this), parent)
{
    Q_D(CodeBuildClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QStringLiteral("codebuild");
}

/// @todo override getEndpoint() to use codebuild.

/**
 * Deletes one or more
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchDeleteBuildsResponse * CodeBuildClient::batchDeleteBuilds(const BatchDeleteBuildsRequest &request)
{

}

/**
 * Gets information about
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetBuildsResponse * CodeBuildClient::batchGetBuilds(const BatchGetBuildsRequest &request)
{

}

/**
 * Gets information about build
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BatchGetProjectsResponse * CodeBuildClient::batchGetProjects(const BatchGetProjectsRequest &request)
{

}

/**
 * Creates a build
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateProjectResponse * CodeBuildClient::createProject(const CreateProjectRequest &request)
{

}

/**
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
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
CreateWebhookResponse * CodeBuildClient::createWebhook(const CreateWebhookRequest &request)
{

}

/**
 * Deletes a build
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteProjectResponse * CodeBuildClient::deleteProject(const DeleteProjectRequest &request)
{

}

/**
 * For an existing AWS CodeBuild build project that has its source code stored in a GitHub repository, stops AWS CodeBuild
 * from automatically rebuilding the source code every time a code change is pushed to the
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteWebhookResponse * CodeBuildClient::deleteWebhook(const DeleteWebhookRequest &request)
{

}

/**
 * Resets the cache for a
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InvalidateProjectCacheResponse * CodeBuildClient::invalidateProjectCache(const InvalidateProjectCacheRequest &request)
{

}

/**
 * Gets a list of build IDs, with each build ID representing a single
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBuildsResponse * CodeBuildClient::listBuilds(const ListBuildsRequest &request)
{

}

/**
 * Gets a list of build IDs for the specified build project, with each build ID representing a single
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListBuildsForProjectResponse * CodeBuildClient::listBuildsForProject(const ListBuildsForProjectRequest &request)
{

}

/**
 * Gets information about Docker images that are managed by AWS
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListCuratedEnvironmentImagesResponse * CodeBuildClient::listCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest &request)
{

}

/**
 * Gets a list of build project names, with each build project name representing a single build
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListProjectsResponse * CodeBuildClient::listProjects(const ListProjectsRequest &request)
{

}

/**
 * Starts running a
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StartBuildResponse * CodeBuildClient::startBuild(const StartBuildRequest &request)
{

}

/**
 * Attempts to stop running a
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
StopBuildResponse * CodeBuildClient::stopBuild(const StopBuildRequest &request)
{

}

/**
 * Changes the settings of a build
 *
 * @param  request Request to send to AWS CodeBuild.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateProjectResponse * CodeBuildClient::updateProject(const UpdateProjectRequest &request)
{

}

/**
 * @internal
 *
 * @class  CodeBuildClientPrivate
 *
 * @brief  Private implementation for CodeBuildClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CodeBuildClientPrivate object.
 *
 * @param  q  Pointer to this object's public CodeBuildClient instance.
 */
CodeBuildClientPrivate::CodeBuildClientPrivate(CodeBuildClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CodeBuild
} // namespace AWS
