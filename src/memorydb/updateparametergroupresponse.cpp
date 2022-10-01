// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateparametergroupresponse.h"
#include "updateparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateParameterGroupResponse
 * \brief The UpdateParameterGroupResponse class provides an interace for MemoryDb UpdateParameterGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateParameterGroup
 */

/*!
 * Constructs a UpdateParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateParameterGroupResponse::UpdateParameterGroupResponse(
        const UpdateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new UpdateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateParameterGroupRequest * UpdateParameterGroupResponse::request() const
{
    Q_D(const UpdateParameterGroupResponse);
    return static_cast<const UpdateParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb UpdateParameterGroup \a response.
 */
void UpdateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::UpdateParameterGroupResponsePrivate
 * \brief The UpdateParameterGroupResponsePrivate class provides private implementation for UpdateParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateParameterGroupResponsePrivate object with public implementation \a q.
 */
UpdateParameterGroupResponsePrivate::UpdateParameterGroupResponsePrivate(
    UpdateParameterGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb UpdateParameterGroup response element from \a xml.
 */
void UpdateParameterGroupResponsePrivate::parseUpdateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
