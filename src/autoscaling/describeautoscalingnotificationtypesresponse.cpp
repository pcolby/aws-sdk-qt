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

#include "describeautoscalingnotificationtypesresponse.h"
#include "describeautoscalingnotificationtypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeAutoScalingNotificationTypesResponse
 *
 * @brief  Handles AutoScaling DescribeAutoScalingNotificationTypes responses.
 *
 * @see    AutoScalingClient::describeAutoScalingNotificationTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAutoScalingNotificationTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAutoScalingNotificationTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAutoScalingNotificationTypesRequest(request));
    setReply(reply);
}

const DescribeAutoScalingNotificationTypesRequest * DescribeAutoScalingNotificationTypesResponse::request() const
{
    Q_D(const DescribeAutoScalingNotificationTypesResponse);
    return static_cast<const DescribeAutoScalingNotificationTypesRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeAutoScalingNotificationTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeAutoScalingNotificationTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAutoScalingNotificationTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeAutoScalingNotificationTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAutoScalingNotificationTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAutoScalingNotificationTypesResponse instance.
 */
DescribeAutoScalingNotificationTypesResponsePrivate::DescribeAutoScalingNotificationTypesResponsePrivate(
    DescribeAutoScalingNotificationTypesQueueResponse * const q) : DescribeAutoScalingNotificationTypesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeAutoScalingNotificationTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAutoScalingNotificationTypesResponsePrivate::DescribeAutoScalingNotificationTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAutoScalingNotificationTypesResponse"));
    /// @todo
}
