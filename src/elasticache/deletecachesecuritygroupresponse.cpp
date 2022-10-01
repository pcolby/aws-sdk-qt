// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecachesecuritygroupresponse.h"
#include "deletecachesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DeleteCacheSecurityGroupResponse
 * \brief The DeleteCacheSecurityGroupResponse class provides an interace for ElastiCache DeleteCacheSecurityGroup responses.
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
 * \sa ElastiCacheClient::deleteCacheSecurityGroup
 */

/*!
 * Constructs a DeleteCacheSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteCacheSecurityGroupResponse::DeleteCacheSecurityGroupResponse(
        const DeleteCacheSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DeleteCacheSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteCacheSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteCacheSecurityGroupRequest * DeleteCacheSecurityGroupResponse::request() const
{
    Q_D(const DeleteCacheSecurityGroupResponse);
    return static_cast<const DeleteCacheSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DeleteCacheSecurityGroup \a response.
 */
void DeleteCacheSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteCacheSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DeleteCacheSecurityGroupResponsePrivate
 * \brief The DeleteCacheSecurityGroupResponsePrivate class provides private implementation for DeleteCacheSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DeleteCacheSecurityGroupResponsePrivate object with public implementation \a q.
 */
DeleteCacheSecurityGroupResponsePrivate::DeleteCacheSecurityGroupResponsePrivate(
    DeleteCacheSecurityGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DeleteCacheSecurityGroup response element from \a xml.
 */
void DeleteCacheSecurityGroupResponsePrivate::parseDeleteCacheSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCacheSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
