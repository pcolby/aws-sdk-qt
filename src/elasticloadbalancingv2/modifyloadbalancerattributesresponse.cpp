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

#include "modifyloadbalancerattributesresponse.h"
#include "modifyloadbalancerattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyLoadBalancerAttributesResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 ModifyLoadBalancerAttributes responses.
 *
 * @see    ElasticLoadBalancingv2Client::modifyLoadBalancerAttributes
 */

/**
 * @brief  Constructs a new ModifyLoadBalancerAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyLoadBalancerAttributesResponse::ModifyLoadBalancerAttributesResponse(
        const ModifyLoadBalancerAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyLoadBalancerAttributesResponsePrivate(this), parent)
{
    setRequest(new ModifyLoadBalancerAttributesRequest(request));
    setReply(reply);
}

const ModifyLoadBalancerAttributesRequest * ModifyLoadBalancerAttributesResponse::request() const
{
    Q_D(const ModifyLoadBalancerAttributesResponse);
    return static_cast<const ModifyLoadBalancerAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 ModifyLoadBalancerAttributes response.
 *
 * @param  response  Response to parse.
 */
void ModifyLoadBalancerAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyLoadBalancerAttributesResponsePrivate
 *
 * @brief  Private implementation for ModifyLoadBalancerAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyLoadBalancerAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyLoadBalancerAttributesResponse instance.
 */
ModifyLoadBalancerAttributesResponsePrivate::ModifyLoadBalancerAttributesResponsePrivate(
    ModifyLoadBalancerAttributesQueueResponse * const q) : ModifyLoadBalancerAttributesPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 ModifyLoadBalancerAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyLoadBalancerAttributesResponsePrivate::ModifyLoadBalancerAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLoadBalancerAttributesResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
