// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listallowednodetypeupdatesresponse.h"
#include "listallowednodetypeupdatesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::ListAllowedNodeTypeUpdatesResponse
 * \brief The ListAllowedNodeTypeUpdatesResponse class provides an interace for MemoryDb ListAllowedNodeTypeUpdates responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::listAllowedNodeTypeUpdates
 */

/*!
 * Constructs a ListAllowedNodeTypeUpdatesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAllowedNodeTypeUpdatesResponse::ListAllowedNodeTypeUpdatesResponse(
        const ListAllowedNodeTypeUpdatesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new ListAllowedNodeTypeUpdatesResponsePrivate(this), parent)
{
    setRequest(new ListAllowedNodeTypeUpdatesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAllowedNodeTypeUpdatesRequest * ListAllowedNodeTypeUpdatesResponse::request() const
{
    Q_D(const ListAllowedNodeTypeUpdatesResponse);
    return static_cast<const ListAllowedNodeTypeUpdatesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb ListAllowedNodeTypeUpdates \a response.
 */
void ListAllowedNodeTypeUpdatesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAllowedNodeTypeUpdatesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::ListAllowedNodeTypeUpdatesResponsePrivate
 * \brief The ListAllowedNodeTypeUpdatesResponsePrivate class provides private implementation for ListAllowedNodeTypeUpdatesResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a ListAllowedNodeTypeUpdatesResponsePrivate object with public implementation \a q.
 */
ListAllowedNodeTypeUpdatesResponsePrivate::ListAllowedNodeTypeUpdatesResponsePrivate(
    ListAllowedNodeTypeUpdatesResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb ListAllowedNodeTypeUpdates response element from \a xml.
 */
void ListAllowedNodeTypeUpdatesResponsePrivate::parseListAllowedNodeTypeUpdatesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAllowedNodeTypeUpdatesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
