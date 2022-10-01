// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "activateanomalydetectorrequest.h"
#include "activateanomalydetectorrequest_p.h"
#include "activateanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorRequest
 * \brief The ActivateAnomalyDetectorRequest class provides an interface for LookoutMetrics ActivateAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::activateAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
ActivateAnomalyDetectorRequest::ActivateAnomalyDetectorRequest(const ActivateAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new ActivateAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivateAnomalyDetectorRequest object.
 */
ActivateAnomalyDetectorRequest::ActivateAnomalyDetectorRequest()
    : LookoutMetricsRequest(new ActivateAnomalyDetectorRequestPrivate(LookoutMetricsRequest::ActivateAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool ActivateAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivateAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivateAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new ActivateAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::ActivateAnomalyDetectorRequestPrivate
 * \brief The ActivateAnomalyDetectorRequestPrivate class provides private implementation for ActivateAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ActivateAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
ActivateAnomalyDetectorRequestPrivate::ActivateAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, ActivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivateAnomalyDetectorRequest
 * class' copy constructor.
 */
ActivateAnomalyDetectorRequestPrivate::ActivateAnomalyDetectorRequestPrivate(
    const ActivateAnomalyDetectorRequestPrivate &other, ActivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
