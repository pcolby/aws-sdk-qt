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

#include "deletewirelessgatewayresponse.h"
#include "deletewirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayResponse
 * \brief The DeleteWirelessGatewayResponse class provides an interace for IoTWireless DeleteWirelessGateway responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::deleteWirelessGateway
 */

/*!
 * Constructs a DeleteWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteWirelessGatewayResponse::DeleteWirelessGatewayResponse(
        const DeleteWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new DeleteWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteWirelessGatewayRequest * DeleteWirelessGatewayResponse::request() const
{
    Q_D(const DeleteWirelessGatewayResponse);
    return static_cast<const DeleteWirelessGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless DeleteWirelessGateway \a response.
 */
void DeleteWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::DeleteWirelessGatewayResponsePrivate
 * \brief The DeleteWirelessGatewayResponsePrivate class provides private implementation for DeleteWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a DeleteWirelessGatewayResponsePrivate object with public implementation \a q.
 */
DeleteWirelessGatewayResponsePrivate::DeleteWirelessGatewayResponsePrivate(
    DeleteWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless DeleteWirelessGateway response element from \a xml.
 */
void DeleteWirelessGatewayResponsePrivate::parseDeleteWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
