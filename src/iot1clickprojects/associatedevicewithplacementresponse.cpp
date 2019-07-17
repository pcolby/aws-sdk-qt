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

#include "associatedevicewithplacementresponse.h"
#include "associatedevicewithplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementResponse
 * \brief The AssociateDeviceWithPlacementResponse class provides an interace for IoT1ClickProjects AssociateDeviceWithPlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::associateDeviceWithPlacement
 */

/*!
 * Constructs a AssociateDeviceWithPlacementResponse object for \a reply to \a request, with parent \a parent.
 */
AssociateDeviceWithPlacementResponse::AssociateDeviceWithPlacementResponse(
        const AssociateDeviceWithPlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new AssociateDeviceWithPlacementResponsePrivate(this), parent)
{
    setRequest(new AssociateDeviceWithPlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AssociateDeviceWithPlacementRequest * AssociateDeviceWithPlacementResponse::request() const
{
    Q_D(const AssociateDeviceWithPlacementResponse);
    return static_cast<const AssociateDeviceWithPlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects AssociateDeviceWithPlacement \a response.
 */
void AssociateDeviceWithPlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AssociateDeviceWithPlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::AssociateDeviceWithPlacementResponsePrivate
 * \brief The AssociateDeviceWithPlacementResponsePrivate class provides private implementation for AssociateDeviceWithPlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a AssociateDeviceWithPlacementResponsePrivate object with public implementation \a q.
 */
AssociateDeviceWithPlacementResponsePrivate::AssociateDeviceWithPlacementResponsePrivate(
    AssociateDeviceWithPlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects AssociateDeviceWithPlacement response element from \a xml.
 */
void AssociateDeviceWithPlacementResponsePrivate::parseAssociateDeviceWithPlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateDeviceWithPlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
