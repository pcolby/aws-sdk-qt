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

#include "listrobotsresponse.h"
#include "listrobotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListRobotsResponse
 * \brief The ListRobotsResponse class provides an interace for RoboMaker ListRobots responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listRobots
 */

/*!
 * Constructs a ListRobotsResponse object for \a reply to \a request, with parent \a parent.
 */
ListRobotsResponse::ListRobotsResponse(
        const ListRobotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListRobotsResponsePrivate(this), parent)
{
    setRequest(new ListRobotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListRobotsRequest * ListRobotsResponse::request() const
{
    Q_D(const ListRobotsResponse);
    return static_cast<const ListRobotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListRobots \a response.
 */
void ListRobotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListRobotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListRobotsResponsePrivate
 * \brief The ListRobotsResponsePrivate class provides private implementation for ListRobotsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListRobotsResponsePrivate object with public implementation \a q.
 */
ListRobotsResponsePrivate::ListRobotsResponsePrivate(
    ListRobotsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListRobots response element from \a xml.
 */
void ListRobotsResponsePrivate::parseListRobotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRobotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
