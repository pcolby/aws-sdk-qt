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

#include "listsnapshotsresponse.h"
#include "listsnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ListSnapshotsResponse
 * \brief The ListSnapshotsResponse class provides an interace for GameSparks ListSnapshots responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::listSnapshots
 */

/*!
 * Constructs a ListSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSnapshotsResponse::ListSnapshotsResponse(
        const ListSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ListSnapshotsResponsePrivate(this), parent)
{
    setRequest(new ListSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSnapshotsRequest * ListSnapshotsResponse::request() const
{
    Q_D(const ListSnapshotsResponse);
    return static_cast<const ListSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ListSnapshots \a response.
 */
void ListSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ListSnapshotsResponsePrivate
 * \brief The ListSnapshotsResponsePrivate class provides private implementation for ListSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ListSnapshotsResponsePrivate object with public implementation \a q.
 */
ListSnapshotsResponsePrivate::ListSnapshotsResponsePrivate(
    ListSnapshotsResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ListSnapshots response element from \a xml.
 */
void ListSnapshotsResponsePrivate::parseListSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
