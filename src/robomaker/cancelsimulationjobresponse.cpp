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

#include "cancelsimulationjobresponse.h"
#include "cancelsimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobResponse
 * \brief The CancelSimulationJobResponse class provides an interace for RoboMaker CancelSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelSimulationJob
 */

/*!
 * Constructs a CancelSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
CancelSimulationJobResponse::CancelSimulationJobResponse(
        const CancelSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelSimulationJobResponsePrivate(this), parent)
{
    setRequest(new CancelSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelSimulationJobRequest * CancelSimulationJobResponse::request() const
{
    Q_D(const CancelSimulationJobResponse);
    return static_cast<const CancelSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelSimulationJob \a response.
 */
void CancelSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobResponsePrivate
 * \brief The CancelSimulationJobResponsePrivate class provides private implementation for CancelSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelSimulationJobResponsePrivate object with public implementation \a q.
 */
CancelSimulationJobResponsePrivate::CancelSimulationJobResponsePrivate(
    CancelSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelSimulationJob response element from \a xml.
 */
void CancelSimulationJobResponsePrivate::parseCancelSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
