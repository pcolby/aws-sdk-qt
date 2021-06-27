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

#include "deleteprojectresponse.h"
#include "deleteprojectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::DeleteProjectResponse
 * \brief The DeleteProjectResponse class provides an interace for Mobile DeleteProject responses.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::deleteProject
 */

/*!
 * Constructs a DeleteProjectResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteProjectResponse::DeleteProjectResponse(
        const DeleteProjectRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MobileResponse(new DeleteProjectResponsePrivate(this), parent)
{
    setRequest(new DeleteProjectRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteProjectRequest * DeleteProjectResponse::request() const
{
    return static_cast<const DeleteProjectRequest *>(MobileResponse::request());
}

/*!
 * \reimp
 * Parses a successful Mobile DeleteProject \a response.
 */
void DeleteProjectResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteProjectResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Mobile::DeleteProjectResponsePrivate
 * \brief The DeleteProjectResponsePrivate class provides private implementation for DeleteProjectResponse.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a DeleteProjectResponsePrivate object with public implementation \a q.
 */
DeleteProjectResponsePrivate::DeleteProjectResponsePrivate(
    DeleteProjectResponse * const q) : MobileResponsePrivate(q)
{

}

/*!
 * Parses a Mobile DeleteProject response element from \a xml.
 */
void DeleteProjectResponsePrivate::parseDeleteProjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteProjectResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Mobile
} // namespace QtAws
