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

#include "describedbsubnetgroupsresponse.h"
#include "describedbsubnetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBSubnetGroupsResponse
 * \brief The DescribeDBSubnetGroupsResponse class provides an interace for DocDB DescribeDBSubnetGroups responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBSubnetGroups
 */

/*!
 * Constructs a DescribeDBSubnetGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBSubnetGroupsResponse::DescribeDBSubnetGroupsResponse(
        const DescribeDBSubnetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeDBSubnetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeDBSubnetGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBSubnetGroupsRequest * DescribeDBSubnetGroupsResponse::request() const
{
    Q_D(const DescribeDBSubnetGroupsResponse);
    return static_cast<const DescribeDBSubnetGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeDBSubnetGroups \a response.
 */
void DescribeDBSubnetGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBSubnetGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeDBSubnetGroupsResponsePrivate
 * \brief The DescribeDBSubnetGroupsResponsePrivate class provides private implementation for DescribeDBSubnetGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBSubnetGroupsResponsePrivate object with public implementation \a q.
 */
DescribeDBSubnetGroupsResponsePrivate::DescribeDBSubnetGroupsResponsePrivate(
    DescribeDBSubnetGroupsResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeDBSubnetGroups response element from \a xml.
 */
void DescribeDBSubnetGroupsResponsePrivate::parseDescribeDBSubnetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBSubnetGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
