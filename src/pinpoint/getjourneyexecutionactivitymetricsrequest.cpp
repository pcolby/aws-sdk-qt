// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
