// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startmetricstreamsresponse.h"
#include "startmetricstreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::StartMetricStreamsResponse
 * \brief The StartMetricStreamsResponse class provides an interace for CloudWatch StartMetricStreams responses.
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
 * \sa CloudWatchClient::startMetricStreams
 */

/*!
 * Constructs a StartMetricStreamsResponse object for \a reply to \a request, with parent \a parent.
 */
StartMetricStreamsResponse::StartMetricStreamsResponse(
        const StartMetricStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new StartMetricStreamsResponsePrivate(this), parent)
{
    setRequest(new StartMetricStreamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const StartMetricStreamsRequest * StartMetricStreamsResponse::request() const
{
    Q_D(const StartMetricStreamsResponse);
    return static_cast<const StartMetricStreamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch StartMetricStreams \a response.
 */
void StartMetricStreamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(StartMetricStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::StartMetricStreamsResponsePrivate
 * \brief The StartMetricStreamsResponsePrivate class provides private implementation for StartMetricStreamsResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a StartMetricStreamsResponsePrivate object with public implementation \a q.
 */
StartMetricStreamsResponsePrivate::StartMetricStreamsResponsePrivate(
    StartMetricStreamsResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch StartMetricStreams response element from \a xml.
 */
void StartMetricStreamsResponsePrivate::parseStartMetricStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartMetricStreamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
