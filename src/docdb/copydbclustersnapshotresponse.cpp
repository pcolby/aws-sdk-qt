// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copydbclustersnapshotresponse.h"
#include "copydbclustersnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DocDb {

/*!
 * \class QtAws::DocDb::CopyDBClusterSnapshotResponse
 * \brief The CopyDBClusterSnapshotResponse class provides an interace for DocDb CopyDBClusterSnapshot responses.
 *
 * \inmodule QtAwsDocDb
 *
 *  Amazon DocumentDB API
 *
 * \sa DocDbClient::copyDBClusterSnapshot
 */

/*!
 * Constructs a CopyDBClusterSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CopyDBClusterSnapshotResponse::CopyDBClusterSnapshotResponse(
        const CopyDBClusterSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DocDbResponse(new CopyDBClusterSnapshotResponsePrivate(this), parent)
{
    setRequest(new CopyDBClusterSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopyDBClusterSnapshotRequest * CopyDBClusterSnapshotResponse::request() const
{
    Q_D(const CopyDBClusterSnapshotResponse);
    return static_cast<const CopyDBClusterSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DocDb CopyDBClusterSnapshot \a response.
 */
void CopyDBClusterSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopyDBClusterSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DocDb::CopyDBClusterSnapshotResponsePrivate
 * \brief The CopyDBClusterSnapshotResponsePrivate class provides private implementation for CopyDBClusterSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsDocDb
 */

/*!
 * Constructs a CopyDBClusterSnapshotResponsePrivate object with public implementation \a q.
 */
CopyDBClusterSnapshotResponsePrivate::CopyDBClusterSnapshotResponsePrivate(
    CopyDBClusterSnapshotResponse * const q) : DocDbResponsePrivate(q)
{

}

/*!
 * Parses a DocDb CopyDBClusterSnapshot response element from \a xml.
 */
void CopyDBClusterSnapshotResponsePrivate::parseCopyDBClusterSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyDBClusterSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DocDb
} // namespace QtAws
