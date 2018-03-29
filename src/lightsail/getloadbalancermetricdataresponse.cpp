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

#include "getloadbalancermetricdataresponse.h"
#include "getloadbalancermetricdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetLoadBalancerMetricDataResponse
 *
 * @brief  Handles Lightsail GetLoadBalancerMetricData responses.
 *
 * @see    LightsailClient::getLoadBalancerMetricData
 */

/**
 * @brief  Constructs a new GetLoadBalancerMetricDataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancerMetricDataResponse::GetLoadBalancerMetricDataResponse(
        const GetLoadBalancerMetricDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetLoadBalancerMetricDataResponse(new GetLoadBalancerMetricDataResponsePrivate(this), parent)
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
    Q_D(GetLoadBalancerMetricDataResponse);
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
    GetLoadBalancerMetricDataResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetLoadBalancerMetricDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoadBalancerMetricDataResponsePrivate::parseGetLoadBalancerMetricDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancerMetricDataResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
