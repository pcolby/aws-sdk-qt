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

#include "getrunresponse.h"
#include "getrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRunResponse
 * \brief The GetRunResponse class provides an interace for DeviceFarm GetRun responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getRun
 */

/*!
 * Constructs a GetRunResponse object for \a reply to \a request, with parent \a parent.
 */
GetRunResponse::GetRunResponse(
        const GetRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetRunResponsePrivate(this), parent)
{
    setRequest(new GetRunRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetRunRequest * GetRunResponse::request() const
{
    Q_D(const GetRunResponse);
    return static_cast<const GetRunRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetRun \a response.
 */
void GetRunResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetRunResponsePrivate
 * \brief The GetRunResponsePrivate class provides private implementation for GetRunResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetRunResponsePrivate object with public implementation \a q.
 */
GetRunResponsePrivate::GetRunResponsePrivate(
    GetRunResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetRun response element from \a xml.
 */
void GetRunResponsePrivate::parseGetRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRunResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
