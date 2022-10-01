// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "amplifyclient.h"
#include "amplifyclient_p.h"

#include "core/awssignaturev4.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createbackendenvironmentrequest.h"
#include "createbackendenvironmentresponse.h"
#include "createbranchrequest.h"
#include "createbranchresponse.h"
#include "createdeploymentrequest.h"
#include "createdeploymentresponse.h"
#include "createdomainassociationrequest.h"
#include "createdomainassociationresponse.h"
#include "createwebhookrequest.h"
#include "createwebhookresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deletebackendenvironmentrequest.h"
#include "deletebackendenvironmentresponse.h"
#include "deletebranchrequest.h"
#include "deletebranchresponse.h"
#include "deletedomainassociationrequest.h"
#include "deletedomainassociationresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "deletewebhookrequest.h"
#include "deletewebhookresponse.h"
#include "generateaccesslogsrequest.h"
#include "generateaccesslogsresponse.h"
#include "getapprequest.h"
#include "getappresponse.h"
#include "getartifacturlrequest.h"
#include "getartifacturlresponse.h"
#include "getbackendenvironmentrequest.h"
#include "getbackendenvironmentresponse.h"
#include "getbranchrequest.h"
#include "getbranchresponse.h"
#include "getdomainassociationrequest.h"
#include "getdomainassociationresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "getwebhookrequest.h"
#include "getwebhookresponse.h"
#include "listappsrequest.h"
#include "listappsresponse.h"
#include "listartifactsrequest.h"
#include "listartifactsresponse.h"
#include "listbackendenvironmentsrequest.h"
#include "listbackendenvironmentsresponse.h"
#include "listbranchesrequest.h"
#include "listbranchesresponse.h"
#include "listdomainassociationsrequest.h"
#include "listdomainassociationsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "listwebhooksrequest.h"
#include "listwebhooksresponse.h"
#include "startdeploymentrequest.h"
#include "startdeploymentresponse.h"
#include "startjobrequest.h"
#include "startjobresponse.h"
#include "stopjobrequest.h"
#include "stopjobresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateapprequest.h"
#include "updateappresponse.h"
#include "updatebranchrequest.h"
#include "updatebranchresponse.h"
#include "updatedomainassociationrequest.h"
#include "updatedomainassociationresponse.h"
#include "updatewebhookrequest.h"
#include "updatewebhookresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::Amplify
 * \brief Contains classess for accessing AWS Amplify.
 *
 * \inmodule QtAwsAmplify
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::AmplifyClient
 * \brief The AmplifyClient class provides access to the AWS Amplify service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmplify
 *
 *  Amplify enables developers to develop and deploy cloud-powered mobile and web apps. The Amplify Console provides a
 *  continuous delivery and hosting service for web applications. For more information, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify Console User Guide</a>. The Amplify
 *  Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development. For more
 *  information, see the <a href="https://docs.amplify.aws/">Amplify Framework.</a>
 */

/*!
 * \brief Constructs a AmplifyClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AmplifyClient::AmplifyClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmplifyClientPrivate(this), parent)
{
    Q_D(AmplifyClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("amplify");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Amplify");
    d->serviceName = QStringLiteral("amplify");
}

/*!
 * \overload AmplifyClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AmplifyClient::AmplifyClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmplifyClientPrivate(this), parent)
{
    Q_D(AmplifyClient);
    d->apiVersion = QStringLiteral("2017-07-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("amplify");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Amplify");
    d->serviceName = QStringLiteral("amplify");
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Amplify app.
 */
CreateAppResponse * AmplifyClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateBackendEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new backend environment for an Amplify app.
 */
