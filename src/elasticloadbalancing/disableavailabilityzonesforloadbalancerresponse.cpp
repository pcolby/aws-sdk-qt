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

#include "disableavailabilityzonesforloadbalancerresponse.h"
#include "disableavailabilityzonesforloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DisableAvailabilityZonesForLoadBalancerResponse
 *
 * @brief  Handles ElasticLoadBalancing DisableAvailabilityZonesForLoadBalancer responses.
 *
 * @see    ElasticLoadBalancingClient::disableAvailabilityZonesForLoadBalancer
 */

/**
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableAvailabilityZonesForLoadBalancerResponse::DisableAvailabilityZonesForLoadBalancerResponse(
        const DisableAvailabilityZonesForLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DisableAvailabilityZonesForLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new DisableAvailabilityZonesForLoadBalancerRequest(request));
    setReply(reply);
}

const DisableAvailabilityZonesForLoadBalancerRequest * DisableAvailabilityZonesForLoadBalancerResponse::request() const
{
    Q_D(const DisableAvailabilityZonesForLoadBalancerResponse);
    return static_cast<const DisableAvailabilityZonesForLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DisableAvailabilityZonesForLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void DisableAvailabilityZonesForLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableAvailabilityZonesForLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for DisableAvailabilityZonesForLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableAvailabilityZonesForLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableAvailabilityZonesForLoadBalancerResponse instance.
 */
DisableAvailabilityZonesForLoadBalancerResponsePrivate::DisableAvailabilityZonesForLoadBalancerResponsePrivate(
    DisableAvailabilityZonesForLoadBalancerResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DisableAvailabilityZonesForLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableAvailabilityZonesForLoadBalancerResponsePrivate::DisableAvailabilityZonesForLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableAvailabilityZonesForLoadBalancerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
