/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
