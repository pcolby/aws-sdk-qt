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

#include "createwirelessgatewayresponse.h"
#include "createwirelessgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayResponse
 * \brief The CreateWirelessGatewayResponse class provides an interace for IoTWireless CreateWirelessGateway responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::createWirelessGateway
 */

/*!
 * Constructs a CreateWirelessGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
CreateWirelessGatewayResponse::CreateWirelessGatewayResponse(
        const CreateWirelessGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new CreateWirelessGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateWirelessGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateWirelessGatewayRequest * CreateWirelessGatewayResponse::request() const
{
    return static_cast<const CreateWirelessGatewayRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless CreateWirelessGateway \a response.
 */
void CreateWirelessGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateWirelessGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::CreateWirelessGatewayResponsePrivate
 * \brief The CreateWirelessGatewayResponsePrivate class provides private implementation for CreateWirelessGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a CreateWirelessGatewayResponsePrivate object with public implementation \a q.
 */
CreateWirelessGatewayResponsePrivate::CreateWirelessGatewayResponsePrivate(
    CreateWirelessGatewayResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless CreateWirelessGateway response element from \a xml.
 */
void CreateWirelessGatewayResponsePrivate::parseCreateWirelessGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateWirelessGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
