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

#include "describetargethealthresponse.h"
#include "describetargethealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DescribeTargetHealthResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DescribeTargetHealth responses.
 *
 * @see    ElasticLoadBalancingv2Client::describeTargetHealth
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTargetHealthResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DescribeTargetHealthResponsePrivate(this), parent)
{
    setRequest(new DescribeTargetHealthRequest(request));
    setReply(reply);
}

const DescribeTargetHealthRequest * DescribeTargetHealthResponse::request() const
{
    Q_D(const DescribeTargetHealthResponse);
    return static_cast<const DescribeTargetHealthRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DescribeTargetHealth response.
 *
 * @param  response  Response to parse.
 */
void DescribeTargetHealthResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTargetHealthResponsePrivate
 *
 * @brief  Private implementation for DescribeTargetHealthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTargetHealthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTargetHealthResponse instance.
 */
DescribeTargetHealthResponsePrivate::DescribeTargetHealthResponsePrivate(
    DescribeTargetHealthQueueResponse * const q) : DescribeTargetHealthPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DescribeTargetHealthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTargetHealthResponsePrivate::DescribeTargetHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTargetHealthResponse"));
    /// @todo
}
