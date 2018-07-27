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

#include "getnetworkprofileresponse.h"
#include "getnetworkprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileResponse
 * \brief The GetNetworkProfileResponse class provides an interace for DeviceFarm GetNetworkProfile responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getNetworkProfile
 */

/*!
 * Constructs a GetNetworkProfileResponse object for \a reply to \a request, with parent \a parent.
 */
GetNetworkProfileResponse::GetNetworkProfileResponse(
        const GetNetworkProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetNetworkProfileResponsePrivate(this), parent)
{
    setRequest(new GetNetworkProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetNetworkProfileRequest * GetNetworkProfileResponse::request() const
{
    Q_D(const GetNetworkProfileResponse);
    return static_cast<const GetNetworkProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetNetworkProfile \a response.
 */
void GetNetworkProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetNetworkProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileResponsePrivate
 * \brief The GetNetworkProfileResponsePrivate class provides private implementation for GetNetworkProfileResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetNetworkProfileResponsePrivate object with public implementation \a q.
 */
GetNetworkProfileResponsePrivate::GetNetworkProfileResponsePrivate(
    GetNetworkProfileResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetNetworkProfile response element from \a xml.
 */
void GetNetworkProfileResponsePrivate::parseGetNetworkProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetNetworkProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
