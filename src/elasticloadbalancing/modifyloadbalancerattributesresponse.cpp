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

#include "modifyloadbalancerattributesresponse.h"
#include "modifyloadbalancerattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  ModifyLoadBalancerAttributesResponse
 *
 * @brief  Handles ElasticLoadBalancing ModifyLoadBalancerAttributes responses.
 *
 * @see    ElasticLoadBalancingClient::modifyLoadBalancerAttributes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyLoadBalancerAttributesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new ModifyLoadBalancerAttributesResponsePrivate(this), parent)
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
 * @brief  Parse a ElasticLoadBalancing ModifyLoadBalancerAttributes response.
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
 * @brief  Parse an ElasticLoadBalancing ModifyLoadBalancerAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyLoadBalancerAttributesResponsePrivate::ModifyLoadBalancerAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyLoadBalancerAttributesResponse"));
    /// @todo
}
