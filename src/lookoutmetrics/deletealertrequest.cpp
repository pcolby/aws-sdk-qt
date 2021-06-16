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

#include "deletealertrequest.h"
#include "deletealertrequest_p.h"
#include "deletealertresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAlertRequest
 * \brief The DeleteAlertRequest class provides an interface for LookoutMetrics DeleteAlert requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAlert
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAlertRequest::DeleteAlertRequest(const DeleteAlertRequest &other)
    : LookoutMetricsRequest(new DeleteAlertRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAlertRequest object.
 */
DeleteAlertRequest::DeleteAlertRequest()
    : LookoutMetricsRequest(new DeleteAlertRequestPrivate(LookoutMetricsRequest::DeleteAlertAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAlertRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAlertResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAlertRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAlertResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAlertRequestPrivate
 * \brief The DeleteAlertRequestPrivate class provides private implementation for DeleteAlertRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAlertRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DeleteAlertRequestPrivate::DeleteAlertRequestPrivate(
    const LookoutMetricsRequest::Action action, DeleteAlertRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAlertRequest
 * class' copy constructor.
 */
DeleteAlertRequestPrivate::DeleteAlertRequestPrivate(
    const DeleteAlertRequestPrivate &other, DeleteAlertRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
