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

#include "deletescalingpolicyresponse.h"
#include "deletescalingpolicyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  DeleteScalingPolicyResponse
 *
 * @brief  Handles ApplicationAutoScaling DeleteScalingPolicy responses.
 *
 * @see    ApplicationAutoScalingClient::deleteScalingPolicy
 */

/**
 * @brief  Constructs a new DeleteScalingPolicyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteScalingPolicyResponse::DeleteScalingPolicyResponse(
        const DeleteScalingPolicyRequest &request,
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
    Q_D(DeleteScalingPolicyResponse);
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
    DeleteScalingPolicyResponse * const q) : ApplicationAutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationAutoScaling DeleteScalingPolicyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteScalingPolicyResponsePrivate::parseDeleteScalingPolicyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScalingPolicyResponse"));
    /// @todo
}

} // namespace ApplicationAutoScaling
} // namespace QtAws
