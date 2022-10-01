// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "backtestanomalydetectorrequest.h"
#include "backtestanomalydetectorrequest_p.h"
#include "backtestanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::BackTestAnomalyDetectorRequest
 * \brief The BackTestAnomalyDetectorRequest class provides an interface for LookoutMetrics BackTestAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::backTestAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
BackTestAnomalyDetectorRequest::BackTestAnomalyDetectorRequest(const BackTestAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new BackTestAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BackTestAnomalyDetectorRequest object.
 */
BackTestAnomalyDetectorRequest::BackTestAnomalyDetectorRequest()
    : LookoutMetricsRequest(new BackTestAnomalyDetectorRequestPrivate(LookoutMetricsRequest::BackTestAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool BackTestAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BackTestAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BackTestAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new BackTestAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::BackTestAnomalyDetectorRequestPrivate
 * \brief The BackTestAnomalyDetectorRequestPrivate class provides private implementation for BackTestAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a BackTestAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
BackTestAnomalyDetectorRequestPrivate::BackTestAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, BackTestAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BackTestAnomalyDetectorRequest
 * class' copy constructor.
 */
BackTestAnomalyDetectorRequestPrivate::BackTestAnomalyDetectorRequestPrivate(
    const BackTestAnomalyDetectorRequestPrivate &other, BackTestAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
