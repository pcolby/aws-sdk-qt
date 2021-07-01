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

#include "listsimulationjobbatchesresponse.h"
#include "listsimulationjobbatchesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobBatchesResponse
 * \brief The ListSimulationJobBatchesResponse class provides an interace for RoboMaker ListSimulationJobBatches responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobBatches
 */

/*!
 * Constructs a ListSimulationJobBatchesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSimulationJobBatchesResponse::ListSimulationJobBatchesResponse(
        const ListSimulationJobBatchesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListSimulationJobBatchesResponsePrivate(this), parent)
{
    setRequest(new ListSimulationJobBatchesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSimulationJobBatchesRequest * ListSimulationJobBatchesResponse::request() const
{
    Q_D(const ListSimulationJobBatchesResponse);
    return static_cast<const ListSimulationJobBatchesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListSimulationJobBatches \a response.
 */
void ListSimulationJobBatchesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSimulationJobBatchesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobBatchesResponsePrivate
 * \brief The ListSimulationJobBatchesResponsePrivate class provides private implementation for ListSimulationJobBatchesResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobBatchesResponsePrivate object with public implementation \a q.
 */
ListSimulationJobBatchesResponsePrivate::ListSimulationJobBatchesResponsePrivate(
    ListSimulationJobBatchesResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListSimulationJobBatches response element from \a xml.
 */
void ListSimulationJobBatchesResponsePrivate::parseListSimulationJobBatchesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSimulationJobBatchesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
