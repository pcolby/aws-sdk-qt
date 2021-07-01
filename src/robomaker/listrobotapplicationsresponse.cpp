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

#include "listrobotapplicationsresponse.h"
#include "listrobotapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListRobotApplicationsResponse
 * \brief The ListRobotApplicationsResponse class provides an interace for RoboMaker ListRobotApplications responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listRobotApplications
 */

/*!
 * Constructs a ListRobotApplicationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRobotApplicationsResponse::ListRobotApplicationsResponse(
        const ListRobotApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListRobotApplicationsResponsePrivate(this), parent)
{
    setRequest(new ListRobotApplicationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRobotApplicationsRequest * ListRobotApplicationsResponse::request() const
{
    Q_D(const ListRobotApplicationsResponse);
    return static_cast<const ListRobotApplicationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListRobotApplications \a response.
 */
void ListRobotApplicationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRobotApplicationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListRobotApplicationsResponsePrivate
 * \brief The ListRobotApplicationsResponsePrivate class provides private implementation for ListRobotApplicationsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListRobotApplicationsResponsePrivate object with public implementation \a q.
 */
ListRobotApplicationsResponsePrivate::ListRobotApplicationsResponsePrivate(
    ListRobotApplicationsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListRobotApplications response element from \a xml.
 */
void ListRobotApplicationsResponsePrivate::parseListRobotApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRobotApplicationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
