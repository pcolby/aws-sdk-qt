/*
    Copyright 2013-2018 Paul Colby

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

#include "unclaimdeviceresponse.h"
#include "unclaimdeviceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickDevicesService {

/*!
 * \class QtAws::IoT1ClickDevicesService::UnclaimDeviceResponse
 * \brief The UnclaimDeviceResponse class provides an interace for IoT1ClickDevicesService UnclaimDevice responses.
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 *
 *  Stub
 *
 * \sa IoT1ClickDevicesServiceClient::unclaimDevice
 */

/*!
 * Constructs a UnclaimDeviceResponse object for \a reply to \a request, with parent \a parent.
 */
UnclaimDeviceResponse::UnclaimDeviceResponse(
        const UnclaimDeviceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickDevicesServiceResponse(new UnclaimDeviceResponsePrivate(this), parent)
{
    setRequest(new UnclaimDeviceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnclaimDeviceRequest * UnclaimDeviceResponse::request() const
{
    Q_D(const UnclaimDeviceResponse);
    return static_cast<const UnclaimDeviceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickDevicesService UnclaimDevice \a response.
 */
void UnclaimDeviceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnclaimDeviceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickDevicesService::UnclaimDeviceResponsePrivate
 * \brief The UnclaimDeviceResponsePrivate class provides private implementation for UnclaimDeviceResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickDevicesService
 */

/*!
 * Constructs a UnclaimDeviceResponsePrivate object with public implementation \a q.
 */
UnclaimDeviceResponsePrivate::UnclaimDeviceResponsePrivate(
    UnclaimDeviceResponse * const q) : IoT1ClickDevicesServiceResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickDevicesService UnclaimDevice response element from \a xml.
 */
void UnclaimDeviceResponsePrivate::parseUnclaimDeviceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnclaimDeviceResponse"));
    /// @todo
}

} // namespace IoT1ClickDevicesService
} // namespace QtAws
