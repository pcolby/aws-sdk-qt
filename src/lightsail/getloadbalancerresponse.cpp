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

#include "getloadbalancerresponse.h"
#include "getloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetLoadBalancerResponse
 *
 * @brief  Handles Lightsail GetLoadBalancer responses.
 *
 * @see    LightsailClient::getLoadBalancer
 */

/**
 * @brief  Constructs a new GetLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancerResponse::GetLoadBalancerResponse(
        const GetLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new GetLoadBalancerRequest(request));
    setReply(reply);
}

const GetLoadBalancerRequest * GetLoadBalancerResponse::request() const
{
    Q_D(const GetLoadBalancerResponse);
    return static_cast<const GetLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void GetLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for GetLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoadBalancerResponse instance.
 */
GetLoadBalancerResponsePrivate::GetLoadBalancerResponsePrivate(
    GetLoadBalancerQueueResponse * const q) : GetLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoadBalancerResponsePrivate::GetLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancerResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
