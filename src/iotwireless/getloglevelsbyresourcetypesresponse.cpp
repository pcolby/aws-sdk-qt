// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getloglevelsbyresourcetypesresponse.h"
#include "getloglevelsbyresourcetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetLogLevelsByResourceTypesResponse
 * \brief The GetLogLevelsByResourceTypesResponse class provides an interace for IoTWireless GetLogLevelsByResourceTypes responses.
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
 * \sa IoTWirelessClient::getLogLevelsByResourceTypes
 */

/*!
 * Constructs a GetLogLevelsByResourceTypesResponse object for \a reply to \a request, with parent \a parent.
 */
GetLogLevelsByResourceTypesResponse::GetLogLevelsByResourceTypesResponse(
        const GetLogLevelsByResourceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetLogLevelsByResourceTypesResponsePrivate(this), parent)
{
    setRequest(new GetLogLevelsByResourceTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLogLevelsByResourceTypesRequest * GetLogLevelsByResourceTypesResponse::request() const
{
    Q_D(const GetLogLevelsByResourceTypesResponse);
    return static_cast<const GetLogLevelsByResourceTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetLogLevelsByResourceTypes \a response.
 */
void GetLogLevelsByResourceTypesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLogLevelsByResourceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetLogLevelsByResourceTypesResponsePrivate
 * \brief The GetLogLevelsByResourceTypesResponsePrivate class provides private implementation for GetLogLevelsByResourceTypesResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetLogLevelsByResourceTypesResponsePrivate object with public implementation \a q.
 */
GetLogLevelsByResourceTypesResponsePrivate::GetLogLevelsByResourceTypesResponsePrivate(
    GetLogLevelsByResourceTypesResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetLogLevelsByResourceTypes response element from \a xml.
 */
void GetLogLevelsByResourceTypesResponsePrivate::parseGetLogLevelsByResourceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLogLevelsByResourceTypesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
