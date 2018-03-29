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

#include "disablestagetransitionresponse.h"
#include "disablestagetransitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodePipeline {

/**
 * @class  DisableStageTransitionResponse
 *
 * @brief  Handles CodePipeline DisableStageTransition responses.
 *
 * @see    CodePipelineClient::disableStageTransition
 */

/**
 * @brief  Constructs a new DisableStageTransitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisableStageTransitionResponse::DisableStageTransitionResponse(
        const DisableStageTransitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodePipelineResponse(new DisableStageTransitionResponsePrivate(this), parent)
{
    setRequest(new DisableStageTransitionRequest(request));
    setReply(reply);
}

const DisableStageTransitionRequest * DisableStageTransitionResponse::request() const
{
    Q_D(const DisableStageTransitionResponse);
    return static_cast<const DisableStageTransitionRequest *>(d->request);
}

/**
 * @brief  Parse a CodePipeline DisableStageTransition response.
 *
 * @param  response  Response to parse.
 */
void DisableStageTransitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DisableStageTransitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisableStageTransitionResponsePrivate
 *
 * @brief  Private implementation for DisableStageTransitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableStageTransitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisableStageTransitionResponse instance.
 */
DisableStageTransitionResponsePrivate::DisableStageTransitionResponsePrivate(
    DisableStageTransitionResponse * const q) : CodePipelineResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodePipeline DisableStageTransitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisableStageTransitionResponsePrivate::DisableStageTransitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisableStageTransitionResponse"));
    /// @todo
}

} // namespace CodePipeline
} // namespace QtAws
