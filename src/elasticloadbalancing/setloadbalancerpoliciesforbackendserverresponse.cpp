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

#include "setloadbalancerpoliciesforbackendserverresponse.h"
#include "setloadbalancerpoliciesforbackendserverresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  SetLoadBalancerPoliciesForBackendServerResponse
 *
 * @brief  Handles ElasticLoadBalancing SetLoadBalancerPoliciesForBackendServer responses.
 *
 * @see    ElasticLoadBalancingClient::setLoadBalancerPoliciesForBackendServer
 */

/**
 * @brief  Constructs a new SetLoadBalancerPoliciesForBackendServerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetLoadBalancerPoliciesForBackendServerResponse::SetLoadBalancerPoliciesForBackendServerResponse(
        const SetLoadBalancerPoliciesForBackendServerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new SetLoadBalancerPoliciesForBackendServerResponsePrivate(this), parent)
{
    setRequest(new SetLoadBalancerPoliciesForBackendServerRequest(request));
    setReply(reply);
}

const SetLoadBalancerPoliciesForBackendServerRequest * SetLoadBalancerPoliciesForBackendServerResponse::request() const
{
    Q_D(const SetLoadBalancerPoliciesForBackendServerResponse);
    return static_cast<const SetLoadBalancerPoliciesForBackendServerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing SetLoadBalancerPoliciesForBackendServer response.
 *
 * @param  response  Response to parse.
 */
void SetLoadBalancerPoliciesForBackendServerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetLoadBalancerPoliciesForBackendServerResponsePrivate
 *
 * @brief  Private implementation for SetLoadBalancerPoliciesForBackendServerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBalancerPoliciesForBackendServerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetLoadBalancerPoliciesForBackendServerResponse instance.
 */
SetLoadBalancerPoliciesForBackendServerResponsePrivate::SetLoadBalancerPoliciesForBackendServerResponsePrivate(
    SetLoadBalancerPoliciesForBackendServerQueueResponse * const q) : SetLoadBalancerPoliciesForBackendServerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing SetLoadBalancerPoliciesForBackendServerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetLoadBalancerPoliciesForBackendServerResponsePrivate::SetLoadBalancerPoliciesForBackendServerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLoadBalancerPoliciesForBackendServerResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
