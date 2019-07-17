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

#include "createsimulationapplicationversionresponse.h"
#include "createsimulationapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionResponse
 * \brief The CreateSimulationApplicationVersionResponse class provides an interace for RoboMaker CreateSimulationApplicationVersion responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplicationVersion
 */

/*!
 * Constructs a CreateSimulationApplicationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSimulationApplicationVersionResponse::CreateSimulationApplicationVersionResponse(
        const CreateSimulationApplicationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateSimulationApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new CreateSimulationApplicationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSimulationApplicationVersionRequest * CreateSimulationApplicationVersionResponse::request() const
{
    Q_D(const CreateSimulationApplicationVersionResponse);
    return static_cast<const CreateSimulationApplicationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateSimulationApplicationVersion \a response.
 */
void CreateSimulationApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSimulationApplicationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationVersionResponsePrivate
 * \brief The CreateSimulationApplicationVersionResponsePrivate class provides private implementation for CreateSimulationApplicationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationVersionResponsePrivate object with public implementation \a q.
 */
CreateSimulationApplicationVersionResponsePrivate::CreateSimulationApplicationVersionResponsePrivate(
    CreateSimulationApplicationVersionResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateSimulationApplicationVersion response element from \a xml.
 */
void CreateSimulationApplicationVersionResponsePrivate::parseCreateSimulationApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSimulationApplicationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
