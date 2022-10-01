// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getscalingplanresourceforecastdataresponse.h"
#include "getscalingplanresourceforecastdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/*!
 * \class QtAws::AutoScalingPlans::GetScalingPlanResourceForecastDataResponse
 * \brief The GetScalingPlanResourceForecastDataResponse class provides an interace for AutoScalingPlans GetScalingPlanResourceForecastData responses.
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
 * \sa AutoScalingPlansClient::getScalingPlanResourceForecastData
 */

/*!
 * Constructs a GetScalingPlanResourceForecastDataResponse object for \a reply to \a request, with parent \a parent.
 */
GetScalingPlanResourceForecastDataResponse::GetScalingPlanResourceForecastDataResponse(
        const GetScalingPlanResourceForecastDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingPlansResponse(new GetScalingPlanResourceForecastDataResponsePrivate(this), parent)
{
    setRequest(new GetScalingPlanResourceForecastDataRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetScalingPlanResourceForecastDataRequest * GetScalingPlanResourceForecastDataResponse::request() const
{
    Q_D(const GetScalingPlanResourceForecastDataResponse);
    return static_cast<const GetScalingPlanResourceForecastDataRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScalingPlans GetScalingPlanResourceForecastData \a response.
 */
void GetScalingPlanResourceForecastDataResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetScalingPlanResourceForecastDataResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScalingPlans::GetScalingPlanResourceForecastDataResponsePrivate
 * \brief The GetScalingPlanResourceForecastDataResponsePrivate class provides private implementation for GetScalingPlanResourceForecastDataResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScalingPlans
 */

/*!
 * Constructs a GetScalingPlanResourceForecastDataResponsePrivate object with public implementation \a q.
 */
GetScalingPlanResourceForecastDataResponsePrivate::GetScalingPlanResourceForecastDataResponsePrivate(
    GetScalingPlanResourceForecastDataResponse * const q) : AutoScalingPlansResponsePrivate(q)
{

}

/*!
 * Parses a AutoScalingPlans GetScalingPlanResourceForecastData response element from \a xml.
 */
void GetScalingPlanResourceForecastDataResponsePrivate::parseGetScalingPlanResourceForecastDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetScalingPlanResourceForecastDataResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScalingPlans
} // namespace QtAws
