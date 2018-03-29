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

#include "createautoscalinggroupresponse.h"
#include "createautoscalinggroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  CreateAutoScalingGroupResponse
 *
 * @brief  Handles AutoScaling CreateAutoScalingGroup responses.
 *
 * @see    AutoScalingClient::createAutoScalingGroup
 */

/**
 * @brief  Constructs a new CreateAutoScalingGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAutoScalingGroupResponse::CreateAutoScalingGroupResponse(
        const CreateAutoScalingGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new CreateAutoScalingGroupResponsePrivate(this), parent)
{
    setRequest(new CreateAutoScalingGroupRequest(request));
    setReply(reply);
}

const CreateAutoScalingGroupRequest * CreateAutoScalingGroupResponse::request() const
{
    Q_D(const CreateAutoScalingGroupResponse);
    return static_cast<const CreateAutoScalingGroupRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScaling CreateAutoScalingGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateAutoScalingGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateAutoScalingGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAutoScalingGroupResponsePrivate
 *
 * @brief  Private implementation for CreateAutoScalingGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAutoScalingGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAutoScalingGroupResponse instance.
 */
CreateAutoScalingGroupResponsePrivate::CreateAutoScalingGroupResponsePrivate(
    CreateAutoScalingGroupResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling CreateAutoScalingGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAutoScalingGroupResponsePrivate::CreateAutoScalingGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAutoScalingGroupResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
