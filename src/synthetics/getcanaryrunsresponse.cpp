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

#include "getcanaryrunsresponse.h"
#include "getcanaryrunsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Synthetics {

/*!
 * \class QtAws::Synthetics::GetCanaryRunsResponse
 * \brief The GetCanaryRunsResponse class provides an interace for Synthetics GetCanaryRuns responses.
 *
 * \inmodule QtAwsSynthetics
 *
 *  <fullname>Amazon CloudWatch Synthetics</fullname>
 * 
 *  You can use Amazon CloudWatch Synthetics to continually monitor your services. You can create and manage
 *  <i>canaries</i>, which are modular, lightweight scripts that monitor your endpoints and APIs from the outside-in. You
 *  can set up your canaries to run 24 hours a day, once per minute. The canaries help you check the availability and
 *  latency of your web services and troubleshoot anomalies by investigating load time data, screenshots of the UI, logs,
 *  and metrics. The canaries seamlessly integrate with CloudWatch ServiceLens to help you trace the causes of impacted
 *  nodes in your applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/ServiceLens.html">Using ServiceLens to Monitor the
 *  Health of Your Applications</a> in the <i>Amazon CloudWatch User
 * 
 *  Guide</i>>
 * 
 *  Before you create and manage canaries, be aware of the security considerations. For more information, see <a
 *  href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/servicelens_canaries_security.html">Security
 *  Considerations for Synthetics
 *
 * \sa SyntheticsClient::getCanaryRuns
 */

/*!
 * Constructs a GetCanaryRunsResponse object for \a reply to \a request, with parent \a parent.
 */
GetCanaryRunsResponse::GetCanaryRunsResponse(
        const GetCanaryRunsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SyntheticsResponse(new GetCanaryRunsResponsePrivate(this), parent)
{
    setRequest(new GetCanaryRunsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetCanaryRunsRequest * GetCanaryRunsResponse::request() const
{
    Q_D(const GetCanaryRunsResponse);
    return static_cast<const GetCanaryRunsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Synthetics GetCanaryRuns \a response.
 */
void GetCanaryRunsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetCanaryRunsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Synthetics::GetCanaryRunsResponsePrivate
 * \brief The GetCanaryRunsResponsePrivate class provides private implementation for GetCanaryRunsResponse.
 * \internal
 *
 * \inmodule QtAwsSynthetics
 */

/*!
 * Constructs a GetCanaryRunsResponsePrivate object with public implementation \a q.
 */
GetCanaryRunsResponsePrivate::GetCanaryRunsResponsePrivate(
    GetCanaryRunsResponse * const q) : SyntheticsResponsePrivate(q)
{

}

/*!
 * Parses a Synthetics GetCanaryRuns response element from \a xml.
 */
void GetCanaryRunsResponsePrivate::parseGetCanaryRunsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCanaryRunsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Synthetics
} // namespace QtAws
