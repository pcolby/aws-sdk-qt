// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivateanomalydetectorrequest.h"
#include "deactivateanomalydetectorrequest_p.h"
#include "deactivateanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeactivateAnomalyDetectorRequest
 * \brief The DeactivateAnomalyDetectorRequest class provides an interface for LookoutMetrics DeactivateAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deactivateAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateAnomalyDetectorRequest::DeactivateAnomalyDetectorRequest(const DeactivateAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new DeactivateAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateAnomalyDetectorRequest object.
 */
DeactivateAnomalyDetectorRequest::DeactivateAnomalyDetectorRequest()
    : LookoutMetricsRequest(new DeactivateAnomalyDetectorRequestPrivate(LookoutMetricsRequest::DeactivateAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DeactivateAnomalyDetectorRequestPrivate
 * \brief The DeactivateAnomalyDetectorRequestPrivate class provides private implementation for DeactivateAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeactivateAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DeactivateAnomalyDetectorRequestPrivate::DeactivateAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, DeactivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateAnomalyDetectorRequest
 * class' copy constructor.
 */
DeactivateAnomalyDetectorRequestPrivate::DeactivateAnomalyDetectorRequestPrivate(
    const DeactivateAnomalyDetectorRequestPrivate &other, DeactivateAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
