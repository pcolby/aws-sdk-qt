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

#include "amplifybackendclient.h"
#include "amplifybackendclient_p.h"

#include "core/awssignaturev4.h"
#include "clonebackendrequest.h"
#include "clonebackendresponse.h"
#include "createbackendrequest.h"
#include "createbackendresponse.h"
#include "createbackendapirequest.h"
#include "createbackendapiresponse.h"
#include "createbackendauthrequest.h"
#include "createbackendauthresponse.h"
#include "createbackendconfigrequest.h"
#include "createbackendconfigresponse.h"
#include "createbackendstoragerequest.h"
#include "createbackendstorageresponse.h"
#include "createtokenrequest.h"
#include "createtokenresponse.h"
#include "deletebackendrequest.h"
#include "deletebackendresponse.h"
#include "deletebackendapirequest.h"
#include "deletebackendapiresponse.h"
#include "deletebackendauthrequest.h"
#include "deletebackendauthresponse.h"
#include "deletebackendstoragerequest.h"
#include "deletebackendstorageresponse.h"
#include "deletetokenrequest.h"
#include "deletetokenresponse.h"
#include "generatebackendapimodelsrequest.h"
#include "generatebackendapimodelsresponse.h"
#include "getbackendrequest.h"
#include "getbackendresponse.h"
#include "getbackendapirequest.h"
#include "getbackendapiresponse.h"
#include "getbackendapimodelsrequest.h"
#include "getbackendapimodelsresponse.h"
#include "getbackendauthrequest.h"
#include "getbackendauthresponse.h"
#include "getbackendjobrequest.h"
#include "getbackendjobresponse.h"
#include "getbackendstoragerequest.h"
#include "getbackendstorageresponse.h"
#include "gettokenrequest.h"
#include "gettokenresponse.h"
#include "importbackendauthrequest.h"
#include "importbackendauthresponse.h"
#include "importbackendstoragerequest.h"
#include "importbackendstorageresponse.h"
#include "listbackendjobsrequest.h"
#include "listbackendjobsresponse.h"
#include "lists3bucketsrequest.h"
#include "lists3bucketsresponse.h"
#include "removeallbackendsrequest.h"
#include "removeallbackendsresponse.h"
#include "removebackendconfigrequest.h"
#include "removebackendconfigresponse.h"
#include "updatebackendapirequest.h"
#include "updatebackendapiresponse.h"
#include "updatebackendauthrequest.h"
#include "updatebackendauthresponse.h"
#include "updatebackendconfigrequest.h"
#include "updatebackendconfigresponse.h"
#include "updatebackendjobrequest.h"
#include "updatebackendjobresponse.h"
#include "updatebackendstoragerequest.h"
#include "updatebackendstorageresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AmplifyBackend
 * \brief Contains classess for accessing AmplifyBackend.
 *
 * \inmodule QtAwsAmplifyBackend
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AmplifyBackend {

/*!
 * \class QtAws::AmplifyBackend::AmplifyBackendClient
 * \brief The AmplifyBackendClient class provides access to the AmplifyBackend service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmplifyBackend
 *
 *  AWS Amplify Admin
 */

/*!
 * \brief Constructs a AmplifyBackendClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AmplifyBackendClient::AmplifyBackendClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmplifyBackendClientPrivate(this), parent)
{
    Q_D(AmplifyBackendClient);
    d->apiVersion = QStringLiteral("2020-08-11");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("amplifybackend");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AmplifyBackend");
    d->serviceName = QStringLiteral("amplifybackend");
}

/*!
 * \overload AmplifyBackendClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AmplifyBackendClient::AmplifyBackendClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AmplifyBackendClientPrivate(this), parent)
{
    Q_D(AmplifyBackendClient);
    d->apiVersion = QStringLiteral("2020-08-11");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("amplifybackend");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AmplifyBackend");
    d->serviceName = QStringLiteral("amplifybackend");
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CloneBackendResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation clones an existing
 */
CloneBackendResponse * AmplifyBackendClient::cloneBackend(const CloneBackendRequest &request)
{
    return qobject_cast<CloneBackendResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CreateBackendResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * This operation creates a backend for an Amplify app. Backends are automatically created at the time of app
 */
CreateBackendResponse * AmplifyBackendClient::createBackend(const CreateBackendRequest &request)
{
    return qobject_cast<CreateBackendResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CreateBackendAPIResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new backend API
 */
CreateBackendAPIResponse * AmplifyBackendClient::createBackendAPI(const CreateBackendAPIRequest &request)
{
    return qobject_cast<CreateBackendAPIResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CreateBackendAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new backend authentication
 */
CreateBackendAuthResponse * AmplifyBackendClient::createBackendAuth(const CreateBackendAuthRequest &request)
{
    return qobject_cast<CreateBackendAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CreateBackendConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a config object for a
 */
CreateBackendConfigResponse * AmplifyBackendClient::createBackendConfig(const CreateBackendConfigRequest &request)
{
    return qobject_cast<CreateBackendConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CreateBackendStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a backend storage
 */
CreateBackendStorageResponse * AmplifyBackendClient::createBackendStorage(const CreateBackendStorageRequest &request)
{
    return qobject_cast<CreateBackendStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * CreateTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a one-time challenge code to authenticate a user into your Amplify Admin
 */
CreateTokenResponse * AmplifyBackendClient::createToken(const CreateTokenRequest &request)
{
    return qobject_cast<CreateTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * DeleteBackendResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes an existing environment from your Amplify
 */
DeleteBackendResponse * AmplifyBackendClient::deleteBackend(const DeleteBackendRequest &request)
{
    return qobject_cast<DeleteBackendResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * DeleteBackendAPIResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing backend API
 */
DeleteBackendAPIResponse * AmplifyBackendClient::deleteBackendAPI(const DeleteBackendAPIRequest &request)
{
    return qobject_cast<DeleteBackendAPIResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * DeleteBackendAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes an existing backend authentication
 */
DeleteBackendAuthResponse * AmplifyBackendClient::deleteBackendAuth(const DeleteBackendAuthRequest &request)
{
    return qobject_cast<DeleteBackendAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * DeleteBackendStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the specified backend storage
 */
DeleteBackendStorageResponse * AmplifyBackendClient::deleteBackendStorage(const DeleteBackendStorageRequest &request)
{
    return qobject_cast<DeleteBackendStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * DeleteTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the challenge token based on the given appId and
 */
DeleteTokenResponse * AmplifyBackendClient::deleteToken(const DeleteTokenRequest &request)
{
    return qobject_cast<DeleteTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GenerateBackendAPIModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a model schema for an existing backend API
 */
GenerateBackendAPIModelsResponse * AmplifyBackendClient::generateBackendAPIModels(const GenerateBackendAPIModelsRequest &request)
{
    return qobject_cast<GenerateBackendAPIModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetBackendResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides project-level details for your Amplify UI
 */
GetBackendResponse * AmplifyBackendClient::getBackend(const GetBackendRequest &request)
{
    return qobject_cast<GetBackendResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetBackendAPIResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details for a backend
 */
GetBackendAPIResponse * AmplifyBackendClient::getBackendAPI(const GetBackendAPIRequest &request)
{
    return qobject_cast<GetBackendAPIResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetBackendAPIModelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Generates a model schema for existing backend API
 */
GetBackendAPIModelsResponse * AmplifyBackendClient::getBackendAPIModels(const GetBackendAPIModelsRequest &request)
{
    return qobject_cast<GetBackendAPIModelsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetBackendAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a backend auth
 */
GetBackendAuthResponse * AmplifyBackendClient::getBackendAuth(const GetBackendAuthRequest &request)
{
    return qobject_cast<GetBackendAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetBackendJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns information about a specific
 */
GetBackendJobResponse * AmplifyBackendClient::getBackendJob(const GetBackendJobRequest &request)
{
    return qobject_cast<GetBackendJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetBackendStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets details for a backend storage
 */
GetBackendStorageResponse * AmplifyBackendClient::getBackendStorage(const GetBackendStorageRequest &request)
{
    return qobject_cast<GetBackendStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * GetTokenResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the challenge token based on the given appId and
 */
GetTokenResponse * AmplifyBackendClient::getToken(const GetTokenRequest &request)
{
    return qobject_cast<GetTokenResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * ImportBackendAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports an existing backend authentication
 */
ImportBackendAuthResponse * AmplifyBackendClient::importBackendAuth(const ImportBackendAuthRequest &request)
{
    return qobject_cast<ImportBackendAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * ImportBackendStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Imports an existing backend storage
 */
ImportBackendStorageResponse * AmplifyBackendClient::importBackendStorage(const ImportBackendStorageRequest &request)
{
    return qobject_cast<ImportBackendStorageResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * ListBackendJobsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the jobs for the backend of an Amplify
 */
ListBackendJobsResponse * AmplifyBackendClient::listBackendJobs(const ListBackendJobsRequest &request)
{
    return qobject_cast<ListBackendJobsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * ListS3BucketsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * The list of S3 buckets in your
 */
ListS3BucketsResponse * AmplifyBackendClient::listS3Buckets(const ListS3BucketsRequest &request)
{
    return qobject_cast<ListS3BucketsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * RemoveAllBackendsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes all backend environments from your Amplify
 */
RemoveAllBackendsResponse * AmplifyBackendClient::removeAllBackends(const RemoveAllBackendsRequest &request)
{
    return qobject_cast<RemoveAllBackendsResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * RemoveBackendConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes the AWS resources required to access the Amplify Admin
 */
RemoveBackendConfigResponse * AmplifyBackendClient::removeBackendConfig(const RemoveBackendConfigRequest &request)
{
    return qobject_cast<RemoveBackendConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * UpdateBackendAPIResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing backend API
 */
UpdateBackendAPIResponse * AmplifyBackendClient::updateBackendAPI(const UpdateBackendAPIRequest &request)
{
    return qobject_cast<UpdateBackendAPIResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * UpdateBackendAuthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing backend authentication
 */
UpdateBackendAuthResponse * AmplifyBackendClient::updateBackendAuth(const UpdateBackendAuthRequest &request)
{
    return qobject_cast<UpdateBackendAuthResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * UpdateBackendConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the AWS resources required to access the Amplify Admin
 */
UpdateBackendConfigResponse * AmplifyBackendClient::updateBackendConfig(const UpdateBackendConfigRequest &request)
{
    return qobject_cast<UpdateBackendConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * UpdateBackendJobResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates a specific
 */
UpdateBackendJobResponse * AmplifyBackendClient::updateBackendJob(const UpdateBackendJobRequest &request)
{
    return qobject_cast<UpdateBackendJobResponse *>(send(request));
}

/*!
 * Sends \a request to the AmplifyBackendClient service, and returns a pointer to an
 * UpdateBackendStorageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing backend storage
 */
UpdateBackendStorageResponse * AmplifyBackendClient::updateBackendStorage(const UpdateBackendStorageRequest &request)
{
    return qobject_cast<UpdateBackendStorageResponse *>(send(request));
}

/*!
 * \class QtAws::AmplifyBackend::AmplifyBackendClientPrivate
 * \brief The AmplifyBackendClientPrivate class provides private implementation for AmplifyBackendClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAmplifyBackend
 */

/*!
 * Constructs a AmplifyBackendClientPrivate object with public implementation \a q.
 */
AmplifyBackendClientPrivate::AmplifyBackendClientPrivate(AmplifyBackendClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AmplifyBackend
} // namespace QtAws
