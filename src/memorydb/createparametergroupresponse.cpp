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

#include "createparametergroupresponse.h"
#include "createparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MemoryDb {

/*!
 * \class QtAws::MemoryDb::CreateParameterGroupResponse
 * \brief The CreateParameterGroupResponse class provides an interace for MemoryDb CreateParameterGroup responses.
 *
 * \inmodule QtAwsMemoryDb
 *
 *  MemoryDB for Redis is a fully managed, Redis-compatible, in-memory database that delivers ultra-fast performance and
 *  Multi-AZ durability for modern applications built using microservices architectures. MemoryDB stores the entire database
 *  in-memory, enabling low latency and high throughput data access. It is compatible with Redis, a popular open source data
 *  store, enabling you to leverage Redis’ flexible and friendly data structures, APIs, and
 *
 * \sa MemoryDbClient::createParameterGroup
 */

/*!
 * Constructs a CreateParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateParameterGroupResponse::CreateParameterGroupResponse(
        const CreateParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MemoryDbResponse(new CreateParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateParameterGroupRequest * CreateParameterGroupResponse::request() const
{
    Q_D(const CreateParameterGroupResponse);
    return static_cast<const CreateParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MemoryDb CreateParameterGroup \a response.
 */
void CreateParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MemoryDb::CreateParameterGroupResponsePrivate
 * \brief The CreateParameterGroupResponsePrivate class provides private implementation for CreateParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsMemoryDb
 */

/*!
 * Constructs a CreateParameterGroupResponsePrivate object with public implementation \a q.
 */
CreateParameterGroupResponsePrivate::CreateParameterGroupResponsePrivate(
    CreateParameterGroupResponse * const q) : MemoryDbResponsePrivate(q)
{

}

/*!
 * Parses a MemoryDb CreateParameterGroup response element from \a xml.
 */
void CreateParameterGroupResponsePrivate::parseCreateParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MemoryDb
} // namespace QtAws
