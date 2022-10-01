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

#include "createsubnetgroupresponse.h"
#include "createsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateSubnetGroupResponse
 * \brief The CreateSubnetGroupResponse class provides an interace for MemoryDb CreateSubnetGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createSubnetGroup
 */

/*!
 * Constructs a CreateSubnetGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateSubnetGroupResponse::CreateSubnetGroupResponse(
        const CreateSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new CreateSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateSubnetGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateSubnetGroupRequest * CreateSubnetGroupResponse::request() const
{
    Q_D(const CreateSubnetGroupResponse);
    return static_cast<const CreateSubnetGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb CreateSubnetGroup \a response.
 */
void CreateSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateSubnetGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::CreateSubnetGroupResponsePrivate
 * \brief The CreateSubnetGroupResponsePrivate class provides private implementation for CreateSubnetGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateSubnetGroupResponsePrivate object with public implementation \a q.
 */
CreateSubnetGroupResponsePrivate::CreateSubnetGroupResponsePrivate(
    CreateSubnetGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb CreateSubnetGroup response element from \a xml.
 */
void CreateSubnetGroupResponsePrivate::parseCreateSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSubnetGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
