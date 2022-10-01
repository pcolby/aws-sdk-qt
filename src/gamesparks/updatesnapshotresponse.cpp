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

#include "updatesnapshotresponse.h"
#include "updatesnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::UpdateSnapshotResponse
 * \brief The UpdateSnapshotResponse class provides an interace for GameSparks UpdateSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::updateSnapshot
 */

/*!
 * Constructs a UpdateSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSnapshotResponse::UpdateSnapshotResponse(
        const UpdateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new UpdateSnapshotResponsePrivate(this), parent)
{
    setRequest(new UpdateSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSnapshotRequest * UpdateSnapshotResponse::request() const
{
    Q_D(const UpdateSnapshotResponse);
    return static_cast<const UpdateSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks UpdateSnapshot \a response.
 */
void UpdateSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::UpdateSnapshotResponsePrivate
 * \brief The UpdateSnapshotResponsePrivate class provides private implementation for UpdateSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a UpdateSnapshotResponsePrivate object with public implementation \a q.
 */
UpdateSnapshotResponsePrivate::UpdateSnapshotResponsePrivate(
    UpdateSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks UpdateSnapshot response element from \a xml.
 */
void UpdateSnapshotResponsePrivate::parseUpdateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
