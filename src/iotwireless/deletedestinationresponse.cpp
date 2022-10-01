// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedestinationresponse.h"
#include "deletedestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteDestinationResponse
 * \brief The DeleteDestinationResponse class provides an interace for IoTWireless DeleteDestination responses.
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
 * \sa IoTWirelessClient::deleteDestination
 */

/*!
 * Constructs a DeleteDestinationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDestinationResponse::DeleteDestinationResponse(
        const DeleteDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteDestinationResponsePrivate(this), parent)
{
    setRequest(new DeleteDestinationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDestinationRequest * DeleteDestinationResponse::request() const
{
    Q_D(const DeleteDestinationResponse);
    return static_cast<const DeleteDestinationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteDestination \a response.
 */
void DeleteDestinationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteDestinationResponsePrivate
 * \brief The DeleteDestinationResponsePrivate class provides private implementation for DeleteDestinationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteDestinationResponsePrivate object with public implementation \a q.
 */
DeleteDestinationResponsePrivate::DeleteDestinationResponsePrivate(
    DeleteDestinationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteDestination response element from \a xml.
 */
void DeleteDestinationResponsePrivate::parseDeleteDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDestinationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
