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

#include "describeloadbasedautoscalingresponse.h"
#include "describeloadbasedautoscalingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeLoadBasedAutoScalingResponse
 *
 * @brief  Handles OpsWorks DescribeLoadBasedAutoScaling responses.
 *
 * @see    OpsWorksClient::describeLoadBasedAutoScaling
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLoadBasedAutoScalingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeLoadBasedAutoScalingResponsePrivate(this), parent)
{
    setRequest(new DescribeLoadBasedAutoScalingRequest(request));
    setReply(reply);
}

const DescribeLoadBasedAutoScalingRequest * DescribeLoadBasedAutoScalingResponse::request() const
{
    Q_D(const DescribeLoadBasedAutoScalingResponse);
    return static_cast<const DescribeLoadBasedAutoScalingRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeLoadBasedAutoScaling response.
 *
 * @param  response  Response to parse.
 */
void DescribeLoadBasedAutoScalingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLoadBasedAutoScalingResponsePrivate
 *
 * @brief  Private implementation for DescribeLoadBasedAutoScalingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLoadBasedAutoScalingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLoadBasedAutoScalingResponse instance.
 */
DescribeLoadBasedAutoScalingResponsePrivate::DescribeLoadBasedAutoScalingResponsePrivate(
    DescribeLoadBasedAutoScalingQueueResponse * const q) : DescribeLoadBasedAutoScalingPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeLoadBasedAutoScalingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLoadBasedAutoScalingResponsePrivate::DescribeLoadBasedAutoScalingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLoadBasedAutoScalingResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
