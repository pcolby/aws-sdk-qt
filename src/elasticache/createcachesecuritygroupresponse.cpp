/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createcachesecuritygroupresponse.h"
#include "createcachesecuritygroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElastiCache {

/*!
 * \class QtAws::ElastiCache::CreateCacheSecurityGroupResponse
 *
 * \brief The CreateCacheSecurityGroupResponse class encapsulates ElastiCache CreateCacheSecurityGroup responses.
 *
 * \ingroup ElastiCache
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
 * \sa ElastiCacheClient::createCacheSecurityGroup
 */

/*!
 * @brief  Constructs a new CreateCacheSecurityGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCacheSecurityGroupResponse::CreateCacheSecurityGroupResponse(
        const CreateCacheSecurityGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElastiCacheResponse(new CreateCacheSecurityGroupResponsePrivate(this), parent)
{
    setRequest(new CreateCacheSecurityGroupRequest(request));
    setReply(reply);
}

const CreateCacheSecurityGroupRequest * CreateCacheSecurityGroupResponse::request() const
{
    Q_D(const CreateCacheSecurityGroupResponse);
    return static_cast<const CreateCacheSecurityGroupRequest *>(d->request);
}

/*!
 * @brief  Parse a ElastiCache CreateCacheSecurityGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateCacheSecurityGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCacheSecurityGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class CreateCacheSecurityGroupResponsePrivate
 *
 * \brief Private implementation for CreateCacheSecurityGroupResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new CreateCacheSecurityGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCacheSecurityGroupResponse instance.
 */
CreateCacheSecurityGroupResponsePrivate::CreateCacheSecurityGroupResponsePrivate(
    CreateCacheSecurityGroupResponse * const q) : ElastiCacheResponsePrivate(q)
{

}

/*!
 * @brief  Parse an ElastiCache CreateCacheSecurityGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCacheSecurityGroupResponsePrivate::parseCreateCacheSecurityGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCacheSecurityGroupResponse"));
    /// @todo
}

} // namespace ElastiCache
} // namespace QtAws
