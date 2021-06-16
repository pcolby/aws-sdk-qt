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

#include "gluedatabrewclient.h"
#include "gluedatabrewclient_p.h"

#include "core/awssignaturev4.h"
#include "batchdeleterecipeversionrequest.h"
#include "batchdeleterecipeversionresponse.h"
#include "createdatasetrequest.h"
#include "createdatasetresponse.h"
#include "createprofilejobrequest.h"
#include "createprofilejobresponse.h"
#include "createprojectrequest.h"
#include "createprojectresponse.h"
#include "createreciperequest.h"
#include "createreciperesponse.h"
#include "createrecipejobrequest.h"
#include "createrecipejobresponse.h"
#include "createschedulerequest.h"
#include "createscheduleresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deleteprojectrequest.h"
#include "deleteprojectresponse.h"
#include "deleterecipeversionrequest.h"
#include "deleterecipeversionresponse.h"
#include "deleteschedulerequest.h"
#include "deletescheduleresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describejobrequest.h"
#include "describejobresponse.h"
#include "describejobrunrequest.h"
#include "describejobrunresponse.h"
#include "describeprojectrequest.h"
#include "describeprojectresponse.h"
#include "describereciperequest.h"
#include "describereciperesponse.h"
#include "describeschedulerequest.h"
#include "describescheduleresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listjobrunsrequest.h"
#include "listjobrunsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listprojectsrequest.h"
#include "listprojectsresponse.h"
#include "listrecipeversionsrequest.h"
#include "listrecipeversionsresponse.h"
#include "listrecipesrequest.h"
#include "listrecipesresponse.h"
#include "listschedulesrequest.h"
#include "listschedulesresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "publishreciperequest.h"
#include "publishreciperesponse.h"
#include "sendprojectsessionactionrequest.h"
#include "sendprojectsessionactionresponse.h"
#include "startjobrunrequest.h"
#include "startjobrunresponse.h"
#include "startprojectsessionrequest.h"
#include "startprojectsessionresponse.h"
#include "stopjobrunrequest.h"
#include "stopjobrunresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updatedatasetrequest.h"
#include "updatedatasetresponse.h"
#include "updateprofilejobrequest.h"
#include "updateprofilejobresponse.h"
#include "updateprojectrequest.h"
#include "updateprojectresponse.h"
#include "updatereciperequest.h"
#include "updatereciperesponse.h"
#include "updaterecipejobrequest.h"
#include "updaterecipejobresponse.h"
#include "updateschedulerequest.h"
#include "updatescheduleresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::GlueDataBrew
 * \brief Contains classess for accessing AWS Glue DataBrew.
 *
 * \inmodule QtAwsGlueDataBrew
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace GlueDataBrew {

/*!
 * \class QtAws::GlueDataBrew::GlueDataBrewClient
 * \brief The GlueDataBrewClient class provides access to the AWS Glue DataBrew service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlueDataBrew
 *
 *  AWS Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks,
 *  targeting data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels
 *  to visualize the data and perform one-click data transformations, with no coding
 */

/*!
 * \brief Constructs a GlueDataBrewClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
GlueDataBrewClient::GlueDataBrewClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlueDataBrewClientPrivate(this), parent)
{
    Q_D(GlueDataBrewClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("databrew");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Glue DataBrew");
    d->serviceName = QStringLiteral("databrew");
}

/*!
 * \overload GlueDataBrewClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
GlueDataBrewClient::GlueDataBrewClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new GlueDataBrewClientPrivate(this), parent)
{
    Q_D(GlueDataBrewClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("databrew");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Glue DataBrew");
    d->serviceName = QStringLiteral("databrew");
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * BatchDeleteRecipeVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes one or more versions of a recipe at a
 *
 * time>
 *
 * The entire request will be rejected
 *
 * if> <ul> <li>
 *
 * The recipe does not
 *
 * exist> </li> <li>
 *
 * There is an invalid version identifier in the list of
 *
 * versions> </li> <li>
 *
 * The version list is
 *
 * empty> </li> <li>
 *
 * The version list size exceeds
 *
 * 50> </li> <li>
 *
 * The version list contains duplicate
 *
 * entries> </li> </ul>
 *
 * The request will complete successfully, but with partial failures,
 *
 * if> <ul> <li>
 *
 * A version does not
 *
 * exist> </li> <li>
 *
 * A version is being used by a
 *
 * job> </li> <li>
 *
 * You specify <code>LATEST_WORKING</code>, but it's being used by a
 *
 * project> </li> <li>
 *
 * The version fails to be
 *
 * deleted> </li> </ul>
 *
 * The <code>LATEST_WORKING</code> version will only be deleted if the recipe has no other versions. If you try to delete
 * <code>LATEST_WORKING</code> while other versions exist (or if they can't be deleted), then <code>LATEST_WORKING</code>
 * will be listed as partial failure in the
 */
BatchDeleteRecipeVersionResponse * GlueDataBrewClient::batchDeleteRecipeVersion(const BatchDeleteRecipeVersionRequest &request)
{
    return qobject_cast<BatchDeleteRecipeVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * CreateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DataBrew
 */
CreateDatasetResponse * GlueDataBrewClient::createDataset(const CreateDatasetRequest &request)
{
    return qobject_cast<CreateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * CreateProfileJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new job to analyze a dataset and create its data
 */
CreateProfileJobResponse * GlueDataBrewClient::createProfileJob(const CreateProfileJobRequest &request)
{
    return qobject_cast<CreateProfileJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * CreateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DataBrew
 */
CreateProjectResponse * GlueDataBrewClient::createProject(const CreateProjectRequest &request)
{
    return qobject_cast<CreateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * CreateRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new DataBrew
 */
CreateRecipeResponse * GlueDataBrewClient::createRecipe(const CreateRecipeRequest &request)
{
    return qobject_cast<CreateRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * CreateRecipeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new job to transform input data, using steps defined in an existing AWS Glue DataBrew
 */
CreateRecipeJobResponse * GlueDataBrewClient::createRecipeJob(const CreateRecipeJobRequest &request)
{
    return qobject_cast<CreateRecipeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * CreateScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new schedule for one or more DataBrew jobs. Jobs can be run at a specific date and time, or at regular
 */
CreateScheduleResponse * GlueDataBrewClient::createSchedule(const CreateScheduleRequest &request)
{
    return qobject_cast<CreateScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a dataset from
 */
DeleteDatasetResponse * GlueDataBrewClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified DataBrew
 */
DeleteJobResponse * GlueDataBrewClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DeleteProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing DataBrew
 */
DeleteProjectResponse * GlueDataBrewClient::deleteProject(const DeleteProjectRequest &request)
{
    return qobject_cast<DeleteProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DeleteRecipeVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a single version of a DataBrew
 */
DeleteRecipeVersionResponse * GlueDataBrewClient::deleteRecipeVersion(const DeleteRecipeVersionRequest &request)
{
    return qobject_cast<DeleteRecipeVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DeleteScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specified DataBrew
 */
DeleteScheduleResponse * GlueDataBrewClient::deleteSchedule(const DeleteScheduleRequest &request)
{
    return qobject_cast<DeleteScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the definition of a specific DataBrew
 */
DescribeDatasetResponse * GlueDataBrewClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DescribeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the definition of a specific DataBrew
 */
DescribeJobResponse * GlueDataBrewClient::describeJob(const DescribeJobRequest &request)
{
    return qobject_cast<DescribeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DescribeJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Represents one run of a DataBrew
 */
DescribeJobRunResponse * GlueDataBrewClient::describeJobRun(const DescribeJobRunRequest &request)
{
    return qobject_cast<DescribeJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DescribeProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the definition of a specific DataBrew
 */
DescribeProjectResponse * GlueDataBrewClient::describeProject(const DescribeProjectRequest &request)
{
    return qobject_cast<DescribeProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DescribeRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the definition of a specific DataBrew recipe corresponding to a particular
 */
DescribeRecipeResponse * GlueDataBrewClient::describeRecipe(const DescribeRecipeRequest &request)
{
    return qobject_cast<DescribeRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * DescribeScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the definition of a specific DataBrew
 */
DescribeScheduleResponse * GlueDataBrewClient::describeSchedule(const DescribeScheduleRequest &request)
{
    return qobject_cast<DescribeScheduleResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the DataBrew
 */
ListDatasetsResponse * GlueDataBrewClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListJobRunsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the previous runs of a particular DataBrew
 */
ListJobRunsResponse * GlueDataBrewClient::listJobRuns(const ListJobRunsRequest &request)
{
    return qobject_cast<ListJobRunsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the DataBrew jobs that are
 */
ListJobsResponse * GlueDataBrewClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListProjectsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the DataBrew projects that are
 */
ListProjectsResponse * GlueDataBrewClient::listProjects(const ListProjectsRequest &request)
{
    return qobject_cast<ListProjectsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListRecipeVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the versions of a particular DataBrew recipe, except for
 */
ListRecipeVersionsResponse * GlueDataBrewClient::listRecipeVersions(const ListRecipeVersionsRequest &request)
{
    return qobject_cast<ListRecipeVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListRecipesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all of the DataBrew recipes that are
 */
ListRecipesResponse * GlueDataBrewClient::listRecipes(const ListRecipesRequest &request)
{
    return qobject_cast<ListRecipesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListSchedulesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the DataBrew schedules that are
 */
ListSchedulesResponse * GlueDataBrewClient::listSchedules(const ListSchedulesRequest &request)
{
    return qobject_cast<ListSchedulesResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the tags for a DataBrew resource.
 */
ListTagsForResourceResponse * GlueDataBrewClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * PublishRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes a new version of a DataBrew
 */
PublishRecipeResponse * GlueDataBrewClient::publishRecipe(const PublishRecipeRequest &request)
{
    return qobject_cast<PublishRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * SendProjectSessionActionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Performs a recipe step within an interactive DataBrew session that's currently
 */
SendProjectSessionActionResponse * GlueDataBrewClient::sendProjectSessionAction(const SendProjectSessionActionRequest &request)
{
    return qobject_cast<SendProjectSessionActionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * StartJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Runs a DataBrew
 */
StartJobRunResponse * GlueDataBrewClient::startJobRun(const StartJobRunRequest &request)
{
    return qobject_cast<StartJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * StartProjectSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates an interactive session, enabling you to manipulate data in a DataBrew
 */
StartProjectSessionResponse * GlueDataBrewClient::startProjectSession(const StartProjectSessionRequest &request)
{
    return qobject_cast<StartProjectSessionResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * StopJobRunResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a particular run of a
 */
StopJobRunResponse * GlueDataBrewClient::stopJobRun(const StopJobRunRequest &request)
{
    return qobject_cast<StopJobRunResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to a DataBrew resource, such as a dataset, project, recipe, job, or
 */
TagResourceResponse * GlueDataBrewClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from a DataBrew
 */
UntagResourceResponse * GlueDataBrewClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UpdateDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the definition of an existing DataBrew
 */
UpdateDatasetResponse * GlueDataBrewClient::updateDataset(const UpdateDatasetRequest &request)
{
    return qobject_cast<UpdateDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UpdateProfileJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the definition of an existing profile
 */
UpdateProfileJobResponse * GlueDataBrewClient::updateProfileJob(const UpdateProfileJobRequest &request)
{
    return qobject_cast<UpdateProfileJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UpdateProjectResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the definition of an existing DataBrew
 */
UpdateProjectResponse * GlueDataBrewClient::updateProject(const UpdateProjectRequest &request)
{
    return qobject_cast<UpdateProjectResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UpdateRecipeResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the definition of the <code>LATEST_WORKING</code> version of a DataBrew
 */
UpdateRecipeResponse * GlueDataBrewClient::updateRecipe(const UpdateRecipeRequest &request)
{
    return qobject_cast<UpdateRecipeResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UpdateRecipeJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the definition of an existing DataBrew recipe
 */
UpdateRecipeJobResponse * GlueDataBrewClient::updateRecipeJob(const UpdateRecipeJobRequest &request)
{
    return qobject_cast<UpdateRecipeJobResponse *>(send(request));
}

/*!
 * Sends \a request to the GlueDataBrewClient service, and returns a pointer to an
 * UpdateScheduleResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the definition of an existing DataBrew
 */
UpdateScheduleResponse * GlueDataBrewClient::updateSchedule(const UpdateScheduleRequest &request)
{
    return qobject_cast<UpdateScheduleResponse *>(send(request));
}

/*!
 * \class QtAws::GlueDataBrew::GlueDataBrewClientPrivate
 * \brief The GlueDataBrewClientPrivate class provides private implementation for GlueDataBrewClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsGlueDataBrew
 */

/*!
 * Constructs a GlueDataBrewClientPrivate object with public implementation \a q.
 */
GlueDataBrewClientPrivate::GlueDataBrewClientPrivate(GlueDataBrewClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace GlueDataBrew
} // namespace QtAws
