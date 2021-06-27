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

#include "deleterobotapplicationresponse.h"
#include "deleterobotapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteRobotApplicationResponse
 * \brief The DeleteRobotApplicationResponse class provides an interace for RoboMaker DeleteRobotApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteRobotApplication
 */

/*!
 * Constructs a DeleteRobotApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRobotApplicationResponse::DeleteRobotApplicationResponse(
        const DeleteRobotApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteRobotApplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteRobotApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRobotApplicationRequest * DeleteRobotApplicationResponse::request() const
{
    return static_cast<const DeleteRobotApplicationRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteRobotApplication \a response.
 */
void DeleteRobotApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRobotApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteRobotApplicationResponsePrivate
 * \brief The DeleteRobotApplicationResponsePrivate class provides private implementation for DeleteRobotApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteRobotApplicationResponsePrivate object with public implementation \a q.
 */
DeleteRobotApplicationResponsePrivate::DeleteRobotApplicationResponsePrivate(
    DeleteRobotApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteRobotApplication response element from \a xml.
 */
void DeleteRobotApplicationResponsePrivate::parseDeleteRobotApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRobotApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
