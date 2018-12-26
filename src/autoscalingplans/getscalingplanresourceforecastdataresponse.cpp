/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Use AWS Auto Scaling to quickly discover all the scalable AWS resources for your application and configure dynamic
 *  scaling and predictive scaling for your resources using scaling plans. Use this service in conjunction with the Amazon
 *  EC2 Auto Scaling, Application Auto Scaling, Amazon CloudWatch, and AWS CloudFormation services.
 * 
 *  </p
 * 
 *  Currently, predictive scaling is only available for Amazon EC2 Auto Scaling
 * 
 *  groups>
 * 
 *  For more information about AWS Auto Scaling, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/plans/userguide/what-is-aws-auto-scaling.html">AWS Auto Scaling User
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
