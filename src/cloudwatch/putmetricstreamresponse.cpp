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

#include "putmetricstreamresponse.h"
#include "putmetricstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutMetricStreamResponse
 * \brief The PutMetricStreamResponse class provides an interace for CloudWatch PutMetricStream responses.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (AWS) resources and the applications you run on AWS in real time.
 *  You can use CloudWatch to collect and track metrics, which are the variables you want to measure for your resources and
 * 
 *  applications>
 * 
 *  CloudWatch alarms send notifications or automatically change the resources you are monitoring based on rules that you
 *  define. For example, you can monitor the CPU usage and disk reads and writes of your Amazon EC2 instances. Then, use
 *  this data to determine whether you should launch additional instances to handle increased load. You can also use this
 *  data to stop under-used instances to save
 * 
 *  money>
 * 
 *  In addition to monitoring the built-in metrics that come with AWS, you can monitor your own custom metrics. With
 *  CloudWatch, you gain system-wide visibility into resource utilization, application performance, and operational
 *
 * \sa CloudWatchClient::putMetricStream
 */

/*!
 * Constructs a PutMetricStreamResponse object for \a reply to \a request, with parent \a parent.
 */
PutMetricStreamResponse::PutMetricStreamResponse(
        const PutMetricStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new PutMetricStreamResponsePrivate(this), parent)
{
    setRequest(new PutMetricStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutMetricStreamRequest * PutMetricStreamResponse::request() const
{
    Q_D(const PutMetricStreamResponse);
    return static_cast<const PutMetricStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch PutMetricStream \a response.
 */
void PutMetricStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutMetricStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::PutMetricStreamResponsePrivate
 * \brief The PutMetricStreamResponsePrivate class provides private implementation for PutMetricStreamResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutMetricStreamResponsePrivate object with public implementation \a q.
 */
PutMetricStreamResponsePrivate::PutMetricStreamResponsePrivate(
    PutMetricStreamResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch PutMetricStream response element from \a xml.
 */
void PutMetricStreamResponsePrivate::parsePutMetricStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMetricStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
