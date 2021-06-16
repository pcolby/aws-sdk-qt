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

#include "getwirelessdeviceresponse.h"
#include "getwirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceResponse
 * \brief The GetWirelessDeviceResponse class provides an interace for IoTWireless GetWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessDevice
 */

/*!
 * Constructs a GetWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessDeviceResponse::GetWirelessDeviceResponse(
        const GetWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new GetWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessDeviceRequest * GetWirelessDeviceResponse::request() const
{
    Q_D(const GetWirelessDeviceResponse);
    return static_cast<const GetWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessDevice \a response.
 */
void GetWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessDeviceResponsePrivate
 * \brief The GetWirelessDeviceResponsePrivate class provides private implementation for GetWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessDeviceResponsePrivate object with public implementation \a q.
 */
GetWirelessDeviceResponsePrivate::GetWirelessDeviceResponsePrivate(
    GetWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessDevice response element from \a xml.
 */
void GetWirelessDeviceResponsePrivate::parseGetWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
