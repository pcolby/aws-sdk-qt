// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemetricsetrequest.h"
#include "updatemetricsetrequest_p.h"
#include "updatemetricsetresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetRequest
 * \brief The UpdateMetricSetRequest class provides an interface for LookoutMetrics UpdateMetricSet requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateMetricSet
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMetricSetRequest::UpdateMetricSetRequest(const UpdateMetricSetRequest &other)
    : LookoutMetricsRequest(new UpdateMetricSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMetricSetRequest object.
 */
UpdateMetricSetRequest::UpdateMetricSetRequest()
    : LookoutMetricsRequest(new UpdateMetricSetRequestPrivate(LookoutMetricsRequest::UpdateMetricSetAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMetricSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMetricSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMetricSetRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMetricSetResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::UpdateMetricSetRequestPrivate
 * \brief The UpdateMetricSetRequestPrivate class provides private implementation for UpdateMetricSetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateMetricSetRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
UpdateMetricSetRequestPrivate::UpdateMetricSetRequestPrivate(
    const LookoutMetricsRequest::Action action, UpdateMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMetricSetRequest
 * class' copy constructor.
 */
UpdateMetricSetRequestPrivate::UpdateMetricSetRequestPrivate(
    const UpdateMetricSetRequestPrivate &other, UpdateMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
