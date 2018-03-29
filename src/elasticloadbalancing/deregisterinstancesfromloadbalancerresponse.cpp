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

#include "deregisterinstancesfromloadbalancerresponse.h"
#include "deregisterinstancesfromloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DeregisterInstancesFromLoadBalancerResponse
 *
 * @brief  Handles ElasticLoadBalancing DeregisterInstancesFromLoadBalancer responses.
 *
 * @see    ElasticLoadBalancingClient::deregisterInstancesFromLoadBalancer
 */

/**
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterInstancesFromLoadBalancerResponse::DeregisterInstancesFromLoadBalancerResponse(
        const DeregisterInstancesFromLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DeregisterInstancesFromLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new DeregisterInstancesFromLoadBalancerRequest(request));
    setReply(reply);
}

const DeregisterInstancesFromLoadBalancerRequest * DeregisterInstancesFromLoadBalancerResponse::request() const
{
    Q_D(const DeregisterInstancesFromLoadBalancerResponse);
    return static_cast<const DeregisterInstancesFromLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DeregisterInstancesFromLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void DeregisterInstancesFromLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterInstancesFromLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for DeregisterInstancesFromLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterInstancesFromLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterInstancesFromLoadBalancerResponse instance.
 */
DeregisterInstancesFromLoadBalancerResponsePrivate::DeregisterInstancesFromLoadBalancerResponsePrivate(
    DeregisterInstancesFromLoadBalancerQueueResponse * const q) : DeregisterInstancesFromLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DeregisterInstancesFromLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterInstancesFromLoadBalancerResponsePrivate::DeregisterInstancesFromLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterInstancesFromLoadBalancerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
