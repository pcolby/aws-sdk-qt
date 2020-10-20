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

#include "createsimulationjobresponse.h"
#include "createsimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobResponse
 * \brief The CreateSimulationJobResponse class provides an interace for RoboMaker CreateSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::createSimulationJob
 */

/*!
 * Constructs a CreateSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSimulationJobResponse::CreateSimulationJobResponse(
        const CreateSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CreateSimulationJobResponsePrivate(this), parent)
{
    setRequest(new CreateSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSimulationJobRequest * CreateSimulationJobResponse::request() const
{
    Q_D(const CreateSimulationJobResponse);
    return static_cast<const CreateSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CreateSimulationJob \a response.
 */
void CreateSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CreateSimulationJobResponsePrivate
 * \brief The CreateSimulationJobResponsePrivate class provides private implementation for CreateSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CreateSimulationJobResponsePrivate object with public implementation \a q.
 */
CreateSimulationJobResponsePrivate::CreateSimulationJobResponsePrivate(
    CreateSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CreateSimulationJob response element from \a xml.
 */
void CreateSimulationJobResponsePrivate::parseCreateSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
