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

#include "deregisterrobotresponse.h"
#include "deregisterrobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeregisterRobotResponse
 * \brief The DeregisterRobotResponse class provides an interace for RoboMaker DeregisterRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deregisterRobot
 */

/*!
 * Constructs a DeregisterRobotResponse object for \a reply to \a request, with parent \a parent.
 */
DeregisterRobotResponse::DeregisterRobotResponse(
        const DeregisterRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DeregisterRobotResponsePrivate(this), parent)
{
    setRequest(new DeregisterRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeregisterRobotRequest * DeregisterRobotResponse::request() const
{
    Q_D(const DeregisterRobotResponse);
    return static_cast<const DeregisterRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DeregisterRobot \a response.
 */
void DeregisterRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeregisterRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DeregisterRobotResponsePrivate
 * \brief The DeregisterRobotResponsePrivate class provides private implementation for DeregisterRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeregisterRobotResponsePrivate object with public implementation \a q.
 */
DeregisterRobotResponsePrivate::DeregisterRobotResponsePrivate(
    DeregisterRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DeregisterRobot response element from \a xml.
 */
void DeregisterRobotResponsePrivate::parseDeregisterRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
