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

#include "getsnapshotresponse.h"
#include "getsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::GetSnapshotResponse
 * \brief The GetSnapshotResponse class provides an interace for GameSparks GetSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::getSnapshot
 */

/*!
 * Constructs a GetSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
GetSnapshotResponse::GetSnapshotResponse(
        const GetSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new GetSnapshotResponsePrivate(this), parent)
{
    setRequest(new GetSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetSnapshotRequest * GetSnapshotResponse::request() const
{
    Q_D(const GetSnapshotResponse);
    return static_cast<const GetSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks GetSnapshot \a response.
 */
void GetSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::GetSnapshotResponsePrivate
 * \brief The GetSnapshotResponsePrivate class provides private implementation for GetSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a GetSnapshotResponsePrivate object with public implementation \a q.
 */
GetSnapshotResponsePrivate::GetSnapshotResponsePrivate(
    GetSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks GetSnapshot response element from \a xml.
 */
void GetSnapshotResponsePrivate::parseGetSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
