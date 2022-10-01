// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmetricstreamresponse.h"
#include "getmetricstreamresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::GetMetricStreamResponse
 * \brief The GetMetricStreamResponse class provides an interace for CloudWatch GetMetricStream responses.
 *
 * \inmodule QtAwsCloudWatch
 *
 *  Amazon CloudWatch monitors your Amazon Web Services (Amazon Web Services) resources and the applications you run on
 *  Amazon Web Services in real time. You can use CloudWatch to collect and track metrics, which are the variables you want
 *  to measure for your resources and
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
 *  In addition to monitoring the built-in metrics that come with Amazon Web Services, you can monitor your own custom
 *  metrics. With CloudWatch, you gain system-wide visibility into resource utilization, application performance, and
 *  operational
 *
 * \sa CloudWatchClient::getMetricStream
 */

/*!
 * Constructs a GetMetricStreamResponse object for \a reply to \a request, with parent \a parent.
 */
GetMetricStreamResponse::GetMetricStreamResponse(
        const GetMetricStreamRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new GetMetricStreamResponsePrivate(this), parent)
{
    setRequest(new GetMetricStreamRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetMetricStreamRequest * GetMetricStreamResponse::request() const
{
    Q_D(const GetMetricStreamResponse);
    return static_cast<const GetMetricStreamRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch GetMetricStream \a response.
 */
void GetMetricStreamResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetMetricStreamResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::GetMetricStreamResponsePrivate
 * \brief The GetMetricStreamResponsePrivate class provides private implementation for GetMetricStreamResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a GetMetricStreamResponsePrivate object with public implementation \a q.
 */
GetMetricStreamResponsePrivate::GetMetricStreamResponsePrivate(
    GetMetricStreamResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch GetMetricStream response element from \a xml.
 */
void GetMetricStreamResponsePrivate::parseGetMetricStreamResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetMetricStreamResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
