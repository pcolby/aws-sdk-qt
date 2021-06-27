/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  AWS IoT Wireless API
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
    return static_cast<const TestWirelessDeviceRequest *>(IoTWirelessResponse::request());
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
