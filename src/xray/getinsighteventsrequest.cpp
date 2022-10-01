// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getinsighteventsrequest.h"
#include "getinsighteventsrequest_p.h"
#include "getinsighteventsresponse.h"
#include "xrayrequest_p.h"

namespace QtAws {
namespace XRay {

/*!
 * \class QtAws::XRay::GetInsightEventsRequest
 * \brief The GetInsightEventsRequest class provides an interface for XRay GetInsightEvents requests.
 *
 * \inmodule QtAwsXRay
 *
 *  Amazon Web Services X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by
 *  processing those
 *
 * \sa XRayClient::getInsightEvents
 */

/*!
 * Constructs a copy of \a other.
 */
GetInsightEventsRequest::GetInsightEventsRequest(const GetInsightEventsRequest &other)
    : XRayRequest(new GetInsightEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInsightEventsRequest object.
 */
GetInsightEventsRequest::GetInsightEventsRequest()
    : XRayRequest(new GetInsightEventsRequestPrivate(XRayRequest::GetInsightEventsAction, this))
{

}

/*!
 * \reimp
 */
bool GetInsightEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInsightEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInsightEventsRequest::response(QNetworkReply * const reply) const
{
    return new GetInsightEventsResponse(*this, reply);
}

/*!
 * \class QtAws::XRay::GetInsightEventsRequestPrivate
 * \brief The GetInsightEventsRequestPrivate class provides private implementation for GetInsightEventsRequest.
 * \internal
 *
 * \inmodule QtAwsXRay
 */

/*!
 * Constructs a GetInsightEventsRequestPrivate object for XRay \a action,
 * with public implementation \a q.
 */
GetInsightEventsRequestPrivate::GetInsightEventsRequestPrivate(
    const XRayRequest::Action action, GetInsightEventsRequest * const q)
    : XRayRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInsightEventsRequest
 * class' copy constructor.
 */
GetInsightEventsRequestPrivate::GetInsightEventsRequestPrivate(
    const GetInsightEventsRequestPrivate &other, GetInsightEventsRequest * const q)
    : XRayRequestPrivate(other, q)
{

}

} // namespace XRay
} // namespace QtAws
