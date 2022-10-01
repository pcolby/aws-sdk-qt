// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanomalydetectorresponse.h"
#include "deleteanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::DeleteAnomalyDetectorResponse
 * \brief The DeleteAnomalyDetectorResponse class provides an interace for CloudWatch DeleteAnomalyDetector responses.
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
 * \sa CloudWatchClient::deleteAnomalyDetector
 */

/*!
 * Constructs a DeleteAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteAnomalyDetectorResponse::DeleteAnomalyDetectorResponse(
        const DeleteAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DeleteAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new DeleteAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteAnomalyDetectorRequest * DeleteAnomalyDetectorResponse::request() const
{
    Q_D(const DeleteAnomalyDetectorResponse);
    return static_cast<const DeleteAnomalyDetectorRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful CloudWatch DeleteAnomalyDetector \a response.
 */
void DeleteAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::CloudWatch::DeleteAnomalyDetectorResponsePrivate
 * \brief The DeleteAnomalyDetectorResponsePrivate class provides private implementation for DeleteAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a DeleteAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
DeleteAnomalyDetectorResponsePrivate::DeleteAnomalyDetectorResponsePrivate(
    DeleteAnomalyDetectorResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/*!
 * Parses a CloudWatch DeleteAnomalyDetector response element from \a xml.
 */
void DeleteAnomalyDetectorResponsePrivate::parseDeleteAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace CloudWatch
} // namespace QtAws
