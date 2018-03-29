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

#include "updatecontaineragentresponse.h"
#include "updatecontaineragentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECS {

/**
 * @class  UpdateContainerAgentResponse
 *
 * @brief  Handles ECS UpdateContainerAgent responses.
 *
 * @see    ECSClient::updateContainerAgent
 */

/**
 * @brief  Constructs a new UpdateContainerAgentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateContainerAgentResponse::UpdateContainerAgentResponse(
        const UpdateContainerAgentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECSResponse(new UpdateContainerAgentResponsePrivate(this), parent)
{
    setRequest(new UpdateContainerAgentRequest(request));
    setReply(reply);
}

const UpdateContainerAgentRequest * UpdateContainerAgentResponse::request() const
{
    Q_D(const UpdateContainerAgentResponse);
    return static_cast<const UpdateContainerAgentRequest *>(d->request);
}

/**
 * @brief  Parse a ECS UpdateContainerAgent response.
 *
 * @param  response  Response to parse.
 */
void UpdateContainerAgentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateContainerAgentResponsePrivate
 *
 * @brief  Private implementation for UpdateContainerAgentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateContainerAgentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateContainerAgentResponse instance.
 */
UpdateContainerAgentResponsePrivate::UpdateContainerAgentResponsePrivate(
    UpdateContainerAgentQueueResponse * const q) : UpdateContainerAgentPrivate(q)
{

}

/**
 * @brief  Parse an ECS UpdateContainerAgentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateContainerAgentResponsePrivate::UpdateContainerAgentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateContainerAgentResponse"));
    /// @todo
}

} // namespace ECS
} // namespace AWS
