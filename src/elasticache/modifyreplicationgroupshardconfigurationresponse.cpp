/*
    Copyright 2013-2018 Paul Colby

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

#include "modifyreplicationgroupshardconfigurationresponse.h"
#include "modifyreplicationgroupshardconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationResponse
 * \brief The ModifyReplicationGroupShardConfigurationResponse class provides an interace for ElastiCache ModifyReplicationGroupShardConfiguration responses.
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
 * \sa ElastiCacheClient::modifyReplicationGroupShardConfiguration
 */

/*!
 * Constructs a ModifyReplicationGroupShardConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
ModifyReplicationGroupShardConfigurationResponse::ModifyReplicationGroupShardConfigurationResponse(
        const ModifyReplicationGroupShardConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new ModifyReplicationGroupShardConfigurationResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationGroupShardConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ModifyReplicationGroupShardConfigurationRequest * ModifyReplicationGroupShardConfigurationResponse::request() const
{
    Q_D(const ModifyReplicationGroupShardConfigurationResponse);
    return static_cast<const ModifyReplicationGroupShardConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ElastiCache ModifyReplicationGroupShardConfiguration \a response.
 */
void ModifyReplicationGroupShardConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ModifyReplicationGroupShardConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ElastiCache::ModifyReplicationGroupShardConfigurationResponsePrivate
 * \brief The ModifyReplicationGroupShardConfigurationResponsePrivate class provides private implementation for ModifyReplicationGroupShardConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsElastiCache
 */

/*!
 * Constructs a ModifyReplicationGroupShardConfigurationResponsePrivate object with public implementation \a q.
 */
ModifyReplicationGroupShardConfigurationResponsePrivate::ModifyReplicationGroupShardConfigurationResponsePrivate(
    ModifyReplicationGroupShardConfigurationResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * Parses a ElastiCache ModifyReplicationGroupShardConfiguration response element from \a xml.
 */
void ModifyReplicationGroupShardConfigurationResponsePrivate::parseModifyReplicationGroupShardConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationGroupShardConfigurationResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
