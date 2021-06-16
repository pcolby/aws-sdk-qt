/*
    Copyright 2013-2021 Paul Colby

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

#include "getpredictivescalingforecastresponse.h"
#include "getpredictivescalingforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::GetPredictiveScalingForecastResponse
 * \brief The GetPredictiveScalingForecastResponse class provides an interace for AutoScaling GetPredictiveScalingForecast responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
 *
 * \sa AutoScalingClient::getPredictiveScalingForecast
 */

/*!
 * Constructs a GetPredictiveScalingForecastResponse object for \a reply to \a request, with parent \a parent.
 */
GetPredictiveScalingForecastResponse::GetPredictiveScalingForecastResponse(
        const GetPredictiveScalingForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new GetPredictiveScalingForecastResponsePrivate(this), parent)
{
    setRequest(new GetPredictiveScalingForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetPredictiveScalingForecastRequest * GetPredictiveScalingForecastResponse::request() const
{
    Q_D(const GetPredictiveScalingForecastResponse);
    return static_cast<const GetPredictiveScalingForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling GetPredictiveScalingForecast \a response.
 */
void GetPredictiveScalingForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetPredictiveScalingForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::GetPredictiveScalingForecastResponsePrivate
 * \brief The GetPredictiveScalingForecastResponsePrivate class provides private implementation for GetPredictiveScalingForecastResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a GetPredictiveScalingForecastResponsePrivate object with public implementation \a q.
 */
GetPredictiveScalingForecastResponsePrivate::GetPredictiveScalingForecastResponsePrivate(
    GetPredictiveScalingForecastResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling GetPredictiveScalingForecast response element from \a xml.
 */
void GetPredictiveScalingForecastResponsePrivate::parseGetPredictiveScalingForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPredictiveScalingForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AutoScaling
} // namespace QtAws
