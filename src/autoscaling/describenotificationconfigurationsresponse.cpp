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

#include "describenotificationconfigurationsresponse.h"
#include "describenotificationconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeNotificationConfigurationsResponse
 *
 * @brief  Handles AutoScaling DescribeNotificationConfigurations responses.
 *
 * @see    AutoScalingClient::describeNotificationConfigurations
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNotificationConfigurationsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeNotificationConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeNotificationConfigurationsRequest(request));
    setReply(reply);
}

const DescribeNotificationConfigurationsRequest * DescribeNotificationConfigurationsResponse::request() const
{
    Q_D(const DescribeNotificationConfigurationsResponse);
    return static_cast<const DescribeNotificationConfigurationsRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DescribeNotificationConfigurations response.
 *
 * @param  response  Response to parse.
 */
void DescribeNotificationConfigurationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNotificationConfigurationsResponsePrivate
 *
 * @brief  Private implementation for DescribeNotificationConfigurationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNotificationConfigurationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNotificationConfigurationsResponse instance.
 */
DescribeNotificationConfigurationsResponsePrivate::DescribeNotificationConfigurationsResponsePrivate(
    DescribeNotificationConfigurationsQueueResponse * const q) : DescribeNotificationConfigurationsPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeNotificationConfigurationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNotificationConfigurationsResponsePrivate::DescribeNotificationConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNotificationConfigurationsResponse"));
    /// @todo
}
