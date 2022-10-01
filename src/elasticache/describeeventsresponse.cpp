// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeeventsresponse.h"
#include "describeeventsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeEventsResponse
 * \brief The DescribeEventsResponse class provides an interace for ElastiCache DescribeEvents responses.
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
 * \sa ElastiCacheClient::describeEvents
 */

/*!
 * Constructs a DescribeEventsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeEventsResponse::DescribeEventsResponse(
        const DescribeEventsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeEventsResponsePrivate(this), parent)
{
    setRequest(new DescribeEventsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeEventsRequest * DescribeEventsResponse::request() const
{
    Q_D(const DescribeEventsResponse);
    return static_cast<const DescribeEventsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeEvents \a response.
 */
void DescribeEventsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeEventsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeEventsResponsePrivate
 * \brief The DescribeEventsResponsePrivate class provides private implementation for DescribeEventsResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeEventsResponsePrivate object with public implementation \a q.
 */
DescribeEventsResponsePrivate::DescribeEventsResponsePrivate(
    DescribeEventsResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeEvents response element from \a xml.
 */
void DescribeEventsResponsePrivate::parseDescribeEventsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEventsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
