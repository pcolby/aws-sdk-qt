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

#include "senddatatowirelessdeviceresponse.h"
#include "senddatatowirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::SendDataToWirelessDeviceResponse
 * \brief The SendDataToWirelessDeviceResponse class provides an interace for IoTWireless SendDataToWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::sendDataToWirelessDevice
 */

/*!
 * Constructs a SendDataToWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
SendDataToWirelessDeviceResponse::SendDataToWirelessDeviceResponse(
        const SendDataToWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new SendDataToWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new SendDataToWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendDataToWirelessDeviceRequest * SendDataToWirelessDeviceResponse::request() const
{
    return static_cast<const SendDataToWirelessDeviceRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless SendDataToWirelessDevice \a response.
 */
void SendDataToWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendDataToWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::SendDataToWirelessDeviceResponsePrivate
 * \brief The SendDataToWirelessDeviceResponsePrivate class provides private implementation for SendDataToWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a SendDataToWirelessDeviceResponsePrivate object with public implementation \a q.
 */
SendDataToWirelessDeviceResponsePrivate::SendDataToWirelessDeviceResponsePrivate(
    SendDataToWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless SendDataToWirelessDevice response element from \a xml.
 */
void SendDataToWirelessDeviceResponsePrivate::parseSendDataToWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendDataToWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
