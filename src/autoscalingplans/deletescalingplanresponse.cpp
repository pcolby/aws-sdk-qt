// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletescalingplanresponse.h"
#include "deletescalingplanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanResponse
 * \brief The DeleteScalingPlanResponse class provides an interace for AutoScalingPlans DeleteScalingPlan responses.
 *
 * \inmodule QtAwsAutoScalingPlans
 *
 *  <fullname>AWS Auto Scaling</fullname>
 * 
 *  Use AWS Auto Scaling to create scaling plans for your applications to automatically scale your scalable AWS resources.
 * 
 *  </p
 * 
 *  <b>API Summary</b>
 * 
 *  </p
 * 
 *  You can use the AWS Auto Scaling service API to accomplish the following
 * 
 *  tasks> <ul> <li>
 * 
 *  Create and manage scaling
 * 
 *  plan> </li> <li>
 * 
 *  Define target tracking scaling policies to dynamically scale your resources based on
 * 
 *  utilizatio> </li> <li>
 * 
 *  Scale Amazon EC2 Auto Scaling groups using predictive scaling and dynamic scaling to scale your Amazon EC2 capacity
 * 
 *  faste> </li> <li>
 * 
 *  Set minimum and maximum capacity
 * 
 *  limit> </li> <li>
 * 
 *  Retrieve information on existing scaling
 * 
 *  plan> </li> <li>
 * 
 *  Access current forecast data and historical forecast data for up to 56 days
 * 
 *  previou> </li> </ul>
 * 
 *  To learn more about AWS Auto Scaling, including information about granting IAM users required permissions for AWS Auto
 *  Scaling actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
 *  Guide</a>.
 *
 * \sa AutoScalingPlansClient::deleteScalingPlan
 */

/*!
 * Constructs a DeleteScalingPlanResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const DeleteScalingPlanRequest * DeleteScalingPlanResponse::request() const
{
    Q_D(const DeleteScalingPlanResponse);
    return static_cast<const DeleteScalingPlanRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScalingPlans DeleteScalingPlan \a response.
 */
void DeleteScalingPlanResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteScalingPlanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScalingPlans::DeleteScalingPlanResponsePrivate
 * \brief The DeleteScalingPlanResponsePrivate class provides private implementation for DeleteScalingPlanResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a DeleteScalingPlanResponsePrivate object with public implementation \a q.
 */
DeleteScalingPlanResponsePrivate::DeleteScalingPlanResponsePrivate(
    DeleteScalingPlanResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * Parses a AutoScalingPlans DeleteScalingPlan response element from \a xml.
 */
void DeleteScalingPlanResponsePrivate::parseDeleteScalingPlanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteScalingPlanResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
