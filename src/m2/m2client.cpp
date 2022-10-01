// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "m2client.h"
#include "m2client_p.h"

#include "core/awssignaturev4.h"
#include "cancelbatchjobexecutionrequest.h"
#include "cancelbatchjobexecutionresponse.h"
#include "createapplicationrequest.h"
#include "createapplicationresponse.h"
#include "createdatasetimporttaskrequest.h"
#include "createdatasetimporttaskresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "deleteapplicationrequest.h"
#include "deleteapplicationresponse.h"
#include "deleteapplicationfromenvironmentrequest.h"
#include "deleteapplicationfromenvironmentresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "getapplicationrequest.h"
#include "getapplicationresponse.h"
#include "getapplicationversionrequest.h"
#include "getapplicationversionresponse.h"
#include "getbatchjobexecutionrequest.h"
#include "getbatchjobexecutionresponse.h"
#include "getdatasetdetailsrequest.h"
#include "getdatasetdetailsresponse.h"
#include "getdatasetimporttaskrequest.h"
#include "getdatasetimporttaskresponse.h"
#include "getdeploymentrequest.h"
#include "getdeploymentresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "listapplicationversionsrequest.h"
#include "listapplicationversionsresponse.h"
#include "listapplicationsrequest.h"
#include "listapplicationsresponse.h"
#include "listbatchjobdefinitionsrequest.h"
#include "listbatchjobdefinitionsresponse.h"
#include "listbatchjobexecutionsrequest.h"
#include "listbatchjobexecutionsresponse.h"
#include "listdatasetimporthistoryrequest.h"
#include "listdatasetimporthistoryresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listdeploymentsrequest.h"
#include "listdeploymentsresponse.h"
#include "listengineversionsrequest.h"
#include "listengineversionsresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "startapplicationrequest.h"
#include "startapplicationresponse.h"
#include "startbatchjobrequest.h"
#include "startbatchjobresponse.h"
#include "stopapplicationrequest.h"
#include "stopapplicationresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapplicationrequest.h"
#include "updateapplicationresponse.h"
#include "updateenvironmentrequest.h"
#include "updateenvironmentresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::M2
 * \brief Contains classess for accessing AWSMainframeModernization.
 *
 * \inmodule QtAwsM2
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::M2Client
 * \brief The M2Client class provides access to the AWSMainframeModernization service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 */

/*!
 * \brief Constructs a M2Client object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
M2Client::M2Client(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new M2ClientPrivate(this), parent)
{
    Q_D(M2Client);
    d->apiVersion = QStringLiteral("2021-04-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("m2");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWSMainframeModernization");
    d->serviceName = QStringLiteral("m2");
}

/*!
 * \overload M2Client()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
M2Client::M2Client(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new M2ClientPrivate(this), parent)
{
    Q_D(M2Client);
    d->apiVersion = QStringLiteral("2021-04-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("m2");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWSMainframeModernization");
    d->serviceName = QStringLiteral("m2");
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * CancelBatchJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Cancels the running of a specific batch job
 */
