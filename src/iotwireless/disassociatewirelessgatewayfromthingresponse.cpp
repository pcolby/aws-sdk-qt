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

#include "disassociatewirelessgatewayfromthingresponse.h"
#include "disassociatewirelessgatewayfromthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromThingResponse
 * \brief The DisassociateWirelessGatewayFromThingResponse class provides an interace for IoTWireless DisassociateWirelessGatewayFromThing responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::disassociateWirelessGatewayFromThing
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromThingResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateWirelessGatewayFromThingResponse::DisassociateWirelessGatewayFromThingResponse(
        const DisassociateWirelessGatewayFromThingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DisassociateWirelessGatewayFromThingResponsePrivate(this), parent)
{
    setRequest(new DisassociateWirelessGatewayFromThingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateWirelessGatewayFromThingRequest * DisassociateWirelessGatewayFromThingResponse::request() const
{
    Q_D(const DisassociateWirelessGatewayFromThingResponse);
    return static_cast<const DisassociateWirelessGatewayFromThingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DisassociateWirelessGatewayFromThing \a response.
 */
void DisassociateWirelessGatewayFromThingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateWirelessGatewayFromThingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DisassociateWirelessGatewayFromThingResponsePrivate
 * \brief The DisassociateWirelessGatewayFromThingResponsePrivate class provides private implementation for DisassociateWirelessGatewayFromThingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DisassociateWirelessGatewayFromThingResponsePrivate object with public implementation \a q.
 */
DisassociateWirelessGatewayFromThingResponsePrivate::DisassociateWirelessGatewayFromThingResponsePrivate(
    DisassociateWirelessGatewayFromThingResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DisassociateWirelessGatewayFromThing response element from \a xml.
 */
void DisassociateWirelessGatewayFromThingResponsePrivate::parseDisassociateWirelessGatewayFromThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateWirelessGatewayFromThingResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
