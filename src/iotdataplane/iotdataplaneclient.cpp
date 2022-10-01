// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "iotdataplaneclient.h"
#include "iotdataplaneclient_p.h"

#include "core/awssignaturev4.h"
#include "deletethingshadowrequest.h"
#include "deletethingshadowresponse.h"
#include "getretainedmessagerequest.h"
#include "getretainedmessageresponse.h"
#include "getthingshadowrequest.h"
#include "getthingshadowresponse.h"
#include "listnamedshadowsforthingrequest.h"
#include "listnamedshadowsforthingresponse.h"
#include "listretainedmessagesrequest.h"
#include "listretainedmessagesresponse.h"
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
 *  <fullname>IoT data</fullname>
 * 
 *  IoT data enables secure, bi-directional communication between Internet-connected things (such as sensors, actuators,
 *  embedded devices, or smart appliances) and the Amazon Web Services cloud. It implements a broker for applications and
 *  things to publish messages over HTTP (Publish) and retrieve, update, and delete shadows. A shadow is a persistent
 *  representation of your things and their state in the Amazon Web Services
 * 
 *  cloud>
 * 
 *  Find the endpoint address for actions in IoT data by running this CLI
 * 
 *  command>
 * 
 *  <code>aws iot describe-endpoint --endpoint-type iot:Data-ATS</code>
 * 
 *  </p
 * 
 *  The service name used by <a href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon Web
 *  ServicesSignature Version 4</a> to sign requests is:
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
    d->endpointPrefix = QStringLiteral("data-ats.iot");
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
    d->endpointPrefix = QStringLiteral("data-ats.iot");
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
 * Deletes the shadow for the specified
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThingShadow</a>
 *
 * action>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_DeleteThingShadow.html">DeleteThingShadow</a> in the IoT
 * Developer
 */
DeleteThingShadowResponse * IoTDataPlaneClient::deleteThingShadow(const DeleteThingShadowRequest &request)
{
    return qobject_cast<DeleteThingShadowResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * GetRetainedMessageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the details of a single retained message for the specified
 *
 * topic>
 *
 * This action returns the message payload of the retained message, which can incur messaging costs. To list only the topic
 * names of the retained messages, call <a
 *
 * href="/iot/latest/developerguide/API_iotdata_ListRetainedMessages.html">ListRetainedMessages</a>>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiotfleethubfordevicemanagement.html#awsiotfleethubfordevicemanagement-actions-as-permissions">GetRetainedMessage</a>
 *
 * action>
 *
 * For more information about messaging costs, see <a href="http://aws.amazon.com/iot-core/pricing/#Messaging">Amazon Web
 * Services IoT Core pricing -
 */
GetRetainedMessageResponse * IoTDataPlaneClient::getRetainedMessage(const GetRetainedMessageRequest &request)
{
    return qobject_cast<GetRetainedMessageResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * GetThingShadowResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the shadow for the specified
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetThingShadow</a>
 *
 * action>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_GetThingShadow.html">GetThingShadow</a> in the IoT
 * Developer
 */
GetThingShadowResponse * IoTDataPlaneClient::getThingShadow(const GetThingShadowRequest &request)
{
    return qobject_cast<GetThingShadowResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * ListNamedShadowsForThingResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists the shadows for the specified
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListNamedShadowsForThing</a>
 */
ListNamedShadowsForThingResponse * IoTDataPlaneClient::listNamedShadowsForThing(const ListNamedShadowsForThingRequest &request)
{
    return qobject_cast<ListNamedShadowsForThingResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * ListRetainedMessagesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists summary information about the retained messages stored for the
 *
 * account>
 *
 * This action returns only the topic names of the retained messages. It doesn't return any message payloads. Although this
 * action doesn't return a message payload, it can still incur messaging
 *
 * costs>
 *
 * To get the message payload of a retained message, call <a
 * href="https://docs.aws.amazon.com/iot/latest/developerguide/API_iotdata_GetRetainedMessage.html">GetRetainedMessage</a>
 * with the topic name of the retained
 *
 * message>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiotfleethubfordevicemanagement.html#awsiotfleethubfordevicemanagement-actions-as-permissions">ListRetainedMessages</a>
 *
 * action>
 *
 * For more information about messaging costs, see <a href="http://aws.amazon.com/iot-core/pricing/#Messaging">Amazon Web
 * Services IoT Core pricing -
 */
ListRetainedMessagesResponse * IoTDataPlaneClient::listRetainedMessages(const ListRetainedMessagesRequest &request)
{
    return qobject_cast<ListRetainedMessagesResponse *>(send(request));
}

/*!
 * Sends \a request to the IoTDataPlaneClient service, and returns a pointer to an
 * PublishResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Publishes an MQTT
 *
 * message>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">Publish</a>
 *
 * action>
 *
 * For more information about MQTT messages, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/mqtt.html">MQTT Protocol</a> in the IoT Developer
 *
 * Guide>
 *
 * For more information about messaging costs, see <a href="http://aws.amazon.com/iot-core/pricing/#Messaging">Amazon Web
 * Services IoT Core pricing -
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
 * Updates the shadow for the specified
 *
 * thing>
 *
 * Requires permission to access the <a
 * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThingShadow</a>
 *
 * action>
 *
 * For more information, see <a
 * href="http://docs.aws.amazon.com/iot/latest/developerguide/API_UpdateThingShadow.html">UpdateThingShadow</a> in the IoT
 * Developer
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
