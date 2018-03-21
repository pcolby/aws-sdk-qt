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

#include "removeautoscalingpolicyresponse.h"
#include "removeautoscalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EMR {

/**
 * @class  RemoveAutoScalingPolicyResponse
 *
 * @brief  Handles EMR RemoveAutoScalingPolicy responses.
 *
 * @see    EMRClient::removeAutoScalingPolicy
 */

/**
 * @brief  Constructs a new RemoveAutoScalingPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveAutoScalingPolicyResponse::RemoveAutoScalingPolicyResponse(
        const RemoveAutoScalingPolicyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EMRResponse(new RemoveAutoScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new RemoveAutoScalingPolicyRequest(request));
    setReply(reply);
}

const RemoveAutoScalingPolicyRequest * RemoveAutoScalingPolicyResponse::request() const
{
    Q_D(const RemoveAutoScalingPolicyResponse);
    return static_cast<const RemoveAutoScalingPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a EMR RemoveAutoScalingPolicy response.
 *
 * @param  response  Response to parse.
 */
void RemoveAutoScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveAutoScalingPolicyResponsePrivate
 *
 * @brief  Private implementation for RemoveAutoScalingPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveAutoScalingPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveAutoScalingPolicyResponse instance.
 */
RemoveAutoScalingPolicyResponsePrivate::RemoveAutoScalingPolicyResponsePrivate(
    RemoveAutoScalingPolicyQueueResponse * const q) : RemoveAutoScalingPolicyPrivate(q)
{

}

/**
 * @brief  Parse an EMR RemoveAutoScalingPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveAutoScalingPolicyResponsePrivate::RemoveAutoScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveAutoScalingPolicyResponse"));
    /// @todo
}

} // namespace EMR
} // namespace AWS
