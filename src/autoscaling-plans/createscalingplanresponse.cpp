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

#include "createscalingplanresponse.h"
#include "createscalingplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScalingPlans {

/**
 * @class  CreateScalingPlanResponse
 *
 * @brief  Handles AutoScalingPlans CreateScalingPlan responses.
 *
 * @see    AutoScalingPlansClient::createScalingPlan
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateScalingPlanResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new CreateScalingPlanResponsePrivate(this), parent)
{
    setRequest(new CreateScalingPlanRequest(request));
    setReply(reply);
}

const CreateScalingPlanRequest * CreateScalingPlanResponse::request() const
{
    Q_D(const CreateScalingPlanResponse);
    return static_cast<const CreateScalingPlanRequest *>(d->request);
}

/**
 * @brief  Parse a AutoScalingPlans CreateScalingPlan response.
 *
 * @param  response  Response to parse.
 */
void CreateScalingPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateScalingPlanResponsePrivate
 *
 * @brief  Private implementation for CreateScalingPlanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateScalingPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateScalingPlanResponse instance.
 */
CreateScalingPlanResponsePrivate::CreateScalingPlanResponsePrivate(
    CreateScalingPlanQueueResponse * const q) : CreateScalingPlanPrivate(q)
{

}

/**
 * @brief  Parse an AutoScalingPlans CreateScalingPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateScalingPlanResponsePrivate::CreateScalingPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateScalingPlanResponse"));
    /// @todo
}

} // namespace AutoScalingPlans
} // namespace AWS
