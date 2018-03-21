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

#include "enablestagetransitionresponse.h"
#include "enablestagetransitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodePipeline {

/**
 * @class  EnableStageTransitionResponse
 *
 * @brief  Handles CodePipeline EnableStageTransition responses.
 *
 * @see    CodePipelineClient::enableStageTransition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableStageTransitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new EnableStageTransitionResponsePrivate(this), parent)
{
    setRequest(new EnableStageTransitionRequest(request));
    setReply(reply);
}

const EnableStageTransitionRequest * EnableStageTransitionResponse::request() const
{
    Q_D(const EnableStageTransitionResponse);
    return static_cast<const EnableStageTransitionRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline EnableStageTransition response.
 *
 * @param  response  Response to parse.
 */
void EnableStageTransitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableStageTransitionResponsePrivate
 *
 * @brief  Private implementation for EnableStageTransitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableStageTransitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableStageTransitionResponse instance.
 */
EnableStageTransitionResponsePrivate::EnableStageTransitionResponsePrivate(
    EnableStageTransitionQueueResponse * const q) : EnableStageTransitionPrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline EnableStageTransitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableStageTransitionResponsePrivate::EnableStageTransitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableStageTransitionResponse"));
    /// @todo
}
