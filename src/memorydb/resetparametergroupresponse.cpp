// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resetparametergroupresponse.h"
#include "resetparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::ResetParameterGroupResponse
 * \brief The ResetParameterGroupResponse class provides an interace for MemoryDb ResetParameterGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::resetParameterGroup
 */

/*!
 * Constructs a ResetParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ResetParameterGroupResponse::ResetParameterGroupResponse(
        const ResetParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new ResetParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ResetParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ResetParameterGroupRequest * ResetParameterGroupResponse::request() const
{
    Q_D(const ResetParameterGroupResponse);
    return static_cast<const ResetParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb ResetParameterGroup \a response.
 */
void ResetParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ResetParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::ResetParameterGroupResponsePrivate
 * \brief The ResetParameterGroupResponsePrivate class provides private implementation for ResetParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a ResetParameterGroupResponsePrivate object with public implementation \a q.
 */
ResetParameterGroupResponsePrivate::ResetParameterGroupResponsePrivate(
    ResetParameterGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb ResetParameterGroup response element from \a xml.
 */
void ResetParameterGroupResponsePrivate::parseResetParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ResetParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
