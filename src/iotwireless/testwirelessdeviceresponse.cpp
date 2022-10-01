// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "testwirelessdeviceresponse.h"
#include "testwirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::TestWirelessDeviceResponse
 * \brief The TestWirelessDeviceResponse class provides an interace for IoTWireless TestWirelessDevice responses.
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
 * \sa IoTWirelessClient::testWirelessDevice
 */

/*!
 * Constructs a TestWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
TestWirelessDeviceResponse::TestWirelessDeviceResponse(
        const TestWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new TestWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new TestWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const TestWirelessDeviceRequest * TestWirelessDeviceResponse::request() const
{
    Q_D(const TestWirelessDeviceResponse);
    return static_cast<const TestWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless TestWirelessDevice \a response.
 */
void TestWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(TestWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::TestWirelessDeviceResponsePrivate
 * \brief The TestWirelessDeviceResponsePrivate class provides private implementation for TestWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a TestWirelessDeviceResponsePrivate object with public implementation \a q.
 */
TestWirelessDeviceResponsePrivate::TestWirelessDeviceResponsePrivate(
    TestWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless TestWirelessDevice response element from \a xml.
 */
void TestWirelessDeviceResponsePrivate::parseTestWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TestWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
