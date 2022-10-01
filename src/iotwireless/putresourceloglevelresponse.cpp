// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourceloglevelresponse.h"
#include "putresourceloglevelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::PutResourceLogLevelResponse
 * \brief The PutResourceLogLevelResponse class provides an interace for IoTWireless PutResourceLogLevel responses.
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
 * \sa IoTWirelessClient::putResourceLogLevel
 */

/*!
 * Constructs a PutResourceLogLevelResponse object for \a reply to \a request, with parent \a parent.
 */
PutResourceLogLevelResponse::PutResourceLogLevelResponse(
        const PutResourceLogLevelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new PutResourceLogLevelResponsePrivate(this), parent)
{
    setRequest(new PutResourceLogLevelRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutResourceLogLevelRequest * PutResourceLogLevelResponse::request() const
{
    Q_D(const PutResourceLogLevelResponse);
    return static_cast<const PutResourceLogLevelRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless PutResourceLogLevel \a response.
 */
void PutResourceLogLevelResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutResourceLogLevelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::PutResourceLogLevelResponsePrivate
 * \brief The PutResourceLogLevelResponsePrivate class provides private implementation for PutResourceLogLevelResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a PutResourceLogLevelResponsePrivate object with public implementation \a q.
 */
PutResourceLogLevelResponsePrivate::PutResourceLogLevelResponsePrivate(
    PutResourceLogLevelResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless PutResourceLogLevel response element from \a xml.
 */
void PutResourceLogLevelResponsePrivate::parsePutResourceLogLevelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutResourceLogLevelResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
