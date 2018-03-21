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

#include "detachloadbalancersresponse.h"
#include "detachloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DetachLoadBalancersResponse
 *
 * @brief  Handles AutoScaling DetachLoadBalancers responses.
 *
 * @see    AutoScalingClient::detachLoadBalancers
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DetachLoadBalancersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DetachLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new DetachLoadBalancersRequest(request));
    setReply(reply);
}

const DetachLoadBalancersRequest * DetachLoadBalancersResponse::request() const
{
    Q_D(const DetachLoadBalancersResponse);
    return static_cast<const DetachLoadBalancersRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling DetachLoadBalancers response.
 *
 * @param  response  Response to parse.
 */
void DetachLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DetachLoadBalancersResponsePrivate
 *
 * @brief  Private implementation for DetachLoadBalancersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DetachLoadBalancersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DetachLoadBalancersResponse instance.
 */
DetachLoadBalancersResponsePrivate::DetachLoadBalancersResponsePrivate(
    DetachLoadBalancersQueueResponse * const q) : DetachLoadBalancersPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DetachLoadBalancersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DetachLoadBalancersResponsePrivate::DetachLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DetachLoadBalancersResponse"));
    /// @todo
}