CancelBatchJobExecutionResponse * M2Client::cancelBatchJobExecution(const CancelBatchJobExecutionRequest &request)
{
    return qobject_cast<CancelBatchJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * CreateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new application with given parameters. Requires an existing environment and application definition
 */
CreateApplicationResponse * M2Client::createApplication(const CreateApplicationRequest &request)
{
    return qobject_cast<CreateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * CreateDataSetImportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a data set import task for a specific
 */
CreateDataSetImportTaskResponse * M2Client::createDataSetImportTask(const CreateDataSetImportTaskRequest &request)
{
    return qobject_cast<CreateDataSetImportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates and starts a deployment to deploy an application into an
 */
CreateDeploymentResponse * M2Client::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a runtime environment for a given runtime
 */
CreateEnvironmentResponse * M2Client::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * DeleteApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific application. You cannot delete a running
 */
DeleteApplicationResponse * M2Client::deleteApplication(const DeleteApplicationRequest &request)
{
    return qobject_cast<DeleteApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * DeleteApplicationFromEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific application from a specified environment where it has been previously deployed. You cannot delete an
 * environment using DeleteEnvironment, if any application has ever been deployed to it. This API removes the association
 * of the application with the environment so you can delete the environment
 */
DeleteApplicationFromEnvironmentResponse * M2Client::deleteApplicationFromEnvironment(const DeleteApplicationFromEnvironmentRequest &request)
{
    return qobject_cast<DeleteApplicationFromEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a specific environment. The environment cannot contain deployed applications. If it does, you must delete those
 * applications before you delete the
 */
DeleteEnvironmentResponse * M2Client::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes the details of a specific
 */
GetApplicationResponse * M2Client::getApplication(const GetApplicationRequest &request)
{
    return qobject_cast<GetApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetApplicationVersionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about a specific version of a specific
 */
GetApplicationVersionResponse * M2Client::getApplicationVersion(const GetApplicationVersionRequest &request)
{
    return qobject_cast<GetApplicationVersionResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetBatchJobExecutionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of a specific batch job execution for a specific
 */
GetBatchJobExecutionResponse * M2Client::getBatchJobExecution(const GetBatchJobExecutionRequest &request)
{
    return qobject_cast<GetBatchJobExecutionResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetDataSetDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of a specific data
 */
GetDataSetDetailsResponse * M2Client::getDataSetDetails(const GetDataSetDetailsRequest &request)
{
    return qobject_cast<GetDataSetDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetDataSetImportTaskResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the status of a data set import task initiated with the <a>CreateDataSetImportTask</a>
 */
GetDataSetImportTaskResponse * M2Client::getDataSetImportTask(const GetDataSetImportTaskRequest &request)
{
    return qobject_cast<GetDataSetImportTaskResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details of a specific deployment with a given deployment
 */
GetDeploymentResponse * M2Client::getDeployment(const GetDeploymentRequest &request)
{
    return qobject_cast<GetDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Describes a specific runtime
 */
GetEnvironmentResponse * M2Client::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListApplicationVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the application versions for a specific
 */
ListApplicationVersionsResponse * M2Client::listApplicationVersions(const ListApplicationVersionsRequest &request)
{
    return qobject_cast<ListApplicationVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListApplicationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the applications associated with a specific Amazon Web Services account. You can provide the unique identifier of
 * a specific environment in a query parameter to see all applications associated with that
 */
ListApplicationsResponse * M2Client::listApplications(const ListApplicationsRequest &request)
{
    return qobject_cast<ListApplicationsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListBatchJobDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists all the available batch job definitions based on the batch job resources uploaded during the application creation.
 * The listed batch job definitions can then be used to start a batch
 */
ListBatchJobDefinitionsResponse * M2Client::listBatchJobDefinitions(const ListBatchJobDefinitionsRequest &request)
{
    return qobject_cast<ListBatchJobDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListBatchJobExecutionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists historical, current, and scheduled batch job executions for a specific
 */
ListBatchJobExecutionsResponse * M2Client::listBatchJobExecutions(const ListBatchJobExecutionsRequest &request)
{
    return qobject_cast<ListBatchJobExecutionsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListDataSetImportHistoryResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the data set imports for the specified
 */
ListDataSetImportHistoryResponse * M2Client::listDataSetImportHistory(const ListDataSetImportHistoryRequest &request)
{
    return qobject_cast<ListDataSetImportHistoryResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListDataSetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the data sets imported for a specific application. In Amazon Web Services Mainframe Modernization, data sets are
 * associated with applications deployed on environments. This is known as importing data sets. Currently, Amazon Web
 * Services Mainframe Modernization can import data sets into catalogs using <a
 */
ListDataSetsResponse * M2Client::listDataSets(const ListDataSetsRequest &request)
{
    return qobject_cast<ListDataSetsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of all deployments of a specific application. A deployment is a combination of a specific application and
 * a specific version of that application. Each deployment is mapped to a particular application
 */
ListDeploymentsResponse * M2Client::listDeployments(const ListDeploymentsRequest &request)
{
    return qobject_cast<ListDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListEngineVersionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the available engine
 */
ListEngineVersionsResponse * M2Client::listEngineVersions(const ListEngineVersionsRequest &request)
{
    return qobject_cast<ListEngineVersionsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the runtime
 */
ListEnvironmentsResponse * M2Client::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the tags for the specified
 */
ListTagsForResourceResponse * M2Client::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * StartApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts an application that is currently
 */
StartApplicationResponse * M2Client::startApplication(const StartApplicationRequest &request)
{
    return qobject_cast<StartApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * StartBatchJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a batch job and returns the unique identifier of this execution of the batch job. The associated application must
 * be running in order to start the batch
 */
StartBatchJobResponse * M2Client::startBatchJob(const StartBatchJobRequest &request)
{
    return qobject_cast<StartBatchJobResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * StopApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a running
 */
StopApplicationResponse * M2Client::stopApplication(const StopApplicationRequest &request)
{
    return qobject_cast<StopApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds one or more tags to the specified
 */
TagResourceResponse * M2Client::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes one or more tags from the specified
 */
UntagResourceResponse * M2Client::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * UpdateApplicationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an application and creates a new
 */
UpdateApplicationResponse * M2Client::updateApplication(const UpdateApplicationRequest &request)
{
    return qobject_cast<UpdateApplicationResponse *>(send(request));
}

/*!
 * Sends \a request to the M2Client service, and returns a pointer to an
 * UpdateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the configuration details for a specific
 */
UpdateEnvironmentResponse * M2Client::updateEnvironment(const UpdateEnvironmentRequest &request)
{
    return qobject_cast<UpdateEnvironmentResponse *>(send(request));
}

/*!
 * \class QtAws::M2::M2ClientPrivate
 * \brief The M2ClientPrivate class provides private implementation for M2Client.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a M2ClientPrivate object with public implementation \a q.
 */
M2ClientPrivate::M2ClientPrivate(M2Client * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace M2
} // namespace QtAws
