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

#include "updatenotebookinstanceresponse.h"
#include "updatenotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  UpdateNotebookInstanceResponse
 *
 * @brief  Handles SageMaker UpdateNotebookInstance responses.
 *
 * @see    SageMakerClient::updateNotebookInstance
 */

/**
 * @brief  Constructs a new UpdateNotebookInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNotebookInstanceResponse::UpdateNotebookInstanceResponse(
        const UpdateNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new UpdateNotebookInstanceRequest(request));
    setReply(reply);
}

const UpdateNotebookInstanceRequest * UpdateNotebookInstanceResponse::request() const
{
    Q_D(const UpdateNotebookInstanceResponse);
    return static_cast<const UpdateNotebookInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker UpdateNotebookInstance response.
 *
 * @param  response  Response to parse.
 */
void UpdateNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNotebookInstanceResponsePrivate
 *
 * @brief  Private implementation for UpdateNotebookInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNotebookInstanceResponse instance.
 */
UpdateNotebookInstanceResponsePrivate::UpdateNotebookInstanceResponsePrivate(
    UpdateNotebookInstanceQueueResponse * const q) : UpdateNotebookInstancePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker UpdateNotebookInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNotebookInstanceResponsePrivate::UpdateNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
