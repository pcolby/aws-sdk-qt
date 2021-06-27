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

#include "codebuildclient.h"
#include "codebuildclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdeletebuildsrequest.h"
#include "batchdeletebuildsresponse.h"
#include "batchgetbuildbatchesrequest.h"
#include "batchgetbuildbatchesresponse.h"
#include "batchgetbuildsrequest.h"
#include "batchgetbuildsresponse.h"
#include "batchgetprojectsrequest.h"
#include "batchgetprojectsresponse.h"
#include "batchgetreportgroupsrequest.h"
#include "batchgetreportgroupsresponse.h"
#include "batchgetreportsrequest.h"
#include "batchgetreportsresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createreportgrouprequest.h"
#include "createreportgroupresponse.h"
#include "createwebhookrequest.h"
#include "createwebhookresponse.h"
#include "deletebuildbatchrequest.h"
#include "deletebuildbatchresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deletereportrequest.h"
#include "deletereportresponse.h"
#include "deletereportgrouprequest.h"
#include "deletereportgroupresponse.h"
#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyresponse.h"
#include "deletesourcecredentialsrequest.h"
#include "deletesourcecredentialsresponse.h"
#include "deletewebhookrequest.h"
#include "deletewebhookresponse.h"
#include "describecodecoveragesrequest.h"
#include "describecodecoveragesresponse.h"
#include "describetestcasesrequest.h"
#include "describetestcasesresponse.h"
#include "getreportgrouptrendrequest.h"
#include "getreportgrouptrendresponse.h"
#include "getresourcepolicyrequest.h"
#include "getresourcepolicyresponse.h"
#include "importsourcecredentialsrequest.h"
#include "importsourcecredentialsresponse.h"
#include "invalidateprojectcacherequest.h"
#include "invalidateprojectcacheresponse.h"
#include "listbuildbatchesrequest.h"
#include "listbuildbatchesresponse.h"
#include "listbuildbatchesforprojectrequest.h"
#include "listbuildbatchesforprojectresponse.h"
#include "listbuildsrequest.h"
#include "listbuildsresponse.h"
#include "listbuildsforprojectrequest.h"
#include "listbuildsforprojectresponse.h"
#include "listcuratedenvironmentimagesrequest.h"
#include "listcuratedenvironmentimagesresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listreportgroupsrequest.h"
#include "listreportgroupsresponse.h"
#include "listreportsrequest.h"
#include "listreportsresponse.h"
#include "listreportsforreportgrouprequest.h"
#include "listreportsforreportgroupresponse.h"
#include "listsharedprojectsrequest.h"
#include "listsharedprojectsresponse.h"
#include "listsharedreportgroupsrequest.h"
#include "listsharedreportgroupsresponse.h"
#include "listsourcecredentialsrequest.h"
#include "listsourcecredentialsresponse.h"
#include "putresourcepolicyrequest.h"
#include "putresourcepolicyresponse.h"
#include "retrybuildrequest.h"
#include "retrybuildresponse.h"
#include "retrybuildbatchrequest.h"
#include "retrybuildbatchresponse.h"
#include "startbuildrequest.h"
#include "startbuildresponse.h"
#include "startbuildbatchrequest.h"
#include "startbuildbatchresponse.h"
#include "stopbuildrequest.h"
#include "stopbuildresponse.h"
#include "stopbuildbatchrequest.h"
#include "stopbuildbatchresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"
#include "updatereportgrouprequest.h"
#include "updatereportgroupresponse.h"
#include "updatewebhookrequest.h"
#include "updatewebhookresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CodeBuild
 * \brief Contains classess for accessing AWS CodeBuild.
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
 *  your own build tools. AWS CodeBuild scales automatically to meet peak build requests. You pay only for the build time
 *  you consume. For more information about AWS CodeBuild, see the <i> <a
 *  href="https://docs.aws.amazon.com/codebuild/latest/userguide/welcome.html">AWS CodeBuild User Guide</a>.</i>
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
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-10-06"),
    QStringLiteral("codebuild"),
    QStringLiteral("AWS CodeBuild"),
    QStringLiteral("codebuild"),
    parent), d_ptr(new CodeBuildClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2016-10-06"),
    QStringLiteral("codebuild"),
    QStringLiteral("AWS CodeBuild"),
    QStringLiteral("codebuild"),
    parent), d_ptr(new CodeBuildClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
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
 * BatchGetBuildBatchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves information about one or more batch
 */
BatchGetBuildBatchesResponse * CodeBuildClient::batchGetBuildBatches(const BatchGetBuildBatchesRequest &request)
{
    return qobject_cast<BatchGetBuildBatchesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * BatchGetBuildsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets information about one or more
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
 * Gets information about one or more build
 */
BatchGetProjectsResponse * CodeBuildClient::batchGetProjects(const BatchGetProjectsRequest &request)
{
    return qobject_cast<BatchGetProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * BatchGetReportGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of report groups.
 */
BatchGetReportGroupsResponse * CodeBuildClient::batchGetReportGroups(const BatchGetReportGroupsRequest &request)
{
    return qobject_cast<BatchGetReportGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * BatchGetReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an array of reports.
 */
BatchGetReportsResponse * CodeBuildClient::batchGetReports(const BatchGetReportsRequest &request)
{
    return qobject_cast<BatchGetReportsResponse *>(send(request));
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
 * CreateReportGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a report group. A report group contains a collection of reports.
 */
CreateReportGroupResponse * CodeBuildClient::createReportGroup(const CreateReportGroupRequest &request)
{
    return qobject_cast<CreateReportGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * CreateWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For an existing AWS CodeBuild build project that has its source code stored in a GitHub or Bitbucket repository, enables
 * AWS CodeBuild to start rebuilding the source code every time a code change is pushed to the
 *
 * repository> <b>
 *
 * If you enable webhooks for an AWS CodeBuild project, and the project is used as a build step in AWS CodePipeline, then
 * two identical builds are created for each commit. One build is triggered through webhooks, and one through AWS
 * CodePipeline. Because billing is on a per-build basis, you are billed for both builds. Therefore, if you are using AWS
 * CodePipeline, we recommend that you disable webhooks in AWS CodeBuild. In the AWS CodeBuild console, clear the Webhook
 * box. For more information, see step 5 in <a
 * href="https://docs.aws.amazon.com/codebuild/latest/userguide/change-project.html#change-project-console">Change a Build
 * Project's
 */
CreateWebhookResponse * CodeBuildClient::createWebhook(const CreateWebhookRequest &request)
{
    return qobject_cast<CreateWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteBuildBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a batch
 */
DeleteBuildBatchResponse * CodeBuildClient::deleteBuildBatch(const DeleteBuildBatchRequest &request)
{
    return qobject_cast<DeleteBuildBatchResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a build project. When you delete a project, its builds are not deleted.
 */
DeleteProjectResponse * CodeBuildClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteReportResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a report.
 */
DeleteReportResponse * CodeBuildClient::deleteReport(const DeleteReportRequest &request)
{
    return qobject_cast<DeleteReportResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteReportGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a report group. Before you delete a report group, you must delete its reports.
 */
DeleteReportGroupResponse * CodeBuildClient::deleteReportGroup(const DeleteReportGroupRequest &request)
{
    return qobject_cast<DeleteReportGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a resource policy that is identified by its resource ARN.
 */
DeleteResourcePolicyResponse * CodeBuildClient::deleteResourcePolicy(const DeleteResourcePolicyRequest &request)
{
    return qobject_cast<DeleteResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteSourceCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a set of GitHub, GitHub Enterprise, or Bitbucket source credentials.
 */
DeleteSourceCredentialsResponse * CodeBuildClient::deleteSourceCredentials(const DeleteSourceCredentialsRequest &request)
{
    return qobject_cast<DeleteSourceCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DeleteWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For an existing AWS CodeBuild build project that has its source code stored in a GitHub or Bitbucket repository, stops
 * AWS CodeBuild from rebuilding the source code every time a code change is pushed to the
 */
DeleteWebhookResponse * CodeBuildClient::deleteWebhook(const DeleteWebhookRequest &request)
{
    return qobject_cast<DeleteWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DescribeCodeCoveragesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves one or more code coverage
 */
DescribeCodeCoveragesResponse * CodeBuildClient::describeCodeCoverages(const DescribeCodeCoveragesRequest &request)
{
    return qobject_cast<DescribeCodeCoveragesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * DescribeTestCasesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of details about test cases for a report.
 */
DescribeTestCasesResponse * CodeBuildClient::describeTestCases(const DescribeTestCasesRequest &request)
{
    return qobject_cast<DescribeTestCasesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * GetReportGroupTrendResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Analyzes and accumulates test report values for the specified test
 */
GetReportGroupTrendResponse * CodeBuildClient::getReportGroupTrend(const GetReportGroupTrendRequest &request)
{
    return qobject_cast<GetReportGroupTrendResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * GetResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a resource policy that is identified by its resource ARN.
 */
GetResourcePolicyResponse * CodeBuildClient::getResourcePolicy(const GetResourcePolicyRequest &request)
{
    return qobject_cast<GetResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ImportSourceCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports the source repository credentials for an AWS CodeBuild project that has its source code stored in a GitHub,
 * GitHub Enterprise, or Bitbucket repository.
 */
ImportSourceCredentialsResponse * CodeBuildClient::importSourceCredentials(const ImportSourceCredentialsRequest &request)
{
    return qobject_cast<ImportSourceCredentialsResponse *>(send(request));
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
 * ListBuildBatchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the identifiers of your build batches in the current
 */
ListBuildBatchesResponse * CodeBuildClient::listBuildBatches(const ListBuildBatchesRequest &request)
{
    return qobject_cast<ListBuildBatchesResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListBuildBatchesForProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the identifiers of the build batches for a specific
 */
ListBuildBatchesForProjectResponse * CodeBuildClient::listBuildBatchesForProject(const ListBuildBatchesForProjectRequest &request)
{
    return qobject_cast<ListBuildBatchesForProjectResponse *>(send(request));
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
 * Gets a list of build identifiers for the specified build project, with each build identifier representing a single
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
 * ListReportGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list ARNs for the report groups in the current AWS account.
 */
ListReportGroupsResponse * CodeBuildClient::listReportGroups(const ListReportGroupsRequest &request)
{
    return qobject_cast<ListReportGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListReportsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of ARNs for the reports in the current AWS account.
 */
ListReportsResponse * CodeBuildClient::listReports(const ListReportsRequest &request)
{
    return qobject_cast<ListReportsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListReportsForReportGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of ARNs for the reports that belong to a <code>ReportGroup</code>.
 */
ListReportsForReportGroupResponse * CodeBuildClient::listReportsForReportGroup(const ListReportsForReportGroupRequest &request)
{
    return qobject_cast<ListReportsForReportGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListSharedProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of projects that are shared with other AWS accounts or users.
 */
ListSharedProjectsResponse * CodeBuildClient::listSharedProjects(const ListSharedProjectsRequest &request)
{
    return qobject_cast<ListSharedProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListSharedReportGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of report groups that are shared with other AWS accounts or users.
 */
ListSharedReportGroupsResponse * CodeBuildClient::listSharedReportGroups(const ListSharedReportGroupsRequest &request)
{
    return qobject_cast<ListSharedReportGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * ListSourceCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of <code>SourceCredentialsInfo</code> objects.
 */
ListSourceCredentialsResponse * CodeBuildClient::listSourceCredentials(const ListSourceCredentialsRequest &request)
{
    return qobject_cast<ListSourceCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * PutResourcePolicyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stores a resource policy for the ARN of a <code>Project</code> or <code>ReportGroup</code> object.
 */
PutResourcePolicyResponse * CodeBuildClient::putResourcePolicy(const PutResourcePolicyRequest &request)
{
    return qobject_cast<PutResourcePolicyResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * RetryBuildResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts a
 */
RetryBuildResponse * CodeBuildClient::retryBuild(const RetryBuildRequest &request)
{
    return qobject_cast<RetryBuildResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * RetryBuildBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Restarts a failed batch build. Only batch builds that have failed can be
 */
RetryBuildBatchResponse * CodeBuildClient::retryBuildBatch(const RetryBuildBatchRequest &request)
{
    return qobject_cast<RetryBuildBatchResponse *>(send(request));
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
 * StartBuildBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a batch build for a
 */
StartBuildBatchResponse * CodeBuildClient::startBuildBatch(const StartBuildBatchRequest &request)
{
    return qobject_cast<StartBuildBatchResponse *>(send(request));
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
 * StopBuildBatchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running batch
 */
StopBuildBatchResponse * CodeBuildClient::stopBuildBatch(const StopBuildBatchRequest &request)
{
    return qobject_cast<StopBuildBatchResponse *>(send(request));
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
 * UpdateReportGroupResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a report group.
 */
UpdateReportGroupResponse * CodeBuildClient::updateReportGroup(const UpdateReportGroupRequest &request)
{
    return qobject_cast<UpdateReportGroupResponse *>(send(request));
}

/*!
 * Sends \a request to the CodeBuildClient service, and returns a pointer to an
 * UpdateWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the webhook associated with an AWS CodeBuild build project.
 *
 * </p <note>
 *
 * If you use Bitbucket for your repository, <code>rotateSecret</code> is ignored.
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
CodeBuildClientPrivate::CodeBuildClientPrivate(CodeBuildClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace CodeBuild
} // namespace QtAws
