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

#include "createrobotapplicationversionresponse.h"
#include "createrobotapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationVersionResponse
 * \brief The CreateRobotApplicationVersionResponse class provides an interace for RoboMaker CreateRobotApplicationVersion responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createRobotApplicationVersion
 */

/*!
 * Constructs a CreateRobotApplicationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateRobotApplicationVersionResponse::CreateRobotApplicationVersionResponse(
        const CreateRobotApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateRobotApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateRobotApplicationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateRobotApplicationVersionRequest * CreateRobotApplicationVersionResponse::request() const
{
    Q_D(const CreateRobotApplicationVersionResponse);
    return static_cast<const CreateRobotApplicationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateRobotApplicationVersion \a response.
 */
void CreateRobotApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateRobotApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateRobotApplicationVersionResponsePrivate
 * \brief The CreateRobotApplicationVersionResponsePrivate class provides private implementation for CreateRobotApplicationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateRobotApplicationVersionResponsePrivate object with public implementation \a q.
 */
CreateRobotApplicationVersionResponsePrivate::CreateRobotApplicationVersionResponsePrivate(
    CreateRobotApplicationVersionResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateRobotApplicationVersion response element from \a xml.
 */
void CreateRobotApplicationVersionResponsePrivate::parseCreateRobotApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateRobotApplicationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
