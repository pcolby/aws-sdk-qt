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
