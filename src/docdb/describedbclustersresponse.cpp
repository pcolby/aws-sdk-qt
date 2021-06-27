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

#include "describedbclustersresponse.h"
#include "describedbclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBClustersResponse
 * \brief The DescribeDBClustersResponse class provides an interace for DocDB DescribeDBClusters responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBClusters
 */

/*!
 * Constructs a DescribeDBClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClustersResponse::DescribeDBClustersResponse(
        const DescribeDBClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeDBClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClustersRequest * DescribeDBClustersResponse::request() const
{
    return static_cast<const DescribeDBClustersRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeDBClusters \a response.
 */
void DescribeDBClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeDBClustersResponsePrivate
 * \brief The DescribeDBClustersResponsePrivate class provides private implementation for DescribeDBClustersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBClustersResponsePrivate object with public implementation \a q.
 */
DescribeDBClustersResponsePrivate::DescribeDBClustersResponsePrivate(
    DescribeDBClustersResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeDBClusters response element from \a xml.
 */
void DescribeDBClustersResponsePrivate::parseDescribeDBClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
