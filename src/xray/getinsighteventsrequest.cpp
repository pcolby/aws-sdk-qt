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
 *  AWS X-Ray provides APIs for managing debug traces and retrieving service maps and other data created by processing those
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
