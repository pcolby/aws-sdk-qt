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

#include "getserviceendpointresponse.h"
#include "getserviceendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetServiceEndpointResponse
 * \brief The GetServiceEndpointResponse class provides an interace for IoTWireless GetServiceEndpoint responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getServiceEndpoint
 */

/*!
 * Constructs a GetServiceEndpointResponse object for \a reply to \a request, with parent \a parent.
 */
GetServiceEndpointResponse::GetServiceEndpointResponse(
        const GetServiceEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetServiceEndpointResponsePrivate(this), parent)
{
    setRequest(new GetServiceEndpointRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetServiceEndpointRequest * GetServiceEndpointResponse::request() const
{
    Q_D(const GetServiceEndpointResponse);
    return static_cast<const GetServiceEndpointRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetServiceEndpoint \a response.
 */
void GetServiceEndpointResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetServiceEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetServiceEndpointResponsePrivate
 * \brief The GetServiceEndpointResponsePrivate class provides private implementation for GetServiceEndpointResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetServiceEndpointResponsePrivate object with public implementation \a q.
 */
GetServiceEndpointResponsePrivate::GetServiceEndpointResponsePrivate(
    GetServiceEndpointResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetServiceEndpoint response element from \a xml.
 */
void GetServiceEndpointResponsePrivate::parseGetServiceEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetServiceEndpointResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
