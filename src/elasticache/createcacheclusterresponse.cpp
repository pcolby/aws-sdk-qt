// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcacheclusterresponse.h"
#include "createcacheclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheClusterResponse
 * \brief The CreateCacheClusterResponse class provides an interace for ElastiCache CreateCacheCluster responses.
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
 * \sa ElastiCacheClient::createCacheCluster
 */

/*!
 * Constructs a CreateCacheClusterResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCacheClusterResponse::CreateCacheClusterResponse(
        const CreateCacheClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheClusterResponsePrivate(this), parent)
{
    setRequest(new CreateCacheClusterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCacheClusterRequest * CreateCacheClusterResponse::request() const
{
    Q_D(const CreateCacheClusterResponse);
    return static_cast<const CreateCacheClusterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateCacheCluster \a response.
 */
void CreateCacheClusterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCacheClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateCacheClusterResponsePrivate
 * \brief The CreateCacheClusterResponsePrivate class provides private implementation for CreateCacheClusterResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateCacheClusterResponsePrivate object with public implementation \a q.
 */
CreateCacheClusterResponsePrivate::CreateCacheClusterResponsePrivate(
    CreateCacheClusterResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateCacheCluster response element from \a xml.
 */
void CreateCacheClusterResponsePrivate::parseCreateCacheClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheClusterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
