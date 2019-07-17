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

#include "getdevicepoolcompatibilityresponse.h"
#include "getdevicepoolcompatibilityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityResponse
 * \brief The GetDevicePoolCompatibilityResponse class provides an interace for DeviceFarm GetDevicePoolCompatibility responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getDevicePoolCompatibility
 */

/*!
 * Constructs a GetDevicePoolCompatibilityResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicePoolCompatibilityResponse::GetDevicePoolCompatibilityResponse(
        const GetDevicePoolCompatibilityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetDevicePoolCompatibilityResponsePrivate(this), parent)
{
    setRequest(new GetDevicePoolCompatibilityRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicePoolCompatibilityRequest * GetDevicePoolCompatibilityResponse::request() const
{
    Q_D(const GetDevicePoolCompatibilityResponse);
    return static_cast<const GetDevicePoolCompatibilityRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetDevicePoolCompatibility \a response.
 */
void GetDevicePoolCompatibilityResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDevicePoolCompatibilityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetDevicePoolCompatibilityResponsePrivate
 * \brief The GetDevicePoolCompatibilityResponsePrivate class provides private implementation for GetDevicePoolCompatibilityResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetDevicePoolCompatibilityResponsePrivate object with public implementation \a q.
 */
GetDevicePoolCompatibilityResponsePrivate::GetDevicePoolCompatibilityResponsePrivate(
    GetDevicePoolCompatibilityResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetDevicePoolCompatibility response element from \a xml.
 */
void GetDevicePoolCompatibilityResponsePrivate::parseGetDevicePoolCompatibilityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicePoolCompatibilityResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
