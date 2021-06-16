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

#include "getdeviceprofileresponse.h"
#include "getdeviceprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTWireless {

/*!
 * \class QtAws::IoTWireless::GetDeviceProfileResponse
 * \brief The GetDeviceProfileResponse class provides an interace for IoTWireless GetDeviceProfile responses.
 *
 * \inmodule QtAwsIoTWireless
 *
 *  AWS IoT Wireless API
 *
 * \sa IoTWirelessClient::getDeviceProfile
 */

/*!
 * Constructs a GetDeviceProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceProfileResponse::GetDeviceProfileResponse(
        const GetDeviceProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTWirelessResponse(new GetDeviceProfileResponsePrivate(this), parent)
{
    setRequest(new GetDeviceProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceProfileRequest * GetDeviceProfileResponse::request() const
{
    Q_D(const GetDeviceProfileResponse);
    return static_cast<const GetDeviceProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTWireless GetDeviceProfile \a response.
 */
void GetDeviceProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTWireless::GetDeviceProfileResponsePrivate
 * \brief The GetDeviceProfileResponsePrivate class provides private implementation for GetDeviceProfileResponse.
 * \internal
 *
 * \inmodule QtAwsIoTWireless
 */

/*!
 * Constructs a GetDeviceProfileResponsePrivate object with public implementation \a q.
 */
GetDeviceProfileResponsePrivate::GetDeviceProfileResponsePrivate(
    GetDeviceProfileResponse * const q) : IoTWirelessResponsePrivate(q)
{

}

/*!
 * Parses a IoTWireless GetDeviceProfile response element from \a xml.
 */
void GetDeviceProfileResponsePrivate::parseGetDeviceProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTWireless
} // namespace QtAws
