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

#include "describespotinstancerequestsresponse.h"
#include "describespotinstancerequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeSpotInstanceRequestsResponse
 *
 * @brief  Handles EC2 DescribeSpotInstanceRequests responses.
 *
 * @see    EC2Client::describeSpotInstanceRequests
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSpotInstanceRequestsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeSpotInstanceRequestsResponsePrivate(this), parent)
{
    setRequest(new DescribeSpotInstanceRequestsRequest(request));
    setReply(reply);
}

const DescribeSpotInstanceRequestsRequest * DescribeSpotInstanceRequestsResponse::request() const
{
    Q_D(const DescribeSpotInstanceRequestsResponse);
    return static_cast<const DescribeSpotInstanceRequestsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeSpotInstanceRequests response.
 *
 * @param  response  Response to parse.
 */
void DescribeSpotInstanceRequestsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSpotInstanceRequestsResponsePrivate
 *
 * @brief  Private implementation for DescribeSpotInstanceRequestsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSpotInstanceRequestsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSpotInstanceRequestsResponse instance.
 */
DescribeSpotInstanceRequestsResponsePrivate::DescribeSpotInstanceRequestsResponsePrivate(
    DescribeSpotInstanceRequestsQueueResponse * const q) : DescribeSpotInstanceRequestsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeSpotInstanceRequestsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSpotInstanceRequestsResponsePrivate::DescribeSpotInstanceRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpotInstanceRequestsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
