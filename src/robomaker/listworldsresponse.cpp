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

#include "listworldsresponse.h"
#include "listworldsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldsResponse
 * \brief The ListWorldsResponse class provides an interace for RoboMaker ListWorlds responses.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorlds
 */

/*!
 * Constructs a ListWorldsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWorldsResponse::ListWorldsResponse(
        const ListWorldsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RoboMakerResponse(new ListWorldsResponsePrivate(this), parent)
{
    setRequest(new ListWorldsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWorldsRequest * ListWorldsResponse::request() const
{
    return static_cast<const ListWorldsRequest *>(RoboMakerResponse::request());
}

/*!
 * \reimp
 * Parses a successful RoboMaker ListWorlds \a response.
 */
void ListWorldsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWorldsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::RoboMaker::ListWorldsResponsePrivate
 * \brief The ListWorldsResponsePrivate class provides private implementation for ListWorldsResponse.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldsResponsePrivate object with public implementation \a q.
 */
ListWorldsResponsePrivate::ListWorldsResponsePrivate(
    ListWorldsResponse * const q) : RoboMakerResponsePrivate(q)
{

}

/*!
 * Parses a RoboMaker ListWorlds response element from \a xml.
 */
void ListWorldsResponsePrivate::parseListWorldsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWorldsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace RoboMaker
} // namespace QtAws
