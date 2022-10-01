// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeglobalreplicationgroupsresponse.h"
#include "describeglobalreplicationgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeGlobalReplicationGroupsResponse
 * \brief The DescribeGlobalReplicationGroupsResponse class provides an interace for ElastiCache DescribeGlobalReplicationGroups responses.
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
 * \sa ElastiCacheClient::describeGlobalReplicationGroups
 */

/*!
 * Constructs a DescribeGlobalReplicationGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeGlobalReplicationGroupsResponse::DescribeGlobalReplicationGroupsResponse(
        const DescribeGlobalReplicationGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeGlobalReplicationGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeGlobalReplicationGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeGlobalReplicationGroupsRequest * DescribeGlobalReplicationGroupsResponse::request() const
{
    Q_D(const DescribeGlobalReplicationGroupsResponse);
    return static_cast<const DescribeGlobalReplicationGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeGlobalReplicationGroups \a response.
 */
void DescribeGlobalReplicationGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeGlobalReplicationGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeGlobalReplicationGroupsResponsePrivate
 * \brief The DescribeGlobalReplicationGroupsResponsePrivate class provides private implementation for DescribeGlobalReplicationGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeGlobalReplicationGroupsResponsePrivate object with public implementation \a q.
 */
DescribeGlobalReplicationGroupsResponsePrivate::DescribeGlobalReplicationGroupsResponsePrivate(
    DescribeGlobalReplicationGroupsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeGlobalReplicationGroups response element from \a xml.
 */
void DescribeGlobalReplicationGroupsResponsePrivate::parseDescribeGlobalReplicationGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGlobalReplicationGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
