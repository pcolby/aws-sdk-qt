// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesubnetgroupresponse.h"
#include "updatesubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateSubnetGroupResponse
 * \brief The UpdateSubnetGroupResponse class provides an interace for MemoryDb UpdateSubnetGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateSubnetGroup
 */

/*!
 * Constructs a UpdateSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateSubnetGroupResponse::UpdateSubnetGroupResponse(
        const UpdateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new UpdateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateSubnetGroupRequest * UpdateSubnetGroupResponse::request() const
{
    Q_D(const UpdateSubnetGroupResponse);
    return static_cast<const UpdateSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb UpdateSubnetGroup \a response.
 */
void UpdateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::UpdateSubnetGroupResponsePrivate
 * \brief The UpdateSubnetGroupResponsePrivate class provides private implementation for UpdateSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateSubnetGroupResponsePrivate object with public implementation \a q.
 */
UpdateSubnetGroupResponsePrivate::UpdateSubnetGroupResponsePrivate(
    UpdateSubnetGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb UpdateSubnetGroup response element from \a xml.
 */
void UpdateSubnetGroupResponsePrivate::parseUpdateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
