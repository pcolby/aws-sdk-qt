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

#include "registerrobotresponse.h"
#include "registerrobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RegisterRobotResponse
 * \brief The RegisterRobotResponse class provides an interace for RoboMaker RegisterRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::registerRobot
 */

/*!
 * Constructs a RegisterRobotResponse object for \a reply to \a request, with parent \a parent.
 */
RegisterRobotResponse::RegisterRobotResponse(
        const RegisterRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new RegisterRobotResponsePrivate(this), parent)
{
    setRequest(new RegisterRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RegisterRobotRequest * RegisterRobotResponse::request() const
{
    return static_cast<const RegisterRobotRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker RegisterRobot \a response.
 */
void RegisterRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RegisterRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::RegisterRobotResponsePrivate
 * \brief The RegisterRobotResponsePrivate class provides private implementation for RegisterRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RegisterRobotResponsePrivate object with public implementation \a q.
 */
RegisterRobotResponsePrivate::RegisterRobotResponsePrivate(
    RegisterRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker RegisterRobot response element from \a xml.
 */
void RegisterRobotResponsePrivate::parseRegisterRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
