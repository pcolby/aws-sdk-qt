// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsnapshotresponse.h"
#include "createsnapshotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateSnapshotResponse
 * \brief The CreateSnapshotResponse class provides an interace for MemoryDb CreateSnapshot responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createSnapshot
 */

/*!
 * Constructs a CreateSnapshotResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSnapshotResponse::CreateSnapshotResponse(
        const CreateSnapshotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new CreateSnapshotResponsePrivate(this), parent)
{
    setRequest(new CreateSnapshotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSnapshotRequest * CreateSnapshotResponse::request() const
{
    Q_D(const CreateSnapshotResponse);
    return static_cast<const CreateSnapshotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb CreateSnapshot \a response.
 */
void CreateSnapshotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSnapshotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::CreateSnapshotResponsePrivate
 * \brief The CreateSnapshotResponsePrivate class provides private implementation for CreateSnapshotResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateSnapshotResponsePrivate object with public implementation \a q.
 */
CreateSnapshotResponsePrivate::CreateSnapshotResponsePrivate(
    CreateSnapshotResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb CreateSnapshot response element from \a xml.
 */
void CreateSnapshotResponsePrivate::parseCreateSnapshotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSnapshotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
