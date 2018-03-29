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

#include "describeautoscalinginstancesresponse.h"
#include "describeautoscalinginstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeAutoScalingInstancesResponse
 *
 * @brief  Handles AutoScaling DescribeAutoScalingInstances responses.
 *
 * @see    AutoScalingClient::describeAutoScalingInstances
 */

/**
 * @brief  Constructs a new DescribeAutoScalingInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAutoScalingInstancesResponse::DescribeAutoScalingInstancesResponse(
        const DescribeAutoScalingInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingInstancesRequest(request));
    setReply(reply);
}

const DescribeAutoScalingInstancesRequest * DescribeAutoScalingInstancesResponse::request() const
{
    Q_D(const DescribeAutoScalingInstancesResponse);
    return static_cast<const DescribeAutoScalingInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeAutoScalingInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeAutoScalingInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAutoScalingInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeAutoScalingInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAutoScalingInstancesResponse instance.
 */
DescribeAutoScalingInstancesResponsePrivate::DescribeAutoScalingInstancesResponsePrivate(
    DescribeAutoScalingInstancesQueueResponse * const q) : DescribeAutoScalingInstancesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeAutoScalingInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAutoScalingInstancesResponsePrivate::DescribeAutoScalingInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingInstancesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
