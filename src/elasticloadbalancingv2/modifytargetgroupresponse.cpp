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

#include "modifytargetgroupresponse.h"
#include "modifytargetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticLoadBalancingv2 {

/**
 * @class  ModifyTargetGroupResponse
 *
 * @brief  Handles ElasticLoadBalancingv2 ModifyTargetGroup responses.
 *
 * @see    ElasticLoadBalancingv2Client::modifyTargetGroup
 */

/**
 * @brief  Constructs a new ModifyTargetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyTargetGroupResponse::ModifyTargetGroupResponse(
        const ModifyTargetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticLoadBalancingv2Response(new ModifyTargetGroupResponsePrivate(this), parent)
{
    setRequest(new ModifyTargetGroupRequest(request));
    setReply(reply);
}

const ModifyTargetGroupRequest * ModifyTargetGroupResponse::request() const
{
    Q_D(const ModifyTargetGroupResponse);
    return static_cast<const ModifyTargetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticLoadBalancingv2 ModifyTargetGroup response.
 *
 * @param  response  Response to parse.
 */
void ModifyTargetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyTargetGroupResponsePrivate
 *
 * @brief  Private implementation for ModifyTargetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyTargetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyTargetGroupResponse instance.
 */
ModifyTargetGroupResponsePrivate::ModifyTargetGroupResponsePrivate(
    ModifyTargetGroupResponse * const q) : ElasticLoadBalancingv2ResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticLoadBalancingv2 ModifyTargetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyTargetGroupResponsePrivate::ModifyTargetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyTargetGroupResponse"));
    /// @todo
}

} // namespace ElasticLoadBalancingv2
} // namespace QtAws
