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

#include "listmultiplexprogramsresponse.h"
#include "listmultiplexprogramsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListMultiplexProgramsResponse
 * \brief The ListMultiplexProgramsResponse class provides an interace for MediaLive ListMultiplexPrograms responses.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listMultiplexPrograms
 */

/*!
 * Constructs a ListMultiplexProgramsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMultiplexProgramsResponse::ListMultiplexProgramsResponse(
        const ListMultiplexProgramsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaLiveResponse(new ListMultiplexProgramsResponsePrivate(this), parent)
{
    setRequest(new ListMultiplexProgramsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMultiplexProgramsRequest * ListMultiplexProgramsResponse::request() const
{
    Q_D(const ListMultiplexProgramsResponse);
    return static_cast<const ListMultiplexProgramsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MediaLive ListMultiplexPrograms \a response.
 */
void ListMultiplexProgramsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMultiplexProgramsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MediaLive::ListMultiplexProgramsResponsePrivate
 * \brief The ListMultiplexProgramsResponsePrivate class provides private implementation for ListMultiplexProgramsResponse.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListMultiplexProgramsResponsePrivate object with public implementation \a q.
 */
ListMultiplexProgramsResponsePrivate::ListMultiplexProgramsResponsePrivate(
    ListMultiplexProgramsResponse * const q) : MediaLiveResponsePrivate(q)
{

}

/*!
 * Parses a MediaLive ListMultiplexPrograms response element from \a xml.
 */
void ListMultiplexProgramsResponsePrivate::parseListMultiplexProgramsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMultiplexProgramsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MediaLive
} // namespace QtAws
