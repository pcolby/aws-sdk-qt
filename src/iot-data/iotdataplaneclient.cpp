/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "iotdataplaneclient.h"
#include "iotdataplaneclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace IoTDataPlane {

/**
 * @class  IoTDataPlaneClient
 *
 * @brief  Client for AWS IoT Data Plane
 *
 * <fullname>AWS IoT</fullname>
 *
 * AWS IoT-Data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 * embedded devices, or smart appliances) and the AWS cloud. It implements a broker for applications and things to publish
 * messages over HTTP (Publish) and retrieve, update, and delete thing shadows. A thing shadow is a persistent
 * representation of your things and their state in the AWS
 */

/**
 * @brief  Constructs a new IoTDataPlaneClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
IoTDataPlaneClient::IoTDataPlaneClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new IoTDataPlaneClientPrivate(this), parent)
{
    Q_D(IoTDataPlaneClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new IoTDataPlaneClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
IoTDataPlaneClient::IoTDataPlaneClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new IoTDataPlaneClientPrivate(this), parent)
{
    Q_D(IoTDataPlaneClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * Deletes the thing shadow for the specified
 *
 * thing>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_DeleteThingShadow.html">DeleteThingShadow</a> in the
 * <i>AWS IoT Developer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteThingShadowResponse * IoTDataPlaneClient::deleteThingShadow(const DeleteThingShadowRequest &request)
{

}

/**
 * Gets the thing shadow for the specified
 *
 * thing>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_GetThingShadow.html">GetThingShadow</a> in the <i>AWS IoT
 * Developer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetThingShadowResponse * IoTDataPlaneClient::getThingShadow(const GetThingShadowRequest &request)
{

}

/**
 * Publishes state
 *
 * information>
 *
 * For more information, see <a href="http://docs.aws.amazon.com/iot/latest/developerguide/protocols.html#http">HTTP
 * Protocol</a> in the <i>AWS IoT Developer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
PublishResponse * IoTDataPlaneClient::publish(const PublishRequest &request)
{

}

/**
 * Updates the thing shadow for the specified
 *
 * thing>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_UpdateThingShadow.html">UpdateThingShadow</a> in the
 * <i>AWS IoT Developer
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateThingShadowResponse * IoTDataPlaneClient::updateThingShadow(const UpdateThingShadowRequest &request)
{

}

/**
 * @internal
 *
 * @class  IoTDataPlaneClientPrivate
 *
 * @brief  Private implementation for IoTDataPlaneClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new IoTDataPlaneClientPrivate object.
 *
 * @param  q  Pointer to this object's public IoTDataPlaneClient instance.
 */
IoTDataPlaneClientPrivate::IoTDataPlaneClientPrivate(IoTDataPlaneClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace IoTDataPlane
} // namespace AWS
