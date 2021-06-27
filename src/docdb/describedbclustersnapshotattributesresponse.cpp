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

#include "describedbclustersnapshotattributesresponse.h"
#include "describedbclustersnapshotattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClusterSnapshotAttributesResponse
 * \brief The DescribeDBClusterSnapshotAttributesResponse class provides an interace for DocDB DescribeDBClusterSnapshotAttributes responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusterSnapshotAttributes
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterSnapshotAttributesResponse::DescribeDBClusterSnapshotAttributesResponse(
        const DescribeDBClusterSnapshotAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeDBClusterSnapshotAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterSnapshotAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterSnapshotAttributesRequest * DescribeDBClusterSnapshotAttributesResponse::request() const
{
    return static_cast<const DescribeDBClusterSnapshotAttributesRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeDBClusterSnapshotAttributes \a response.
 */
void DescribeDBClusterSnapshotAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterSnapshotAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeDBClusterSnapshotAttributesResponsePrivate
 * \brief The DescribeDBClusterSnapshotAttributesResponsePrivate class provides private implementation for DescribeDBClusterSnapshotAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterSnapshotAttributesResponsePrivate::DescribeDBClusterSnapshotAttributesResponsePrivate(
    DescribeDBClusterSnapshotAttributesResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeDBClusterSnapshotAttributes response element from \a xml.
 */
void DescribeDBClusterSnapshotAttributesResponsePrivate::parseDescribeDBClusterSnapshotAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterSnapshotAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
