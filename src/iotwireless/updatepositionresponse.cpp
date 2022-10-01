// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepositionresponse.h"
#include "updatepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdatePositionResponse
 * \brief The UpdatePositionResponse class provides an interace for IoTWireless UpdatePosition responses.
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
 * \sa IoTWirelessClient::updatePosition
 */

/*!
 * Constructs a UpdatePositionResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePositionResponse::UpdatePositionResponse(
        const UpdatePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdatePositionResponsePrivate(this), parent)
{
    setRequest(new UpdatePositionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePositionRequest * UpdatePositionResponse::request() const
{
    Q_D(const UpdatePositionResponse);
    return static_cast<const UpdatePositionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdatePosition \a response.
 */
void UpdatePositionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePositionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdatePositionResponsePrivate
 * \brief The UpdatePositionResponsePrivate class provides private implementation for UpdatePositionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdatePositionResponsePrivate object with public implementation \a q.
 */
UpdatePositionResponsePrivate::UpdatePositionResponsePrivate(
    UpdatePositionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdatePosition response element from \a xml.
 */
void UpdatePositionResponsePrivate::parseUpdatePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePositionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
