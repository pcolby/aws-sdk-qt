/*
    Copyright 2013-2020 Paul Colby

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

#include "getprojectresponse.h"
#include "getprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetProjectResponse
 * \brief The GetProjectResponse class provides an interace for DeviceFarm GetProject responses.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getProject
 */

/*!
 * Constructs a GetProjectResponse object for \a reply to \a request, with parent \a parent.
 */
GetProjectResponse::GetProjectResponse(
        const GetProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetProjectResponsePrivate(this), parent)
{
    setRequest(new GetProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetProjectRequest * GetProjectResponse::request() const
{
    Q_D(const GetProjectResponse);
    return static_cast<const GetProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DeviceFarm GetProject \a response.
 */
void GetProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DeviceFarm::GetProjectResponsePrivate
 * \brief The GetProjectResponsePrivate class provides private implementation for GetProjectResponse.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetProjectResponsePrivate object with public implementation \a q.
 */
GetProjectResponsePrivate::GetProjectResponsePrivate(
    GetProjectResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * Parses a DeviceFarm GetProject response element from \a xml.
 */
void GetProjectResponsePrivate::parseGetProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DeviceFarm
} // namespace QtAws
