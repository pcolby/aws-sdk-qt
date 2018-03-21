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

#include "stopassessmentrunresponse.h"
#include "stopassessmentrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  StopAssessmentRunResponse
 *
 * @brief  Handles Inspector StopAssessmentRun responses.
 *
 * @see    InspectorClient::stopAssessmentRun
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopAssessmentRunResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new StopAssessmentRunResponsePrivate(this), parent)
{
    setRequest(new StopAssessmentRunRequest(request));
    setReply(reply);
}

const StopAssessmentRunRequest * StopAssessmentRunResponse::request() const
{
    Q_D(const StopAssessmentRunResponse);
    return static_cast<const StopAssessmentRunRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector StopAssessmentRun response.
 *
 * @param  response  Response to parse.
 */
void StopAssessmentRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopAssessmentRunResponsePrivate
 *
 * @brief  Private implementation for StopAssessmentRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopAssessmentRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopAssessmentRunResponse instance.
 */
StopAssessmentRunResponsePrivate::StopAssessmentRunResponsePrivate(
    StopAssessmentRunQueueResponse * const q) : StopAssessmentRunPrivate(q)
{

}

/**
 * @brief  Parse an Inspector StopAssessmentRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopAssessmentRunResponsePrivate::StopAssessmentRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopAssessmentRunResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
