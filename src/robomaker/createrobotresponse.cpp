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

#include "createrobotresponse.h"
#include "createrobotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotResponse
 * \brief The CreateRobotResponse class provides an interace for RoboMaker CreateRobot responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobot
 */

/*!
 * Constructs a CreateRobotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRobotResponse::CreateRobotResponse(
        const CreateRobotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateRobotResponsePrivate(this), parent)
{
    setRequest(new CreateRobotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRobotRequest * CreateRobotResponse::request() const
{
    Q_D(const CreateRobotResponse);
    return static_cast<const CreateRobotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateRobot \a response.
 */
void CreateRobotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRobotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateRobotResponsePrivate
 * \brief The CreateRobotResponsePrivate class provides private implementation for CreateRobotResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotResponsePrivate object with public implementation \a q.
 */
CreateRobotResponsePrivate::CreateRobotResponsePrivate(
    CreateRobotResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateRobot response element from \a xml.
 */
void CreateRobotResponsePrivate::parseCreateRobotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRobotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
