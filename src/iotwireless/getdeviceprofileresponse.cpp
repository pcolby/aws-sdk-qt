// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeviceprofileresponse.h"
#include "getdeviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetDeviceProfileResponse
 * \brief The GetDeviceProfileResponse class provides an interace for IoTWireless GetDeviceProfile responses.
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
 * \sa IoTWirelessClient::getDeviceProfile
 */

/*!
 * Constructs a GetDeviceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceProfileResponse::GetDeviceProfileResponse(
        const GetDeviceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetDeviceProfileResponsePrivate(this), parent)
{
    setRequest(new GetDeviceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceProfileRequest * GetDeviceProfileResponse::request() const
{
    Q_D(const GetDeviceProfileResponse);
    return static_cast<const GetDeviceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetDeviceProfile \a response.
 */
void GetDeviceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetDeviceProfileResponsePrivate
 * \brief The GetDeviceProfileResponsePrivate class provides private implementation for GetDeviceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetDeviceProfileResponsePrivate object with public implementation \a q.
 */
GetDeviceProfileResponsePrivate::GetDeviceProfileResponsePrivate(
    GetDeviceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetDeviceProfile response element from \a xml.
 */
void GetDeviceProfileResponsePrivate::parseGetDeviceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
