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

#include "updateloadbalancerattributeresponse.h"
#include "updateloadbalancerattributeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  UpdateLoadBalancerAttributeResponse
 *
 * @brief  Handles Lightsail UpdateLoadBalancerAttribute responses.
 *
 * @see    LightsailClient::updateLoadBalancerAttribute
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateLoadBalancerAttributeResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new UpdateLoadBalancerAttributeResponsePrivate(this), parent)
{
    setRequest(new UpdateLoadBalancerAttributeRequest(request));
    setReply(reply);
}

const UpdateLoadBalancerAttributeRequest * UpdateLoadBalancerAttributeResponse::request() const
{
    Q_D(const UpdateLoadBalancerAttributeResponse);
    return static_cast<const UpdateLoadBalancerAttributeRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail UpdateLoadBalancerAttribute response.
 *
 * @param  response  Response to parse.
 */
void UpdateLoadBalancerAttributeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateLoadBalancerAttributeResponsePrivate
 *
 * @brief  Private implementation for UpdateLoadBalancerAttributeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateLoadBalancerAttributeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateLoadBalancerAttributeResponse instance.
 */
UpdateLoadBalancerAttributeResponsePrivate::UpdateLoadBalancerAttributeResponsePrivate(
    UpdateLoadBalancerAttributeQueueResponse * const q) : UpdateLoadBalancerAttributePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail UpdateLoadBalancerAttributeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateLoadBalancerAttributeResponsePrivate::UpdateLoadBalancerAttributeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLoadBalancerAttributeResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
