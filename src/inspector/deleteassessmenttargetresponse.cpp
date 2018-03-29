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

#include "deleteassessmenttargetresponse.h"
#include "deleteassessmenttargetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Inspector {

/**
 * @class  DeleteAssessmentTargetResponse
 *
 * @brief  Handles Inspector DeleteAssessmentTarget responses.
 *
 * @see    InspectorClient::deleteAssessmentTarget
 */

/**
 * @brief  Constructs a new DeleteAssessmentTargetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteAssessmentTargetResponse::DeleteAssessmentTargetResponse(
        const DeleteAssessmentTargetRequest &request,
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
    Q_D(DeleteAssessmentTargetResponse);
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
    DeleteAssessmentTargetResponse * const q) : InspectorResponsePrivate(q)
{

}

/**
 * @brief  Parse an Inspector DeleteAssessmentTargetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteAssessmentTargetResponsePrivate::parseDeleteAssessmentTargetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAssessmentTargetResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace QtAws
