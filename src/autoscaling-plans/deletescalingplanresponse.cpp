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

#include "deletescalingplanresponse.h"
#include "deletescalingplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanResponse
 *
 * \brief The DeleteScalingPlanResponse class provides an interace for AutoScalingPlans DeleteScalingPlan responses.
 *
 * \ingroup AutoScalingPlans
 *
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling for your scalable
 * 
 *  resources>
 * 
 *  To get started, create a scaling plan with a set of instructions used to configure dynamic scaling for the scalable
 *  resources in your application. AWS Auto Scaling creates target tracking scaling policies for the scalable resources in
 *  your scaling plan. Target tracking scaling policies adjust the capacity of your scalable resource as required to
 *  maintain resource utilization at the target value that you
 *
 * \sa AutoScalingPlansClient::deleteScalingPlan
 */

/*!
 * @brief  Constructs a new DeleteScalingPlanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteScalingPlanResponse::DeleteScalingPlanResponse(
        const DeleteScalingPlanRequest &request,
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

/*!
 * @brief  Parse a AutoScalingPlans DeleteScalingPlan response.
 *
 * @param  response  Response to parse.
 */
void DeleteScalingPlanResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteScalingPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DeleteScalingPlanResponsePrivate
 *
 * \brief Private implementation for DeleteScalingPlanResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteScalingPlanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteScalingPlanResponse instance.
 */
DeleteScalingPlanResponsePrivate::DeleteScalingPlanResponsePrivate(
    DeleteScalingPlanResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScalingPlans DeleteScalingPlanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteScalingPlanResponsePrivate::parseDeleteScalingPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScalingPlanResponse"));
    /// @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
