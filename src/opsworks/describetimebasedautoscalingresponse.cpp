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

#include "describetimebasedautoscalingresponse.h"
#include "describetimebasedautoscalingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeTimeBasedAutoScalingResponse
 *
 * @brief  Handles OpsWorks DescribeTimeBasedAutoScaling responses.
 *
 * @see    OpsWorksClient::describeTimeBasedAutoScaling
 */

/**
 * @brief  Constructs a new DescribeTimeBasedAutoScalingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTimeBasedAutoScalingResponse::DescribeTimeBasedAutoScalingResponse(
        const DescribeTimeBasedAutoScalingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeTimeBasedAutoScalingResponsePrivate(this), parent)
{
    setRequest(new DescribeTimeBasedAutoScalingRequest(request));
    setReply(reply);
}

const DescribeTimeBasedAutoScalingRequest * DescribeTimeBasedAutoScalingResponse::request() const
{
    Q_D(const DescribeTimeBasedAutoScalingResponse);
    return static_cast<const DescribeTimeBasedAutoScalingRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeTimeBasedAutoScaling response.
 *
 * @param  response  Response to parse.
 */
void DescribeTimeBasedAutoScalingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTimeBasedAutoScalingResponsePrivate
 *
 * @brief  Private implementation for DescribeTimeBasedAutoScalingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTimeBasedAutoScalingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTimeBasedAutoScalingResponse instance.
 */
DescribeTimeBasedAutoScalingResponsePrivate::DescribeTimeBasedAutoScalingResponsePrivate(
    DescribeTimeBasedAutoScalingQueueResponse * const q) : DescribeTimeBasedAutoScalingPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeTimeBasedAutoScalingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTimeBasedAutoScalingResponsePrivate::DescribeTimeBasedAutoScalingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTimeBasedAutoScalingResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
