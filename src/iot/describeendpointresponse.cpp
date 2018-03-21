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

#include "describeendpointresponse.h"
#include "describeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  DescribeEndpointResponse
 *
 * @brief  Handles IoT DescribeEndpoint responses.
 *
 * @see    IoTClient::describeEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new DescribeEndpointResponsePrivate(this), parent)
{
    setRequest(new DescribeEndpointRequest(request));
    setReply(reply);
}

const DescribeEndpointRequest * DescribeEndpointResponse::request() const
{
    Q_D(const DescribeEndpointResponse);
    return static_cast<const DescribeEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a IoT DescribeEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DescribeEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEndpointResponsePrivate
 *
 * @brief  Private implementation for DescribeEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEndpointResponse instance.
 */
DescribeEndpointResponsePrivate::DescribeEndpointResponsePrivate(
    DescribeEndpointQueueResponse * const q) : DescribeEndpointPrivate(q)
{

}

/**
 * @brief  Parse an IoT DescribeEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEndpointResponsePrivate::DescribeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEndpointResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
