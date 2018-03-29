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

#include "startworkflowexecutionresponse.h"
#include "startworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  StartWorkflowExecutionResponse
 *
 * @brief  Handles SWF StartWorkflowExecution responses.
 *
 * @see    SWFClient::startWorkflowExecution
 */

/**
 * @brief  Constructs a new StartWorkflowExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartWorkflowExecutionResponse::StartWorkflowExecutionResponse(
        const StartWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new StartWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new StartWorkflowExecutionRequest(request));
    setReply(reply);
}

const StartWorkflowExecutionRequest * StartWorkflowExecutionResponse::request() const
{
    Q_D(const StartWorkflowExecutionResponse);
    return static_cast<const StartWorkflowExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SWF StartWorkflowExecution response.
 *
 * @param  response  Response to parse.
 */
void StartWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartWorkflowExecutionResponsePrivate
 *
 * @brief  Private implementation for StartWorkflowExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartWorkflowExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartWorkflowExecutionResponse instance.
 */
StartWorkflowExecutionResponsePrivate::StartWorkflowExecutionResponsePrivate(
    StartWorkflowExecutionResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF StartWorkflowExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartWorkflowExecutionResponsePrivate::StartWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartWorkflowExecutionResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
