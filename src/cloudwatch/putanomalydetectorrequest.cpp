// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putanomalydetectorrequest.h"
#include "putanomalydetectorrequest_p.h"
#include "putanomalydetectorresponse.h"
#include "cloudwatchrequest_p.h"

namespace QtAws {
namespace CloudWatch {

/*!
 * \class QtAws::CloudWatch::PutAnomalyDetectorRequest
 * \brief The PutAnomalyDetectorRequest class provides an interface for CloudWatch PutAnomalyDetector requests.
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
 * Constructs a copy of \a other.
 */
PutAnomalyDetectorRequest::PutAnomalyDetectorRequest(const PutAnomalyDetectorRequest &other)
    : CloudWatchRequest(new PutAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutAnomalyDetectorRequest object.
 */
PutAnomalyDetectorRequest::PutAnomalyDetectorRequest()
    : CloudWatchRequest(new PutAnomalyDetectorRequestPrivate(CloudWatchRequest::PutAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool PutAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new PutAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::CloudWatch::PutAnomalyDetectorRequestPrivate
 * \brief The PutAnomalyDetectorRequestPrivate class provides private implementation for PutAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsCloudWatch
 */

/*!
 * Constructs a PutAnomalyDetectorRequestPrivate object for CloudWatch \a action,
 * with public implementation \a q.
 */
PutAnomalyDetectorRequestPrivate::PutAnomalyDetectorRequestPrivate(
    const CloudWatchRequest::Action action, PutAnomalyDetectorRequest * const q)
    : CloudWatchRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutAnomalyDetectorRequest
 * class' copy constructor.
 */
PutAnomalyDetectorRequestPrivate::PutAnomalyDetectorRequestPrivate(
    const PutAnomalyDetectorRequestPrivate &other, PutAnomalyDetectorRequest * const q)
    : CloudWatchRequestPrivate(other, q)
{

}

} // namespace CloudWatch
} // namespace QtAws
