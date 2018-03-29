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

#include "createnotebookinstanceresponse.h"
#include "createnotebookinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  CreateNotebookInstanceResponse
 *
 * @brief  Handles SageMaker CreateNotebookInstance responses.
 *
 * @see    SageMakerClient::createNotebookInstance
 */

/**
 * @brief  Constructs a new CreateNotebookInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateNotebookInstanceResponse::CreateNotebookInstanceResponse(
        const CreateNotebookInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateNotebookInstanceResponsePrivate(this), parent)
{
    setRequest(new CreateNotebookInstanceRequest(request));
    setReply(reply);
}

const CreateNotebookInstanceRequest * CreateNotebookInstanceResponse::request() const
{
    Q_D(const CreateNotebookInstanceResponse);
    return static_cast<const CreateNotebookInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker CreateNotebookInstance response.
 *
 * @param  response  Response to parse.
 */
void CreateNotebookInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateNotebookInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateNotebookInstanceResponsePrivate
 *
 * @brief  Private implementation for CreateNotebookInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateNotebookInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateNotebookInstanceResponse instance.
 */
CreateNotebookInstanceResponsePrivate::CreateNotebookInstanceResponsePrivate(
    CreateNotebookInstanceResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker CreateNotebookInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateNotebookInstanceResponsePrivate::CreateNotebookInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateNotebookInstanceResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
