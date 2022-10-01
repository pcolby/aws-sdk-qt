// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteparametergroupresponse.h"
#include "deleteparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::DeleteParameterGroupResponse
 * \brief The DeleteParameterGroupResponse class provides an interace for MemoryDb DeleteParameterGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::deleteParameterGroup
 */

/*!
 * Constructs a DeleteParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteParameterGroupResponse::DeleteParameterGroupResponse(
        const DeleteParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new DeleteParameterGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteParameterGroupRequest * DeleteParameterGroupResponse::request() const
{
    Q_D(const DeleteParameterGroupResponse);
    return static_cast<const DeleteParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb DeleteParameterGroup \a response.
 */
void DeleteParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::DeleteParameterGroupResponsePrivate
 * \brief The DeleteParameterGroupResponsePrivate class provides private implementation for DeleteParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a DeleteParameterGroupResponsePrivate object with public implementation \a q.
 */
DeleteParameterGroupResponsePrivate::DeleteParameterGroupResponsePrivate(
    DeleteParameterGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb DeleteParameterGroup response element from \a xml.
 */
void DeleteParameterGroupResponsePrivate::parseDeleteParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
