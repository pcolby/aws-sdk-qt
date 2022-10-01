// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaclresponse.h"
#include "createaclresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateACLResponse
 * \brief The CreateACLResponse class provides an interace for MemoryDb CreateACL responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createACL
 */

/*!
 * Constructs a CreateACLResponse object for \a reply to \a request, with parent \a parent.
 */
CreateACLResponse::CreateACLResponse(
        const CreateACLRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new CreateACLResponsePrivate(this), parent)
{
    setRequest(new CreateACLRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateACLRequest * CreateACLResponse::request() const
{
    Q_D(const CreateACLResponse);
    return static_cast<const CreateACLRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb CreateACL \a response.
 */
void CreateACLResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateACLResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::CreateACLResponsePrivate
 * \brief The CreateACLResponsePrivate class provides private implementation for CreateACLResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateACLResponsePrivate object with public implementation \a q.
 */
CreateACLResponsePrivate::CreateACLResponsePrivate(
    CreateACLResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb CreateACL response element from \a xml.
 */
void CreateACLResponsePrivate::parseCreateACLResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateACLResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
