// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
