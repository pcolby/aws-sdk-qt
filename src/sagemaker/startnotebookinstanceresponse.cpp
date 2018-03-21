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

#include "startnotebookinstanceresponse.h"
#include "startnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  StartNotebookInstanceResponse
 *
 * @brief  Handles SageMaker StartNotebookInstance responses.
 *
 * @see    SageMakerClient::startNotebookInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartNotebookInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new StartNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new StartNotebookInstanceRequest(request));
    setReply(reply);
}

const StartNotebookInstanceRequest * StartNotebookInstanceResponse::request() const
{
    Q_D(const StartNotebookInstanceResponse);
    return static_cast<const StartNotebookInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker StartNotebookInstance response.
 *
 * @param  response  Response to parse.
 */
void StartNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartNotebookInstanceResponsePrivate
 *
 * @brief  Private implementation for StartNotebookInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartNotebookInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartNotebookInstanceResponse instance.
 */
StartNotebookInstanceResponsePrivate::StartNotebookInstanceResponsePrivate(
    StartNotebookInstanceQueueResponse * const q) : StartNotebookInstancePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker StartNotebookInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartNotebookInstanceResponsePrivate::StartNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
