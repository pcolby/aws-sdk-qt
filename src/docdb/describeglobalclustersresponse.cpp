// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
