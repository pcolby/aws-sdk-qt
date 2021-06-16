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

#include "finspaceclient.h"
#include "finspaceclient_p.h"

#include "core/awssignaturev4.h"
#include "createenvironmentrequest.h"
#include "createenvironmentresponse.h"
#include "deleteenvironmentrequest.h"
#include "deleteenvironmentresponse.h"
#include "getenvironmentrequest.h"
#include "getenvironmentresponse.h"
#include "listenvironmentsrequest.h"
#include "listenvironmentsresponse.h"
#include "listtagsforresourcerequest.h"
#include "listtagsforresourceresponse.h"
#include "tagresourcerequest.h"
#include "tagresourceresponse.h"
#include "untagresourcerequest.h"
#include "untagresourceresponse.h"
#include "updateenvironmentrequest.h"
#include "updateenvironmentresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::finspace
 * \brief Contains classess for accessing FinSpace User Environment Management service (finspace).
 *
 * \inmodule QtAwsfinspace
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace finspace {

/*!
 * \class QtAws::finspace::finspaceClient
 * \brief The finspaceClient class provides access to the FinSpace User Environment Management service (finspace) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsfinspace
 *
 *  The FinSpace management service provides the APIs for managing the FinSpace environments.
 */

/*!
 * \brief Constructs a finspaceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
finspaceClient::finspaceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new finspaceClientPrivate(this), parent)
{
    Q_D(finspaceClient);
    d->apiVersion = QStringLiteral("2021-03-12");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("finspace");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("FinSpace User Environment Management service");
    d->serviceName = QStringLiteral("finspace");
}

/*!
 * \overload finspaceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
finspaceClient::finspaceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new finspaceClientPrivate(this), parent)
{
    Q_D(finspaceClient);
    d->apiVersion = QStringLiteral("2021-03-12");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("finspace");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("FinSpace User Environment Management service");
    d->serviceName = QStringLiteral("finspace");
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * CreateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Create a new FinSpace
 */
CreateEnvironmentResponse * finspaceClient::createEnvironment(const CreateEnvironmentRequest &request)
{
    return qobject_cast<CreateEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * DeleteEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Delete an FinSpace
 */
DeleteEnvironmentResponse * finspaceClient::deleteEnvironment(const DeleteEnvironmentRequest &request)
{
    return qobject_cast<DeleteEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * GetEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the FinSpace environment
 */
GetEnvironmentResponse * finspaceClient::getEnvironment(const GetEnvironmentRequest &request)
{
    return qobject_cast<GetEnvironmentResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * ListEnvironmentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of all of your FinSpace
 */
ListEnvironmentsResponse * finspaceClient::listEnvironments(const ListEnvironmentsRequest &request)
{
    return qobject_cast<ListEnvironmentsResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * ListTagsForResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A list of all tags for a
 */
ListTagsForResourceResponse * finspaceClient::listTagsForResource(const ListTagsForResourceRequest &request)
{
    return qobject_cast<ListTagsForResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * TagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds metadata tags to a FinSpace
 */
TagResourceResponse * finspaceClient::tagResource(const TagResourceRequest &request)
{
    return qobject_cast<TagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * UntagResourceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes metadata tags from a FinSpace
 */
UntagResourceResponse * finspaceClient::untagResource(const UntagResourceRequest &request)
{
    return qobject_cast<UntagResourceResponse *>(send(request));
}

/*!
 * Sends \a request to the finspaceClient service, and returns a pointer to an
 * UpdateEnvironmentResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Update your FinSpace
 */
UpdateEnvironmentResponse * finspaceClient::updateEnvironment(const UpdateEnvironmentRequest &request)
{
    return qobject_cast<UpdateEnvironmentResponse *>(send(request));
}

/*!
 * \class QtAws::finspace::finspaceClientPrivate
 * \brief The finspaceClientPrivate class provides private implementation for finspaceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsfinspace
 */

/*!
 * Constructs a finspaceClientPrivate object with public implementation \a q.
 */
finspaceClientPrivate::finspaceClientPrivate(finspaceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace finspace
} // namespace QtAws
