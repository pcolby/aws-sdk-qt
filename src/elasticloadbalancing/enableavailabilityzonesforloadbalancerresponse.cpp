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

#include "enableavailabilityzonesforloadbalancerresponse.h"
#include "enableavailabilityzonesforloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  EnableAvailabilityZonesForLoadBalancerResponse
 *
 * @brief  Handles ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer responses.
 *
 * @see    ElasticLoadBalancingClient::enableAvailabilityZonesForLoadBalancer
 */

/**
 * @brief  Constructs a new EnableAvailabilityZonesForLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableAvailabilityZonesForLoadBalancerResponse::EnableAvailabilityZonesForLoadBalancerResponse(
        const EnableAvailabilityZonesForLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new EnableAvailabilityZonesForLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new EnableAvailabilityZonesForLoadBalancerRequest(request));
    setReply(reply);
}

const EnableAvailabilityZonesForLoadBalancerRequest * EnableAvailabilityZonesForLoadBalancerResponse::request() const
{
    Q_D(const EnableAvailabilityZonesForLoadBalancerResponse);
    return static_cast<const EnableAvailabilityZonesForLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void EnableAvailabilityZonesForLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableAvailabilityZonesForLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for EnableAvailabilityZonesForLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableAvailabilityZonesForLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableAvailabilityZonesForLoadBalancerResponse instance.
 */
EnableAvailabilityZonesForLoadBalancerResponsePrivate::EnableAvailabilityZonesForLoadBalancerResponsePrivate(
    EnableAvailabilityZonesForLoadBalancerQueueResponse * const q) : EnableAvailabilityZonesForLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing EnableAvailabilityZonesForLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableAvailabilityZonesForLoadBalancerResponsePrivate::EnableAvailabilityZonesForLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableAvailabilityZonesForLoadBalancerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
