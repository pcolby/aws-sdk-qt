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

#include "describesimulationjobresponse.h"
#include "describesimulationjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobResponse
 * \brief The DescribeSimulationJobResponse class provides an interace for RoboMaker DescribeSimulationJob responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJob
 */

/*!
 * Constructs a DescribeSimulationJobResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSimulationJobResponse::DescribeSimulationJobResponse(
        const DescribeSimulationJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeSimulationJobResponsePrivate(this), parent)
{
    setRequest(new DescribeSimulationJobRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSimulationJobRequest * DescribeSimulationJobResponse::request() const
{
    return static_cast<const DescribeSimulationJobRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeSimulationJob \a response.
 */
void DescribeSimulationJobResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSimulationJobResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobResponsePrivate
 * \brief The DescribeSimulationJobResponsePrivate class provides private implementation for DescribeSimulationJobResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobResponsePrivate object with public implementation \a q.
 */
DescribeSimulationJobResponsePrivate::DescribeSimulationJobResponsePrivate(
    DescribeSimulationJobResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeSimulationJob response element from \a xml.
 */
void DescribeSimulationJobResponsePrivate::parseDescribeSimulationJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSimulationJobResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
