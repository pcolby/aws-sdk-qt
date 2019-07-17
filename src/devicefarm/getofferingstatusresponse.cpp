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

#include "getofferingstatusresponse.h"
#include "getofferingstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetOfferingStatusResponse
 * \brief The GetOfferingStatusResponse class provides an interace for DeviceFarm GetOfferingStatus responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getOfferingStatus
 */

/*!
 * Constructs a GetOfferingStatusResponse object for \a reply to \a request, with parent \a parent.
 */
GetOfferingStatusResponse::GetOfferingStatusResponse(
        const GetOfferingStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetOfferingStatusResponsePrivate(this), parent)
{
    setRequest(new GetOfferingStatusRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetOfferingStatusRequest * GetOfferingStatusResponse::request() const
{
    Q_D(const GetOfferingStatusResponse);
    return static_cast<const GetOfferingStatusRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetOfferingStatus \a response.
 */
void GetOfferingStatusResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetOfferingStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetOfferingStatusResponsePrivate
 * \brief The GetOfferingStatusResponsePrivate class provides private implementation for GetOfferingStatusResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetOfferingStatusResponsePrivate object with public implementation \a q.
 */
GetOfferingStatusResponsePrivate::GetOfferingStatusResponsePrivate(
    GetOfferingStatusResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetOfferingStatus response element from \a xml.
 */
void GetOfferingStatusResponsePrivate::parseGetOfferingStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOfferingStatusResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
