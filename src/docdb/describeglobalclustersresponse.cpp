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
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeGlobalClustersResponse
 * \brief The DescribeGlobalClustersResponse class provides an interace for DocDb DescribeGlobalClusters responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeGlobalClusters
 */

/*!
 * Constructs a DescribeGlobalClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGlobalClustersResponse::DescribeGlobalClustersResponse(
        const DescribeGlobalClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeGlobalClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeGlobalClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGlobalClustersRequest * DescribeGlobalClustersResponse::request() const
{
    Q_D(const DescribeGlobalClustersResponse);
    return static_cast<const DescribeGlobalClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeGlobalClusters \a response.
 */
void DescribeGlobalClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGlobalClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeGlobalClustersResponsePrivate
 * \brief The DescribeGlobalClustersResponsePrivate class provides private implementation for DescribeGlobalClustersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeGlobalClustersResponsePrivate object with public implementation \a q.
 */
DescribeGlobalClustersResponsePrivate::DescribeGlobalClustersResponsePrivate(
    DescribeGlobalClustersResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeGlobalClusters response element from \a xml.
 */
void DescribeGlobalClustersResponsePrivate::parseDescribeGlobalClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGlobalClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
