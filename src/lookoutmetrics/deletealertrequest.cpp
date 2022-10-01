// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
