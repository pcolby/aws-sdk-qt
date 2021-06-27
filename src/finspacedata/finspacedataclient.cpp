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

#include "finspacedataclient.h"
#include "finspacedataclient_p.h"

#include "core/awssignaturev4.h"
#include "createchangesetrequest.h"
#include "createchangesetresponse.h"
#include "getprogrammaticaccesscredentialsrequest.h"
#include "getprogrammaticaccesscredentialsresponse.h"
#include "getworkinglocationrequest.h"
#include "getworkinglocationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::FinSpaceData
 * \brief Contains classess for accessing FinSpace Public API (FinSpace Data).
 *
 * \inmodule QtAwsFinSpaceData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace FinSpaceData {

/*!
 * \class QtAws::FinSpaceData::FinSpaceDataClient
 * \brief The FinSpaceDataClient class provides access to the FinSpace Public API (FinSpace Data) service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFinSpaceData
 *
 *  The FinSpace APIs let you take actions inside the FinSpace environment.
 */

/*!
 * \brief Constructs a FinSpaceDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
FinSpaceDataClient::FinSpaceDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-07-13"),
    QStringLiteral("finspace-api"),
    QStringLiteral("FinSpace Public API"),
    QStringLiteral("finspace-api"),
    parent), d_ptr(new FinSpaceDataClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload FinSpaceDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
FinSpaceDataClient::FinSpaceDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-07-13"),
    QStringLiteral("finspace-api"),
    QStringLiteral("FinSpace Public API"),
    QStringLiteral("finspace-api"),
    parent), d_ptr(new FinSpaceDataClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the FinSpaceDataClient service, and returns a pointer to an
 * CreateChangesetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new changeset in a FinSpace
 */
CreateChangesetResponse * FinSpaceDataClient::createChangeset(const CreateChangesetRequest &request)
{
    return qobject_cast<CreateChangesetResponse *>(send(request));
}

/*!
 * Sends \a request to the FinSpaceDataClient service, and returns a pointer to an
 * GetProgrammaticAccessCredentialsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Request programmatic credentials to use with Habanero
 */
GetProgrammaticAccessCredentialsResponse * FinSpaceDataClient::getProgrammaticAccessCredentials(const GetProgrammaticAccessCredentialsRequest &request)
{
    return qobject_cast<GetProgrammaticAccessCredentialsResponse *>(send(request));
}

/*!
 * Sends \a request to the FinSpaceDataClient service, and returns a pointer to an
 * GetWorkingLocationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * A temporary Amazon S3 location to copy your files from a source location to stage or use as a scratch space in Habanero
 */
GetWorkingLocationResponse * FinSpaceDataClient::getWorkingLocation(const GetWorkingLocationRequest &request)
{
    return qobject_cast<GetWorkingLocationResponse *>(send(request));
}

/*!
 * \class QtAws::FinSpaceData::FinSpaceDataClientPrivate
 * \brief The FinSpaceDataClientPrivate class provides private implementation for FinSpaceDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsFinSpaceData
 */

/*!
 * Constructs a FinSpaceDataClientPrivate object with public implementation \a q.
 */
FinSpaceDataClientPrivate::FinSpaceDataClientPrivate(FinSpaceDataClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace FinSpaceData
} // namespace QtAws
