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

#include "createusergroupresponse.h"
#include "createusergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateUserGroupResponse
 * \brief The CreateUserGroupResponse class provides an interace for ElastiCache CreateUserGroup responses.
 *
 * \inmodule QtAwsElastiCache
 *
 *  <fullname>Amazon ElastiCache</fullname>
 * 
 *  Amazon ElastiCache is a web service that makes it easier to set up, operate, and scale a distributed cache in the
 * 
 *  cloud>
 * 
 *  With ElastiCache, customers get all of the benefits of a high-performance, in-memory cache with less of the
 *  administrative burden involved in launching and managing a distributed cache. The service makes setup, scaling, and
 *  cluster failure handling much simpler than in a self-managed cache
 * 
 *  deployment>
 * 
 *  In addition, through integration with Amazon CloudWatch, customers get enhanced visibility into the key performance
 *  statistics associated with their cache and can receive alarms if a part of their cache runs
 *
 * \sa ElastiCacheClient::createUserGroup
 */

/*!
 * Constructs a CreateUserGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateUserGroupResponse::CreateUserGroupResponse(
        const CreateUserGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateUserGroupResponsePrivate(this), parent)
{
    setRequest(new CreateUserGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateUserGroupRequest * CreateUserGroupResponse::request() const
{
    Q_D(const CreateUserGroupResponse);
    return static_cast<const CreateUserGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateUserGroup \a response.
 */
void CreateUserGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateUserGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateUserGroupResponsePrivate
 * \brief The CreateUserGroupResponsePrivate class provides private implementation for CreateUserGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateUserGroupResponsePrivate object with public implementation \a q.
 */
CreateUserGroupResponsePrivate::CreateUserGroupResponsePrivate(
    CreateUserGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateUserGroup response element from \a xml.
 */
void CreateUserGroupResponsePrivate::parseCreateUserGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateUserGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
