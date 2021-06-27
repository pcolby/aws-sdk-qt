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

#include "createplacementresponse.h"
#include "createplacementresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementResponse
 * \brief The CreatePlacementResponse class provides an interace for IoT1ClickProjects CreatePlacement responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::createPlacement
 */

/*!
 * Constructs a CreatePlacementResponse object for \a reply to \a request, with parent \a parent.
 */
CreatePlacementResponse::CreatePlacementResponse(
        const CreatePlacementRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new CreatePlacementResponsePrivate(this), parent)
{
    setRequest(new CreatePlacementRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreatePlacementRequest * CreatePlacementResponse::request() const
{
    return static_cast<const CreatePlacementRequest *>(IoT1ClickProjectsResponse::request());
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects CreatePlacement \a response.
 */
void CreatePlacementResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreatePlacementResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::CreatePlacementResponsePrivate
 * \brief The CreatePlacementResponsePrivate class provides private implementation for CreatePlacementResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a CreatePlacementResponsePrivate object with public implementation \a q.
 */
CreatePlacementResponsePrivate::CreatePlacementResponsePrivate(
    CreatePlacementResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects CreatePlacement response element from \a xml.
 */
void CreatePlacementResponsePrivate::parseCreatePlacementResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlacementResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
