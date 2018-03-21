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

#include "createbatchpredictionresponse.h"
#include "createbatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  CreateBatchPredictionResponse
 *
 * @brief  Handles MachineLearning CreateBatchPrediction responses.
 *
 * @see    MachineLearningClient::createBatchPrediction
 */

/**
 * @brief  Constructs a new CreateBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBatchPredictionResponse::CreateBatchPredictionResponse(
        const CreateBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new CreateBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new CreateBatchPredictionRequest(request));
    setReply(reply);
}

const CreateBatchPredictionRequest * CreateBatchPredictionResponse::request() const
{
    Q_D(const CreateBatchPredictionResponse);
    return static_cast<const CreateBatchPredictionRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning CreateBatchPrediction response.
 *
 * @param  response  Response to parse.
 */
void CreateBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBatchPredictionResponsePrivate
 *
 * @brief  Private implementation for CreateBatchPredictionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBatchPredictionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBatchPredictionResponse instance.
 */
CreateBatchPredictionResponsePrivate::CreateBatchPredictionResponsePrivate(
    CreateBatchPredictionQueueResponse * const q) : CreateBatchPredictionPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning CreateBatchPredictionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBatchPredictionResponsePrivate::CreateBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBatchPredictionResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
