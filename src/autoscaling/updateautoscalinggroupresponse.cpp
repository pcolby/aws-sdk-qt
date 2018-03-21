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

#include "updateautoscalinggroupresponse.h"
#include "updateautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  UpdateAutoScalingGroupResponse
 *
 * @brief  Handles AutoScaling UpdateAutoScalingGroup responses.
 *
 * @see    AutoScalingClient::updateAutoScalingGroup
 */

/**
 * @brief  Constructs a new UpdateAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAutoScalingGroupResponse::UpdateAutoScalingGroupResponse(
        const UpdateAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new UpdateAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateAutoScalingGroupRequest(request));
    setReply(reply);
}

const UpdateAutoScalingGroupRequest * UpdateAutoScalingGroupResponse::request() const
{
    Q_D(const UpdateAutoScalingGroupResponse);
    return static_cast<const UpdateAutoScalingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling UpdateAutoScalingGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAutoScalingGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateAutoScalingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAutoScalingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAutoScalingGroupResponse instance.
 */
UpdateAutoScalingGroupResponsePrivate::UpdateAutoScalingGroupResponsePrivate(
    UpdateAutoScalingGroupQueueResponse * const q) : UpdateAutoScalingGroupPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling UpdateAutoScalingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAutoScalingGroupResponsePrivate::UpdateAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
