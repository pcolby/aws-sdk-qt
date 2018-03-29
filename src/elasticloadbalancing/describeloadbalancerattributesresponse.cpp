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

#include "describeloadbalancerattributesresponse.h"
#include "describeloadbalancerattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeLoadBalancerAttributesResponse
 *
 * @brief  Handles ElasticLoadBalancing DescribeLoadBalancerAttributes responses.
 *
 * @see    ElasticLoadBalancingClient::describeLoadBalancerAttributes
 */

/**
 * @brief  Constructs a new DescribeLoadBalancerAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBalancerAttributesResponse::DescribeLoadBalancerAttributesResponse(
        const DescribeLoadBalancerAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeLoadBalancerAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBalancerAttributesRequest(request));
    setReply(reply);
}

const DescribeLoadBalancerAttributesRequest * DescribeLoadBalancerAttributesResponse::request() const
{
    Q_D(const DescribeLoadBalancerAttributesResponse);
    return static_cast<const DescribeLoadBalancerAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DescribeLoadBalancerAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoadBalancerAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoadBalancerAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeLoadBalancerAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBalancerAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoadBalancerAttributesResponse instance.
 */
DescribeLoadBalancerAttributesResponsePrivate::DescribeLoadBalancerAttributesResponsePrivate(
    DescribeLoadBalancerAttributesQueueResponse * const q) : DescribeLoadBalancerAttributesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DescribeLoadBalancerAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoadBalancerAttributesResponsePrivate::DescribeLoadBalancerAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBalancerAttributesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
