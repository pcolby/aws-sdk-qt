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

/*!
 * \class QtAws::AutoScaling::DescribeAutoScalingGroupsResponse
 *
 * \brief The DescribeAutoScalingGroupsResponse class provides an interace for AutoScaling DescribeAutoScalingGroups responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeAutoScalingGroups
 */

/*!
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
    : AutoScalingResponse(new DescribeAutoScalingGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingGroupsRequest(request));
    setReply(reply);
}

const DescribeAutoScalingGroupsRequest * DescribeAutoScalingGroupsResponse::request() const
{
    Q_D(const DescribeAutoScalingGroupsResponse);
    return static_cast<const DescribeAutoScalingGroupsRequest *>(d->request);
}

/*!
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

/*!
 * \internal
 *
 * \class DescribeAutoScalingGroupsResponsePrivate
 *
 * \brief Private implementation for DescribeAutoScalingGroupsResponse.
 */

/*!
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

/*!
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
