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

#include "getdeviceinstanceresponse.h"
#include "getdeviceinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceResponse
 * \brief The GetDeviceInstanceResponse class provides an interace for DeviceFarm GetDeviceInstance responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDeviceInstance
 */

/*!
 * Constructs a GetDeviceInstanceResponse object for \a reply to \a request, with parent \a parent.
 */
GetDeviceInstanceResponse::GetDeviceInstanceResponse(
        const GetDeviceInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDeviceInstanceResponsePrivate(this), parent)
{
    setRequest(new GetDeviceInstanceRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDeviceInstanceRequest * GetDeviceInstanceResponse::request() const
{
    Q_D(const GetDeviceInstanceResponse);
    return static_cast<const GetDeviceInstanceRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetDeviceInstance \a response.
 */
void GetDeviceInstanceResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDeviceInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetDeviceInstanceResponsePrivate
 * \brief The GetDeviceInstanceResponsePrivate class provides private implementation for GetDeviceInstanceResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDeviceInstanceResponsePrivate object with public implementation \a q.
 */
GetDeviceInstanceResponsePrivate::GetDeviceInstanceResponsePrivate(
    GetDeviceInstanceResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetDeviceInstance response element from \a xml.
 */
void GetDeviceInstanceResponsePrivate::parseGetDeviceInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeviceInstanceResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
