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

#include "describeloadbalancerpolicytypesresponse.h"
#include "describeloadbalancerpolicytypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeLoadBalancerPolicyTypesResponse
 *
 * @brief  Handles ElasticLoadBalancing DescribeLoadBalancerPolicyTypes responses.
 *
 * @see    ElasticLoadBalancingClient::describeLoadBalancerPolicyTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBalancerPolicyTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeLoadBalancerPolicyTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerPolicyTypesRequest(request));
    setReply(reply);
}

const DescribeLoadBalancerPolicyTypesRequest * DescribeLoadBalancerPolicyTypesResponse::request() const
{
    Q_D(const DescribeLoadBalancerPolicyTypesResponse);
    return static_cast<const DescribeLoadBalancerPolicyTypesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DescribeLoadBalancerPolicyTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoadBalancerPolicyTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerPolicyTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerPolicyTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerPolicyTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoadBalancerPolicyTypesResponse instance.
 */
DescribeLoadBalancerPolicyTypesResponsePrivate::DescribeLoadBalancerPolicyTypesResponsePrivate(
    DescribeLoadBalancerPolicyTypesQueueResponse * const q) : DescribeLoadBalancerPolicyTypesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DescribeLoadBalancerPolicyTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoadBalancerPolicyTypesResponsePrivate::DescribeLoadBalancerPolicyTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerPolicyTypesResponse"));
    /// @todo
}
