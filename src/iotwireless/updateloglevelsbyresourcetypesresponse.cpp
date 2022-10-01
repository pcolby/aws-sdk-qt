// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateloglevelsbyresourcetypesresponse.h"
#include "updateloglevelsbyresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateLogLevelsByResourceTypesResponse
 * \brief The UpdateLogLevelsByResourceTypesResponse class provides an interace for IoTWireless UpdateLogLevelsByResourceTypes responses.
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
 * \sa IoTWirelessClient::updateLogLevelsByResourceTypes
 */

/*!
 * Constructs a UpdateLogLevelsByResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLogLevelsByResourceTypesResponse::UpdateLogLevelsByResourceTypesResponse(
        const UpdateLogLevelsByResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateLogLevelsByResourceTypesResponsePrivate(this), parent)
{
    setRequest(new UpdateLogLevelsByResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLogLevelsByResourceTypesRequest * UpdateLogLevelsByResourceTypesResponse::request() const
{
    Q_D(const UpdateLogLevelsByResourceTypesResponse);
    return static_cast<const UpdateLogLevelsByResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateLogLevelsByResourceTypes \a response.
 */
void UpdateLogLevelsByResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLogLevelsByResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateLogLevelsByResourceTypesResponsePrivate
 * \brief The UpdateLogLevelsByResourceTypesResponsePrivate class provides private implementation for UpdateLogLevelsByResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateLogLevelsByResourceTypesResponsePrivate object with public implementation \a q.
 */
UpdateLogLevelsByResourceTypesResponsePrivate::UpdateLogLevelsByResourceTypesResponsePrivate(
    UpdateLogLevelsByResourceTypesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateLogLevelsByResourceTypes response element from \a xml.
 */
void UpdateLogLevelsByResourceTypesResponsePrivate::parseUpdateLogLevelsByResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLogLevelsByResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
