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

#include "createmlmodelresponse.h"
#include "createmlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateMLModelResponse
 *
 * @brief  Handles MachineLearning CreateMLModel responses.
 *
 * @see    MachineLearningClient::createMLModel
 */

/**
 * @brief  Constructs a new CreateMLModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMLModelResponse::CreateMLModelResponse(
        const CreateMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateMLModelResponsePrivate(this), parent)
{
    setRequest(new CreateMLModelRequest(request));
    setReply(reply);
}

const CreateMLModelRequest * CreateMLModelResponse::request() const
{
    Q_D(const CreateMLModelResponse);
    return static_cast<const CreateMLModelRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateMLModel response.
 *
 * @param  response  Response to parse.
 */
void CreateMLModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMLModelResponsePrivate
 *
 * @brief  Private implementation for CreateMLModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMLModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMLModelResponse instance.
 */
CreateMLModelResponsePrivate::CreateMLModelResponsePrivate(
    CreateMLModelQueueResponse * const q) : CreateMLModelPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateMLModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMLModelResponsePrivate::CreateMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMLModelResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
