// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getserviceprofileresponse.h"
#include "getserviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceProfileResponse
 * \brief The GetServiceProfileResponse class provides an interace for IoTWireless GetServiceProfile responses.
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
 * \sa IoTWirelessClient::getServiceProfile
 */

/*!
 * Constructs a GetServiceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceProfileResponse::GetServiceProfileResponse(
        const GetServiceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetServiceProfileResponsePrivate(this), parent)
{
    setRequest(new GetServiceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceProfileRequest * GetServiceProfileResponse::request() const
{
    Q_D(const GetServiceProfileResponse);
    return static_cast<const GetServiceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetServiceProfile \a response.
 */
void GetServiceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetServiceProfileResponsePrivate
 * \brief The GetServiceProfileResponsePrivate class provides private implementation for GetServiceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceProfileResponsePrivate object with public implementation \a q.
 */
GetServiceProfileResponsePrivate::GetServiceProfileResponsePrivate(
    GetServiceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetServiceProfile response element from \a xml.
 */
void GetServiceProfileResponsePrivate::parseGetServiceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
