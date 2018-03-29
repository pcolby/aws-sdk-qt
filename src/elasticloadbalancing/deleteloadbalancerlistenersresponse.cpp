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

#include "deleteloadbalancerlistenersresponse.h"
#include "deleteloadbalancerlistenersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancing {

/**
 * @class  DeleteLoadBalancerListenersResponse
 *
 * @brief  Handles ElasticLoadBalancing DeleteLoadBalancerListeners responses.
 *
 * @see    ElasticLoadBalancingClient::deleteLoadBalancerListeners
 */

/**
 * @brief  Constructs a new DeleteLoadBalancerListenersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoadBalancerListenersResponse::DeleteLoadBalancerListenersResponse(
        const DeleteLoadBalancerListenersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingResponse(new DeleteLoadBalancerListenersResponsePrivate(this), parent)
{
    setRequest(new DeleteLoadBalancerListenersRequest(request));
    setReply(reply);
}

const DeleteLoadBalancerListenersRequest * DeleteLoadBalancerListenersResponse::request() const
{
    Q_D(const DeleteLoadBalancerListenersResponse);
    return static_cast<const DeleteLoadBalancerListenersRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancing DeleteLoadBalancerListeners response.
 *
 * @param  response  Response to parse.
 */
void DeleteLoadBalancerListenersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerListenersResponsePrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerListenersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerListenersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLoadBalancerListenersResponse instance.
 */
DeleteLoadBalancerListenersResponsePrivate::DeleteLoadBalancerListenersResponsePrivate(
    DeleteLoadBalancerListenersQueueResponse * const q) : DeleteLoadBalancerListenersPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancing DeleteLoadBalancerListenersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLoadBalancerListenersResponsePrivate::DeleteLoadBalancerListenersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoadBalancerListenersResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancing
} // namespace QtAws
