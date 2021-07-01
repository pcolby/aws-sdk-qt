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

#include "getwirelessgatewayfirmwareinformationresponse.h"
#include "getwirelessgatewayfirmwareinformationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayFirmwareInformationResponse
 * \brief The GetWirelessGatewayFirmwareInformationResponse class provides an interace for IoTWireless GetWirelessGatewayFirmwareInformation responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayFirmwareInformation
 */

/*!
 * Constructs a GetWirelessGatewayFirmwareInformationResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayFirmwareInformationResponse::GetWirelessGatewayFirmwareInformationResponse(
        const GetWirelessGatewayFirmwareInformationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayFirmwareInformationResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayFirmwareInformationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayFirmwareInformationRequest * GetWirelessGatewayFirmwareInformationResponse::request() const
{
    Q_D(const GetWirelessGatewayFirmwareInformationResponse);
    return static_cast<const GetWirelessGatewayFirmwareInformationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayFirmwareInformation \a response.
 */
void GetWirelessGatewayFirmwareInformationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayFirmwareInformationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayFirmwareInformationResponsePrivate
 * \brief The GetWirelessGatewayFirmwareInformationResponsePrivate class provides private implementation for GetWirelessGatewayFirmwareInformationResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayFirmwareInformationResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayFirmwareInformationResponsePrivate::GetWirelessGatewayFirmwareInformationResponsePrivate(
    GetWirelessGatewayFirmwareInformationResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayFirmwareInformation response element from \a xml.
 */
void GetWirelessGatewayFirmwareInformationResponsePrivate::parseGetWirelessGatewayFirmwareInformationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayFirmwareInformationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
