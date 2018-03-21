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

#include "startautomationexecutionresponse.h"
#include "startautomationexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  StartAutomationExecutionResponse
 *
 * @brief  Handles SSM StartAutomationExecution responses.
 *
 * @see    SSMClient::startAutomationExecution
 */

/**
 * @brief  Constructs a new StartAutomationExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartAutomationExecutionResponse::StartAutomationExecutionResponse(
        const StartAutomationExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new StartAutomationExecutionResponsePrivate(this), parent)
{
    setRequest(new StartAutomationExecutionRequest(request));
    setReply(reply);
}

const StartAutomationExecutionRequest * StartAutomationExecutionResponse::request() const
{
    Q_D(const StartAutomationExecutionResponse);
    return static_cast<const StartAutomationExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SSM StartAutomationExecution response.
 *
 * @param  response  Response to parse.
 */
void StartAutomationExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartAutomationExecutionResponsePrivate
 *
 * @brief  Private implementation for StartAutomationExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartAutomationExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartAutomationExecutionResponse instance.
 */
StartAutomationExecutionResponsePrivate::StartAutomationExecutionResponsePrivate(
    StartAutomationExecutionQueueResponse * const q) : StartAutomationExecutionPrivate(q)
{

}

/**
 * @brief  Parse an SSM StartAutomationExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartAutomationExecutionResponsePrivate::StartAutomationExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartAutomationExecutionResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
