// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "copysnapshotresponse.h"
#include "copysnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CopySnapshotResponse
 * \brief The CopySnapshotResponse class provides an interace for MemoryDb CopySnapshot responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::copySnapshot
 */

/*!
 * Constructs a CopySnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CopySnapshotResponse::CopySnapshotResponse(
        const CopySnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new CopySnapshotResponsePrivate(this), parent)
{
    setRequest(new CopySnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CopySnapshotRequest * CopySnapshotResponse::request() const
{
    Q_D(const CopySnapshotResponse);
    return static_cast<const CopySnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb CopySnapshot \a response.
 */
void CopySnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CopySnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::CopySnapshotResponsePrivate
 * \brief The CopySnapshotResponsePrivate class provides private implementation for CopySnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CopySnapshotResponsePrivate object with public implementation \a q.
 */
CopySnapshotResponsePrivate::CopySnapshotResponsePrivate(
    CopySnapshotResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb CopySnapshot response element from \a xml.
 */
void CopySnapshotResponsePrivate::parseCopySnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopySnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
