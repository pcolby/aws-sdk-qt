// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifycacheclusterresponse.h"
#include "modifycacheclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyCacheClusterResponse
 * \brief The ModifyCacheClusterResponse class provides an interace for ElastiCache ModifyCacheCluster responses.
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
 * \sa ElastiCacheClient::modifyCacheCluster
 */

/*!
 * Constructs a ModifyCacheClusterResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyCacheClusterResponse::ModifyCacheClusterResponse(
        const ModifyCacheClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyCacheClusterResponsePrivate(this), parent)
{
    setRequest(new ModifyCacheClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyCacheClusterRequest * ModifyCacheClusterResponse::request() const
{
    Q_D(const ModifyCacheClusterResponse);
    return static_cast<const ModifyCacheClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyCacheCluster \a response.
 */
void ModifyCacheClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyCacheClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyCacheClusterResponsePrivate
 * \brief The ModifyCacheClusterResponsePrivate class provides private implementation for ModifyCacheClusterResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyCacheClusterResponsePrivate object with public implementation \a q.
 */
ModifyCacheClusterResponsePrivate::ModifyCacheClusterResponsePrivate(
    ModifyCacheClusterResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyCacheCluster response element from \a xml.
 */
void ModifyCacheClusterResponsePrivate::parseModifyCacheClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCacheClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
