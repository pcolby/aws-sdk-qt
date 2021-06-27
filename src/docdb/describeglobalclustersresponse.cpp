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

#include "describeglobalclustersresponse.h"
#include "describeglobalclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDB {

/*!
 * \class QtAws::DocDB::DescribeGlobalClustersResponse
 * \brief The DescribeGlobalClustersResponse class provides an interace for DocDB DescribeGlobalClusters responses.
 *
 * \inmodule QtAwsDocDB
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDBClient::describeGlobalClusters
 */

/*!
 * Constructs a DescribeGlobalClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGlobalClustersResponse::DescribeGlobalClustersResponse(
        const DescribeGlobalClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDBResponse(new DescribeGlobalClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeGlobalClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGlobalClustersRequest * DescribeGlobalClustersResponse::request() const
{
    return static_cast<const DescribeGlobalClustersRequest *>(DocDBResponse::request());
}

/*!
 * \reimp
 * Parses a successful DocDB DescribeGlobalClusters \a response.
 */
void DescribeGlobalClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGlobalClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDB::DescribeGlobalClustersResponsePrivate
 * \brief The DescribeGlobalClustersResponsePrivate class provides private implementation for DescribeGlobalClustersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDB
 */

/*!
 * Constructs a DescribeGlobalClustersResponsePrivate object with public implementation \a q.
 */
DescribeGlobalClustersResponsePrivate::DescribeGlobalClustersResponsePrivate(
    DescribeGlobalClustersResponse * const q) : DocDBResponsePrivate(q)
{

}

/*!
 * Parses a DocDB DescribeGlobalClusters response element from \a xml.
 */
void DescribeGlobalClustersResponsePrivate::parseDescribeGlobalClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGlobalClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDB
} // namespace QtAws
