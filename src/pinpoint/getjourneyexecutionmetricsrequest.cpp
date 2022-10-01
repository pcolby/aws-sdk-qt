// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
