// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describealertrequest.h"
#include "describealertrequest_p.h"
#include "describealertresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAlertRequest
 * \brief The DescribeAlertRequest class provides an interface for LookoutMetrics DescribeAlert requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAlert
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAlertRequest::DescribeAlertRequest(const DescribeAlertRequest &other)
    : LookoutMetricsRequest(new DescribeAlertRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAlertRequest object.
 */
DescribeAlertRequest::DescribeAlertRequest()
    : LookoutMetricsRequest(new DescribeAlertRequestPrivate(LookoutMetricsRequest::DescribeAlertAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAlertRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAlertResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAlertRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAlertResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAlertRequestPrivate
 * \brief The DescribeAlertRequestPrivate class provides private implementation for DescribeAlertRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAlertRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DescribeAlertRequestPrivate::DescribeAlertRequestPrivate(
    const LookoutMetricsRequest::Action action, DescribeAlertRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAlertRequest
 * class' copy constructor.
 */
DescribeAlertRequestPrivate::DescribeAlertRequestPrivate(
    const DescribeAlertRequestPrivate &other, DescribeAlertRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
