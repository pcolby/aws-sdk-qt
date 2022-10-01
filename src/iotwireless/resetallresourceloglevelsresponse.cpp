// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetallresourceloglevelsresponse.h"
#include "resetallresourceloglevelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ResetAllResourceLogLevelsResponse
 * \brief The ResetAllResourceLogLevelsResponse class provides an interace for IoTWireless ResetAllResourceLogLevels responses.
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
 * \sa IoTWirelessClient::resetAllResourceLogLevels
 */

/*!
 * Constructs a ResetAllResourceLogLevelsResponse object for \a reply to \a request, with parent \a parent.
 */
ResetAllResourceLogLevelsResponse::ResetAllResourceLogLevelsResponse(
        const ResetAllResourceLogLevelsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ResetAllResourceLogLevelsResponsePrivate(this), parent)
{
    setRequest(new ResetAllResourceLogLevelsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetAllResourceLogLevelsRequest * ResetAllResourceLogLevelsResponse::request() const
{
    Q_D(const ResetAllResourceLogLevelsResponse);
    return static_cast<const ResetAllResourceLogLevelsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ResetAllResourceLogLevels \a response.
 */
void ResetAllResourceLogLevelsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetAllResourceLogLevelsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ResetAllResourceLogLevelsResponsePrivate
 * \brief The ResetAllResourceLogLevelsResponsePrivate class provides private implementation for ResetAllResourceLogLevelsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ResetAllResourceLogLevelsResponsePrivate object with public implementation \a q.
 */
ResetAllResourceLogLevelsResponsePrivate::ResetAllResourceLogLevelsResponsePrivate(
    ResetAllResourceLogLevelsResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ResetAllResourceLogLevels response element from \a xml.
 */
void ResetAllResourceLogLevelsResponsePrivate::parseResetAllResourceLogLevelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetAllResourceLogLevelsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
