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

#include "setloadbasedautoscalingresponse.h"
#include "setloadbasedautoscalingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  SetLoadBasedAutoScalingResponse
 *
 * @brief  Handles OpsWorks SetLoadBasedAutoScaling responses.
 *
 * @see    OpsWorksClient::setLoadBasedAutoScaling
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetLoadBasedAutoScalingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new SetLoadBasedAutoScalingResponsePrivate(this), parent)
{
    setRequest(new SetLoadBasedAutoScalingRequest(request));
    setReply(reply);
}

const SetLoadBasedAutoScalingRequest * SetLoadBasedAutoScalingResponse::request() const
{
    Q_D(const SetLoadBasedAutoScalingResponse);
    return static_cast<const SetLoadBasedAutoScalingRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks SetLoadBasedAutoScaling response.
 *
 * @param  response  Response to parse.
 */
void SetLoadBasedAutoScalingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetLoadBasedAutoScalingResponsePrivate
 *
 * @brief  Private implementation for SetLoadBasedAutoScalingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetLoadBasedAutoScalingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetLoadBasedAutoScalingResponse instance.
 */
SetLoadBasedAutoScalingResponsePrivate::SetLoadBasedAutoScalingResponsePrivate(
    SetLoadBasedAutoScalingQueueResponse * const q) : SetLoadBasedAutoScalingPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks SetLoadBasedAutoScalingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetLoadBasedAutoScalingResponsePrivate::SetLoadBasedAutoScalingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetLoadBasedAutoScalingResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
