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

#include "disassociatewirelessdevicefromthingresponse.h"
#include "disassociatewirelessdevicefromthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromThingResponse
 * \brief The DisassociateWirelessDeviceFromThingResponse class provides an interace for IoTWireless DisassociateWirelessDeviceFromThing responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::disassociateWirelessDeviceFromThing
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromThingResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateWirelessDeviceFromThingResponse::DisassociateWirelessDeviceFromThingResponse(
        const DisassociateWirelessDeviceFromThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateWirelessDeviceFromThingResponsePrivate(this), parent)
{
    setRequest(new DisassociateWirelessDeviceFromThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateWirelessDeviceFromThingRequest * DisassociateWirelessDeviceFromThingResponse::request() const
{
    Q_D(const DisassociateWirelessDeviceFromThingResponse);
    return static_cast<const DisassociateWirelessDeviceFromThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateWirelessDeviceFromThing \a response.
 */
void DisassociateWirelessDeviceFromThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateWirelessDeviceFromThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessDeviceFromThingResponsePrivate
 * \brief The DisassociateWirelessDeviceFromThingResponsePrivate class provides private implementation for DisassociateWirelessDeviceFromThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessDeviceFromThingResponsePrivate object with public implementation \a q.
 */
DisassociateWirelessDeviceFromThingResponsePrivate::DisassociateWirelessDeviceFromThingResponsePrivate(
    DisassociateWirelessDeviceFromThingResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateWirelessDeviceFromThing response element from \a xml.
 */
void DisassociateWirelessDeviceFromThingResponsePrivate::parseDisassociateWirelessDeviceFromThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWirelessDeviceFromThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
