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

#include "deleteassessmenttargetresponse.h"
#include "deleteassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  DeleteAssessmentTargetResponse
 *
 * @brief  Handles Inspector DeleteAssessmentTarget responses.
 *
 * @see    InspectorClient::deleteAssessmentTarget
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAssessmentTargetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DeleteAssessmentTargetResponsePrivate(this), parent)
{
    setRequest(new DeleteAssessmentTargetRequest(request));
    setReply(reply);
}

const DeleteAssessmentTargetRequest * DeleteAssessmentTargetResponse::request() const
{
    Q_D(const DeleteAssessmentTargetResponse);
    return static_cast<const DeleteAssessmentTargetRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DeleteAssessmentTarget response.
 *
 * @param  response  Response to parse.
 */
void DeleteAssessmentTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteAssessmentTargetResponsePrivate
 *
 * @brief  Private implementation for DeleteAssessmentTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteAssessmentTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteAssessmentTargetResponse instance.
 */
DeleteAssessmentTargetResponsePrivate::DeleteAssessmentTargetResponsePrivate(
    DeleteAssessmentTargetQueueResponse * const q) : DeleteAssessmentTargetPrivate(q)
{

}

/**
 * @brief  Parse an Inspector DeleteAssessmentTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAssessmentTargetResponsePrivate::DeleteAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentTargetResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
