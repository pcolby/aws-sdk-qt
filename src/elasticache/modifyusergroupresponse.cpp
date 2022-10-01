// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifyusergroupresponse.h"
#include "modifyusergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyUserGroupResponse
 * \brief The ModifyUserGroupResponse class provides an interace for ElastiCache ModifyUserGroup responses.
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
 * \sa ElastiCacheClient::modifyUserGroup
 */

/*!
 * Constructs a ModifyUserGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyUserGroupResponse::ModifyUserGroupResponse(
        const ModifyUserGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyUserGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyUserGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyUserGroupRequest * ModifyUserGroupResponse::request() const
{
    Q_D(const ModifyUserGroupResponse);
    return static_cast<const ModifyUserGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyUserGroup \a response.
 */
void ModifyUserGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyUserGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyUserGroupResponsePrivate
 * \brief The ModifyUserGroupResponsePrivate class provides private implementation for ModifyUserGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyUserGroupResponsePrivate object with public implementation \a q.
 */
ModifyUserGroupResponsePrivate::ModifyUserGroupResponsePrivate(
    ModifyUserGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyUserGroup response element from \a xml.
 */
void ModifyUserGroupResponsePrivate::parseModifyUserGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyUserGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
