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

#include "listsimulationapplicationsresponse.h"
#include "listsimulationapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationApplicationsResponse
 * \brief The ListSimulationApplicationsResponse class provides an interace for RoboMaker ListSimulationApplications responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationApplications
 */

/*!
 * Constructs a ListSimulationApplicationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSimulationApplicationsResponse::ListSimulationApplicationsResponse(
        const ListSimulationApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListSimulationApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListSimulationApplicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSimulationApplicationsRequest * ListSimulationApplicationsResponse::request() const
{
    Q_D(const ListSimulationApplicationsResponse);
    return static_cast<const ListSimulationApplicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListSimulationApplications \a response.
 */
void ListSimulationApplicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSimulationApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListSimulationApplicationsResponsePrivate
 * \brief The ListSimulationApplicationsResponsePrivate class provides private implementation for ListSimulationApplicationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationApplicationsResponsePrivate object with public implementation \a q.
 */
ListSimulationApplicationsResponsePrivate::ListSimulationApplicationsResponsePrivate(
    ListSimulationApplicationsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListSimulationApplications response element from \a xml.
 */
void ListSimulationApplicationsResponsePrivate::parseListSimulationApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSimulationApplicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
