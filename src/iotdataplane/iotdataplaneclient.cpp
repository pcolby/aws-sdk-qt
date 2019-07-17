/*
    Copyright 2013-2019 Paul Colby

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

#include "iotdataplaneclient.h"
#include "iotdataplaneclient_p.h"

#include "core/awssignaturev4.h"
#include "deletethingshadowrequest.h"
#include "deletethingshadowresponse.h"
#include "getthingshadowrequest.h"
#include "getthingshadowresponse.h"
#include "publishrequest.h"
#include "publishresponse.h"
#include "updatethingshadowrequest.h"
#include "updatethingshadowresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::IoTDataPlane
 * \brief Contains classess for accessing AWS IoT Data Plane.
 *
 * \inmodule QtAwsIoTDataPlane
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace IoTDataPlane {

/*!
 * \class QtAws::IoTDataPlane::IoTDataPlaneClient
 * \brief The IoTDataPlaneClient class provides access to the AWS IoT Data Plane service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTDataPlane
 *
 *  <fullname>AWS IoT</fullname>
 * 
 *  AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 *  messages over HTTP (Publish) and retrieve, update, and delete thing shadows. A thing shadow is a persistent
 *  representation of your things and their state in the AWS
 */

/*!
 * \brief Constructs a IoTDataPlaneClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
IoTDataPlaneClient::IoTDataPlaneClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTDataPlaneClientPrivate(this), parent)
{
    Q_D(IoTDataPlaneClient);
    d->apiVersion = QStringLiteral("2015-05-28");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("data.iot");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS IoT Data Plane");
    d->serviceName = QStringLiteral("iotdata");
}

/*!
 * \overload IoTDataPlaneClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
IoTDataPlaneClient::IoTDataPlaneClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new IoTDataPlaneClientPrivate(this), parent)
{
    Q_D(IoTDataPlaneClient);
    d->apiVersion = QStringLiteral("2015-05-28");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("data.iot");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS IoT Data Plane");
    d->serviceName = QStringLiteral("iotdata");
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * DeleteThingShadowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the thing shadow for the specified
 *
 * thing>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_DeleteThingShadow.html">DeleteThingShadow</a> in the
 * <i>AWS IoT Developer
 */
DeleteThingShadowResponse * IoTDataPlaneClient::deleteThingShadow(const DeleteThingShadowRequest &request)
{
    return qobject_cast<DeleteThingShadowResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * GetThingShadowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the thing shadow for the specified
 *
 * thing>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_GetThingShadow.html">GetThingShadow</a> in the <i>AWS IoT
 * Developer
 */
GetThingShadowResponse * IoTDataPlaneClient::getThingShadow(const GetThingShadowRequest &request)
{
    return qobject_cast<GetThingShadowResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * PublishResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes state
 *
 * information>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/iot/latest/developerguide/protocols.html#http">HTTP
 * Protocol</a> in the <i>AWS IoT Developer
 */
PublishResponse * IoTDataPlaneClient::publish(const PublishRequest &request)
{
    return qobject_cast<PublishResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * UpdateThingShadowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the thing shadow for the specified
 *
 * thing>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_UpdateThingShadow.html">UpdateThingShadow</a> in the
 * <i>AWS IoT Developer
 */
UpdateThingShadowResponse * IoTDataPlaneClient::updateThingShadow(const UpdateThingShadowRequest &request)
{
    return qobject_cast<UpdateThingShadowResponse *>(send(request));
}

/*!
 * \class QtAws::IoTDataPlane::IoTDataPlaneClientPrivate
 * \brief The IoTDataPlaneClientPrivate class provides private implementation for IoTDataPlaneClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsIoTDataPlane
 */

/*!
 * Constructs a IoTDataPlaneClientPrivate object with public implementation \a q.
 */
IoTDataPlaneClientPrivate::IoTDataPlaneClientPrivate(IoTDataPlaneClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace IoTDataPlane
} // namespace QtAws
