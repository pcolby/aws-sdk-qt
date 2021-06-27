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

#include "cancelsimulationjobbatchresponse.h"
#include "cancelsimulationjobbatchresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobBatchResponse
 * \brief The CancelSimulationJobBatchResponse class provides an interace for RoboMaker CancelSimulationJobBatch responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::cancelSimulationJobBatch
 */

/*!
 * Constructs a CancelSimulationJobBatchResponse object for \a reply to \a request, with parent \a parent.
 */
CancelSimulationJobBatchResponse::CancelSimulationJobBatchResponse(
        const CancelSimulationJobBatchRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new CancelSimulationJobBatchResponsePrivate(this), parent)
{
    setRequest(new CancelSimulationJobBatchRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelSimulationJobBatchRequest * CancelSimulationJobBatchResponse::request() const
{
    return static_cast<const CancelSimulationJobBatchRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker CancelSimulationJobBatch \a response.
 */
void CancelSimulationJobBatchResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelSimulationJobBatchResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::CancelSimulationJobBatchResponsePrivate
 * \brief The CancelSimulationJobBatchResponsePrivate class provides private implementation for CancelSimulationJobBatchResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a CancelSimulationJobBatchResponsePrivate object with public implementation \a q.
 */
CancelSimulationJobBatchResponsePrivate::CancelSimulationJobBatchResponsePrivate(
    CancelSimulationJobBatchResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker CancelSimulationJobBatch response element from \a xml.
 */
void CancelSimulationJobBatchResponsePrivate::parseCancelSimulationJobBatchResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelSimulationJobBatchResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
