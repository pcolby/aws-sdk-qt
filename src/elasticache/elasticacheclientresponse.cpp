/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "elasticacheclientresponse.h"
#include "elasticacheclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ElastiCache {

/**
 * @class  ElastiCacheClientResponse
 *
 * @brief  Handles  ElastiCacheClient responses.
 *
 * @see    Client::elastiCacheClient
 */

/**
 * @brief  Constructs a new ElastiCacheClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ElastiCacheClientResponse::ElastiCacheClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ElastiCacheClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ElastiCacheClientResponsePrivate
 *
 * @brief  Private implementation for ElastiCacheClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElastiCacheClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElastiCacheClientResponse instance.
 */
ElastiCacheClientResponsePrivate::ElastiCacheClientResponsePrivate(
    ElastiCacheClientQueueResponse * const q) : ElastiCacheClientPrivate(q)
{

}

} // namespace ElastiCache
} // namespace AWS
