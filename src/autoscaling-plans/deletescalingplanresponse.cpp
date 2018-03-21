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

#include "deletescalingplanresponse.h"
#include "deletescalingplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScalingPlans {

/**
 * @class  DeleteScalingPlanResponse
 *
 * @brief  Handles AutoScalingPlans DeleteScalingPlan responses.
 *
 * @see    AutoScalingPlansClient::deleteScalingPlan
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteScalingPlanResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new DeleteScalingPlanResponsePrivate(this), parent)
{
    setRequest(new DeleteScalingPlanRequest(request));
    setReply(reply);
}

const DeleteScalingPlanRequest * DeleteScalingPlanResponse::request() const
{
    Q_D(const DeleteScalingPlanResponse);
    return static_cast<const DeleteScalingPlanRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScalingPlans DeleteScalingPlan response.
 *
 * @param  response  Response to parse.
 */
void DeleteScalingPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteScalingPlanResponsePrivate
 *
 * @brief  Private implementation for DeleteScalingPlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteScalingPlanResponse instance.
 */
DeleteScalingPlanResponsePrivate::DeleteScalingPlanResponsePrivate(
    DeleteScalingPlanQueueResponse * const q) : DeleteScalingPlanPrivate(q)
{

}

/**
 * @brief  Parse an AutoScalingPlans DeleteScalingPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteScalingPlanResponsePrivate::DeleteScalingPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScalingPlanResponse"));
    /// @todo
}

} // namespace AutoScalingPlans
} // namespace AWS
