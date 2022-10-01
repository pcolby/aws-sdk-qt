// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
