// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteclusterresponse.h"
#include "deleteclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteClusterResponse
 * \brief The DeleteClusterResponse class provides an interace for MemoryDb DeleteCluster responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteCluster
 */

/*!
 * Constructs a DeleteClusterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteClusterResponse::DeleteClusterResponse(
        const DeleteClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DeleteClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteClusterRequest * DeleteClusterResponse::request() const
{
    Q_D(const DeleteClusterResponse);
    return static_cast<const DeleteClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DeleteCluster \a response.
 */
void DeleteClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DeleteClusterResponsePrivate
 * \brief The DeleteClusterResponsePrivate class provides private implementation for DeleteClusterResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteClusterResponsePrivate object with public implementation \a q.
 */
DeleteClusterResponsePrivate::DeleteClusterResponsePrivate(
    DeleteClusterResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DeleteCluster response element from \a xml.
 */
void DeleteClusterResponsePrivate::parseDeleteClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
