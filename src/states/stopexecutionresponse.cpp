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

#include "stopexecutionresponse.h"
#include "stopexecutionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SFN {

/**
 * @class  StopExecutionResponse
 *
 * @brief  Handles SFN StopExecution responses.
 *
 * @see    SFNClient::stopExecution
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopExecutionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SFNResponse(new StopExecutionResponsePrivate(this), parent)
{
    setRequest(new StopExecutionRequest(request));
    setReply(reply);
}

const StopExecutionRequest * StopExecutionResponse::request() const
{
    Q_D(const StopExecutionResponse);
    return static_cast<const StopExecutionRequest *>(d->request);
}

/**
 * @brief  Parse a SFN StopExecution response.
 *
 * @param  response  Response to parse.
 */
void StopExecutionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopExecutionResponsePrivate
 *
 * @brief  Private implementation for StopExecutionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopExecutionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopExecutionResponse instance.
 */
StopExecutionResponsePrivate::StopExecutionResponsePrivate(
    StopExecutionQueueResponse * const q) : StopExecutionPrivate(q)
{

}

/**
 * @brief  Parse an SFN StopExecutionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopExecutionResponsePrivate::StopExecutionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopExecutionResponse"));
    /// @todo
}
