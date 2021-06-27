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

#include "describedbinstancesresponse.h"
#include "describedbinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeDBInstancesResponse
 * \brief The DescribeDBInstancesResponse class provides an interace for DocDB DescribeDBInstances responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeDBInstances
 */

/*!
 * Constructs a DescribeDBInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBInstancesResponse::DescribeDBInstancesResponse(
        const DescribeDBInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeDBInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBInstancesRequest * DescribeDBInstancesResponse::request() const
{
    return static_cast<const DescribeDBInstancesRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeDBInstances \a response.
 */
void DescribeDBInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeDBInstancesResponsePrivate
 * \brief The DescribeDBInstancesResponsePrivate class provides private implementation for DescribeDBInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeDBInstancesResponsePrivate object with public implementation \a q.
 */
DescribeDBInstancesResponsePrivate::DescribeDBInstancesResponsePrivate(
    DescribeDBInstancesResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeDBInstances response element from \a xml.
 */
void DescribeDBInstancesResponsePrivate::parseDescribeDBInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
