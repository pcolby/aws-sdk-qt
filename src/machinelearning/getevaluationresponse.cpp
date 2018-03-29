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

#include "getevaluationresponse.h"
#include "getevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  GetEvaluationResponse
 *
 * @brief  Handles MachineLearning GetEvaluation responses.
 *
 * @see    MachineLearningClient::getEvaluation
 */

/**
 * @brief  Constructs a new GetEvaluationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetEvaluationResponse::GetEvaluationResponse(
        const GetEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MachineLearningResponse(new GetEvaluationResponsePrivate(this), parent)
{
    setRequest(new GetEvaluationRequest(request));
    setReply(reply);
}

const GetEvaluationRequest * GetEvaluationResponse::request() const
{
    Q_D(const GetEvaluationResponse);
    return static_cast<const GetEvaluationRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning GetEvaluation response.
 *
 * @param  response  Response to parse.
 */
void GetEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetEvaluationResponsePrivate
 *
 * @brief  Private implementation for GetEvaluationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEvaluationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetEvaluationResponse instance.
 */
GetEvaluationResponsePrivate::GetEvaluationResponsePrivate(
    GetEvaluationQueueResponse * const q) : GetEvaluationPrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning GetEvaluationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetEvaluationResponsePrivate::GetEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEvaluationResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
