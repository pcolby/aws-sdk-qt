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

#include "createloadbalancerpolicyresponse.h"
#include "createloadbalancerpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancing {

/**
 * @class  CreateLoadBalancerPolicyResponse
 *
 * @brief  Handles ElasticLoadBalancing CreateLoadBalancerPolicy responses.
 *
 * @see    ElasticLoadBalancingClient::createLoadBalancerPolicy
 */

/**
 * @brief  Constructs a new CreateLoadBalancerPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLoadBalancerPolicyResponse::CreateLoadBalancerPolicyResponse(
        const CreateLoadBalancerPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new CreateLoadBalancerPolicyResponsePrivate(this), parent)
{
    setRequest(new CreateLoadBalancerPolicyRequest(request));
    setReply(reply);
}

const CreateLoadBalancerPolicyRequest * CreateLoadBalancerPolicyResponse::request() const
{
    Q_D(const CreateLoadBalancerPolicyResponse);
    return static_cast<const CreateLoadBalancerPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing CreateLoadBalancerPolicy response.
 *
 * @param  response  Response to parse.
 */
void CreateLoadBalancerPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerPolicyResponsePrivate
 *
 * @brief  Private implementation for CreateLoadBalancerPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLoadBalancerPolicyResponse instance.
 */
CreateLoadBalancerPolicyResponsePrivate::CreateLoadBalancerPolicyResponsePrivate(
    CreateLoadBalancerPolicyQueueResponse * const q) : CreateLoadBalancerPolicyPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing CreateLoadBalancerPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLoadBalancerPolicyResponsePrivate::CreateLoadBalancerPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoadBalancerPolicyResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace AWS
