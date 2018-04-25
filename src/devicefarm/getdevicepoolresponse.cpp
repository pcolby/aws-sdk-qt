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

#include "getdevicepoolresponse.h"
#include "getdevicepoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolResponse
 * \brief The GetDevicePoolResponse class provides an interace for DeviceFarm GetDevicePool responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevicePool
 */

/*!
 * Constructs a GetDevicePoolResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePoolResponse::GetDevicePoolResponse(
        const GetDevicePoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDevicePoolResponsePrivate(this), parent)
{
    setRequest(new GetDevicePoolRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePoolRequest * GetDevicePoolResponse::request() const
{
    Q_D(const GetDevicePoolResponse);
    return static_cast<const GetDevicePoolRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetDevicePool \a response.
 */
void GetDevicePoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDevicePoolResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolResponsePrivate
 * \brief The GetDevicePoolResponsePrivate class provides private implementation for GetDevicePoolResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDevicePoolResponsePrivate object with public implementation \a q.
 */
GetDevicePoolResponsePrivate::GetDevicePoolResponsePrivate(
    GetDevicePoolResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetDevicePool response element from \a xml.
 */
void GetDevicePoolResponsePrivate::parseGetDevicePoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePoolResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
