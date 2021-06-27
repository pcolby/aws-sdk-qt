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

#include "updatewirelessgatewayresponse.h"
#include "updatewirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::UpdateWirelessGatewayResponse
 * \brief The UpdateWirelessGatewayResponse class provides an interace for IoTWireless UpdateWirelessGateway responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::updateWirelessGateway
 */

/*!
 * Constructs a UpdateWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateWirelessGatewayResponse::UpdateWirelessGatewayResponse(
        const UpdateWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new UpdateWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new UpdateWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateWirelessGatewayRequest * UpdateWirelessGatewayResponse::request() const
{
    return static_cast<const UpdateWirelessGatewayRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless UpdateWirelessGateway \a response.
 */
void UpdateWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::UpdateWirelessGatewayResponsePrivate
 * \brief The UpdateWirelessGatewayResponsePrivate class provides private implementation for UpdateWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a UpdateWirelessGatewayResponsePrivate object with public implementation \a q.
 */
UpdateWirelessGatewayResponsePrivate::UpdateWirelessGatewayResponsePrivate(
    UpdateWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless UpdateWirelessGateway response element from \a xml.
 */
void UpdateWirelessGatewayResponsePrivate::parseUpdateWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
