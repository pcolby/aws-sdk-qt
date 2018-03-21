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

#include "elasticloadbalancingv2clientresponse.h"
#include "elasticloadbalancingv2clientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace  {

/**
 * @class  ElasticLoadBalancingv2ClientResponse
 *
 * @brief  Handles  ElasticLoadBalancingv2Client responses.
 *
 * @see    Client::elasticLoadBalancingv2Client
 */

/**
 * @brief  Constructs a new ElasticLoadBalancingv2ClientResponse object.
 *
 * @param  parent   This object's parent.
 */
ElasticLoadBalancingv2ClientResponse::ElasticLoadBalancingv2ClientResponse(QObject * const parent)
    : AwsAbstractResponse(new ElasticLoadBalancingv2ClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ElasticLoadBalancingv2ClientResponsePrivate
 *
 * @brief  Private implementation for ElasticLoadBalancingv2ClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ElasticLoadBalancingv2ClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ElasticLoadBalancingv2ClientResponse instance.
 */
ElasticLoadBalancingv2ClientResponsePrivate::ElasticLoadBalancingv2ClientResponsePrivate(
    ElasticLoadBalancingv2ClientQueueResponse * const q) : ElasticLoadBalancingv2ClientPrivate(q)
{

}

} // namespace 
} // namespace AWS
