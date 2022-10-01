// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedbclustersnapshotattributesresponse.h"
#include "describedbclustersnapshotattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotAttributesResponse
 * \brief The DescribeDBClusterSnapshotAttributesResponse class provides an interace for DocDb DescribeDBClusterSnapshotAttributes responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::describeDBClusterSnapshotAttributes
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDBClusterSnapshotAttributesResponse::DescribeDBClusterSnapshotAttributesResponse(
        const DescribeDBClusterSnapshotAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new DescribeDBClusterSnapshotAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBClusterSnapshotAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDBClusterSnapshotAttributesRequest * DescribeDBClusterSnapshotAttributesResponse::request() const
{
    Q_D(const DescribeDBClusterSnapshotAttributesResponse);
    return static_cast<const DescribeDBClusterSnapshotAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb DescribeDBClusterSnapshotAttributes \a response.
 */
void DescribeDBClusterSnapshotAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDBClusterSnapshotAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::DescribeDBClusterSnapshotAttributesResponsePrivate
 * \brief The DescribeDBClusterSnapshotAttributesResponsePrivate class provides private implementation for DescribeDBClusterSnapshotAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a DescribeDBClusterSnapshotAttributesResponsePrivate object with public implementation \a q.
 */
DescribeDBClusterSnapshotAttributesResponsePrivate::DescribeDBClusterSnapshotAttributesResponsePrivate(
    DescribeDBClusterSnapshotAttributesResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb DescribeDBClusterSnapshotAttributes response element from \a xml.
 */
void DescribeDBClusterSnapshotAttributesResponsePrivate::parseDescribeDBClusterSnapshotAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBClusterSnapshotAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
