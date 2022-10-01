// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchapplyupdateactionresponse.h"
#include "batchapplyupdateactionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::BatchApplyUpdateActionResponse
 * \brief The BatchApplyUpdateActionResponse class provides an interace for ElastiCache BatchApplyUpdateAction responses.
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
 * \sa ElastiCacheClient::batchApplyUpdateAction
 */

/*!
 * Constructs a BatchApplyUpdateActionResponse object for \a reply to \a request, with parent \a parent.
 */
BatchApplyUpdateActionResponse::BatchApplyUpdateActionResponse(
        const BatchApplyUpdateActionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new BatchApplyUpdateActionResponsePrivate(this), parent)
{
    setRequest(new BatchApplyUpdateActionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchApplyUpdateActionRequest * BatchApplyUpdateActionResponse::request() const
{
    Q_D(const BatchApplyUpdateActionResponse);
    return static_cast<const BatchApplyUpdateActionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache BatchApplyUpdateAction \a response.
 */
void BatchApplyUpdateActionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchApplyUpdateActionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::BatchApplyUpdateActionResponsePrivate
 * \brief The BatchApplyUpdateActionResponsePrivate class provides private implementation for BatchApplyUpdateActionResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a BatchApplyUpdateActionResponsePrivate object with public implementation \a q.
 */
BatchApplyUpdateActionResponsePrivate::BatchApplyUpdateActionResponsePrivate(
    BatchApplyUpdateActionResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache BatchApplyUpdateAction response element from \a xml.
 */
void BatchApplyUpdateActionResponsePrivate::parseBatchApplyUpdateActionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchApplyUpdateActionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
