// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclustersresponse.h"
#include "describedbclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClustersResponse
 * \brief The DescribeDBClustersResponse class provides an interace for DocDb DescribeDBClusters responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusters
 */

/*!
 * Constructs a DescribeDBClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClustersResponse::DescribeDBClustersResponse(
        const DescribeDBClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClustersRequest * DescribeDBClustersResponse::request() const
{
    Q_D(const DescribeDBClustersResponse);
    return static_cast<const DescribeDBClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusters \a response.
 */
void DescribeDBClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClustersResponsePrivate
 * \brief The DescribeDBClustersResponsePrivate class provides private implementation for DescribeDBClustersResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClustersResponsePrivate object with public implementation \a q.
 */
DescribeDBClustersResponsePrivate::DescribeDBClustersResponsePrivate(
    DescribeDBClustersResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusters response element from \a xml.
 */
void DescribeDBClustersResponsePrivate::parseDescribeDBClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
