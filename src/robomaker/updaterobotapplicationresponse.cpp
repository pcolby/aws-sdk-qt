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

#include "updaterobotapplicationresponse.h"
#include "updaterobotapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::UpdateRobotApplicationResponse
 * \brief The UpdateRobotApplicationResponse class provides an interace for RoboMaker UpdateRobotApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::updateRobotApplication
 */

/*!
 * Constructs a UpdateRobotApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateRobotApplicationResponse::UpdateRobotApplicationResponse(
        const UpdateRobotApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new UpdateRobotApplicationResponsePrivate(this), parent)
{
    setRequest(new UpdateRobotApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateRobotApplicationRequest * UpdateRobotApplicationResponse::request() const
{
    Q_D(const UpdateRobotApplicationResponse);
    return static_cast<const UpdateRobotApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker UpdateRobotApplication \a response.
 */
void UpdateRobotApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateRobotApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::UpdateRobotApplicationResponsePrivate
 * \brief The UpdateRobotApplicationResponsePrivate class provides private implementation for UpdateRobotApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a UpdateRobotApplicationResponsePrivate object with public implementation \a q.
 */
UpdateRobotApplicationResponsePrivate::UpdateRobotApplicationResponsePrivate(
    UpdateRobotApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker UpdateRobotApplication response element from \a xml.
 */
void UpdateRobotApplicationResponsePrivate::parseUpdateRobotApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateRobotApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
