// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatealertrequest.h"
#include "updatealertrequest_p.h"
#include "updatealertresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::UpdateAlertRequest
 * \brief The UpdateAlertRequest class provides an interface for LookoutMetrics UpdateAlert requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::updateAlert
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAlertRequest::UpdateAlertRequest(const UpdateAlertRequest &other)
    : LookoutMetricsRequest(new UpdateAlertRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAlertRequest object.
 */
UpdateAlertRequest::UpdateAlertRequest()
    : LookoutMetricsRequest(new UpdateAlertRequestPrivate(LookoutMetricsRequest::UpdateAlertAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAlertRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAlertResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAlertRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAlertResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::UpdateAlertRequestPrivate
 * \brief The UpdateAlertRequestPrivate class provides private implementation for UpdateAlertRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a UpdateAlertRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
UpdateAlertRequestPrivate::UpdateAlertRequestPrivate(
    const LookoutMetricsRequest::Action action, UpdateAlertRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAlertRequest
 * class' copy constructor.
 */
UpdateAlertRequestPrivate::UpdateAlertRequestPrivate(
    const UpdateAlertRequestPrivate &other, UpdateAlertRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
