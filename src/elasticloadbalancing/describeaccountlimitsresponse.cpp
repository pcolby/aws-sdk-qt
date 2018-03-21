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

#include "describeaccountlimitsresponse.h"
#include "describeaccountlimitsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  DescribeAccountLimitsResponse
 *
 * @brief  Handles ElasticLoadBalancing DescribeAccountLimits responses.
 *
 * @see    ElasticLoadBalancingClient::describeAccountLimits
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAccountLimitsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DescribeAccountLimitsResponsePrivate(this), parent)
{
    setRequest(new DescribeAccountLimitsRequest(request));
    setReply(reply);
}

const DescribeAccountLimitsRequest * DescribeAccountLimitsResponse::request() const
{
    Q_D(const DescribeAccountLimitsResponse);
    return static_cast<const DescribeAccountLimitsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DescribeAccountLimits response.
 *
 * @param  response  Response to parse.
 */
void DescribeAccountLimitsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAccountLimitsResponsePrivate
 *
 * @brief  Private implementation for DescribeAccountLimitsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAccountLimitsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAccountLimitsResponse instance.
 */
DescribeAccountLimitsResponsePrivate::DescribeAccountLimitsResponsePrivate(
    DescribeAccountLimitsQueueResponse * const q) : DescribeAccountLimitsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DescribeAccountLimitsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAccountLimitsResponsePrivate::DescribeAccountLimitsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAccountLimitsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
