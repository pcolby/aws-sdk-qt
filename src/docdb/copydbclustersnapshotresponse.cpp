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

#include "copydbclustersnapshotresponse.h"
#include "copydbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::CopyDBClusterSnapshotResponse
 * \brief The CopyDBClusterSnapshotResponse class provides an interace for DocDB CopyDBClusterSnapshot responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::copyDBClusterSnapshot
 */

/*!
 * Constructs a CopyDBClusterSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CopyDBClusterSnapshotResponse::CopyDBClusterSnapshotResponse(
        const CopyDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new CopyDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CopyDBClusterSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyDBClusterSnapshotRequest * CopyDBClusterSnapshotResponse::request() const
{
    Q_D(const CopyDBClusterSnapshotResponse);
    return static_cast<const CopyDBClusterSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB CopyDBClusterSnapshot \a response.
 */
void CopyDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyDBClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::CopyDBClusterSnapshotResponsePrivate
 * \brief The CopyDBClusterSnapshotResponsePrivate class provides private implementation for CopyDBClusterSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a CopyDBClusterSnapshotResponsePrivate object with public implementation \a q.
 */
CopyDBClusterSnapshotResponsePrivate::CopyDBClusterSnapshotResponsePrivate(
    CopyDBClusterSnapshotResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB CopyDBClusterSnapshot response element from \a xml.
 */
void CopyDBClusterSnapshotResponsePrivate::parseCopyDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBClusterSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
