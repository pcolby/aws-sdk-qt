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

#include "createloadbalancerresponse.h"
#include "createloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  CreateLoadBalancerResponse
 *
 * @brief  Handles Lightsail CreateLoadBalancer responses.
 *
 * @see    LightsailClient::createLoadBalancer
 */

/**
 * @brief  Constructs a new CreateLoadBalancerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLoadBalancerResponse::CreateLoadBalancerResponse(
        const CreateLoadBalancerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new CreateLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new CreateLoadBalancerRequest(request));
    setReply(reply);
}

const CreateLoadBalancerRequest * CreateLoadBalancerResponse::request() const
{
    Q_D(const CreateLoadBalancerResponse);
    return static_cast<const CreateLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail CreateLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void CreateLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for CreateLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLoadBalancerResponse instance.
 */
CreateLoadBalancerResponsePrivate::CreateLoadBalancerResponsePrivate(
    CreateLoadBalancerQueueResponse * const q) : CreateLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail CreateLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLoadBalancerResponsePrivate::CreateLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoadBalancerResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
