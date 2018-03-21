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

#include "createassessmenttargetresponse.h"
#include "createassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  CreateAssessmentTargetResponse
 *
 * @brief  Handles Inspector CreateAssessmentTarget responses.
 *
 * @see    InspectorClient::createAssessmentTarget
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAssessmentTargetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new CreateAssessmentTargetResponsePrivate(this), parent)
{
    setRequest(new CreateAssessmentTargetRequest(request));
    setReply(reply);
}

const CreateAssessmentTargetRequest * CreateAssessmentTargetResponse::request() const
{
    Q_D(const CreateAssessmentTargetResponse);
    return static_cast<const CreateAssessmentTargetRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector CreateAssessmentTarget response.
 *
 * @param  response  Response to parse.
 */
void CreateAssessmentTargetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAssessmentTargetResponsePrivate
 *
 * @brief  Private implementation for CreateAssessmentTargetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAssessmentTargetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAssessmentTargetResponse instance.
 */
CreateAssessmentTargetResponsePrivate::CreateAssessmentTargetResponsePrivate(
    CreateAssessmentTargetQueueResponse * const q) : CreateAssessmentTargetPrivate(q)
{

}

/**
 * @brief  Parse an Inspector CreateAssessmentTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAssessmentTargetResponsePrivate::CreateAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAssessmentTargetResponse"));
    /// @todo
}
