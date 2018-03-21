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

#include "deletescalingpolicyresponse.h"
#include "deletescalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ApplicationAutoScaling {

/**
 * @class  DeleteScalingPolicyResponse
 *
 * @brief  Handles ApplicationAutoScaling DeleteScalingPolicy responses.
 *
 * @see    ApplicationAutoScalingClient::deleteScalingPolicy
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteScalingPolicyResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationAutoScalingResponse(new DeleteScalingPolicyResponsePrivate(this), parent)
{
    setRequest(new DeleteScalingPolicyRequest(request));
    setReply(reply);
}

const DeleteScalingPolicyRequest * DeleteScalingPolicyResponse::request() const
{
    Q_D(const DeleteScalingPolicyResponse);
    return static_cast<const DeleteScalingPolicyRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationAutoScaling DeleteScalingPolicy response.
 *
 * @param  response  Response to parse.
 */
void DeleteScalingPolicyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteScalingPolicyResponsePrivate
 *
 * @brief  Private implementation for DeleteScalingPolicyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPolicyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteScalingPolicyResponse instance.
 */
DeleteScalingPolicyResponsePrivate::DeleteScalingPolicyResponsePrivate(
    DeleteScalingPolicyQueueResponse * const q) : DeleteScalingPolicyPrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling DeleteScalingPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteScalingPolicyResponsePrivate::DeleteScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScalingPolicyResponse"));
    /// @todo
}

} // namespace ApplicationAutoScaling
} // namespace AWS
