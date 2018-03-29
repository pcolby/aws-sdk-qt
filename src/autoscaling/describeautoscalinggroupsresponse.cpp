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

#include "describeautoscalinggroupsresponse.h"
#include "describeautoscalinggroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  DescribeAutoScalingGroupsResponse
 *
 * @brief  Handles AutoScaling DescribeAutoScalingGroups responses.
 *
 * @see    AutoScalingClient::describeAutoScalingGroups
 */

/**
 * @brief  Constructs a new DescribeAutoScalingGroupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAutoScalingGroupsResponse::DescribeAutoScalingGroupsResponse(
        const DescribeAutoScalingGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeAutoScalingGroupsResponse(new DescribeAutoScalingGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingGroupsRequest(request));
    setReply(reply);
}

const DescribeAutoScalingGroupsRequest * DescribeAutoScalingGroupsResponse::request() const
{
    Q_D(const DescribeAutoScalingGroupsResponse);
    return static_cast<const DescribeAutoScalingGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeAutoScalingGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeAutoScalingGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAutoScalingGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAutoScalingGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeAutoScalingGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAutoScalingGroupsResponse instance.
 */
DescribeAutoScalingGroupsResponsePrivate::DescribeAutoScalingGroupsResponsePrivate(
    DescribeAutoScalingGroupsResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeAutoScalingGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAutoScalingGroupsResponsePrivate::parseDescribeAutoScalingGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingGroupsResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
