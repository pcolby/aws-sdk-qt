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

#include "updatebatchpredictionresponse.h"
#include "updatebatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  UpdateBatchPredictionResponse
 *
 * @brief  Handles MachineLearning UpdateBatchPrediction responses.
 *
 * @see    MachineLearningClient::updateBatchPrediction
 */

/**
 * @brief  Constructs a new UpdateBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateBatchPredictionResponse::UpdateBatchPredictionResponse(
        const UpdateBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new UpdateBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new UpdateBatchPredictionRequest(request));
    setReply(reply);
}

const UpdateBatchPredictionRequest * UpdateBatchPredictionResponse::request() const
{
    Q_D(const UpdateBatchPredictionResponse);
    return static_cast<const UpdateBatchPredictionRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning UpdateBatchPrediction response.
 *
 * @param  response  Response to parse.
 */
void UpdateBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateBatchPredictionResponsePrivate
 *
 * @brief  Private implementation for UpdateBatchPredictionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateBatchPredictionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateBatchPredictionResponse instance.
 */
UpdateBatchPredictionResponsePrivate::UpdateBatchPredictionResponsePrivate(
    UpdateBatchPredictionQueueResponse * const q) : UpdateBatchPredictionPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning UpdateBatchPredictionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateBatchPredictionResponsePrivate::UpdateBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBatchPredictionResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
