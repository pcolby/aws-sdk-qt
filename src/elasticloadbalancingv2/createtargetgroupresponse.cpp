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

#include "createtargetgroupresponse.h"
#include "createtargetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticLoadBalancingv2 {

/**
 * @class  CreateTargetGroupResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 CreateTargetGroup responses.
 *
 * @see    ElasticLoadBalancingv2Client::createTargetGroup
 */

/**
 * @brief  Constructs a new CreateTargetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateTargetGroupResponse::CreateTargetGroupResponse(
        const CreateTargetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new CreateTargetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateTargetGroupRequest(request));
    setReply(reply);
}

const CreateTargetGroupRequest * CreateTargetGroupResponse::request() const
{
    Q_D(const CreateTargetGroupResponse);
    return static_cast<const CreateTargetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 CreateTargetGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateTargetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateTargetGroupResponsePrivate
 *
 * @brief  Private implementation for CreateTargetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTargetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateTargetGroupResponse instance.
 */
CreateTargetGroupResponsePrivate::CreateTargetGroupResponsePrivate(
    CreateTargetGroupQueueResponse * const q) : CreateTargetGroupPrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 CreateTargetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateTargetGroupResponsePrivate::CreateTargetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTargetGroupResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace AWS
