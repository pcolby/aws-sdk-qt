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

#include "createmodelresponse.h"
#include "createmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SageMaker {

/**
 * @class  CreateModelResponse
 *
 * @brief  Handles SageMaker CreateModel responses.
 *
 * @see    SageMakerClient::createModel
 */

/**
 * @brief  Constructs a new CreateModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateModelResponse::CreateModelResponse(
        const CreateModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateModelResponsePrivate(this), parent)
{
    setRequest(new CreateModelRequest(request));
    setReply(reply);
}

const CreateModelRequest * CreateModelResponse::request() const
{
    Q_D(const CreateModelResponse);
    return static_cast<const CreateModelRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker CreateModel response.
 *
 * @param  response  Response to parse.
 */
void CreateModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateModelResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateModelResponsePrivate
 *
 * @brief  Private implementation for CreateModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateModelResponse instance.
 */
CreateModelResponsePrivate::CreateModelResponsePrivate(
    CreateModelResponse * const q) : SageMakerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SageMaker CreateModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateModelResponsePrivate::CreateModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateModelResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace QtAws
