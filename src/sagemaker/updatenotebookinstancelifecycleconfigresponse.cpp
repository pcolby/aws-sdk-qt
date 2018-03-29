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

#include "updatenotebookinstancelifecycleconfigresponse.h"
#include "updatenotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  UpdateNotebookInstanceLifecycleConfigResponse
 *
 * @brief  Handles SageMaker UpdateNotebookInstanceLifecycleConfig responses.
 *
 * @see    SageMakerClient::updateNotebookInstanceLifecycleConfig
 */

/**
 * @brief  Constructs a new UpdateNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNotebookInstanceLifecycleConfigResponse::UpdateNotebookInstanceLifecycleConfigResponse(
        const UpdateNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new UpdateNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new UpdateNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

const UpdateNotebookInstanceLifecycleConfigRequest * UpdateNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const UpdateNotebookInstanceLifecycleConfigResponse);
    return static_cast<const UpdateNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker UpdateNotebookInstanceLifecycleConfig response.
 *
 * @param  response  Response to parse.
 */
void UpdateNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateNotebookInstanceLifecycleConfigResponsePrivate
 *
 * @brief  Private implementation for UpdateNotebookInstanceLifecycleConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNotebookInstanceLifecycleConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateNotebookInstanceLifecycleConfigResponse instance.
 */
UpdateNotebookInstanceLifecycleConfigResponsePrivate::UpdateNotebookInstanceLifecycleConfigResponsePrivate(
    UpdateNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker UpdateNotebookInstanceLifecycleConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateNotebookInstanceLifecycleConfigResponsePrivate::parseUpdateNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateNotebookInstanceLifecycleConfigResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
