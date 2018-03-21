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

#include "deleteloadbalancerresponse.h"
#include "deleteloadbalancerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteLoadBalancerResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DeleteLoadBalancer responses.
 *
 * @see    ElasticLoadBalancingv2Client::deleteLoadBalancer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLoadBalancerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DeleteLoadBalancerResponsePrivate(this), parent)
{
    setRequest(new DeleteLoadBalancerRequest(request));
    setReply(reply);
}

const DeleteLoadBalancerRequest * DeleteLoadBalancerResponse::request() const
{
    Q_D(const DeleteLoadBalancerResponse);
    return static_cast<const DeleteLoadBalancerRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DeleteLoadBalancer response.
 *
 * @param  response  Response to parse.
 */
void DeleteLoadBalancerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLoadBalancerResponsePrivate
 *
 * @brief  Private implementation for DeleteLoadBalancerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLoadBalancerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLoadBalancerResponse instance.
 */
DeleteLoadBalancerResponsePrivate::DeleteLoadBalancerResponsePrivate(
    DeleteLoadBalancerQueueResponse * const q) : DeleteLoadBalancerPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DeleteLoadBalancerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLoadBalancerResponsePrivate::DeleteLoadBalancerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLoadBalancerResponse"));
    /// @todo
}
