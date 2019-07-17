/*
    Copyright 2013-2019 Paul Colby

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

#include "getdevicemethodsresponse.h"
#include "getdevicemethodsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::GetDeviceMethodsResponse
 * \brief The GetDeviceMethodsResponse class provides an interace for IoT1ClickDevicesService GetDeviceMethods responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Describes all of the AWS IoT 1-Click device-related API operations for the service. Also provides sample requests,
 *  responses, and errors for the supported web services
 *
 * \sa IoT1ClickDevicesServiceClient::getDeviceMethods
 */

/*!
 * Constructs a GetDeviceMethodsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceMethodsResponse::GetDeviceMethodsResponse(
        const GetDeviceMethodsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new GetDeviceMethodsResponsePrivate(this), parent)
{
    setRequest(new GetDeviceMethodsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceMethodsRequest * GetDeviceMethodsResponse::request() const
{
    Q_D(const GetDeviceMethodsResponse);
    return static_cast<const GetDeviceMethodsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevicesService GetDeviceMethods \a response.
 */
void GetDeviceMethodsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceMethodsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::GetDeviceMethodsResponsePrivate
 * \brief The GetDeviceMethodsResponsePrivate class provides private implementation for GetDeviceMethodsResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a GetDeviceMethodsResponsePrivate object with public implementation \a q.
 */
GetDeviceMethodsResponsePrivate::GetDeviceMethodsResponsePrivate(
    GetDeviceMethodsResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService GetDeviceMethods response element from \a xml.
 */
void GetDeviceMethodsResponsePrivate::parseGetDeviceMethodsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceMethodsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
