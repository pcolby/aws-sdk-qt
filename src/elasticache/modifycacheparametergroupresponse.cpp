// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "modifycacheparametergroupresponse.h"
#include "modifycacheparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyCacheParameterGroupResponse
 * \brief The ModifyCacheParameterGroupResponse class provides an interace for ElastiCache ModifyCacheParameterGroup responses.
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
 * \sa ElastiCacheClient::modifyCacheParameterGroup
 */

/*!
 * Constructs a ModifyCacheParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyCacheParameterGroupResponse::ModifyCacheParameterGroupResponse(
        const ModifyCacheParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyCacheParameterGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyCacheParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyCacheParameterGroupRequest * ModifyCacheParameterGroupResponse::request() const
{
    Q_D(const ModifyCacheParameterGroupResponse);
    return static_cast<const ModifyCacheParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyCacheParameterGroup \a response.
 */
void ModifyCacheParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyCacheParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyCacheParameterGroupResponsePrivate
 * \brief The ModifyCacheParameterGroupResponsePrivate class provides private implementation for ModifyCacheParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyCacheParameterGroupResponsePrivate object with public implementation \a q.
 */
ModifyCacheParameterGroupResponsePrivate::ModifyCacheParameterGroupResponsePrivate(
    ModifyCacheParameterGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyCacheParameterGroup response element from \a xml.
 */
void ModifyCacheParameterGroupResponsePrivate::parseModifyCacheParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyCacheParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
