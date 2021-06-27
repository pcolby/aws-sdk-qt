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

#include "createwirelessdeviceresponse.h"
#include "createwirelessdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessDeviceResponse
 * \brief The CreateWirelessDeviceResponse class provides an interace for IoTWireless CreateWirelessDevice responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createWirelessDevice
 */

/*!
 * Constructs a CreateWirelessDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessDeviceResponse::CreateWirelessDeviceResponse(
        const CreateWirelessDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessDeviceResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessDeviceRequest * CreateWirelessDeviceResponse::request() const
{
    return static_cast<const CreateWirelessDeviceRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessDevice \a response.
 */
void CreateWirelessDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessDeviceResponsePrivate
 * \brief The CreateWirelessDeviceResponsePrivate class provides private implementation for CreateWirelessDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessDeviceResponsePrivate object with public implementation \a q.
 */
CreateWirelessDeviceResponsePrivate::CreateWirelessDeviceResponsePrivate(
    CreateWirelessDeviceResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessDevice response element from \a xml.
 */
void CreateWirelessDeviceResponsePrivate::parseCreateWirelessDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessDeviceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
