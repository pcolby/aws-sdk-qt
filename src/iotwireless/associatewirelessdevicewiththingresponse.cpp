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

#include "associatewirelessdevicewiththingresponse.h"
#include "associatewirelessdevicewiththingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithThingResponse
 * \brief The AssociateWirelessDeviceWithThingResponse class provides an interace for IoTWireless AssociateWirelessDeviceWithThing responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::associateWirelessDeviceWithThing
 */

/*!
 * Constructs a AssociateWirelessDeviceWithThingResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateWirelessDeviceWithThingResponse::AssociateWirelessDeviceWithThingResponse(
        const AssociateWirelessDeviceWithThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new AssociateWirelessDeviceWithThingResponsePrivate(this), parent)
{
    setRequest(new AssociateWirelessDeviceWithThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateWirelessDeviceWithThingRequest * AssociateWirelessDeviceWithThingResponse::request() const
{
    return static_cast<const AssociateWirelessDeviceWithThingRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless AssociateWirelessDeviceWithThing \a response.
 */
void AssociateWirelessDeviceWithThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateWirelessDeviceWithThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::AssociateWirelessDeviceWithThingResponsePrivate
 * \brief The AssociateWirelessDeviceWithThingResponsePrivate class provides private implementation for AssociateWirelessDeviceWithThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a AssociateWirelessDeviceWithThingResponsePrivate object with public implementation \a q.
 */
AssociateWirelessDeviceWithThingResponsePrivate::AssociateWirelessDeviceWithThingResponsePrivate(
    AssociateWirelessDeviceWithThingResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless AssociateWirelessDeviceWithThing response element from \a xml.
 */
void AssociateWirelessDeviceWithThingResponsePrivate::parseAssociateWirelessDeviceWithThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateWirelessDeviceWithThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
