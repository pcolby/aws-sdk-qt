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

#include "liststreamingsessionsresponse.h"
#include "liststreamingsessionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace NimbleStudio {

/*!
 * \class QtAws::NimbleStudio::ListStreamingSessionsResponse
 * \brief The ListStreamingSessionsResponse class provides an interace for NimbleStudio ListStreamingSessions responses.
 *
 * \inmodule QtAwsNimbleStudio
 *
 *
 * \sa NimbleStudioClient::listStreamingSessions
 */

/*!
 * Constructs a ListStreamingSessionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamingSessionsResponse::ListStreamingSessionsResponse(
        const ListStreamingSessionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : NimbleStudioResponse(new ListStreamingSessionsResponsePrivate(this), parent)
{
    setRequest(new ListStreamingSessionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamingSessionsRequest * ListStreamingSessionsResponse::request() const
{
    Q_D(const ListStreamingSessionsResponse);
    return static_cast<const ListStreamingSessionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful NimbleStudio ListStreamingSessions \a response.
 */
void ListStreamingSessionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamingSessionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::NimbleStudio::ListStreamingSessionsResponsePrivate
 * \brief The ListStreamingSessionsResponsePrivate class provides private implementation for ListStreamingSessionsResponse.
 * \internal
 *
 * \inmodule QtAwsNimbleStudio
 */

/*!
 * Constructs a ListStreamingSessionsResponsePrivate object with public implementation \a q.
 */
ListStreamingSessionsResponsePrivate::ListStreamingSessionsResponsePrivate(
    ListStreamingSessionsResponse * const q) : NimbleStudioResponsePrivate(q)
{

}

/*!
 * Parses a NimbleStudio ListStreamingSessions response element from \a xml.
 */
void ListStreamingSessionsResponsePrivate::parseListStreamingSessionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamingSessionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace NimbleStudio
} // namespace QtAws
