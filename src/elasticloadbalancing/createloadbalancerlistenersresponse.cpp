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

#include "createloadbalancerlistenersresponse.h"
#include "createloadbalancerlistenersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  CreateLoadBalancerListenersResponse
 *
 * @brief  Handles ElasticLoadBalancing CreateLoadBalancerListeners responses.
 *
 * @see    ElasticLoadBalancingClient::createLoadBalancerListeners
 */

/**
 * @brief  Constructs a new CreateLoadBalancerListenersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLoadBalancerListenersResponse::CreateLoadBalancerListenersResponse(
        const CreateLoadBalancerListenersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateLoadBalancerListenersResponse(new CreateLoadBalancerListenersResponsePrivate(this), parent)
{
    setRequest(new CreateLoadBalancerListenersRequest(request));
    setReply(reply);
}

const CreateLoadBalancerListenersRequest * CreateLoadBalancerListenersResponse::request() const
{
    Q_D(const CreateLoadBalancerListenersResponse);
    return static_cast<const CreateLoadBalancerListenersRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing CreateLoadBalancerListeners response.
 *
 * @param  response  Response to parse.
 */
void CreateLoadBalancerListenersResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateLoadBalancerListenersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLoadBalancerListenersResponsePrivate
 *
 * @brief  Private implementation for CreateLoadBalancerListenersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoadBalancerListenersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLoadBalancerListenersResponse instance.
 */
CreateLoadBalancerListenersResponsePrivate::CreateLoadBalancerListenersResponsePrivate(
    CreateLoadBalancerListenersResponse * const q) : ElasticLoadBalancingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing CreateLoadBalancerListenersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLoadBalancerListenersResponsePrivate::parseCreateLoadBalancerListenersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoadBalancerListenersResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
