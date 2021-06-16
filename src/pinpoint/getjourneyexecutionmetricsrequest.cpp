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

#include "getjourneyexecutionmetricsrequest.h"
#include "getjourneyexecutionmetricsrequest_p.h"
#include "getjourneyexecutionmetricsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionMetricsRequest
 * \brief The GetJourneyExecutionMetricsRequest class provides an interface for Pinpoint GetJourneyExecutionMetrics requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getJourneyExecutionMetrics
 */

/*!
 * Constructs a copy of \a other.
 */
GetJourneyExecutionMetricsRequest::GetJourneyExecutionMetricsRequest(const GetJourneyExecutionMetricsRequest &other)
    : PinpointRequest(new GetJourneyExecutionMetricsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJourneyExecutionMetricsRequest object.
 */
GetJourneyExecutionMetricsRequest::GetJourneyExecutionMetricsRequest()
    : PinpointRequest(new GetJourneyExecutionMetricsRequestPrivate(PinpointRequest::GetJourneyExecutionMetricsAction, this))
{

}

/*!
 * \reimp
 */
bool GetJourneyExecutionMetricsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJourneyExecutionMetricsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJourneyExecutionMetricsRequest::response(QNetworkReply * const reply) const
{
    return new GetJourneyExecutionMetricsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetJourneyExecutionMetricsRequestPrivate
 * \brief The GetJourneyExecutionMetricsRequestPrivate class provides private implementation for GetJourneyExecutionMetricsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetJourneyExecutionMetricsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetJourneyExecutionMetricsRequestPrivate::GetJourneyExecutionMetricsRequestPrivate(
    const PinpointRequest::Action action, GetJourneyExecutionMetricsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJourneyExecutionMetricsRequest
 * class' copy constructor.
 */
GetJourneyExecutionMetricsRequestPrivate::GetJourneyExecutionMetricsRequestPrivate(
    const GetJourneyExecutionMetricsRequestPrivate &other, GetJourneyExecutionMetricsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