CreateBackendEnvironmentResponse * AmplifyClient::createBackendEnvironment(const CreateBackendEnvironmentRequest &request)
{
    return qobject_cast<CreateBackendEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new branch for an Amplify app.
 */
CreateBranchResponse * AmplifyClient::createBranch(const CreateBranchRequest &request)
{
    return qobject_cast<CreateBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a deployment for a manually deployed Amplify app. Manually deployed apps are not connected to a repository.
 */
CreateDeploymentResponse * AmplifyClient::createDeployment(const CreateDeploymentRequest &request)
{
    return qobject_cast<CreateDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateDomainAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new domain association for an Amplify app. This action associates a custom domain with the Amplify app
 */
CreateDomainAssociationResponse * AmplifyClient::createDomainAssociation(const CreateDomainAssociationRequest &request)
{
    return qobject_cast<CreateDomainAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new webhook on an Amplify app.
 */
CreateWebhookResponse * AmplifyClient::createWebhook(const CreateWebhookRequest &request)
{
    return qobject_cast<CreateWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing Amplify app specified by an app ID.
 */
DeleteAppResponse * AmplifyClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteBackendEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a backend environment for an Amplify app.
 */
DeleteBackendEnvironmentResponse * AmplifyClient::deleteBackendEnvironment(const DeleteBackendEnvironmentRequest &request)
{
    return qobject_cast<DeleteBackendEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a branch for an Amplify app.
 */
DeleteBranchResponse * AmplifyClient::deleteBranch(const DeleteBranchRequest &request)
{
    return qobject_cast<DeleteBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteDomainAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a domain association for an Amplify app.
 */
DeleteDomainAssociationResponse * AmplifyClient::deleteDomainAssociation(const DeleteDomainAssociationRequest &request)
{
    return qobject_cast<DeleteDomainAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a job for a branch of an Amplify app.
 */
DeleteJobResponse * AmplifyClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a webhook.
 */
DeleteWebhookResponse * AmplifyClient::deleteWebhook(const DeleteWebhookRequest &request)
{
    return qobject_cast<DeleteWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GenerateAccessLogsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the website access logs for a specific time range using a presigned URL.
 */
GenerateAccessLogsResponse * AmplifyClient::generateAccessLogs(const GenerateAccessLogsRequest &request)
{
    return qobject_cast<GenerateAccessLogsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an existing Amplify app by appID.
 */
GetAppResponse * AmplifyClient::getApp(const GetAppRequest &request)
{
    return qobject_cast<GetAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetArtifactUrlResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the artifact info that corresponds to an artifact id.
 */
GetArtifactUrlResponse * AmplifyClient::getArtifactUrl(const GetArtifactUrlRequest &request)
{
    return qobject_cast<GetArtifactUrlResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetBackendEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a backend environment for an Amplify app.
 */
GetBackendEnvironmentResponse * AmplifyClient::getBackendEnvironment(const GetBackendEnvironmentRequest &request)
{
    return qobject_cast<GetBackendEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a branch for an Amplify app.
 */
GetBranchResponse * AmplifyClient::getBranch(const GetBranchRequest &request)
{
    return qobject_cast<GetBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetDomainAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the domain information for an Amplify app.
 */
GetDomainAssociationResponse * AmplifyClient::getDomainAssociation(const GetDomainAssociationRequest &request)
{
    return qobject_cast<GetDomainAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a job for a branch of an Amplify app.
 */
GetJobResponse * AmplifyClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the webhook information that corresponds to a specified webhook ID.
 */
GetWebhookResponse * AmplifyClient::getWebhook(const GetWebhookRequest &request)
{
    return qobject_cast<GetWebhookResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the existing Amplify apps.
 */
ListAppsResponse * AmplifyClient::listApps(const ListAppsRequest &request)
{
    return qobject_cast<ListAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListArtifactsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of artifacts for a specified app, branch, and job.
 */
ListArtifactsResponse * AmplifyClient::listArtifacts(const ListArtifactsRequest &request)
{
    return qobject_cast<ListArtifactsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListBackendEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the backend environments for an Amplify app.
 */
ListBackendEnvironmentsResponse * AmplifyClient::listBackendEnvironments(const ListBackendEnvironmentsRequest &request)
{
    return qobject_cast<ListBackendEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListBranchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the branches of an Amplify app.
 */
ListBranchesResponse * AmplifyClient::listBranches(const ListBranchesRequest &request)
{
    return qobject_cast<ListBranchesResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListDomainAssociationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the domain associations for an Amplify app.
 */
ListDomainAssociationsResponse * AmplifyClient::listDomainAssociations(const ListDomainAssociationsRequest &request)
{
    return qobject_cast<ListDomainAssociationsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the jobs for a branch of an Amplify app.
 */
ListJobsResponse * AmplifyClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of tags for a specified Amazon Resource Name (ARN).
 */
ListTagsForResourceResponse * AmplifyClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListWebhooksResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of webhooks for an Amplify app.
 */
ListWebhooksResponse * AmplifyClient::listWebhooks(const ListWebhooksRequest &request)
{
    return qobject_cast<ListWebhooksResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * StartDeploymentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a deployment for a manually deployed app. Manually deployed apps are not connected to a repository.
 */
StartDeploymentResponse * AmplifyClient::startDeployment(const StartDeploymentRequest &request)
{
    return qobject_cast<StartDeploymentResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * StartJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new job for a branch of an Amplify app.
 */
StartJobResponse * AmplifyClient::startJob(const StartJobRequest &request)
{
    return qobject_cast<StartJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * StopJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Stops a job that is in progress for a branch of an Amplify app.
 */
StopJobResponse * AmplifyClient::stopJob(const StopJobRequest &request)
{
    return qobject_cast<StopJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Tags the resource with a tag key and value.
 */
TagResourceResponse * AmplifyClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Untags a resource with a specified Amazon Resource Name (ARN).
 */
UntagResourceResponse * AmplifyClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * UpdateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amplify app.
 */
UpdateAppResponse * AmplifyClient::updateApp(const UpdateAppRequest &request)
{
    return qobject_cast<UpdateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * UpdateBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a branch for an Amplify app.
 */
UpdateBranchResponse * AmplifyClient::updateBranch(const UpdateBranchRequest &request)
{
    return qobject_cast<UpdateBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * UpdateDomainAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new domain association for an Amplify
 */
UpdateDomainAssociationResponse * AmplifyClient::updateDomainAssociation(const UpdateDomainAssociationRequest &request)
{
    return qobject_cast<UpdateDomainAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * UpdateWebhookResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a webhook.
 */
UpdateWebhookResponse * AmplifyClient::updateWebhook(const UpdateWebhookRequest &request)
{
    return qobject_cast<UpdateWebhookResponse *>(send(request));
}

/*!
 * \class QtAws::Amplify::AmplifyClientPrivate
 * \brief The AmplifyClientPrivate class provides private implementation for AmplifyClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a AmplifyClientPrivate object with public implementation \a q.
 */
AmplifyClientPrivate::AmplifyClientPrivate(AmplifyClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace Amplify
} // namespace QtAws
