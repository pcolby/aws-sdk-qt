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

#include "updatewirelessdeviceresponse.h"
#include "updatewirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateWirelessDeviceResponse
 * \brief The UpdateWirelessDeviceResponse class provides an interace for IoTWireless UpdateWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::updateWirelessDevice
 */

/*!
 * Constructs a UpdateWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWirelessDeviceResponse::UpdateWirelessDeviceResponse(
        const UpdateWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new UpdateWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWirelessDeviceRequest * UpdateWirelessDeviceResponse::request() const
{
    Q_D(const UpdateWirelessDeviceResponse);
    return static_cast<const UpdateWirelessDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateWirelessDevice \a response.
 */
void UpdateWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateWirelessDeviceResponsePrivate
 * \brief The UpdateWirelessDeviceResponsePrivate class provides private implementation for UpdateWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateWirelessDeviceResponsePrivate object with public implementation \a q.
 */
UpdateWirelessDeviceResponsePrivate::UpdateWirelessDeviceResponsePrivate(
    UpdateWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateWirelessDevice response element from \a xml.
 */
void UpdateWirelessDeviceResponsePrivate::parseUpdateWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
