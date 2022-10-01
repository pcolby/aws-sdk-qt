// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getanomalygrouprequest.h"
#include "getanomalygrouprequest_p.h"
#include "getanomalygroupresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetAnomalyGroupRequest
 * \brief The GetAnomalyGroupRequest class provides an interface for LookoutMetrics GetAnomalyGroup requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getAnomalyGroup
 */

/*!
 * Constructs a copy of \a other.
 */
GetAnomalyGroupRequest::GetAnomalyGroupRequest(const GetAnomalyGroupRequest &other)
    : LookoutMetricsRequest(new GetAnomalyGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAnomalyGroupRequest object.
 */
GetAnomalyGroupRequest::GetAnomalyGroupRequest()
    : LookoutMetricsRequest(new GetAnomalyGroupRequestPrivate(LookoutMetricsRequest::GetAnomalyGroupAction, this))
{

}

/*!
 * \reimp
 */
bool GetAnomalyGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAnomalyGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAnomalyGroupRequest::response(QNetworkReply * const reply) const
{
    return new GetAnomalyGroupResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::GetAnomalyGroupRequestPrivate
 * \brief The GetAnomalyGroupRequestPrivate class provides private implementation for GetAnomalyGroupRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetAnomalyGroupRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
GetAnomalyGroupRequestPrivate::GetAnomalyGroupRequestPrivate(
    const LookoutMetricsRequest::Action action, GetAnomalyGroupRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAnomalyGroupRequest
 * class' copy constructor.
 */
GetAnomalyGroupRequestPrivate::GetAnomalyGroupRequestPrivate(
    const GetAnomalyGroupRequestPrivate &other, GetAnomalyGroupRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
