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

#include "deletetargetgroupresponse.h"
#include "deletetargetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  DeleteTargetGroupResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 DeleteTargetGroup responses.
 *
 * @see    ElasticLoadBalancingv2Client::deleteTargetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTargetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new DeleteTargetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteTargetGroupRequest(request));
    setReply(reply);
}

const DeleteTargetGroupRequest * DeleteTargetGroupResponse::request() const
{
    Q_D(const DeleteTargetGroupResponse);
    return static_cast<const DeleteTargetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 DeleteTargetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteTargetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTargetGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteTargetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTargetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTargetGroupResponse instance.
 */
DeleteTargetGroupResponsePrivate::DeleteTargetGroupResponsePrivate(
    DeleteTargetGroupQueueResponse * const q) : DeleteTargetGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 DeleteTargetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTargetGroupResponsePrivate::DeleteTargetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTargetGroupResponse"));
    /// @todo
}
