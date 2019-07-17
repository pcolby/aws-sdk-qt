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

#include "batchdescribesimulationjobresponse.h"
#include "batchdescribesimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::BatchDescribeSimulationJobResponse
 * \brief The BatchDescribeSimulationJobResponse class provides an interace for RoboMaker BatchDescribeSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::batchDescribeSimulationJob
 */

/*!
 * Constructs a BatchDescribeSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
BatchDescribeSimulationJobResponse::BatchDescribeSimulationJobResponse(
        const BatchDescribeSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new BatchDescribeSimulationJobResponsePrivate(this), parent)
{
    setRequest(new BatchDescribeSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchDescribeSimulationJobRequest * BatchDescribeSimulationJobResponse::request() const
{
    Q_D(const BatchDescribeSimulationJobResponse);
    return static_cast<const BatchDescribeSimulationJobRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker BatchDescribeSimulationJob \a response.
 */
void BatchDescribeSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchDescribeSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::BatchDescribeSimulationJobResponsePrivate
 * \brief The BatchDescribeSimulationJobResponsePrivate class provides private implementation for BatchDescribeSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a BatchDescribeSimulationJobResponsePrivate object with public implementation \a q.
 */
BatchDescribeSimulationJobResponsePrivate::BatchDescribeSimulationJobResponsePrivate(
    BatchDescribeSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker BatchDescribeSimulationJob response element from \a xml.
 */
void BatchDescribeSimulationJobResponsePrivate::parseBatchDescribeSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDescribeSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
