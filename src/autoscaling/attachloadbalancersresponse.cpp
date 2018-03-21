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

#include "attachloadbalancersresponse.h"
#include "attachloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  AttachLoadBalancersResponse
 *
 * @brief  Handles AutoScaling AttachLoadBalancers responses.
 *
 * @see    AutoScalingClient::attachLoadBalancers
 */

/**
 * @brief  Constructs a new AttachLoadBalancersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AttachLoadBalancersResponse::AttachLoadBalancersResponse(
        const AttachLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new AttachLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new AttachLoadBalancersRequest(request));
    setReply(reply);
}

const AttachLoadBalancersRequest * AttachLoadBalancersResponse::request() const
{
    Q_D(const AttachLoadBalancersResponse);
    return static_cast<const AttachLoadBalancersRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling AttachLoadBalancers response.
 *
 * @param  response  Response to parse.
 */
void AttachLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AttachLoadBalancersResponsePrivate
 *
 * @brief  Private implementation for AttachLoadBalancersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AttachLoadBalancersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AttachLoadBalancersResponse instance.
 */
AttachLoadBalancersResponsePrivate::AttachLoadBalancersResponsePrivate(
    AttachLoadBalancersQueueResponse * const q) : AttachLoadBalancersPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling AttachLoadBalancersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AttachLoadBalancersResponsePrivate::AttachLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AttachLoadBalancersResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
