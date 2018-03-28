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

#include "elasticloadbalancingclientresponse.h"
#include "elasticloadbalancingclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ElasticLoadBalancingClientResponse
 *
 * @brief  Handles ElasticLoadBalancing ElasticLoadBalancingClient responses.
 *
 * @see    ElasticLoadBalancingClient::elasticLoadBalancingClient
 */

/**
 * @brief  Constructs a new ElasticLoadBalancingClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ElasticLoadBalancingClientResponse::ElasticLoadBalancingClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ElasticLoadBalancingClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingClientResponsePrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElasticLoadBalancingClientResponse instance.
 */
ElasticLoadBalancingClientResponsePrivate::ElasticLoadBalancingClientResponsePrivate(
    ElasticLoadBalancingClientQueueResponse * const q) : ElasticLoadBalancingClientPrivate(q)
{

}

} // namespace ElasticLoadBalancing
} // namespace AWS
