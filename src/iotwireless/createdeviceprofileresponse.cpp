// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdeviceprofileresponse.h"
#include "createdeviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileResponse
 * \brief The CreateDeviceProfileResponse class provides an interace for IoTWireless CreateDeviceProfile responses.
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
 * \sa IoTWirelessClient::createDeviceProfile
 */

/*!
 * Constructs a CreateDeviceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDeviceProfileResponse::CreateDeviceProfileResponse(
        const CreateDeviceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateDeviceProfileResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDeviceProfileRequest * CreateDeviceProfileResponse::request() const
{
    Q_D(const CreateDeviceProfileResponse);
    return static_cast<const CreateDeviceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateDeviceProfile \a response.
 */
void CreateDeviceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDeviceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateDeviceProfileResponsePrivate
 * \brief The CreateDeviceProfileResponsePrivate class provides private implementation for CreateDeviceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateDeviceProfileResponsePrivate object with public implementation \a q.
 */
CreateDeviceProfileResponsePrivate::CreateDeviceProfileResponsePrivate(
    CreateDeviceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateDeviceProfile response element from \a xml.
 */
void CreateDeviceProfileResponsePrivate::parseCreateDeviceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
