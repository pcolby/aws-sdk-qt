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

#include "describedbclustersnapshotsresponse.h"
#include "describedbclustersnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotsResponse
 * \brief The DescribeDBClusterSnapshotsResponse class provides an interace for DocDb DescribeDBClusterSnapshots responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterSnapshots
 */

/*!
 * Constructs a DescribeDBClusterSnapshotsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterSnapshotsResponse::DescribeDBClusterSnapshotsResponse(
        const DescribeDBClusterSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClusterSnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterSnapshotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterSnapshotsRequest * DescribeDBClusterSnapshotsResponse::request() const
{
    Q_D(const DescribeDBClusterSnapshotsResponse);
    return static_cast<const DescribeDBClusterSnapshotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusterSnapshots \a response.
 */
void DescribeDBClusterSnapshotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterSnapshotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotsResponsePrivate
 * \brief The DescribeDBClusterSnapshotsResponsePrivate class provides private implementation for DescribeDBClusterSnapshotsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterSnapshotsResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterSnapshotsResponsePrivate::DescribeDBClusterSnapshotsResponsePrivate(
    DescribeDBClusterSnapshotsResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusterSnapshots response element from \a xml.
 */
void DescribeDBClusterSnapshotsResponsePrivate::parseDescribeDBClusterSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterSnapshotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
