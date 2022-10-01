// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateaclresponse.h"
#include "updateaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::UpdateACLResponse
 * \brief The UpdateACLResponse class provides an interace for MemoryDb UpdateACL responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::updateACL
 */

/*!
 * Constructs a UpdateACLResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateACLResponse::UpdateACLResponse(
        const UpdateACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new UpdateACLResponsePrivate(this), parent)
{
    setRequest(new UpdateACLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateACLRequest * UpdateACLResponse::request() const
{
    Q_D(const UpdateACLResponse);
    return static_cast<const UpdateACLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb UpdateACL \a response.
 */
void UpdateACLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::UpdateACLResponsePrivate
 * \brief The UpdateACLResponsePrivate class provides private implementation for UpdateACLResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a UpdateACLResponsePrivate object with public implementation \a q.
 */
UpdateACLResponsePrivate::UpdateACLResponsePrivate(
    UpdateACLResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb UpdateACL response element from \a xml.
 */
void UpdateACLResponsePrivate::parseUpdateACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateACLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
