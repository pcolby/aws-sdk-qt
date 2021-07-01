/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
