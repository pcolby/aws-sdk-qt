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

#include "getjourneyexecutionactivitymetricsrequest.h"
#include "getjourneyexecutionactivitymetricsrequest_p.h"
#include "getjourneyexecutionactivitymetricsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionActivityMetricsRequest
 * \brief The GetJourneyExecutionActivityMetricsRequest class provides an interface for Pinpoint GetJourneyExecutionActivityMetrics requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyExecutionActivityMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetJourneyExecutionActivityMetricsRequest::GetJourneyExecutionActivityMetricsRequest(const GetJourneyExecutionActivityMetricsRequest &other)
    : PinpointRequest(new GetJourneyExecutionActivityMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJourneyExecutionActivityMetricsRequest object.
 */
GetJourneyExecutionActivityMetricsRequest::GetJourneyExecutionActivityMetricsRequest()
    : PinpointRequest(new GetJourneyExecutionActivityMetricsRequestPrivate(PinpointRequest::GetJourneyExecutionActivityMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetJourneyExecutionActivityMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJourneyExecutionActivityMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJourneyExecutionActivityMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetJourneyExecutionActivityMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionActivityMetricsRequestPrivate
 * \brief The GetJourneyExecutionActivityMetricsRequestPrivate class provides private implementation for GetJourneyExecutionActivityMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyExecutionActivityMetricsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetJourneyExecutionActivityMetricsRequestPrivate::GetJourneyExecutionActivityMetricsRequestPrivate(
    const PinpointRequest::Action action, GetJourneyExecutionActivityMetricsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJourneyExecutionActivityMetricsRequest
 * class' copy constructor.
 */
GetJourneyExecutionActivityMetricsRequestPrivate::GetJourneyExecutionActivityMetricsRequestPrivate(
    const GetJourneyExecutionActivityMetricsRequestPrivate &other, GetJourneyExecutionActivityMetricsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
