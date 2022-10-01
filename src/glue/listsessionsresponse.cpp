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

#include "listsessionsresponse.h"
#include "listsessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSessionsResponse
 * \brief The ListSessionsResponse class provides an interace for Glue ListSessions responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSessions
 */

/*!
 * Constructs a ListSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSessionsResponse::ListSessionsResponse(
        const ListSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ListSessionsResponsePrivate(this), parent)
{
    setRequest(new ListSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSessionsRequest * ListSessionsResponse::request() const
{
    Q_D(const ListSessionsResponse);
    return static_cast<const ListSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ListSessions \a response.
 */
void ListSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ListSessionsResponsePrivate
 * \brief The ListSessionsResponsePrivate class provides private implementation for ListSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSessionsResponsePrivate object with public implementation \a q.
 */
ListSessionsResponsePrivate::ListSessionsResponsePrivate(
    ListSessionsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ListSessions response element from \a xml.
 */
void ListSessionsResponsePrivate::parseListSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
