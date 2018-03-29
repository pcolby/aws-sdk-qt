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

#include "describetargetgroupsresponse.h"
#include "describetargetgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTargetGroupsResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeTargetGroups responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeTargetGroups
 */

/**
 * @brief  Constructs a new DescribeTargetGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTargetGroupsResponse::DescribeTargetGroupsResponse(
        const DescribeTargetGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeTargetGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeTargetGroupsRequest(request));
    setReply(reply);
}

const DescribeTargetGroupsRequest * DescribeTargetGroupsResponse::request() const
{
    Q_D(const DescribeTargetGroupsResponse);
    return static_cast<const DescribeTargetGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeTargetGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeTargetGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTargetGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeTargetGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTargetGroupsResponse instance.
 */
DescribeTargetGroupsResponsePrivate::DescribeTargetGroupsResponsePrivate(
    DescribeTargetGroupsQueueResponse * const q) : DescribeTargetGroupsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeTargetGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTargetGroupsResponsePrivate::DescribeTargetGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTargetGroupsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
