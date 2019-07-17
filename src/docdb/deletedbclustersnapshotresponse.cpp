/*
    Copyright 2013-2019 Paul Colby

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

#include "deletedbclustersnapshotresponse.h"
#include "deletedbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DeleteDBClusterSnapshotResponse
 * \brief The DeleteDBClusterSnapshotResponse class provides an interace for DocDB DeleteDBClusterSnapshot responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::deleteDBClusterSnapshot
 */

/*!
 * Constructs a DeleteDBClusterSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDBClusterSnapshotResponse::DeleteDBClusterSnapshotResponse(
        const DeleteDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DeleteDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new DeleteDBClusterSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDBClusterSnapshotRequest * DeleteDBClusterSnapshotResponse::request() const
{
    Q_D(const DeleteDBClusterSnapshotResponse);
    return static_cast<const DeleteDBClusterSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DeleteDBClusterSnapshot \a response.
 */
void DeleteDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDBClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DeleteDBClusterSnapshotResponsePrivate
 * \brief The DeleteDBClusterSnapshotResponsePrivate class provides private implementation for DeleteDBClusterSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DeleteDBClusterSnapshotResponsePrivate object with public implementation \a q.
 */
DeleteDBClusterSnapshotResponsePrivate::DeleteDBClusterSnapshotResponsePrivate(
    DeleteDBClusterSnapshotResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DeleteDBClusterSnapshot response element from \a xml.
 */
void DeleteDBClusterSnapshotResponsePrivate::parseDeleteDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDBClusterSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
