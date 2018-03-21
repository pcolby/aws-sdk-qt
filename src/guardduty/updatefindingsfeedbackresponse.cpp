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

#include "updatefindingsfeedbackresponse.h"
#include "updatefindingsfeedbackresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GuardDuty {

/**
 * @class  UpdateFindingsFeedbackResponse
 *
 * @brief  Handles GuardDuty UpdateFindingsFeedback responses.
 *
 * @see    GuardDutyClient::updateFindingsFeedback
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFindingsFeedbackResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GuardDutyResponse(new UpdateFindingsFeedbackResponsePrivate(this), parent)
{
    setRequest(new UpdateFindingsFeedbackRequest(request));
    setReply(reply);
}

const UpdateFindingsFeedbackRequest * UpdateFindingsFeedbackResponse::request() const
{
    Q_D(const UpdateFindingsFeedbackResponse);
    return static_cast<const UpdateFindingsFeedbackRequest *>(d->request);
}

/**
 * @brief  Parse a GuardDuty UpdateFindingsFeedback response.
 *
 * @param  response  Response to parse.
 */
void UpdateFindingsFeedbackResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFindingsFeedbackResponsePrivate
 *
 * @brief  Private implementation for UpdateFindingsFeedbackResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFindingsFeedbackResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFindingsFeedbackResponse instance.
 */
UpdateFindingsFeedbackResponsePrivate::UpdateFindingsFeedbackResponsePrivate(
    UpdateFindingsFeedbackQueueResponse * const q) : UpdateFindingsFeedbackPrivate(q)
{

}

/**
 * @brief  Parse an GuardDuty UpdateFindingsFeedbackResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFindingsFeedbackResponsePrivate::UpdateFindingsFeedbackResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFindingsFeedbackResponse"));
    /// @todo
}
