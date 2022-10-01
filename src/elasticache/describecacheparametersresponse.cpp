// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecacheparametersresponse.h"
#include "describecacheparametersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::DescribeCacheParametersResponse
 * \brief The DescribeCacheParametersResponse class provides an interace for ElastiCache DescribeCacheParameters responses.
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
 * \sa ElastiCacheClient::describeCacheParameters
 */

/*!
 * Constructs a DescribeCacheParametersResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCacheParametersResponse::DescribeCacheParametersResponse(
        const DescribeCacheParametersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new DescribeCacheParametersResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheParametersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCacheParametersRequest * DescribeCacheParametersResponse::request() const
{
    Q_D(const DescribeCacheParametersResponse);
    return static_cast<const DescribeCacheParametersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache DescribeCacheParameters \a response.
 */
void DescribeCacheParametersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCacheParametersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::DescribeCacheParametersResponsePrivate
 * \brief The DescribeCacheParametersResponsePrivate class provides private implementation for DescribeCacheParametersResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a DescribeCacheParametersResponsePrivate object with public implementation \a q.
 */
DescribeCacheParametersResponsePrivate::DescribeCacheParametersResponsePrivate(
    DescribeCacheParametersResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache DescribeCacheParameters response element from \a xml.
 */
void DescribeCacheParametersResponsePrivate::parseDescribeCacheParametersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheParametersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
