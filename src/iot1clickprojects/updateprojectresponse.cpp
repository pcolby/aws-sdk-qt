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

#include "updateprojectresponse.h"
#include "updateprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::UpdateProjectResponse
 * \brief The UpdateProjectResponse class provides an interace for IoT1ClickProjects UpdateProject responses.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Project API
 *
 * \sa IoT1ClickProjectsClient::updateProject
 */

/*!
 * Constructs a UpdateProjectResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateProjectResponse::UpdateProjectResponse(
        const UpdateProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoT1ClickProjectsResponse(new UpdateProjectResponsePrivate(this), parent)
{
    setRequest(new UpdateProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateProjectRequest * UpdateProjectResponse::request() const
{
    Q_D(const UpdateProjectResponse);
    return static_cast<const UpdateProjectRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoT1ClickProjects UpdateProject \a response.
 */
void UpdateProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoT1ClickProjects::UpdateProjectResponsePrivate
 * \brief The UpdateProjectResponsePrivate class provides private implementation for UpdateProjectResponse.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a UpdateProjectResponsePrivate object with public implementation \a q.
 */
UpdateProjectResponsePrivate::UpdateProjectResponsePrivate(
    UpdateProjectResponse * const q) : IoT1ClickProjectsResponsePrivate(q)
{

}

/*!
 * Parses a IoT1ClickProjects UpdateProject response element from \a xml.
 */
void UpdateProjectResponsePrivate::parseUpdateProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoT1ClickProjects
} // namespace QtAws
