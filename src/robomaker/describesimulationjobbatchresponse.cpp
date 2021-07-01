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

#include "describesimulationjobbatchresponse.h"
#include "describesimulationjobbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchResponse
 * \brief The DescribeSimulationJobBatchResponse class provides an interace for RoboMaker DescribeSimulationJobBatch responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::describeSimulationJobBatch
 */

/*!
 * Constructs a DescribeSimulationJobBatchResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSimulationJobBatchResponse::DescribeSimulationJobBatchResponse(
        const DescribeSimulationJobBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new DescribeSimulationJobBatchResponsePrivate(this), parent)
{
    setRequest(new DescribeSimulationJobBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSimulationJobBatchRequest * DescribeSimulationJobBatchResponse::request() const
{
    Q_D(const DescribeSimulationJobBatchResponse);
    return static_cast<const DescribeSimulationJobBatchRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker DescribeSimulationJobBatch \a response.
 */
void DescribeSimulationJobBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSimulationJobBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::DescribeSimulationJobBatchResponsePrivate
 * \brief The DescribeSimulationJobBatchResponsePrivate class provides private implementation for DescribeSimulationJobBatchResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DescribeSimulationJobBatchResponsePrivate object with public implementation \a q.
 */
DescribeSimulationJobBatchResponsePrivate::DescribeSimulationJobBatchResponsePrivate(
    DescribeSimulationJobBatchResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker DescribeSimulationJobBatch response element from \a xml.
 */
void DescribeSimulationJobBatchResponsePrivate::parseDescribeSimulationJobBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSimulationJobBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
