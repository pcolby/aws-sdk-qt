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

#include "deleteevaluationresponse.h"
#include "deleteevaluationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MachineLearning {

/**
 * @class  DeleteEvaluationResponse
 *
 * @brief  Handles MachineLearning DeleteEvaluation responses.
 *
 * @see    MachineLearningClient::deleteEvaluation
 */

/**
 * @brief  Constructs a new DeleteEvaluationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEvaluationResponse::DeleteEvaluationResponse(
        const DeleteEvaluationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteEvaluationResponse(new DeleteEvaluationResponsePrivate(this), parent)
{
    setRequest(new DeleteEvaluationRequest(request));
    setReply(reply);
}

const DeleteEvaluationRequest * DeleteEvaluationResponse::request() const
{
    Q_D(const DeleteEvaluationResponse);
    return static_cast<const DeleteEvaluationRequest *>(d->request);
}

/**
 * @brief  Parse a MachineLearning DeleteEvaluation response.
 *
 * @param  response  Response to parse.
 */
void DeleteEvaluationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEvaluationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEvaluationResponsePrivate
 *
 * @brief  Private implementation for DeleteEvaluationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEvaluationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEvaluationResponse instance.
 */
DeleteEvaluationResponsePrivate::DeleteEvaluationResponsePrivate(
    DeleteEvaluationResponse * const q) : MachineLearningResponsePrivate(q)
{

}

/**
 * @brief  Parse an MachineLearning DeleteEvaluationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEvaluationResponsePrivate::parseDeleteEvaluationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEvaluationResponse"));
    /// @todo
}

} // namespace MachineLearning
} // namespace QtAws
