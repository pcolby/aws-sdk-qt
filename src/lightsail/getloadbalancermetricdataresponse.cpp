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

#include "getloadbalancermetricdataresponse.h"
#include "getloadbalancermetricdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetLoadBalancerMetricDataResponse
 *
 * @brief  Handles Lightsail GetLoadBalancerMetricData responses.
 *
 * @see    LightsailClient::getLoadBalancerMetricData
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancerMetricDataResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetLoadBalancerMetricDataResponsePrivate(this), parent)
{
    setRequest(new GetLoadBalancerMetricDataRequest(request));
    setReply(reply);
}

const GetLoadBalancerMetricDataRequest * GetLoadBalancerMetricDataResponse::request() const
{
    Q_D(const GetLoadBalancerMetricDataResponse);
    return static_cast<const GetLoadBalancerMetricDataRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetLoadBalancerMetricData response.
 *
 * @param  response  Response to parse.
 */
void GetLoadBalancerMetricDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoadBalancerMetricDataResponsePrivate
 *
 * @brief  Private implementation for GetLoadBalancerMetricDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerMetricDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoadBalancerMetricDataResponse instance.
 */
GetLoadBalancerMetricDataResponsePrivate::GetLoadBalancerMetricDataResponsePrivate(
    GetLoadBalancerMetricDataQueueResponse * const q) : GetLoadBalancerMetricDataPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetLoadBalancerMetricDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoadBalancerMetricDataResponsePrivate::GetLoadBalancerMetricDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancerMetricDataResponse"));
    /// @todo
}
