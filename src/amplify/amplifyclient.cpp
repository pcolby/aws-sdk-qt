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

#include "amplifyclient.h"
#include "amplifyclient_p.h"

#include "core/awssignaturev4.h"
#include "createapprequest.h"
#include "createappresponse.h"
#include "createbranchrequest.h"
#include "createbranchresponse.h"
#include "createdomainassociationrequest.h"
#include "createdomainassociationresponse.h"
#include "deleteapprequest.h"
#include "deleteappresponse.h"
#include "deletebranchrequest.h"
#include "deletebranchresponse.h"
#include "deletedomainassociationrequest.h"
#include "deletedomainassociationresponse.h"
#include "deletejobrequest.h"
#include "deletejobresponse.h"
#include "getapprequest.h"
#include "getappresponse.h"
#include "getbranchrequest.h"
#include "getbranchresponse.h"
#include "getdomainassociationrequest.h"
#include "getdomainassociationresponse.h"
#include "getjobrequest.h"
#include "getjobresponse.h"
#include "listappsrequest.h"
#include "listappsresponse.h"
#include "listbranchesrequest.h"
#include "listbranchesresponse.h"
#include "listdomainassociationsrequest.h"
#include "listdomainassociationsresponse.h"
#include "listjobsrequest.h"
#include "listjobsresponse.h"
#include "startjobrequest.h"
#include "startjobresponse.h"
#include "stopjobrequest.h"
#include "stopjobresponse.h"
#include "updateapprequest.h"
#include "updateappresponse.h"
#include "updatebranchrequest.h"
#include "updatebranchresponse.h"
#include "updatedomainassociationrequest.h"
#include "updatedomainassociationresponse.h"

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
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
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
 * Creates a new Amplify App.
 */
CreateAppResponse * AmplifyClient::createApp(const CreateAppRequest &request)
{
    return qobject_cast<CreateAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Branch for an Amplify App.
 */
CreateBranchResponse * AmplifyClient::createBranch(const CreateBranchRequest &request)
{
    return qobject_cast<CreateBranchResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * CreateDomainAssociationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new DomainAssociation on an App
 */
CreateDomainAssociationResponse * AmplifyClient::createDomainAssociation(const CreateDomainAssociationRequest &request)
{
    return qobject_cast<CreateDomainAssociationResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an existing Amplify App by appId.
 */
DeleteAppResponse * AmplifyClient::deleteApp(const DeleteAppRequest &request)
{
    return qobject_cast<DeleteAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * DeleteBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a branch for an Amplify App.
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
 * Deletes a DomainAssociation.
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
 * Delete a job, for an Amplify branch, part of Amplify App.
 */
DeleteJobResponse * AmplifyClient::deleteJob(const DeleteJobRequest &request)
{
    return qobject_cast<DeleteJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an existing Amplify App by appId.
 */
GetAppResponse * AmplifyClient::getApp(const GetAppRequest &request)
{
    return qobject_cast<GetAppResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * GetBranchResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a branch for an Amplify App.
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
 * Retrieves domain info that corresponds to an appId and domainName.
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
 * Get a job for a branch, part of an Amplify App.
 */
GetJobResponse * AmplifyClient::getJob(const GetJobRequest &request)
{
    return qobject_cast<GetJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListAppsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists existing Amplify Apps.
 */
ListAppsResponse * AmplifyClient::listApps(const ListAppsRequest &request)
{
    return qobject_cast<ListAppsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * ListBranchesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists branches for an Amplify App.
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
 * List domains with an app
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
 * List Jobs for a branch, part of an Amplify App.
 */
ListJobsResponse * AmplifyClient::listJobs(const ListJobsRequest &request)
{
    return qobject_cast<ListJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * StartJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a new job for a branch, part of an Amplify App.
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
 * Stop a job that is in progress, for an Amplify branch, part of Amplify App.
 */
StopJobResponse * AmplifyClient::stopJob(const StopJobRequest &request)
{
    return qobject_cast<StopJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyClient service, and returns a pointer to an
 * UpdateAppResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Amplify App.
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
 * Updates a branch for an Amplify App.
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
 * Create a new DomainAssociation on an App
 */
UpdateDomainAssociationResponse * AmplifyClient::updateDomainAssociation(const UpdateDomainAssociationRequest &request)
{
    return qobject_cast<UpdateDomainAssociationResponse *>(send(request));
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
