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

#include "deletebatchpredictionresponse.h"
#include "deletebatchpredictionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  DeleteBatchPredictionResponse
 *
 * @brief  Handles MachineLearning DeleteBatchPrediction responses.
 *
 * @see    MachineLearningClient::deleteBatchPrediction
 */

/**
 * @brief  Constructs a new DeleteBatchPredictionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBatchPredictionResponse::DeleteBatchPredictionResponse(
        const DeleteBatchPredictionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteBatchPredictionResponse(new DeleteBatchPredictionResponsePrivate(this), parent)
{
    setRequest(new DeleteBatchPredictionRequest(request));
    setReply(reply);
}

const DeleteBatchPredictionRequest * DeleteBatchPredictionResponse::request() const
{
    Q_D(const DeleteBatchPredictionResponse);
    return static_cast<const DeleteBatchPredictionRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DeleteBatchPrediction response.
 *
 * @param  response  Response to parse.
 */
void DeleteBatchPredictionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBatchPredictionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBatchPredictionResponsePrivate
 *
 * @brief  Private implementation for DeleteBatchPredictionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBatchPredictionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBatchPredictionResponse instance.
 */
DeleteBatchPredictionResponsePrivate::DeleteBatchPredictionResponsePrivate(
    DeleteBatchPredictionResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DeleteBatchPredictionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBatchPredictionResponsePrivate::parseDeleteBatchPredictionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBatchPredictionResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
