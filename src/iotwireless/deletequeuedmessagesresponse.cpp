// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequeuedmessagesresponse.h"
#include "deletequeuedmessagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteQueuedMessagesResponse
 * \brief The DeleteQueuedMessagesResponse class provides an interace for IoTWireless DeleteQueuedMessages responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless provides bi-directional communication between internet-connected wireless devices and the AWS Cloud. To
 *  onboard both LoRaWAN and Sidewalk devices to AWS IoT, use the IoT Wireless API. These wireless devices use the Low Power
 *  Wide Area Networking (LPWAN) communication protocol to communicate with AWS
 * 
 *  IoT>
 * 
 *  Using the API, you can perform create, read, update, and delete operations for your wireless devices, gateways,
 *  destinations, and profiles. After onboarding your devices, you can use the API operations to set log levels and monitor
 *  your devices with
 * 
 *  CloudWatch>
 * 
 *  You can also use the API operations to create multicast groups and schedule a multicast session for sending a downlink
 *  message to devices in the group. By using Firmware Updates Over-The-Air (FUOTA) API operations, you can create a FUOTA
 *  task and schedule a session to update the firmware of individual devices or an entire group of devices in a multicast
 *
 * \sa IoTWirelessClient::deleteQueuedMessages
 */

/*!
 * Constructs a DeleteQueuedMessagesResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteQueuedMessagesResponse::DeleteQueuedMessagesResponse(
        const DeleteQueuedMessagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteQueuedMessagesResponsePrivate(this), parent)
{
    setRequest(new DeleteQueuedMessagesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteQueuedMessagesRequest * DeleteQueuedMessagesResponse::request() const
{
    Q_D(const DeleteQueuedMessagesResponse);
    return static_cast<const DeleteQueuedMessagesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteQueuedMessages \a response.
 */
void DeleteQueuedMessagesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteQueuedMessagesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteQueuedMessagesResponsePrivate
 * \brief The DeleteQueuedMessagesResponsePrivate class provides private implementation for DeleteQueuedMessagesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteQueuedMessagesResponsePrivate object with public implementation \a q.
 */
DeleteQueuedMessagesResponsePrivate::DeleteQueuedMessagesResponsePrivate(
    DeleteQueuedMessagesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteQueuedMessages response element from \a xml.
 */
void DeleteQueuedMessagesResponsePrivate::parseDeleteQueuedMessagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueuedMessagesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
