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

#include "updatemlmodelresponse.h"
#include "updatemlmodelresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  UpdateMLModelResponse
 *
 * @brief  Handles MachineLearning UpdateMLModel responses.
 *
 * @see    MachineLearningClient::updateMLModel
 */

/**
 * @brief  Constructs a new UpdateMLModelResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateMLModelResponse::UpdateMLModelResponse(
        const UpdateMLModelRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new UpdateMLModelResponsePrivate(this), parent)
{
    setRequest(new UpdateMLModelRequest(request));
    setReply(reply);
}

const UpdateMLModelRequest * UpdateMLModelResponse::request() const
{
    Q_D(const UpdateMLModelResponse);
    return static_cast<const UpdateMLModelRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning UpdateMLModel response.
 *
 * @param  response  Response to parse.
 */
void UpdateMLModelResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateMLModelResponsePrivate
 *
 * @brief  Private implementation for UpdateMLModelResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateMLModelResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateMLModelResponse instance.
 */
UpdateMLModelResponsePrivate::UpdateMLModelResponsePrivate(
    UpdateMLModelQueueResponse * const q) : UpdateMLModelPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning UpdateMLModelResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateMLModelResponsePrivate::UpdateMLModelResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateMLModelResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
