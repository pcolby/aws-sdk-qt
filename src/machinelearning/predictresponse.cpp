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

#include "predictresponse.h"
#include "predictresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace MachineLearning {

/**
 * @class  PredictResponse
 *
 * @brief  Handles MachineLearning Predict responses.
 *
 * @see    MachineLearningClient::predict
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PredictResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new PredictResponsePrivate(this), parent)
{
    setRequest(new PredictRequest(request));
    setReply(reply);
}

const PredictRequest * PredictResponse::request() const
{
    Q_D(const PredictResponse);
    return static_cast<const PredictRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning Predict response.
 *
 * @param  response  Response to parse.
 */
void PredictResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PredictResponsePrivate
 *
 * @brief  Private implementation for PredictResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PredictResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PredictResponse instance.
 */
PredictResponsePrivate::PredictResponsePrivate(
    PredictQueueResponse * const q) : PredictPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning PredictResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PredictResponsePrivate::PredictResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PredictResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace AWS
