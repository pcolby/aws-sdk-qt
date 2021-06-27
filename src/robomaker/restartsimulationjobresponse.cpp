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

#include "restartsimulationjobresponse.h"
#include "restartsimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobResponse
 * \brief The RestartSimulationJobResponse class provides an interace for RoboMaker RestartSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::restartSimulationJob
 */

/*!
 * Constructs a RestartSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
RestartSimulationJobResponse::RestartSimulationJobResponse(
        const RestartSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new RestartSimulationJobResponsePrivate(this), parent)
{
    setRequest(new RestartSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const RestartSimulationJobRequest * RestartSimulationJobResponse::request() const
{
    return static_cast<const RestartSimulationJobRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker RestartSimulationJob \a response.
 */
void RestartSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(RestartSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::RestartSimulationJobResponsePrivate
 * \brief The RestartSimulationJobResponsePrivate class provides private implementation for RestartSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a RestartSimulationJobResponsePrivate object with public implementation \a q.
 */
RestartSimulationJobResponsePrivate::RestartSimulationJobResponsePrivate(
    RestartSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker RestartSimulationJob response element from \a xml.
 */
void RestartSimulationJobResponsePrivate::parseRestartSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestartSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
