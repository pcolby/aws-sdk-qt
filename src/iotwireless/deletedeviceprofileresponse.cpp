// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeviceprofileresponse.h"
#include "deletedeviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteDeviceProfileResponse
 * \brief The DeleteDeviceProfileResponse class provides an interace for IoTWireless DeleteDeviceProfile responses.
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
 * \sa IoTWirelessClient::deleteDeviceProfile
 */

/*!
 * Constructs a DeleteDeviceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDeviceProfileResponse::DeleteDeviceProfileResponse(
        const DeleteDeviceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteDeviceProfileResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDeviceProfileRequest * DeleteDeviceProfileResponse::request() const
{
    Q_D(const DeleteDeviceProfileResponse);
    return static_cast<const DeleteDeviceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteDeviceProfile \a response.
 */
void DeleteDeviceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDeviceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteDeviceProfileResponsePrivate
 * \brief The DeleteDeviceProfileResponsePrivate class provides private implementation for DeleteDeviceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteDeviceProfileResponsePrivate object with public implementation \a q.
 */
DeleteDeviceProfileResponsePrivate::DeleteDeviceProfileResponsePrivate(
    DeleteDeviceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteDeviceProfile response element from \a xml.
 */
void DeleteDeviceProfileResponsePrivate::parseDeleteDeviceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
