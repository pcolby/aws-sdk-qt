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

#include "listsimulationjobsresponse.h"
#include "listsimulationjobsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsResponse
 * \brief The ListSimulationJobsResponse class provides an interace for RoboMaker ListSimulationJobs responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobs
 */

/*!
 * Constructs a ListSimulationJobsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSimulationJobsResponse::ListSimulationJobsResponse(
        const ListSimulationJobsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListSimulationJobsResponsePrivate(this), parent)
{
    setRequest(new ListSimulationJobsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSimulationJobsRequest * ListSimulationJobsResponse::request() const
{
    return static_cast<const ListSimulationJobsRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListSimulationJobs \a response.
 */
void ListSimulationJobsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSimulationJobsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsResponsePrivate
 * \brief The ListSimulationJobsResponsePrivate class provides private implementation for ListSimulationJobsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobsResponsePrivate object with public implementation \a q.
 */
ListSimulationJobsResponsePrivate::ListSimulationJobsResponsePrivate(
    ListSimulationJobsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListSimulationJobs response element from \a xml.
 */
void ListSimulationJobsResponsePrivate::parseListSimulationJobsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSimulationJobsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
