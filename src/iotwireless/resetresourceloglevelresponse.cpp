// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetresourceloglevelresponse.h"
#include "resetresourceloglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::ResetResourceLogLevelResponse
 * \brief The ResetResourceLogLevelResponse class provides an interace for IoTWireless ResetResourceLogLevel responses.
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
 * \sa IoTWirelessClient::resetResourceLogLevel
 */

/*!
 * Constructs a ResetResourceLogLevelResponse object for \a reply to \a request, with parent \a parent.
 */
ResetResourceLogLevelResponse::ResetResourceLogLevelResponse(
        const ResetResourceLogLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new ResetResourceLogLevelResponsePrivate(this), parent)
{
    setRequest(new ResetResourceLogLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetResourceLogLevelRequest * ResetResourceLogLevelResponse::request() const
{
    Q_D(const ResetResourceLogLevelResponse);
    return static_cast<const ResetResourceLogLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless ResetResourceLogLevel \a response.
 */
void ResetResourceLogLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetResourceLogLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::ResetResourceLogLevelResponsePrivate
 * \brief The ResetResourceLogLevelResponsePrivate class provides private implementation for ResetResourceLogLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a ResetResourceLogLevelResponsePrivate object with public implementation \a q.
 */
ResetResourceLogLevelResponsePrivate::ResetResourceLogLevelResponsePrivate(
    ResetResourceLogLevelResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless ResetResourceLogLevel response element from \a xml.
 */
void ResetResourceLogLevelResponsePrivate::parseResetResourceLogLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetResourceLogLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
