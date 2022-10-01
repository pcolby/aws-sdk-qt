// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecacheclustersresponse.h"
#include "describecacheclustersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheClustersResponse
 * \brief The DescribeCacheClustersResponse class provides an interace for ElastiCache DescribeCacheClusters responses.
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
 * \sa ElastiCacheClient::describeCacheClusters
 */

/*!
 * Constructs a DescribeCacheClustersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCacheClustersResponse::DescribeCacheClustersResponse(
        const DescribeCacheClustersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheClustersResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheClustersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCacheClustersRequest * DescribeCacheClustersResponse::request() const
{
    Q_D(const DescribeCacheClustersResponse);
    return static_cast<const DescribeCacheClustersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeCacheClusters \a response.
 */
void DescribeCacheClustersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCacheClustersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheClustersResponsePrivate
 * \brief The DescribeCacheClustersResponsePrivate class provides private implementation for DescribeCacheClustersResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeCacheClustersResponsePrivate object with public implementation \a q.
 */
DescribeCacheClustersResponsePrivate::DescribeCacheClustersResponsePrivate(
    DescribeCacheClustersResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeCacheClusters response element from \a xml.
 */
void DescribeCacheClustersResponsePrivate::parseDescribeCacheClustersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheClustersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
