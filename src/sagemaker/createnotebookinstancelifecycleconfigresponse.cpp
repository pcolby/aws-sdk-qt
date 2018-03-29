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

#include "createnotebookinstancelifecycleconfigresponse.h"
#include "createnotebookinstancelifecycleconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  CreateNotebookInstanceLifecycleConfigResponse
 *
 * @brief  Handles SageMaker CreateNotebookInstanceLifecycleConfig responses.
 *
 * @see    SageMakerClient::createNotebookInstanceLifecycleConfig
 */

/**
 * @brief  Constructs a new CreateNotebookInstanceLifecycleConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNotebookInstanceLifecycleConfigResponse::CreateNotebookInstanceLifecycleConfigResponse(
        const CreateNotebookInstanceLifecycleConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateNotebookInstanceLifecycleConfigResponsePrivate(this), parent)
{
    setRequest(new CreateNotebookInstanceLifecycleConfigRequest(request));
    setReply(reply);
}

const CreateNotebookInstanceLifecycleConfigRequest * CreateNotebookInstanceLifecycleConfigResponse::request() const
{
    Q_D(const CreateNotebookInstanceLifecycleConfigResponse);
    return static_cast<const CreateNotebookInstanceLifecycleConfigRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker CreateNotebookInstanceLifecycleConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateNotebookInstanceLifecycleConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNotebookInstanceLifecycleConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNotebookInstanceLifecycleConfigResponsePrivate
 *
 * @brief  Private implementation for CreateNotebookInstanceLifecycleConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotebookInstanceLifecycleConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNotebookInstanceLifecycleConfigResponse instance.
 */
CreateNotebookInstanceLifecycleConfigResponsePrivate::CreateNotebookInstanceLifecycleConfigResponsePrivate(
    CreateNotebookInstanceLifecycleConfigResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker CreateNotebookInstanceLifecycleConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNotebookInstanceLifecycleConfigResponsePrivate::CreateNotebookInstanceLifecycleConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotebookInstanceLifecycleConfigResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
