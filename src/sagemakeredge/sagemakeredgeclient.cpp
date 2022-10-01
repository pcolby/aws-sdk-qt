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

#include "sagemakeredgeclient.h"
#include "sagemakeredgeclient_p.h"

#include "core/awssignaturev4.h"
#include "getdeploymentsrequest.h"
#include "getdeploymentsresponse.h"
#include "getdeviceregistrationrequest.h"
#include "getdeviceregistrationresponse.h"
#include "sendheartbeatrequest.h"
#include "sendheartbeatresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::SagemakerEdge
 * \brief Contains classess for accessing Amazon Sagemaker Edge Manager.
 *
 * \inmodule QtAwsSagemakerEdge
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace SagemakerEdge {

/*!
 * \class QtAws::SagemakerEdge::SagemakerEdgeClient
 * \brief The SagemakerEdgeClient class provides access to the Amazon Sagemaker Edge Manager service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSagemakerEdge
 *
 *  SageMaker Edge Manager dataplane service for communicating with active
 */

/*!
 * \brief Constructs a SagemakerEdgeClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
SagemakerEdgeClient::SagemakerEdgeClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SagemakerEdgeClientPrivate(this), parent)
{
    Q_D(SagemakerEdgeClient);
    d->apiVersion = QStringLiteral("2020-09-23");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("edge.sagemaker");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Sagemaker Edge Manager");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * \overload SagemakerEdgeClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
SagemakerEdgeClient::SagemakerEdgeClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new SagemakerEdgeClientPrivate(this), parent)
{
    Q_D(SagemakerEdgeClient);
    d->apiVersion = QStringLiteral("2020-09-23");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("edge.sagemaker");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Sagemaker Edge Manager");
    d->serviceName = QStringLiteral("sagemaker");
}

/*!
 * Sends \a request to the SagemakerEdgeClient service, and returns a pointer to an
 * GetDeploymentsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to get the active deployments from a
 */
GetDeploymentsResponse * SagemakerEdgeClient::getDeployments(const GetDeploymentsRequest &request)
{
    return qobject_cast<GetDeploymentsResponse *>(send(request));
}

/*!
 * Sends \a request to the SagemakerEdgeClient service, and returns a pointer to an
 * GetDeviceRegistrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to check if a device is registered with SageMaker Edge
 */
GetDeviceRegistrationResponse * SagemakerEdgeClient::getDeviceRegistration(const GetDeviceRegistrationRequest &request)
{
    return qobject_cast<GetDeviceRegistrationResponse *>(send(request));
}

/*!
 * Sends \a request to the SagemakerEdgeClient service, and returns a pointer to an
 * SendHeartbeatResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Use to get the current status of devices registered on SageMaker Edge
 */
SendHeartbeatResponse * SagemakerEdgeClient::sendHeartbeat(const SendHeartbeatRequest &request)
{
    return qobject_cast<SendHeartbeatResponse *>(send(request));
}

/*!
 * \class QtAws::SagemakerEdge::SagemakerEdgeClientPrivate
 * \brief The SagemakerEdgeClientPrivate class provides private implementation for SagemakerEdgeClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsSagemakerEdge
 */

/*!
 * Constructs a SagemakerEdgeClientPrivate object with public implementation \a q.
 */
SagemakerEdgeClientPrivate::SagemakerEdgeClientPrivate(SagemakerEdgeClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace SagemakerEdge
} // namespace QtAws
