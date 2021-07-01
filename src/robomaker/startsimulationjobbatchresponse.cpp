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

#include "startsimulationjobbatchresponse.h"
#include "startsimulationjobbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::StartSimulationJobBatchResponse
 * \brief The StartSimulationJobBatchResponse class provides an interace for RoboMaker StartSimulationJobBatch responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::startSimulationJobBatch
 */

/*!
 * Constructs a StartSimulationJobBatchResponse object for \a reply to \a request, with parent \a parent.
 */
StartSimulationJobBatchResponse::StartSimulationJobBatchResponse(
        const StartSimulationJobBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new StartSimulationJobBatchResponsePrivate(this), parent)
{
    setRequest(new StartSimulationJobBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartSimulationJobBatchRequest * StartSimulationJobBatchResponse::request() const
{
    Q_D(const StartSimulationJobBatchResponse);
    return static_cast<const StartSimulationJobBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker StartSimulationJobBatch \a response.
 */
void StartSimulationJobBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartSimulationJobBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::StartSimulationJobBatchResponsePrivate
 * \brief The StartSimulationJobBatchResponsePrivate class provides private implementation for StartSimulationJobBatchResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a StartSimulationJobBatchResponsePrivate object with public implementation \a q.
 */
StartSimulationJobBatchResponsePrivate::StartSimulationJobBatchResponsePrivate(
    StartSimulationJobBatchResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker StartSimulationJobBatch response element from \a xml.
 */
void StartSimulationJobBatchResponsePrivate::parseStartSimulationJobBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSimulationJobBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
