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

#include "createsimulationapplicationresponse.h"
#include "createsimulationapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationResponse
 * \brief The CreateSimulationApplicationResponse class provides an interace for RoboMaker CreateSimulationApplication responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationApplication
 */

/*!
 * Constructs a CreateSimulationApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSimulationApplicationResponse::CreateSimulationApplicationResponse(
        const CreateSimulationApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateSimulationApplicationResponsePrivate(this), parent)
{
    setRequest(new CreateSimulationApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSimulationApplicationRequest * CreateSimulationApplicationResponse::request() const
{
    Q_D(const CreateSimulationApplicationResponse);
    return static_cast<const CreateSimulationApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateSimulationApplication \a response.
 */
void CreateSimulationApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSimulationApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationApplicationResponsePrivate
 * \brief The CreateSimulationApplicationResponsePrivate class provides private implementation for CreateSimulationApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationApplicationResponsePrivate object with public implementation \a q.
 */
CreateSimulationApplicationResponsePrivate::CreateSimulationApplicationResponsePrivate(
    CreateSimulationApplicationResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateSimulationApplication response element from \a xml.
 */
void CreateSimulationApplicationResponsePrivate::parseCreateSimulationApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSimulationApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
