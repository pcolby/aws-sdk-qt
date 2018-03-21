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

#include "stopnotebookinstanceresponse.h"
#include "stopnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  StopNotebookInstanceResponse
 *
 * @brief  Handles SageMaker StopNotebookInstance responses.
 *
 * @see    SageMakerClient::stopNotebookInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopNotebookInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StopNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new StopNotebookInstanceRequest(request));
    setReply(reply);
}

const StopNotebookInstanceRequest * StopNotebookInstanceResponse::request() const
{
    Q_D(const StopNotebookInstanceResponse);
    return static_cast<const StopNotebookInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker StopNotebookInstance response.
 *
 * @param  response  Response to parse.
 */
void StopNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopNotebookInstanceResponsePrivate
 *
 * @brief  Private implementation for StopNotebookInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopNotebookInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopNotebookInstanceResponse instance.
 */
StopNotebookInstanceResponsePrivate::StopNotebookInstanceResponsePrivate(
    StopNotebookInstanceQueueResponse * const q) : StopNotebookInstancePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker StopNotebookInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopNotebookInstanceResponsePrivate::StopNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
