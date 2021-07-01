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

#include "deleterobotresponse.h"
#include "deleterobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteRobotResponse
 * \brief The DeleteRobotResponse class provides an interace for RoboMaker DeleteRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteRobot
 */

/*!
 * Constructs a DeleteRobotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRobotResponse::DeleteRobotResponse(
        const DeleteRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeleteRobotResponsePrivate(this), parent)
{
    setRequest(new DeleteRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRobotRequest * DeleteRobotResponse::request() const
{
    Q_D(const DeleteRobotResponse);
    return static_cast<const DeleteRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeleteRobot \a response.
 */
void DeleteRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeleteRobotResponsePrivate
 * \brief The DeleteRobotResponsePrivate class provides private implementation for DeleteRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteRobotResponsePrivate object with public implementation \a q.
 */
DeleteRobotResponsePrivate::DeleteRobotResponsePrivate(
    DeleteRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeleteRobot response element from \a xml.
 */
void DeleteRobotResponsePrivate::parseDeleteRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
