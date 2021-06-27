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

#include "sagemakeredgemanagerclient.h"
#include "sagemakeredgemanagerclient_p.h"

#include "core/awssignaturev4.h"
#include "getdeviceregistrationrequest.h"
#include "getdeviceregistrationresponse.h"
#include "sendheartbeatrequest.h"
#include "sendheartbeatresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SagemakerEdgeManager
 * \brief Contains classess for accessing Amazon Sagemaker Edge Manager.
 *
 * \inmodule QtAwsSagemakerEdgeManager
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SagemakerEdgeManager {

/*!
 * \class QtAws::SagemakerEdgeManager::SagemakerEdgeManagerClient
 * \brief The SagemakerEdgeManagerClient class provides access to the Amazon Sagemaker Edge Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSagemakerEdgeManager
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 */

/*!
 * \brief Constructs a SagemakerEdgeManagerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-09-23"),
    QStringLiteral("edge.sagemaker"),
    QStringLiteral("Amazon Sagemaker Edge Manager"),
    QStringLiteral("sagemaker"),
    parent), d_ptr(new SagemakerEdgeManagerClientPrivate(this))
{
    setRegion(region);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * \overload SagemakerEdgeManagerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SagemakerEdgeManagerClient::SagemakerEdgeManagerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
:  QtAws::Core::AwsAbstractClient(
    QStringLiteral("2020-09-23"),
    QStringLiteral("edge.sagemaker"),
    QStringLiteral("Amazon Sagemaker Edge Manager"),
    QStringLiteral("sagemaker"),
    parent), d_ptr(new SagemakerEdgeManagerClientPrivate(this))
{
    setEndpoint(endpoint);
    setCredentials(credentials);
    setNetworkAccessManager(manager);
}

/*!
 * Sends \a request to the SagemakerEdgeManagerClient service, and returns a pointer to an
 * GetDeviceRegistrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to check if a device is registered with SageMaker Edge
 */
GetDeviceRegistrationResponse * SagemakerEdgeManagerClient::getDeviceRegistration(const GetDeviceRegistrationRequest &request)
{
    return qobject_cast<GetDeviceRegistrationResponse *>(send(request));
}

/*!
 * Sends \a request to the SagemakerEdgeManagerClient service, and returns a pointer to an
 * SendHeartbeatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to get the current status of devices registered on SageMaker Edge
 */
SendHeartbeatResponse * SagemakerEdgeManagerClient::sendHeartbeat(const SendHeartbeatRequest &request)
{
    return qobject_cast<SendHeartbeatResponse *>(send(request));
}

/*!
 * \class QtAws::SagemakerEdgeManager::SagemakerEdgeManagerClientPrivate
 * \brief The SagemakerEdgeManagerClientPrivate class provides private implementation for SagemakerEdgeManagerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSagemakerEdgeManager
 */

/*!
 * Constructs a SagemakerEdgeManagerClientPrivate object with public implementation \a q.
 */
SagemakerEdgeManagerClientPrivate::SagemakerEdgeManagerClientPrivate(SagemakerEdgeManagerClient * const q) : q_ptr(q)
{
    q->setSignature(new QtAws::Core::AwsSignatureV4());
}

} // namespace SagemakerEdgeManager
} // namespace QtAws
