// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcacheparametergroupresponse.h"
#include "createcacheparametergroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheParameterGroupResponse
 * \brief The CreateCacheParameterGroupResponse class provides an interace for ElastiCache CreateCacheParameterGroup responses.
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
 * \sa ElastiCacheClient::createCacheParameterGroup
 */

/*!
 * Constructs a CreateCacheParameterGroupResponse object for \a reply to \a request, with parent \a parent.
 */
CreateCacheParameterGroupResponse::CreateCacheParameterGroupResponse(
        const CreateCacheParameterGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheParameterGroupResponsePrivate(this), parent)
{
    setRequest(new CreateCacheParameterGroupRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateCacheParameterGroupRequest * CreateCacheParameterGroupResponse::request() const
{
    Q_D(const CreateCacheParameterGroupResponse);
    return static_cast<const CreateCacheParameterGroupRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache CreateCacheParameterGroup \a response.
 */
void CreateCacheParameterGroupResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateCacheParameterGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::CreateCacheParameterGroupResponsePrivate
 * \brief The CreateCacheParameterGroupResponsePrivate class provides private implementation for CreateCacheParameterGroupResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a CreateCacheParameterGroupResponsePrivate object with public implementation \a q.
 */
CreateCacheParameterGroupResponsePrivate::CreateCacheParameterGroupResponsePrivate(
    CreateCacheParameterGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache CreateCacheParameterGroup response element from \a xml.
 */
void CreateCacheParameterGroupResponsePrivate::parseCreateCacheParameterGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheParameterGroupResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ElastiCache
} // namespace QtAws
