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

#include "getdevicesinplacementresponse.h"
#include "getdevicesinplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementResponse
 * \brief The GetDevicesInPlacementResponse class provides an interace for IoT1ClickProjects GetDevicesInPlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::getDevicesInPlacement
 */

/*!
 * Constructs a GetDevicesInPlacementResponse object for \a reply to \a request, with parent \a parent.
 */
GetDevicesInPlacementResponse::GetDevicesInPlacementResponse(
        const GetDevicesInPlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new GetDevicesInPlacementResponsePrivate(this), parent)
{
    setRequest(new GetDevicesInPlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDevicesInPlacementRequest * GetDevicesInPlacementResponse::request() const
{
    Q_D(const GetDevicesInPlacementResponse);
    return static_cast<const GetDevicesInPlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects GetDevicesInPlacement \a response.
 */
void GetDevicesInPlacementResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDevicesInPlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::GetDevicesInPlacementResponsePrivate
 * \brief The GetDevicesInPlacementResponsePrivate class provides private implementation for GetDevicesInPlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a GetDevicesInPlacementResponsePrivate object with public implementation \a q.
 */
GetDevicesInPlacementResponsePrivate::GetDevicesInPlacementResponsePrivate(
    GetDevicesInPlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects GetDevicesInPlacement response element from \a xml.
 */
void GetDevicesInPlacementResponsePrivate::parseGetDevicesInPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDevicesInPlacementResponse"));
    /// @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
