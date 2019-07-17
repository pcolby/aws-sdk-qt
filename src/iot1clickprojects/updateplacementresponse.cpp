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

#include "updateplacementresponse.h"
#include "updateplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::UpdatePlacementResponse
 * \brief The UpdatePlacementResponse class provides an interace for IoT1ClickProjects UpdatePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::updatePlacement
 */

/*!
 * Constructs a UpdatePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
UpdatePlacementResponse::UpdatePlacementResponse(
        const UpdatePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new UpdatePlacementResponsePrivate(this), parent)
{
    setRequest(new UpdatePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdatePlacementRequest * UpdatePlacementResponse::request() const
{
    Q_D(const UpdatePlacementResponse);
    return static_cast<const UpdatePlacementRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects UpdatePlacement \a response.
 */
void UpdatePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdatePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::UpdatePlacementResponsePrivate
 * \brief The UpdatePlacementResponsePrivate class provides private implementation for UpdatePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a UpdatePlacementResponsePrivate object with public implementation \a q.
 */
UpdatePlacementResponsePrivate::UpdatePlacementResponsePrivate(
    UpdatePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects UpdatePlacement response element from \a xml.
 */
void UpdatePlacementResponsePrivate::parseUpdatePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
