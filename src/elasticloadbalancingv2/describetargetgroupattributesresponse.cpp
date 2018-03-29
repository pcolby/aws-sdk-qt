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

#include "describetargetgroupattributesresponse.h"
#include "describetargetgroupattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTargetGroupAttributesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeTargetGroupAttributes responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeTargetGroupAttributes
 */

/**
 * @brief  Constructs a new DescribeTargetGroupAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTargetGroupAttributesResponse::DescribeTargetGroupAttributesResponse(
        const DescribeTargetGroupAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeTargetGroupAttributesResponsePrivate(this), parent)
{
    setRequest(new DescribeTargetGroupAttributesRequest(request));
    setReply(reply);
}

const DescribeTargetGroupAttributesRequest * DescribeTargetGroupAttributesResponse::request() const
{
    Q_D(const DescribeTargetGroupAttributesResponse);
    return static_cast<const DescribeTargetGroupAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeTargetGroupAttributes response.
 *
 * @param  response  Response to parse.
 */
void DescribeTargetGroupAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTargetGroupAttributesResponsePrivate
 *
 * @brief  Private implementation for DescribeTargetGroupAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetGroupAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTargetGroupAttributesResponse instance.
 */
DescribeTargetGroupAttributesResponsePrivate::DescribeTargetGroupAttributesResponsePrivate(
    DescribeTargetGroupAttributesResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeTargetGroupAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTargetGroupAttributesResponsePrivate::DescribeTargetGroupAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTargetGroupAttributesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
