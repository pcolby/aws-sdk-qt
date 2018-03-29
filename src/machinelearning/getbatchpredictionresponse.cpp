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

#include "getbatchpredictionresponse.h"
#include "getbatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  GetBatchPredictionResponse
 *
 * @brief  Handles MachineLearning GetBatchPrediction responses.
 *
 * @see    MachineLearningClient::getBatchPrediction
 */

/**
 * @brief  Constructs a new GetBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBatchPredictionResponse::GetBatchPredictionResponse(
        const GetBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new GetBatchPredictionRequest(request));
    setReply(reply);
}

const GetBatchPredictionRequest * GetBatchPredictionResponse::request() const
{
    Q_D(const GetBatchPredictionResponse);
    return static_cast<const GetBatchPredictionRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning GetBatchPrediction response.
 *
 * @param  response  Response to parse.
 */
void GetBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBatchPredictionResponsePrivate
 *
 * @brief  Private implementation for GetBatchPredictionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBatchPredictionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBatchPredictionResponse instance.
 */
GetBatchPredictionResponsePrivate::GetBatchPredictionResponsePrivate(
    GetBatchPredictionResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning GetBatchPredictionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBatchPredictionResponsePrivate::GetBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBatchPredictionResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
