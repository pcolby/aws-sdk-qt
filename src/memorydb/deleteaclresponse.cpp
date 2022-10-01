// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaclresponse.h"
#include "deleteaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteACLResponse
 * \brief The DeleteACLResponse class provides an interace for MemoryDb DeleteACL responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteACL
 */

/*!
 * Constructs a DeleteACLResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteACLResponse::DeleteACLResponse(
        const DeleteACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DeleteACLResponsePrivate(this), parent)
{
    setRequest(new DeleteACLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteACLRequest * DeleteACLResponse::request() const
{
    Q_D(const DeleteACLResponse);
    return static_cast<const DeleteACLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DeleteACL \a response.
 */
void DeleteACLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DeleteACLResponsePrivate
 * \brief The DeleteACLResponsePrivate class provides private implementation for DeleteACLResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteACLResponsePrivate object with public implementation \a q.
 */
DeleteACLResponsePrivate::DeleteACLResponsePrivate(
    DeleteACLResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DeleteACL response element from \a xml.
 */
void DeleteACLResponsePrivate::parseDeleteACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteACLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
