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

#include "exportsnapshotresponse.h"
#include "exportsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameSparks {

/*!
 * \class QtAws::GameSparks::ExportSnapshotResponse
 * \brief The ExportSnapshotResponse class provides an interace for GameSparks ExportSnapshot responses.
 *
 * \inmodule QtAwsGameSparks
 *
 *
 * \sa GameSparksClient::exportSnapshot
 */

/*!
 * Constructs a ExportSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
ExportSnapshotResponse::ExportSnapshotResponse(
        const ExportSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameSparksResponse(new ExportSnapshotResponsePrivate(this), parent)
{
    setRequest(new ExportSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ExportSnapshotRequest * ExportSnapshotResponse::request() const
{
    Q_D(const ExportSnapshotResponse);
    return static_cast<const ExportSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful GameSparks ExportSnapshot \a response.
 */
void ExportSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ExportSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::GameSparks::ExportSnapshotResponsePrivate
 * \brief The ExportSnapshotResponsePrivate class provides private implementation for ExportSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsGameSparks
 */

/*!
 * Constructs a ExportSnapshotResponsePrivate object with public implementation \a q.
 */
ExportSnapshotResponsePrivate::ExportSnapshotResponsePrivate(
    ExportSnapshotResponse * const q) : GameSparksResponsePrivate(q)
{

}

/*!
 * Parses a GameSparks ExportSnapshot response element from \a xml.
 */
void ExportSnapshotResponsePrivate::parseExportSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ExportSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace GameSparks
} // namespace QtAws
