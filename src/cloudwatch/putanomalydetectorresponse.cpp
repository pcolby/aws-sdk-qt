// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putanomalydetectorresponse.h"
#include "putanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutAnomalyDetectorResponse
 * \brief The PutAnomalyDetectorResponse class provides an interace for CloudWatch PutAnomalyDetector responses.
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
 * \sa CloudWatchClient::putAnomalyDetector
 */

/*!
 * Constructs a PutAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
PutAnomalyDetectorResponse::PutAnomalyDetectorResponse(
        const PutAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new PutAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new PutAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAnomalyDetectorRequest * PutAnomalyDetectorResponse::request() const
{
    Q_D(const PutAnomalyDetectorResponse);
    return static_cast<const PutAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch PutAnomalyDetector \a response.
 */
void PutAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::PutAnomalyDetectorResponsePrivate
 * \brief The PutAnomalyDetectorResponsePrivate class provides private implementation for PutAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
PutAnomalyDetectorResponsePrivate::PutAnomalyDetectorResponsePrivate(
    PutAnomalyDetectorResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch PutAnomalyDetector response element from \a xml.
 */
void PutAnomalyDetectorResponsePrivate::parsePutAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
