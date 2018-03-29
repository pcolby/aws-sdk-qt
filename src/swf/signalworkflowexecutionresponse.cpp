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

#include "signalworkflowexecutionresponse.h"
#include "signalworkflowexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SWF {

/**
 * @class  SignalWorkflowExecutionResponse
 *
 * @brief  Handles SWF SignalWorkflowExecution responses.
 *
 * @see    SWFClient::signalWorkflowExecution
 */

/**
 * @brief  Constructs a new SignalWorkflowExecutionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SignalWorkflowExecutionResponse::SignalWorkflowExecutionResponse(
        const SignalWorkflowExecutionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SignalWorkflowExecutionResponse(new SignalWorkflowExecutionResponsePrivate(this), parent)
{
    setRequest(new SignalWorkflowExecutionRequest(request));
    setReply(reply);
}

const SignalWorkflowExecutionRequest * SignalWorkflowExecutionResponse::request() const
{
    Q_D(const SignalWorkflowExecutionResponse);
    return static_cast<const SignalWorkflowExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SWF SignalWorkflowExecution response.
 *
 * @param  response  Response to parse.
 */
void SignalWorkflowExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(SignalWorkflowExecutionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SignalWorkflowExecutionResponsePrivate
 *
 * @brief  Private implementation for SignalWorkflowExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SignalWorkflowExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SignalWorkflowExecutionResponse instance.
 */
SignalWorkflowExecutionResponsePrivate::SignalWorkflowExecutionResponsePrivate(
    SignalWorkflowExecutionResponse * const q) : SWFResponsePrivate(q)
{

}

/**
 * @brief  Parse an SWF SignalWorkflowExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SignalWorkflowExecutionResponsePrivate::parseSignalWorkflowExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SignalWorkflowExecutionResponse"));
    /// @todo
}

} // namespace SWF
} // namespace QtAws
