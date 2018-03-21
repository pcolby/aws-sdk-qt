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

#include "attachloadbalancertosubnetsresponse.h"
#include "attachloadbalancertosubnetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  AttachLoadBalancerToSubnetsResponse
 *
 * @brief  Handles ElasticLoadBalancing AttachLoadBalancerToSubnets responses.
 *
 * @see    ElasticLoadBalancingClient::attachLoadBalancerToSubnets
 */

/**
 * @brief  Constructs a new AttachLoadBalancerToSubnetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachLoadBalancerToSubnetsResponse::AttachLoadBalancerToSubnetsResponse(
        const AttachLoadBalancerToSubnetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new AttachLoadBalancerToSubnetsResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancerToSubnetsRequest(request));
    setReply(reply);
}

const AttachLoadBalancerToSubnetsRequest * AttachLoadBalancerToSubnetsResponse::request() const
{
    Q_D(const AttachLoadBalancerToSubnetsResponse);
    return static_cast<const AttachLoadBalancerToSubnetsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing AttachLoadBalancerToSubnets response.
 *
 * @param  response  Response to parse.
 */
void AttachLoadBalancerToSubnetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachLoadBalancerToSubnetsResponsePrivate
 *
 * @brief  Private implementation for AttachLoadBalancerToSubnetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancerToSubnetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachLoadBalancerToSubnetsResponse instance.
 */
AttachLoadBalancerToSubnetsResponsePrivate::AttachLoadBalancerToSubnetsResponsePrivate(
    AttachLoadBalancerToSubnetsQueueResponse * const q) : AttachLoadBalancerToSubnetsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing AttachLoadBalancerToSubnetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachLoadBalancerToSubnetsResponsePrivate::AttachLoadBalancerToSubnetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancerToSubnetsResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
