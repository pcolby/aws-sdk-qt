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

#include "describedeliverychannelstatusresponse.h"
#include "describedeliverychannelstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ConfigService {

/**
 * @class  DescribeDeliveryChannelStatusResponse
 *
 * @brief  Handles ConfigService DescribeDeliveryChannelStatus responses.
 *
 * @see    ConfigServiceClient::describeDeliveryChannelStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDeliveryChannelStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeDeliveryChannelStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeDeliveryChannelStatusRequest(request));
    setReply(reply);
}

const DescribeDeliveryChannelStatusRequest * DescribeDeliveryChannelStatusResponse::request() const
{
    Q_D(const DescribeDeliveryChannelStatusResponse);
    return static_cast<const DescribeDeliveryChannelStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeDeliveryChannelStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeDeliveryChannelStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDeliveryChannelStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeDeliveryChannelStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDeliveryChannelStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDeliveryChannelStatusResponse instance.
 */
DescribeDeliveryChannelStatusResponsePrivate::DescribeDeliveryChannelStatusResponsePrivate(
    DescribeDeliveryChannelStatusQueueResponse * const q) : DescribeDeliveryChannelStatusPrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeDeliveryChannelStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDeliveryChannelStatusResponsePrivate::DescribeDeliveryChannelStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDeliveryChannelStatusResponse"));
    /// @todo
}
