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

#include "getwirelessgatewaytaskresponse.h"
#include "getwirelessgatewaytaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskResponse
 * \brief The GetWirelessGatewayTaskResponse class provides an interace for IoTWireless GetWirelessGatewayTask responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getWirelessGatewayTask
 */

/*!
 * Constructs a GetWirelessGatewayTaskResponse object for \a reply to \a request, with parent \a parent.
 */
GetWirelessGatewayTaskResponse::GetWirelessGatewayTaskResponse(
        const GetWirelessGatewayTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetWirelessGatewayTaskResponsePrivate(this), parent)
{
    setRequest(new GetWirelessGatewayTaskRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetWirelessGatewayTaskRequest * GetWirelessGatewayTaskResponse::request() const
{
    Q_D(const GetWirelessGatewayTaskResponse);
    return static_cast<const GetWirelessGatewayTaskRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetWirelessGatewayTask \a response.
 */
void GetWirelessGatewayTaskResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetWirelessGatewayTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetWirelessGatewayTaskResponsePrivate
 * \brief The GetWirelessGatewayTaskResponsePrivate class provides private implementation for GetWirelessGatewayTaskResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetWirelessGatewayTaskResponsePrivate object with public implementation \a q.
 */
GetWirelessGatewayTaskResponsePrivate::GetWirelessGatewayTaskResponsePrivate(
    GetWirelessGatewayTaskResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetWirelessGatewayTask response element from \a xml.
 */
void GetWirelessGatewayTaskResponsePrivate::parseGetWirelessGatewayTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetWirelessGatewayTaskResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
