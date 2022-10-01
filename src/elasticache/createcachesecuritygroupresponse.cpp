// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcachesecuritygroupresponse.h"
#include "createcachesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheSecurityGroupResponse
 * \brief The CreateCacheSecurityGroupResponse class provides an interace for ElastiCache CreateCacheSecurityGroup responses.
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
 * \sa ElastiCacheClient::createCacheSecurityGroup
 */

/*!
 * Constructs a CreateCacheSecurityGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCacheSecurityGroupResponse::CreateCacheSecurityGroupResponse(
        const CreateCacheSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateCacheSecurityGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCacheSecurityGroupRequest * CreateCacheSecurityGroupResponse::request() const
{
    Q_D(const CreateCacheSecurityGroupResponse);
    return static_cast<const CreateCacheSecurityGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateCacheSecurityGroup \a response.
 */
void CreateCacheSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCacheSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateCacheSecurityGroupResponsePrivate
 * \brief The CreateCacheSecurityGroupResponsePrivate class provides private implementation for CreateCacheSecurityGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateCacheSecurityGroupResponsePrivate object with public implementation \a q.
 */
CreateCacheSecurityGroupResponsePrivate::CreateCacheSecurityGroupResponsePrivate(
    CreateCacheSecurityGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateCacheSecurityGroup response element from \a xml.
 */
void CreateCacheSecurityGroupResponsePrivate::parseCreateCacheSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheSecurityGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
