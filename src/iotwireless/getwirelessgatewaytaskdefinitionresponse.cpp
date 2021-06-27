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

#include "getwirelessgatewaytaskdefinitionresponse.h"
#include "getwirelessgatewaytaskdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskDefinitionResponse
 * \brief The GetWirelessGatewayTaskDefinitionResponse class provides an interace for IoTWireless GetWirelessGatewayTaskDefinition responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayTaskDefinition
 */

/*!
 * Constructs a GetWirelessGatewayTaskDefinitionResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayTaskDefinitionResponse::GetWirelessGatewayTaskDefinitionResponse(
        const GetWirelessGatewayTaskDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayTaskDefinitionResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayTaskDefinitionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayTaskDefinitionRequest * GetWirelessGatewayTaskDefinitionResponse::request() const
{
    return static_cast<const GetWirelessGatewayTaskDefinitionRequest *>(IoTWirelessResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayTaskDefinition \a response.
 */
void GetWirelessGatewayTaskDefinitionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayTaskDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskDefinitionResponsePrivate
 * \brief The GetWirelessGatewayTaskDefinitionResponsePrivate class provides private implementation for GetWirelessGatewayTaskDefinitionResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayTaskDefinitionResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayTaskDefinitionResponsePrivate::GetWirelessGatewayTaskDefinitionResponsePrivate(
    GetWirelessGatewayTaskDefinitionResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayTaskDefinition response element from \a xml.
 */
void GetWirelessGatewayTaskDefinitionResponsePrivate::parseGetWirelessGatewayTaskDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayTaskDefinitionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
