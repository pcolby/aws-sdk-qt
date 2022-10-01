/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "failovershardresponse.h"
#include "failovershardresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::FailoverShardResponse
 * \brief The FailoverShardResponse class provides an interace for MemoryDb FailoverShard responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::failoverShard
 */

/*!
 * Constructs a FailoverShardResponse object for \a reply to \a request, with parent \a parent.
 */
FailoverShardResponse::FailoverShardResponse(
        const FailoverShardRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new FailoverShardResponsePrivate(this), parent)
{
    setRequest(new FailoverShardRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const FailoverShardRequest * FailoverShardResponse::request() const
{
    Q_D(const FailoverShardResponse);
    return static_cast<const FailoverShardRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb FailoverShard \a response.
 */
void FailoverShardResponse::parseSuccess(QIODevice &response)
{
    //Q_D(FailoverShardResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::FailoverShardResponsePrivate
 * \brief The FailoverShardResponsePrivate class provides private implementation for FailoverShardResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a FailoverShardResponsePrivate object with public implementation \a q.
 */
FailoverShardResponsePrivate::FailoverShardResponsePrivate(
    FailoverShardResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb FailoverShard response element from \a xml.
 */
void FailoverShardResponsePrivate::parseFailoverShardResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FailoverShardResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
